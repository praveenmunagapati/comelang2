#include <comelang2.h>

void dec_stack_ptr(int value, sInfo* info=info)
{
    info.stack.delete(-value, -1);
}

struct sClassNode
{
    string name;
    list<sNode*%>*% nodes;
    bool native_;
    
    int sline;
    string sname;
};

sClassNode*% sClassNode*::initialize(sClassNode*% self, string name, list<sNode*%>*% nodes, bool native_, sInfo* info=info)
{
    self.name = name;
    self.nodes = nodes;
    self.native_ = native_;
    
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
    if(!self.native_) {
        add_come_code(info, s"class \{self.name}\n");
    }
    
    sClass*% klass = new sClass(self.name);
    
    info.classes[string(self.name)] = klass;
    
    sClass* current_class = info.current_class;
    info->current_class = klass;
    
    info->nest++;
    foreach(it, self.nodes) {
        it.compile(info).catch {
            puts("compile error");
            exit(2);
        }
        add_last_code_to_source();
    }
    info->nest--;
    if(!self.native_) {
        add_come_code(info, s"end\n");
    }
    
    info->current_class = current_class;
    
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
    
    bool native_;
    
    int sline;
    string sname;
};

sFunNode*% sFunNode*::initialize(sFunNode*% self, string name, list<tuple2<string,sType*%>*%>*% params, list<sNode*%>*% nodes, bool native_=false, sInfo* info=info)
{
    self.name = name;
    self.nodes = nodes;
    self.params = params;
    self.native_ = native_;
    
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
    sMethod*% method = new sMethod(self.name, self.params, self.native_);
    
    if(info.current_class) {
        info.current_class.mMethods[string(self.name)] = method;
    }
    else {
        info.methods[string(self.name)] = method;
    }
    
    if(self.native_) {
    }
    else {
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
    }
    
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

struct sKernelMethodCall
{
    string name;
    list<sNode*%>*% params;
    
    int sline;
    string sname;
};

sKernelMethodCall*% sKernelMethodCall*::initialize(sKernelMethodCall*% self, string name, list<sNode*%>*% params, sInfo* info=info)
{
    self.name = name;
    self.params = params;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sKernelMethodCall*::kind()
{
    return string("sKernelMethodCall");
}

void check_assign_type(sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info)
{
    if(left_type->mClass->mName !== right_type->mClass->mName) {
        err_msg(info, "invalid type");
        puts(s"left type is \{left_type->mClass->mName}");
        puts(s"right type is \{right_type->mClass->mName}");
        exit(2);
    }
}

bool sKernelMethodCall*::compile(sKernelMethodCall* self, sInfo* info)
{
    sClass* kernel_class = info.classes["Kernel"];
    
    if(kernel_class == null) {
        err_msg(info, "require Kernel class");
        return false;
    }
    
    sMethod* method = kernel_class.mMethods[self.name];
    
    if(method == null) {
        err_msg(info, "require Kernel method (%s)", self.name);
        return false;
    }
    
    buffer*% buf = new buffer();
    buf.append_str(s"\{self.name}(");
    int n = 0;
    foreach(it, self.params) {
        it.compile(info).catch {
            puts("compile error");
            exit(2);
        }
        CVALUE*% come_value = get_value_from_stack();
        dec_stack_ptr(1);
        
        sType* left_type = method->mParams[n].v2;
        
        if(left_type == null) {
            err_msg(info, "invalid params number(%s)", self.name);
            exit(2);
        }
        
        check_assign_type(left_type, come_value.type, come_value);
        
        buf.append_str(s"\{come_value.c_value}");
        
        n++;
        
        if(n != self.params.length()) {
            buf.append_str(s",");
        }
    }
    buf.append_str(s")");
    
    add_come_code(info, s"\{buf.to_string()}\n");
    
    return true;
}

bool sKernelMethodCall*::terminated()
{
    return false;
}

int sKernelMethodCall*::sline(sKernelMethodCall* self, sInfo* info)
{
    return self.sline;
}

string sKernelMethodCall*::sname(sKernelMethodCall* self, sInfo* info)
{
    return string(self.sname);
}

struct sClassMethodCall
{
    string name;
    string method_name;
    list<sNode*%>*% params;
    
    int sline;
    string sname;
};

sClassMethodCall*% sClassMethodCall*::initialize(sClassMethodCall*% self, string name, string method_name, list<sNode*%>*% params, sInfo* info=info)
{
    self.name = name;
    self.method_name = method_name;
    self.params = params;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sClassMethodCall*::kind()
{
    return string("sClassMethodCall");
}

bool sClassMethodCall*::compile(sClassMethodCall* self, sInfo* info)
{
    sClass* klass = info.classes[self.name];
    
    if(klass == null) {
        err_msg(info, "require Kernel class");
        return false;
    }
    
    sMethod* method = klass.mMethods[self.method_name];
    sMethod* initialize_method = klass.mMethods["initialize"];
    
    if(self.method_name === "new") {
        if(initialize_method == null) {
            err_msg(info, "require class(%s) initialize method", self.name);
            return false;
        }
    }
    else {
        if(method == null) {
            err_msg(info, "require class(%s) method (%s)", self.name, self.method_name);
            return false;
        }
    }
    
    buffer*% buf = new buffer();
    buf.append_str(s"\{self.name}.\{self.method_name}(");
    int n = 0;
    foreach(it, self.params) {
        it.compile(info).catch {
            puts("compile error");
            exit(2);
        }
        CVALUE*% come_value = get_value_from_stack();
        dec_stack_ptr(1);
        
        sType* left_type;
        if(self.method_name === "new" && initialize_method != null) {
            left_type = initialize_method->mParams[n].v2;
        }
        else {
            left_type = method->mParams[n].v2;
        }
        
        if(left_type == null) {
            err_msg(info, "invalid params number(%s)", self.method_name);
            exit(2);
        }
        
        check_assign_type(left_type, come_value.type, come_value);
        
        buf.append_str(s"\{come_value.c_value}");
        
        n++;
        
        if(n != self.params.length()) {
            buf.append_str(s",");
        }
    }
    buf.append_str(s")");
    
    add_come_code(info, s"\{buf.to_string()}\n");
    
    return true;
}

bool sClassMethodCall*::terminated()
{
    return false;
}

int sClassMethodCall*::sline(sClassMethodCall* self, sInfo* info)
{
    return self.sline;
}

string sClassMethodCall*::sname(sClassMethodCall* self, sInfo* info)
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

sNode*% parse_class(string name, bool native_, sInfo* info=info)
{
    expected_next_character('{');
    
    list<sNode*%>*% nodes = new list<sNode*%>();
    while(true) {
        if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
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
    
    return new sClassNode(name, nodes, native_) implements sNode;
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

list<sNode*%>*% parse_calling_params(sInfo* info=info)
{
    expected_next_character('(');
    
    list<sNode*%>*% params = new list<sNode*%>();
    
    while(true) {
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf();
            break;
        }
        
        sNode*% exp = expression();
        
        if(exp == null) {
            err_msg(info, "require node");
            exit(1);
        }
        
        params.add(exp);
        
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
    bool native_ = false;
    list<tuple2<string,sType*%>*%>*% params = parse_params();
    
    list<sNode*%>*% nodes = new list<sNode*%>();
    
    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf();
        
        native_ = true;
    }
    else {
        expected_next_character('{');
        
        while(true) {
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf();
                break;
            }
            
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
    }
    
    return new sFunNode(name, params, nodes, native_) implements sNode;
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
        
        bool kernel_method = false;
        {
            sClass* kernel_class = info.classes["Kernel"];
            
            if(kernel_class) {
                sMethod* method = kernel_class.mMethods[buf];
                
                if(method) {
                    kernel_method = true;
                }
            }
        }
        
        bool class_method = false;
        {
            sClass* klass = info.classes[buf];
            
            if(klass) {
                if(*info->p == '.') {
                    class_method = true;
                }
            }
        }
        
        if(buf === "native") {
            buf = parse_word();
            
            if(buf === "class") {
                string name = parse_word();
                
                sNode*% node = parse_class(name, true@native_);
                
                return node;
            }
            else {
                return null;
            }
        }
        else if(buf === "class") {
            string name = parse_word();
            
            sNode*% node = parse_class(name, false@native_);
            
            return node;
        }
        else if(buf === "def") {
            string name = parse_word();
            
            sNode*% node = parse_fun(name);
            
            return node;
        }
        else if(class_method) {
            expected_next_character('.');
            
            string method_name = parse_word();
            
            list<sNode*%>*% params = parse_calling_params();
            
            return new sClassMethodCall(buf, method_name, params) implements sNode;
        }
        else if(kernel_method) {
            list<sNode*%>*% params = parse_calling_params();
            
            return new sKernelMethodCall(buf, params) implements sNode;
        }
    }
    
    return add_sub_expression_node();
}

