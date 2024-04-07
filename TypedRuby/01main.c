#include <comelang2.h>

struct sClass {
    string mName;
};

sClass*% sClass*::initialize(sClass*% self, char* name)
{
    self.mName = string(name);
    
    return self;
}

struct sType;

struct sType
{
    sClass* mClass;
    
    list<sType*%>*% mMultipleTypes;
    
    list<sType*%>*% mGenericsTypes;
};

struct sVar {
    string mName;
    string mCValueName;
    sType*% mType;
};

struct CVALUE {
    string c_value;
    sType*% type;
    sVar* var;
};

struct sModule
{
    string mLastCode;
    buffer*% mSource;
};

struct sInfo
{
    buffer*% source;
    smart_pointer<char>*% p;
    string sname;
    int sline;
    
    list<CVALUE*%>*% stack;
    
    sType*% type;
    map<string, sClass*%>*% classes;
    
    bool no_output_come_code;
    
    int err_num;
    
    sModule*% module;
    bool no_output_err;
};

sModule*% sModule*::initialize(sModule*% self)
{
    self.mLastCode = null;
    self.mSource = new buffer();
    
    return self;
}

sType*% sType*::initialize(sType*% self, char* name, sInfo* info=info)
{
    sClass* klass = info.classes[name];
    
    self.mClass = klass;
    self.mMultipleTypes = new list<sType*%>();
    self.mGenericsTypes = new list<sType*%>();
    
    return self;
}

void add_come_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, msg);
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    
    info.module.mSource.append_str(xsprintf("%s", msg2));
    
    free(msg2);
}

void add_last_code_to_source(sInfo* info=info)
{
    if(info->no_output_come_code) {
        return;
    }
    if(info.module.mLastCode) {
       add_come_code(info, "%s", info.module.mLastCode);
       info.module.mLastCode = null;
    }
}

void add_come_last_code(sInfo* info, const char* msg, ...)
{
    if(info->no_output_come_code) {
        return;
    }
    char* msg2;

    va_list args;
    va_start(args, msg);
    int len = vasprintf(&msg2, msg, args);
    va_end(args);
    
    info.module.mLastCode = xsprintf("%s", msg2);
    
    free(msg2);
}

CVALUE*% get_value_from_stack(int offset=-1, sInfo* info=info)
{
    info.module.mLastCode = null;
    return clone info.stack[offset];
}

void err_msg(sInfo* info, char* msg, ...)
{
    if(!info.no_output_err) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        printf("%s %d: %s\n", info.sname, info.sline, msg2);
        info.err_num++;
        stackframe();

        free(msg2);
    }
}

void skip_spaces_and_lf(sInfo* info=info)
{
    while(*info->p == ' ' || *info->p == '\t' || (*info->p == '\n' && info->sline++)) {
        info->p++;
    }
}

interface sNode {
    bool compile(sInfo* info);
    int sline();
    string sname();
    bool terminated();
    string kind();
};

struct sIntNode
{
    int value;
    int sline;
    string sname;
};

sIntNode*% sIntNode*::initialize(sIntNode*% self, int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sIntNode*::kind()
{
    return string("sIntNode");
}

bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("Integer");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s\n", come_value.c_value);
    
    return true;
}

bool sIntNode*::terminated()
{
    return false;
}

int sIntNode*::sline(sIntNode* self, sInfo* info)
{
    return self.sline;
}

