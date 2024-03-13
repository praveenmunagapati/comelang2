#ifndef __COMMON_H__
#define __COMMON_H__
#include <comelang2.h>
struct struct sInfo;

struct sClass {
    string mName;
};
sClass*% sClass*::initialize(sClass*% self, char* name, sInfo* info=info);
struct sType {
    sClass* mClass;
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
sType*% sType*::initialize(sType*% self, char* class_name, sInfo* info=info);
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
sIntNode*% sIntNode*::initialize(sIntNode*% self, int value, sInfo* info);
string sIntNode*::kind();
bool sIntNode*::compile(sIntNode* self, sInfo* info);
bool sIntNode*::terminated();
int sIntNode*::sline(sIntNode* self, sInfo* info);
string sIntNode*::sname(sIntNode* self, sInfo* info);
int main(int argc, char** argv);


#endif
