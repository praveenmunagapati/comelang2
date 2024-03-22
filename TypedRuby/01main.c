#include <comelang2.h>

struct sClass {
    string mName;
};

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
    smart_pointer<char*>*% p;
    string sname;
    int sline;
    
    list<CVALUE*%>*% stack;
    
    sType*% type;
    list<sClass*%>*% classes;
    
    bool no_output_come_code;
    
    sModule*% module;
};

sModule*% sModule*::initialize(sModule*% self, sInfo* info)
{
    self.mLastCode = null;
    self.mSource = new buffer();
}

sType*% sType*::initialize(sType*% self, char* name, sInfo* info=info)
{
    sClass* klass = info.classes[name];
    
    self.mClass = klass;
    self.mMultipleTypes = new list<sType*%>();
    self.mGenericsTypes = list<sType*%>();
    
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

void add_last_code_to_source(sInfo* info)
{
    if(info->no_output_come_code) {
        return;
    }
    if(info.module.mLastCode) {
       add_come_code(info, "%s", info.module.mLastCode);
       info.module.mLastCode = null;
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
    come_value.type = new sType("int");
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
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

sNode*%, bool parse(sInfo* info)
{
    if(xisdigits(*info.p)) {
        int n = 0;
        while(true) {
            if(xisdigit(*info.p)) {
                info->p++;
                n = n * 10 + *info.p - '0';
            }
            else if(*info->p == '_') {
                info->p++;
            }
            else {
                break;
            }
        }
        
        return (new sIntNode(n, info), true);
    }
    
    return (null, false);
}

bool output_source(sInfo* info)
{
    string sname = xnoextname(info.sname) + ".rb";
    info.module.to_string().write(sname);
    
    return true;
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
            file_name = argv[i];
        }
    }
    
    sInfo info;
    
    info.source = file_name.read().to_buffer();
    info.p = info.source.to_pointer();
    info.sname = clone file_name;
    info.sline = 1;
    info.stack = new list<CVALUE*%>();
    info.type = null;
    info.classes = new list<sClass*%>();
    info.no_output_come_code = false;
    info.module = new sModule();
    
    while(*info.p) {
        sNode*% node = parse(&info).catch {
            puts("parser error");
            exit(2);
        }
        
        node.compile(&info).catch {
            puts("compile error");
            exit(2);
        }
    }
    
    output_source(&info).catch {
        puts("output source error");
        exit(2);
    }
    
    return 0;
}
