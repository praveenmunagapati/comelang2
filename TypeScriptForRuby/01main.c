#include <comelang2.h>

struct sInfo;

struct sClass {
    string mName;
};

sClass*% sClass*::initialize(sClass*% self, char* name, sInfo* info=info)
{
    self.mName = string(name);
    
    return self;
};

struct sType {
    sClass* mClass;
};

struct sVar {
    string mName;
    string mCValueName;
    sType*% mType;
};


struct sVarTable {
    map<string, sVar*%>*% mVars;
    bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct CVALUE {
    string c_value;
    sType*% type;
    sVar* var;
};

struct sInfo
{
    buffer*% source;
    
    smart_pointer<char>*% p;
    string sname;
    int sline;
    
    map<string, sClass*%>*% classes;
    list<CVALUE*%>*% stack;
};

sType*% sType*::initialize(sType*% self, char* class_name, sInfo* info=info)
{
    self.mClass = info.classes.at(string(class_name), null);
    
    return self;
}

interface sNode
{
    bool compile(sInfo* info);
    int sline();
    string sname();
    bool terminated();
    string kind();
}

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
    come_value.type = new sType("int");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    //add_come_last_code(info, "%s;\n", come_value.c_value);
    
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

int main(int argc, char** argv)
{
    return 0;
}
