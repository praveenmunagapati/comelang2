#include <comelang2.h>

struct sClassNode
{
    string name;
    list<sNode*%>*% nodes;
    
    int sline;
    string sname;
};

sClassNode*% sClassNode*::initialize(sClassNode*% self, string name, list<sNode*%>*% nodes, sInfo* info=info)
{
    self.name = name;
    self.nodes = nodes;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sClassNode*::kind()
{
    return string("sClassNode");
}

bool sClassNode*::compile(sClassNode* self, sInfo* info)
{
    add_come_code(info, s"class \{self.name}\n");
    info->nest++;
    foreach(it, self.nodes) {
        it.compile(info).catch {
            puts("compile error");
            exit(2);
        }
        add_last_code_to_source();
    }
    info->nest--;
    add_come_code(info, s"end\n");
    
    return true;
}

bool sClassNode*::terminated()
{
    return false;
}

int sClassNode*::sline(sClassNode* self, sInfo* info)
{
    return self.sline;
}

string sClassNode*::sname(sClassNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sFunNode
{
    string name;
    list<sNode*%>*% nodes;
    list<tuple2<string,sType*%>*%>*% params;
    
    int sline;
    string sname;
};

sFunNode*% sFunNode*::initialize(sFunNode*% self, string name, list<tuple2<string,sType*%>*%>*% params, list<sNode*%>*% nodes, sInfo* info=info)
{
    self.name = name;
    self.nodes = nodes;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sFunNode*::kind()
{
    return string("sFunNode");
}

bool sFunNode*::compile(sFunNode* self, sInfo* info)
{
    add_come_code(info, s"def \{self.name}\n");
    info->nest++;
    foreach(it, self.nodes) {
        it.compile(info).catch {
            puts("compile error");
            exit(2);
        }
        add_last_code_to_source();
    }
    info->nest--;
    add_come_code(info, s"end\n");
    
    return true;
}

bool sFunNode*::terminated()
{
    return false;
}

int sFunNode*::sline(sFunNode* self, sInfo* info)
{
    return self.sline;
}

string sFunNode*::sname(sFunNode* self, sInfo* info)
{
    return string(self.sname);
}

string parse_word(sInfo* info=info)
{
    var buf = new buffer();
    
    while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9') || (*info->p == '$'))
    {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf();
    
    if(buf.to_string().length() == 0) {
        err_msg(info, "unexpected character(%c). expected word character", *info->p);
        return string("");
    }
    
    return buf.to_string();
}

bool parse_cmp(char* word, sInfo* info=info)
{
    if(strlen(info.p.p) >= strlen(word) && memcmp(info.p.p, word, strlen(word)) == 0)
    {
        char c = *(info->p + strlen(word));
        
        if(c == '\t' || c == ' ' || c == '\0' || c == '\n') {
            return true;
        }
    }
    
    return false;
}

sNode*% parse_class(string name, sInfo* info=info)
{
    expected_next_character('{');
    
    list<sNode*%>*% nodes = new list<sNode*%>();
    while(true) {
        sNode*% node = expression();
        
        if(node == null) {
            err_msg(info, "null node");
            exit(2);
        }
        
        nodes.add(node);
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    }
    
    return new sClassNode(name, nodes) implements sNode;
}

sType*% parse_type(sInfo* info=info)
{
    string type_name = parse_word();
    
    return new sType(type_name);
}

list<tuple2<string,sType*%>*%>*% parse_params(sInfo* info=info)
{
    expected_next_character('(');
    
    list<tuple2<string,sType*%>*%>*% params = new list<tuple2<string,sType*%>*%>();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
        string name = parse_word();
        
        expected_next_character(':');
        
        sType*% type = parse_type();
        
        params.add((name, type));
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf();
        }
        else if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        else if(*info->p == '\0') {
            err_msg(info, "invalid source end");
            exit(2);
        }
    }
    
    return params;
}

sNode*% parse_fun(string name, sInfo* info=info)
{
    list<tuple2<string,sType*%>*%>*% params = parse_params();
    
    list<sNode*%>*% nodes = new list<sNode*%>();
    
    expected_next_character('{');
    
    while(true) {
        sNode*% node = expression();
        
        if(node == null) {
            err_msg(info, "null node");
            exit(2);
        }
        
        nodes.add(node);
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
    }
    
    return new sFunNode(name, params, nodes) implements sNode;
}

void expected_next_character(char c, sInfo* info=info)
{
    if(*info->p != c) {
        if(!info.no_output_err) {
            err_msg(info, "expected next charaster is %c, but %c\n", c, *info->p);
            exit(2);
        }
    }
    
    info->p++;
    skip_spaces_and_lf();
}

sNode*% expression(sInfo* info=info) version 2
{
    if(xisalpha(*info->p)) {
        string buf = parse_word();
        
        if(buf === "class") {
            string name = parse_word();
            
            sNode*% node = parse_class(name);
            
            return node;
        }
        else if(buf === "def") {
            string name = parse_word();
            
            sNode*% node = parse_fun(name);
            
            return node;
        }
    }
    
    return add_sub_expression_node();
}

