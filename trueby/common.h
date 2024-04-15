#ifndef __COMMON_H__
#define __COMMON_H__
#include <comelang2.h>
struct sType;

struct sMethod
{
    string mName;
    list<tuple2<string,sType*%>*%>*% mParams;
    bool mNative;

    sType*% mResultType;
};
sMethod*% sMethod*::initialize(sMethod*% self, char* name, list<tuple2<string,sType*%>*%>*% params, sType*% result_type, bool native_=false);
struct sClass {
    string mName;
    map<string, sMethod*%>*% mMethods;
    map<string, sMethod*%>*% mClassMethods;
};
sClass*% sClass*::initialize(sClass*% self, char* name);
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
    int nest;

    sClass* current_class;
    map<string, sMethod*%>*% methods;

    map<string, sVar*%>*% lv_table;
};
sModule*% sModule*::initialize(sModule*% self);
sType*% sType*::initialize(sType*% self, char* name, sInfo* info=info);
void add_come_code(sInfo* info, const char* msg, ...);
void add_come_code_without_nest(sInfo* info, const char* msg, ...);
void add_last_code_to_source(sInfo* info=info);
void add_come_last_code(sInfo* info, const char* msg, ...);
CVALUE*% get_value_from_stack(int offset=-1, sInfo* info=info);
void err_msg(sInfo* info, char* msg, ...);
void skip_spaces_and_lf(sInfo* info=info);
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
bool output_source(sInfo* info);
void init_typed_ruby(sInfo* info);
int main(int argc, char** argv);
void dec_stack_ptr(int value, sInfo* info=info);
struct sClassNode
{
    string name;
    list<sNode*%>*% nodes;
    bool native_;

    int sline;
    string sname;
};
sClassNode*% sClassNode*::initialize(sClassNode*% self, string name, list<sNode*%>*% nodes, bool native_, sInfo* info=info);
string sClassNode*::kind();
bool sClassNode*::compile(sClassNode* self, sInfo* info);
bool sClassNode*::terminated();
int sClassNode*::sline(sClassNode* self, sInfo* info);
string sClassNode*::sname(sClassNode* self, sInfo* info);
struct sFunNode
{
    string name;
    list<sNode*%>*% nodes;
    list<tuple2<string,sType*%>*%>*% params;
    sType*% result_type;

    bool native_;

    int sline;
    string sname;
};
sFunNode*% sFunNode*::initialize(sFunNode*% self, string name, list<tuple2<string,sType*%>*%>*% params, sType*% result_type, list<sNode*%>*% nodes, bool native_=false, sInfo* info=info);
string sFunNode*::kind();
bool sFunNode*::compile(sFunNode* self, sInfo* info);
bool sFunNode*::terminated();
int sFunNode*::sline(sFunNode* self, sInfo* info);
string sFunNode*::sname(sFunNode* self, sInfo* info);
struct sKernelMethodCall
{
    string name;
    list<sNode*%>*% params;

    int sline;
    string sname;
};
sKernelMethodCall*% sKernelMethodCall*::initialize(sKernelMethodCall*% self, string name, list<sNode*%>*% params, sInfo* info=info);
string sKernelMethodCall*::kind();
void check_assign_type(sType* left_type, sType* right_type, CVALUE* come_value, sInfo* info=info);
bool sKernelMethodCall*::compile(sKernelMethodCall* self, sInfo* info);
bool sKernelMethodCall*::terminated();
int sKernelMethodCall*::sline(sKernelMethodCall* self, sInfo* info);
string sKernelMethodCall*::sname(sKernelMethodCall* self, sInfo* info);
struct sClassMethodCall
{
    string name;
    string method_name;
    list<sNode*%>*% params;

    int sline;
    string sname;
};
sClassMethodCall*% sClassMethodCall*::initialize(sClassMethodCall*% self, string name, string method_name, list<sNode*%>*% params, sInfo* info=info);
string sClassMethodCall*::kind();
bool sClassMethodCall*::compile(sClassMethodCall* self, sInfo* info);
bool sClassMethodCall*::terminated();
int sClassMethodCall*::sline(sClassMethodCall* self, sInfo* info);
string sClassMethodCall*::sname(sClassMethodCall* self, sInfo* info);
string parse_word(sInfo* info=info);
bool parse_cmp(char* word, sInfo* info=info);
sNode*% parse_class(string name, bool native_, sInfo* info=info);
sType*% parse_type(sInfo* info=info);
list<tuple2<string,sType*%>*%>*%, sType*% parse_params(sInfo* info=info);
list<sNode*%>*% parse_calling_params(sInfo* info=info);
sNode*% parse_fun(string name, sInfo* info=info);
void expected_next_character(char c, sInfo* info=info);
sNode*% string_node(string buf, sInfo* info=info);
sNode*% expression(sInfo* info=info) version 2;
struct sMethodCall
{
    sNode*% obj;
    string name;
    list<sNode*%>*% params;

    int sline;
    string sname;
};
sMethodCall*% sMethodCall*::initialize(sMethodCall*% self, sNode*% obj, string name, list<sNode*%>*% params, sInfo* info=info);
string sMethodCall*::kind();
bool sMethodCall*::compile(sMethodCall* self, sInfo* info);
bool sMethodCall*::terminated();
int sMethodCall*::sline(sMethodCall* self, sInfo* info);
string sMethodCall*::sname(sMethodCall* self, sInfo* info);
sNode*% post_expression(sNode*% node, sInfo* info=info);
sNode*% expression(sInfo* info=info) version 3;
struct sStoreLocalVariable
{
    string name;
    sNode*% right_value;
    bool alloc;
    sType*% var_type;

    int sline;
    string sname;
};
sStoreLocalVariable*% sStoreLocalVariable*::initialize(sStoreLocalVariable*% self, string name, sNode*% right_value, bool alloc, sType*% var_type, sInfo* info=info);
string sStoreLocalVariable*::kind();
bool sStoreLocalVariable*::compile(sStoreLocalVariable* self, sInfo* info);
bool sStoreLocalVariable*::terminated();
int sStoreLocalVariable*::sline(sStoreLocalVariable* self, sInfo* info);
string sStoreLocalVariable*::sname(sStoreLocalVariable* self, sInfo* info);
struct sLoadLocalVariable
{
    string name;

    int sline;
    string sname;
};
sLoadLocalVariable*% sLoadLocalVariable*::initialize(sLoadLocalVariable*% self, string name, sInfo* info=info);
string sLoadLocalVariable*::kind();
bool sLoadLocalVariable*::compile(sLoadLocalVariable* self, sInfo* info);
bool sLoadLocalVariable*::terminated();
int sLoadLocalVariable*::sline(sLoadLocalVariable* self, sInfo* info);
string sLoadLocalVariable*::sname(sLoadLocalVariable* self, sInfo* info);
sNode*% string_node(string buf, sInfo* info=info) version 2;


#endif
