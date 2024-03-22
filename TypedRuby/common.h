#ifndef __COMMON_H__
#define __COMMON_H__
#include <comelang2.h>
struct sClass {
    string mName;
};
struct struct sType;

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

    sModule*% module;
};
sModule*% sModule*::initialize(sModule*% self);
sType*% sType*::initialize(sType*% self, char* name, sInfo* info=info);
void add_come_code(sInfo* info, const char* msg, ...);
void add_last_code_to_source(sInfo* info);
void add_come_last_code(sInfo* info, const char* msg, ...);
interface sNode {
    bool compile(sInfo* info);
    int sline();
    string sname();
    bool terminated();
    string kind();
}struct sIntNode
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
sNode*%, bool parse(sInfo* info);
bool output_source(sInfo* info);
int main(int argc, char** argv);


#endif
