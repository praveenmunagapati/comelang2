#ifndef __COMMON_H__
#define __COMMON_H__
#include <comelang2.h>
struct sClass {
    string mName;
};
sClass*% sClass*::initialize(sClass*% self, char* name);
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

    int err_num;

    sModule*% module;
    bool no_output_err;
};
sModule*% sModule*::initialize(sModule*% self);
sType*% sType*::initialize(sType*% self, char* name, sInfo* info=info);
void add_come_code(sInfo* info, const char* msg, ...);
void add_last_code_to_source(sInfo* info=info);
void add_come_last_code(sInfo* info, const char* msg, ...);
CVALUE*% get_value_from_stack(int offset=-1, sInfo* info=info);
void err_msg(sInfo* info, char* msg, ...);
void skip_spaces(sInfo* info=info);
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
struct sAddNode
{
    sNode*% left_node;
    sNode*% right_node;

    int sline;
    string sname;
};
sAddNode*% sAddNode*::initialize(sAddNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info);
string sAddNode*::kind();
bool sAddNode*::compile(sAddNode* self, sInfo* info);
bool sAddNode*::terminated();
int sAddNode*::sline(sAddNode* self, sInfo* info);
string sAddNode*::sname(sAddNode* self, sInfo* info);
struct sSubNode
{
    sNode*% left_node;
    sNode*% right_node;

    int sline;
    string sname;
};
sSubNode*% sSubNode*::initialize(sSubNode*% self, sNode*% left_node, sNode*% right_node, sInfo* info=info);
string sSubNode*::kind();
bool sSubNode*::compile(sSubNode* self, sInfo* info);
bool sSubNode*::terminated();
int sSubNode*::sline(sSubNode* self, sInfo* info);
string sSubNode*::sname(sSubNode* self, sInfo* info);
struct sStrNode
{
    string value;
    int sline;
    string sname;
};
sStrNode*% sStrNode*::initialize(sStrNode*% self, string value, int sline, sInfo* info);
bool sStrNode*::terminated();
string sStrNode*::kind();
bool sStrNode*::compile(sStrNode* self, sInfo* info);
int sStrNode*::sline(sStrNode* self, sInfo* info);
string sStrNode*::sname(sStrNode* self, sInfo* info);
sNode*% expression_node(sInfo* info=info);
sNode*% add_sub_expression_node(sInfo* info=info);
sNode*% expression(sInfo* info=info) version 1;
sNode*%,bool parse(sInfo* info);
bool output_source(sInfo* info);
void init_typed_ruby(sInfo* info);
int main(int argc, char** argv);


