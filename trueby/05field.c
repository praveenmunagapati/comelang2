#include <comelang2.h>

struct sStoreAttrNode
{
    string name;
    sNode*% right_value;
    bool alloc;
    sType*% var_type;
    
    int sline;
    string sname;
};

sStoreAttrNode*% sStoreAttrNode*::initialize(sStoreAttrNode*% self, string name, sNode*% right_value, bool alloc, sType*% var_type, sInfo* info=info)
{
    self.name = name;
    self.right_value = right_value;
    self.alloc = alloc;
    self.var_type = var_type;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sStoreAttrNode*::kind()
{
    return string("sStoreAttrNode");
}

bool sStoreAttrNode*::compile(sStoreAttrNode* self, sInfo* info)
{
    if(!self.right_value.compile(info)) {
        return false;
    }
    
    CVALUE*% come_value = clone get_value_from_stack();
    dec_stack_ptr(1);
    
    sType* right_type = come_value.type;
    
    if(right_type == null) {
        err_msg(info, "require right value type");
        return false;
    }
    
    if(info.current_class == null) {
        err_msg(info, "require to be in class");
        return false;
    }
    
    sType* var_type;
    if(self.alloc) {
        if(self.var_type == null) {
            var_type = right_type;
        }
        else {
            var_type = self.var_type;
        }
        
        sVar*% var_ = new sVar;
        
        var_.mName = self.name;
        var_.mType = clone var_type;
        var_.mCValueName = self.name
        
        info.current_class.mFields.insert(self.name, var_);
    }
    else {
        sVar* var_ = info.current_class.mFields[self.name];
        
        if(var_ == null) {
            err_msg(info, "require attr declare");
            exit(2);
        }
        
        var_type = var_.mType;
        
        if(var_type == null) {
            err_msg(info, "require attr type");
            exit(2);
        }
    }
    
    check_assign_type(var_type, right_type, come_value);
    
    CVALUE*% come_value2 = new CVALUE;
    
    come_value2.c_value = s"@\{self.name}=\{come_value.c_value}";
    come_value2.type = come_value.type;
    come_value2.var = null;
    
    info.stack.push_back(come_value2);
    
    add_come_last_code(info, "%s\n", come_value2.c_value);
    
    return true;
}

bool sStoreAttrNode*::terminated()
{
    return false;
}

int sStoreAttrNode*::sline(sStoreAttrNode* self, sInfo* info)
{
    return self.sline;
}

string sStoreAttrNode*::sname(sStoreAttrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLoadAttrNode
{
    string name;
    
    int sline;
    string sname;
};

sLoadAttrNode*% sLoadAttrNode*::initialize(sLoadAttrNode*% self, string name, sInfo* info=info)
{
    self.name = name;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

string sLoadAttrNode*::kind()
{
    return string("sLoadAttrNode");
}

bool sLoadAttrNode*::compile(sLoadAttrNode* self, sInfo* info)
{
    sVar* var_ = info.current_class.mFields[self.name];
    
    if(var_ == null) {
        err_msg(info, "require attr declare");
        exit(2);
    }
    
    sType* var_type = var_->mType;
    
    if(var_type == null) {
        err_msg(info, "invalid attr type");
        exit(2);
    }
    
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = s"@\{self.name}";
    come_value.type = clone var_type;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s\n", come_value.c_value);
    
    return true;
}

bool sLoadAttrNode*::terminated()
{
    return false;
}

int sLoadAttrNode*::sline(sLoadAttrNode* self, sInfo* info)
{
    return self.sline;
}

string sLoadAttrNode*::sname(sLoadAttrNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% expression(sInfo* info=info) version 4
{
    if(*info->p == '@') {
        info->p++;
        skip_spaces_and_lf();
        
        string buf = parse_word();
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_and_lf();
            
            if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf();
                
                sNode*% right_value = expression();
                
                return new sStoreAttrNode(buf, right_value, true@alloc, null@var_type) implements sNode;
            }
            else {
                sType*% var_type = parse_type();
                
                if(*info->p == '=') {
                    info->p++;
                    skip_spaces_and_lf();
                    
                    sNode*% right_value = expression();
                    
                    return new sStoreAttrNode(buf, right_value, true@alloc, var_type) implements sNode;
                }
                else {
                    err_msg(info, "require right value");
                    exit(2);
                }
            }
        }
        else if(*info->p == '=') {
            info->p++;
            skip_spaces_and_lf();
            
            sNode*% right_value = expression();
            
            return new sStoreAttrNode(buf, right_value, false@alloc, null@var_type) implements sNode;
        }
        else {
            return new sLoadAttrNode(buf) implements sNode;
        }
    }
    
    return inherit(info);
}