string sIntNode*::sname(sIntNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sAddNode
{
    sNode*% left_node;
    sNode*% right_node;
    
    int sline;
    string sname;
};

sAddNode*% sAddNode*::initialize(sAddNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info)
{
    self.left_node = left_node;
    self.right_node = right_node;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sAddNode*::kind()
{
    return string("sAddNode");
}

bool sAddNode*::compile(sAddNode* self, sInfo* info)
{
    sNode*% left_node = self.left_node;
    left_node.compile(info).catch {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% left_value = get_value_from_stack();
    
    sNode*% right_node = self.right_node;
    right_node.compile(info).elif {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% right_value = get_value_from_stack();
    
    CVALUE*% come_value = new CVALUE;
    
    if(left_value.type.mClass.mName !== right_value.type.mClass.mName) {
        err_msg(info, "invalid type +");
        return false;
    }
    
    come_value.c_value = xsprintf("%s+%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s\n", come_value.c_value);
    
    return true;
}

bool sAddNode*::terminated()
{
    return false;
}

int sAddNode*::sline(sAddNode* self, sInfo* info)
{
    return self.sline;
}

string sAddNode*::sname(sAddNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sSubNode
{
    sNode*% left_node;
    sNode*% right_node;
    
    int sline;
    string sname;
};

sSubNode*% sSubNode*::initialize(sSubNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info)
{
    self.left_node = left_node;
    self.right_node = right_node;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sSubNode*::kind()
{
    return string("sSubNode");
}

bool sSubNode*::compile(sSubNode* self, sInfo* info)
{
    sNode*% left_node = self.left_node;
    left_node.compile(info).elif {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% left_value = get_value_from_stack();
    
    sNode*% right_node = self.right_node;
    right_node.compile(info).elif {
        puts("compile error");
        exit(2);
    }
    
    CVALUE*% right_value = get_value_from_stack();
    
    if(left_value.type.mClass.mName !== right_value.type.mClass.mName) {
        err_msg(info, "invalid type +");
        return false;
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%s-%s", left_value.c_value, right_value.c_value);
    come_value.type = clone left_value.type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s\n", come_value.c_value);
    
    return true;
}

bool sSubNode*::terminated()
{
    return false;
}

int sSubNode*::sline(sSubNode* self, sInfo* info)
{
    return self.sline;
}

string sSubNode*::sname(sSubNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sStrNode
{
    string value;
    int sline;
    string sname;
};

sStrNode*% sStrNode*::initialize(sStrNode*% self, string value, int sline, sInfo* info)
{
    self.value = string(value);
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sStrNode*::terminated()
{
    return false;
}


string sStrNode*::kind()
{
    return string("sStrNode");
}

bool sStrNode*::compile(sStrNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("\"%s\"", self.value);
    come_value.type = new sType("String");
    come_value.var = null;
    
    info.stack.push_back(come_value);

    add_come_last_code(info, "%s\n", come_value.c_value);
    
    return true;
}

int sStrNode*::sline(sStrNode* self, sInfo* info)
{
    return self.sline;
}

string sStrNode*::sname(sStrNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% expression_node(sInfo* info=info)
{
    if(xisdigit(*info.p)) {
        int n = 0;
        while(true) {
            if(xisdigit(*info.p)) {
                n = n * 10 + (*info.p - '0');
                info->p++;
            }
            else if(*info->p == '_') {
                info->p++;
            }
            else {
                break;
            }
        }
        
        return new sIntNode(n, info) implements sNode;
    }
    else if(*info->p == '"') 
    {
        info->p++;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p.p;
                int sline = info->sline;
                
                skip_spaces_and_lf();
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p.p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info->p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make string value");
                info->sline = sline2;
                exit(2);
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf();
        
        return new sStrNode(value.to_string(), sline, info) implements sNode;
    }
    
puts("AAA");
    return null;
}

sNode*% add_sub_expression_node(sInfo* info=info)
{
    sNode*% node = expression_node();
    
    while(true) {
        if(*info->p == '+' && ((*info->p+1) != '+' || (*info->p+1) != '=')) {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% right_node = expression_node();
            
            if(node == null) {
                return null;
            }
            if(right_node == null) {
                return null;
            }
            
            return new sAddNode(node, right_node) implements sNode;
        }
        else if(*info->p == '-' && ((*info->p+1) != '-' || (*info->p+1) != '=')) {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% right_node = expression_node();
            
            if(node == null) {
                return null;
            }
            if(right_node == null) {
                return null;
            }
            
            return new sSubNode(node, right_node) implements sNode;
        }
        else {
            break;
        }
    }
    
    return node;
}

sNode*% expression(sInfo* info=info) version 1
{
    return add_sub_expression_node();
}

sNode*%,bool parse(sInfo* info)
{
    sNode*% node = expression();
    
    if(node == null) {
        return ((sNode*%)null, false);
    }
    
    return (node, true);
}

bool output_source(sInfo* info)
{
    string sname = xnoextname(info.sname) + ".rb";
    info.module.mSource.to_string().write(sname);
    
    return true;
}

void init_typed_ruby(sInfo* info)
{
    info.classes.insert(string("Integer"), new sClass("Integer"));
    info.classes.insert(string("String"), new sClass("String"));
}

int main(int argc, char** argv)
{
    string? file_name = nil;
    bool eval = false;
    for(int i=0; i<argc; i++) {
        if(argv[i] === "-e") {
            eval = true;
        }
        else {
            file_name = string(argv[i]);
        }
    }
    
    sInfo info;
    
    info.source = file_name.read().to_buffer();
    info.p = info.source.to_pointer();
    info.sname = clone file_name;
    info.sline = 1;
    info.stack = new list<CVALUE*%>();
    info.type = null;
    info.classes = new map<string,sClass*%>();
    info.no_output_come_code = false;
    info.module = new sModule();
    
    init_typed_ruby(&info);
    
    while(*info.p) {
        skip_spaces_and_lf(&info);
        var node = parse(&info).catch {
            puts("parser error");
            exit(2);
        }
        skip_spaces_and_lf(&info);
        
        node.compile(&info).elif {
            puts("compile error");
            exit(2);
        }
        add_last_code_to_source(&info);
    }
    
    output_source(&info).elif {
        puts("output source error");
        exit(2);
    }
    
    return 0;
}
