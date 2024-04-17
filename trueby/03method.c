#include <comelang2.h>

struct sMethodCall
{
    sNode*% obj;
    string name;
    list<sNode*%>*% params;
    
    int sline;
    string sname;
};

sMethodCall*% sMethodCall*::initialize(sMethodCall*% self, sNode*% obj, string name, list<sNode*%>*% params, sInfo* info=info)
{
    self.obj = obj;
    self.name = name;
    self.params = params;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sMethodCall*::kind()
{
    return string("sMethodCall");
}

bool sMethodCall*::compile(sMethodCall* self, sInfo* info)
{
    if(!self.obj.compile(info)) {
        return false;
    }
    
    CVALUE*% come_value = clone get_value_from_stack();
    dec_stack_ptr(1);
    
    sType* type = come_value.type;
    
    if(type == null) {
        err_msg(info, "require type");
        return false;
    }
    
    sClass* klass = type.mClass;
    
    if(klass == null) {
        err_msg(info, "require class");
        return false;
    }
    
    sMethod* method = klass.mMethods[self.name];
    
    if(method == null) {
        err_msg(info, "require Kernel method (%s)", self.name);
        return false;
    }
    
    buffer*% buf = new buffer();
    buf.append_str(s"\{come_value.c_value}.\{self.name}(");
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
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = buf.to_string();
    come_value2.type = method->mResultType;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s", come_value2.c_value);
    
    return true;
}

bool sMethodCall*::terminated()
{
    return false;
}

int sMethodCall*::sline(sMethodCall* self, sInfo* info)
{
    return self.sline;
}

string sMethodCall*::sname(sMethodCall* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% post_expression(sNode*% node, sInfo* info=info)
{
    while(true) {
        if(*info->p == '.') {
            info->p++;
            skip_spaces_and_lf();
            
            string buf = parse_word();
            
            /// method call ///
            if(*info->p == '(') {
                list<sNode*%>*% params = parse_calling_params();
                
                node = new sMethodCall(node, buf, params) implements sNode;
            }
            
            /// field ///
            else {
            }
        }
        else {
            break;
        }
    }
    
    return node;
}

sNode*% expression(sInfo* info=info) version 3
{
    sNode*% node = inherit(info);
    
    if(node == null) {
        return null;
    }
    
    if(*info->p == '.') {
        return post_expression(node)
    }
    else {
        return node;
    }
}
