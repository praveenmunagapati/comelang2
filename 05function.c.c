// source head
typedef unsigned long int size_t;
typedef long ssize_t;
typedef long off_t;
typedef struct _IO_FILE FILE;
typedef __builtin_va_list va_list;
typedef __builtin_va_list __isoc_va_list;
union _G_fpos64_t
{
char __opaque[16];
long long __lldata;
double __align;
};
typedef union _G_fpos64_t fpos_t;
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef long (*cookie_read_function_t)(void*,char*,unsigned long int);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long int);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long int);
    long (*write)(void*,const char*,unsigned long int);
    int (*seek)(void*,long*,int);
    int (*close)(void*);
};
typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;
typedef unsigned int wchar_t;
struct anonymous_typeX1
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX1 div_t;
struct anonymous_typeX2
{
    long quot;
    long rem;
};
typedef struct anonymous_typeX2 ldiv_t;
struct anonymous_typeX3
{
    long long quot;
    long long rem;
};
typedef struct anonymous_typeX3 lldiv_t;
struct __locale_struct;
typedef struct __locale_struct* locale_t;
typedef void* any;
typedef char* string;
struct sDummyCurrentStack
{
    int __method_block_result_kind__;
};
extern void* gComeResultObject;
extern _Bool gComeGCLib;
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
struct buffer
{
    char* buf;
    int len;
    int size;
};
struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};
struct smart_pointer$1short
{
    struct buffer* memory;
    short short* p;
};
struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};
struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};
struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};
struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct sType;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};
struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};
struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
};
struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    char* mDeclareSName;
};
struct sInfo;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
struct tuple1$1sTypeph
{
    struct sType* v1;
};
struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};
struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};
struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};
struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};
struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mNoArrayPointerNum;
    struct sNode* mSizeNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    char* mAsmName;
};
struct sVar;
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
};
struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};
struct sVarTable;
struct sBlock;
struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
};
struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};
struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
};
struct sVarTable;
struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};
struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};
struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};
struct sBlock
{
    struct list$1sNodeph* mNodes;
    struct sVarTable* mVarTable;
};
struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
};
struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};
struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};
struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};
struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};
struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    struct sFun* come_fun;
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool no_comma;
    _Bool no_assign;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool without_semicolon;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};
struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};
struct sReturnNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sLineNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sSNameNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sFuncNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sCallerFuncNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sCallerLineNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sCallerSNameNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sParentReturnNode
{
    struct sNode* value;
    char* value_source;
    int sline;
    char* sname;
};
struct sParentBreakNode
{
    int sline;
    char* sname;
};
struct sParentContinueNode
{
    int sline;
    char* sname;
};
struct sDerefferenceNode
{
    struct sNode* value;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRefferenceNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sReverseNode
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sFunCallNode
{
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    int sline;
    char* sname;
};
struct map$2charphCVALUEph
{
    char** keys;
    _Bool* item_existance;
    struct CVALUE** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};
struct sCastNode
{
    struct sType* mType;
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sParenNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sLogicalDenial
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sMinusNode2
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sPlusPlusNode2
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sMinusMinusNode2
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sComplement
{
    struct sNode* value;
    int sline;
    char* sname;
};
struct sNormalBlock
{
    struct sBlock* mBlock;
    int sline;
    char* sname;
};
struct list_item$1tuple2$2sTypephcharphph
{
    struct tuple2$2sTypephcharph* item;
    struct list_item$1tuple2$2sTypephcharphph* prev;
    struct list_item$1tuple2$2sTypephcharphph* next;
};
struct list$1tuple2$2sTypephcharphph
{
    struct list_item$1tuple2$2sTypephcharphph* head;
    struct list_item$1tuple2$2sTypephcharphph* tail;
    int len;
    struct list_item$1tuple2$2sTypephcharphph* it;
};
struct sGlobalVariable
{
    struct sType* type;
    char* name;
    struct sNode* right_node;
    int sline;
    char* sname;
    char* array_initializer;
    struct list$1tuple2$2sTypephcharphph* multiple_declare;
    char* mDeclareSName;
};
struct sExternalGlobalVariable
{
    struct sType* type;
    char* name;
    int sline;
    char* sname;
    struct list$1tuple2$2sTypephcharphph* multiple_declare;
    char* mDeclareSName;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

struct _IO_FILE* fopen(const char* anonymous_var_nameX1, const char* anonymous_var_nameX2);

struct _IO_FILE* freopen(const char* anonymous_var_nameX3, const char* anonymous_var_nameX4, struct _IO_FILE* anonymous_var_nameX5);

int fclose(struct _IO_FILE* anonymous_var_nameX6);

int remove(const char* anonymous_var_nameX7);

int rename(const char* anonymous_var_nameX8, const char* anonymous_var_nameX9);

int feof(struct _IO_FILE* anonymous_var_nameX10);

int ferror(struct _IO_FILE* anonymous_var_nameX11);

int fflush(struct _IO_FILE* anonymous_var_nameX12);

void clearerr(struct _IO_FILE* anonymous_var_nameX13);

int fseek(struct _IO_FILE* anonymous_var_nameX14, long anonymous_var_nameX15, int anonymous_var_nameX16);

long ftell(struct _IO_FILE* anonymous_var_nameX17);

void rewind(struct _IO_FILE* anonymous_var_nameX18);

int fgetpos(struct _IO_FILE* anonymous_var_nameX19, union _G_fpos64_t* anonymous_var_nameX20);

int fsetpos(struct _IO_FILE* anonymous_var_nameX21, const union _G_fpos64_t* anonymous_var_nameX22);

unsigned long int fread(void* anonymous_var_nameX23, unsigned long int anonymous_var_nameX24, unsigned long int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);

unsigned long int fwrite(const void* anonymous_var_nameX27, unsigned long int anonymous_var_nameX28, unsigned long int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);

int fgetc(struct _IO_FILE* anonymous_var_nameX31);

int getc(struct _IO_FILE* anonymous_var_nameX32);

int getchar();

int ungetc(int anonymous_var_nameX33, struct _IO_FILE* anonymous_var_nameX34);

int fputc(int anonymous_var_nameX35, struct _IO_FILE* anonymous_var_nameX36);

int putc(int anonymous_var_nameX37, struct _IO_FILE* anonymous_var_nameX38);

int putchar(int anonymous_var_nameX39);

char* fgets(char* anonymous_var_nameX40, int anonymous_var_nameX41, struct _IO_FILE* anonymous_var_nameX42);

int fputs(const char* anonymous_var_nameX43, struct _IO_FILE* anonymous_var_nameX44);

int puts(const char* anonymous_var_nameX45);

int printf(const char* anonymous_var_nameX46, ...);

int fprintf(struct _IO_FILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);

int sprintf(char* anonymous_var_nameX49, const char* anonymous_var_nameX50, ...);

int snprintf(char* anonymous_var_nameX51, unsigned long int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);

int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);

int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);

int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);

int vsnprintf(char* anonymous_var_nameX62, unsigned long int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);

int scanf(const char* anonymous_var_nameX66, ...);

int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);

int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);

int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);

int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);

int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);

void perror(const char* anonymous_var_nameX79);

int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long int anonymous_var_nameX83);

void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);

char* tmpnam(char* anonymous_var_nameX86);

struct _IO_FILE* tmpfile();

struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long int anonymous_var_nameX88, const char* anonymous_var_nameX89);

struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long int* anonymous_var_nameX91);

struct _IO_FILE* fdopen(int anonymous_var_nameX92, const char* anonymous_var_nameX93);

struct _IO_FILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);

int pclose(struct _IO_FILE* anonymous_var_nameX96);

int fileno(struct _IO_FILE* anonymous_var_nameX97);

int fseeko(struct _IO_FILE* anonymous_var_nameX98, long anonymous_var_nameX99, int anonymous_var_nameX100);

long ftello(struct _IO_FILE* anonymous_var_nameX101);

int dprintf(int anonymous_var_nameX102, const char* anonymous_var_nameX103, ...);

int vdprintf(int anonymous_var_nameX104, const char* anonymous_var_nameX105, va_list anonymous_var_nameX106);

void flockfile(struct _IO_FILE* anonymous_var_nameX107);

int ftrylockfile(struct _IO_FILE* anonymous_var_nameX108);

void funlockfile(struct _IO_FILE* anonymous_var_nameX109);

int getc_unlocked(struct _IO_FILE* anonymous_var_nameX110);

int getchar_unlocked();

int putc_unlocked(int anonymous_var_nameX111, struct _IO_FILE* anonymous_var_nameX112);

int putchar_unlocked(int anonymous_var_nameX113);

long getdelim(char** anonymous_var_nameX114, unsigned long int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);

long getline(char** anonymous_var_nameX118, unsigned long int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);

int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);

char* ctermid(char* anonymous_var_nameX125);

char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);

char* cuserid(char* anonymous_var_nameX128);

void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);

void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long int anonymous_var_nameX132);

int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);

int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);

int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);

unsigned long int fread_unlocked(void* anonymous_var_nameX137, unsigned long int anonymous_var_nameX138, unsigned long int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);

unsigned long int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long int anonymous_var_nameX142, unsigned long int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);

void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);

int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);

int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);

int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);

int getw(struct _IO_FILE* anonymous_var_nameX149);

int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);

char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long int* anonymous_var_nameX153);

int asprintf(char** anonymous_var_nameX154, const char* anonymous_var_nameX155, ...);

int vasprintf(char** anonymous_var_nameX156, const char* anonymous_var_nameX157, va_list anonymous_var_nameX158);

char* fgets_unlocked(char* anonymous_var_nameX159, int anonymous_var_nameX160, struct _IO_FILE* anonymous_var_nameX161);

int fputs_unlocked(const char* anonymous_var_nameX162, struct _IO_FILE* anonymous_var_nameX163);

struct _IO_FILE* fopencookie(void* anonymous_var_nameX174, const char* anonymous_var_nameX175, struct _IO_cookie_io_functions_t anonymous_var_nameX176);

int atoi(const char* anonymous_var_nameX177);

long atol(const char* anonymous_var_nameX178);

long long atoll(const char* anonymous_var_nameX179);

double atof(const char* anonymous_var_nameX180);

float strtof(const char* anonymous_var_nameX181, char** anonymous_var_nameX182);

double strtod(const char* anonymous_var_nameX183, char** anonymous_var_nameX184);

long double strtold(const char* anonymous_var_nameX185, char** anonymous_var_nameX186);

long strtol(const char* anonymous_var_nameX187, char** anonymous_var_nameX188, int anonymous_var_nameX189);

unsigned long int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);

long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);

unsigned long long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);

int rand();

void srand(unsigned int anonymous_var_nameX199);

void* malloc(unsigned long int anonymous_var_nameX200);

void* calloc(unsigned long int anonymous_var_nameX201, unsigned long int anonymous_var_nameX202);

void* realloc(void* anonymous_var_nameX203, unsigned long int anonymous_var_nameX204);

void free(void* anonymous_var_nameX205);

void* aligned_alloc(unsigned long int anonymous_var_nameX206, unsigned long int anonymous_var_nameX207);

void abort();

int atexit(void (*anonymous_lambda_var_nameZ1)());

void exit(int anonymous_var_nameX208);

void _Exit(int anonymous_var_nameX209);

int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());

void quick_exit(int anonymous_var_nameX210);

char* getenv(const char* anonymous_var_nameX211);

int system(const char* anonymous_var_nameX212);

void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long int anonymous_var_nameX215, unsigned long int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));

void qsort(void* anonymous_var_nameX219, unsigned long int anonymous_var_nameX220, unsigned long int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));

int abs(int anonymous_var_nameX224);

long labs(long anonymous_var_nameX225);

long long llabs(long long anonymous_var_nameX226);

struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);

struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);

struct anonymous_typeX3 lldiv(long long anonymous_var_nameX231, long long anonymous_var_nameX232);

int mblen(const char* anonymous_var_nameX233, unsigned long int anonymous_var_nameX234);

int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long int anonymous_var_nameX237);

int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);

unsigned long int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long int anonymous_var_nameX242);

unsigned long int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long int anonymous_var_nameX245);

unsigned long int __ctype_get_mb_cur_max();

int posix_memalign(void** anonymous_var_nameX246, unsigned long int anonymous_var_nameX247, unsigned long int anonymous_var_nameX248);

int setenv(const char* anonymous_var_nameX249, const char* anonymous_var_nameX250, int anonymous_var_nameX251);

int unsetenv(const char* anonymous_var_nameX252);

int mkstemp(char* anonymous_var_nameX253);

int mkostemp(char* anonymous_var_nameX254, int anonymous_var_nameX255);

char* mkdtemp(char* anonymous_var_nameX256);

int getsubopt(char** anonymous_var_nameX257, char** anonymous_var_nameX258, char** anonymous_var_nameX259);

int rand_r(unsigned int* anonymous_var_nameX260);

char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);

long int random();

void srandom(unsigned int anonymous_var_nameX263);

char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long int anonymous_var_nameX266);

char* setstate(char* anonymous_var_nameX267);

int putenv(char* anonymous_var_nameX268);

int posix_openpt(int anonymous_var_nameX269);

int grantpt(int anonymous_var_nameX270);

int unlockpt(int anonymous_var_nameX271);

char* ptsname(int anonymous_var_nameX272);

char* l64a(long anonymous_var_nameX273);

long a64l(const char* anonymous_var_nameX274);

void setkey(const char* anonymous_var_nameX275);

double drand48();

double erand48(unsigned short int anonymous_var_nameX276[3]);

long int lrand48();

long int nrand48(unsigned short int anonymous_var_nameX277[3]);

long mrand48();

long jrand48(unsigned short int anonymous_var_nameX278[3]);

void srand48(long anonymous_var_nameX279);

unsigned short int* seed48(unsigned short int anonymous_var_nameX280[3]);

void lcong48(unsigned short int anonymous_var_nameX281[7]);

void* alloca(unsigned long int anonymous_var_nameX282);

char* mktemp(char* anonymous_var_nameX283);

int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);

int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);

void* valloc(unsigned long int anonymous_var_nameX289);

void* memalign(unsigned long int anonymous_var_nameX290, unsigned long int anonymous_var_nameX291);

int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);

int clearenv();

void* reallocarray(void* anonymous_var_nameX294, unsigned long int anonymous_var_nameX295, unsigned long int anonymous_var_nameX296);

void qsort_r(void* anonymous_var_nameX297, unsigned long int anonymous_var_nameX298, unsigned long int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);

int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long int anonymous_var_nameX306);

char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);

char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);

char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);

char* secure_getenv(const char* anonymous_var_nameX318);

float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);

double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);

long double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);

void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long int anonymous_var_nameX330);

void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long int anonymous_var_nameX333);

void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long int anonymous_var_nameX336);

int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long int anonymous_var_nameX339);

void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long int anonymous_var_nameX342);

char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);

char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long int anonymous_var_nameX347);

char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);

char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long int anonymous_var_nameX352);

int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);

int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long int anonymous_var_nameX357);

int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);

unsigned long int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long int anonymous_var_nameX362);

char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);

char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);

unsigned long int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);

unsigned long int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);

char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);

char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);

char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);

unsigned long int strlen(const char* anonymous_var_nameX377);

char* strerror(int anonymous_var_nameX378);

int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long int anonymous_var_nameX381);

void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long int anonymous_var_nameX384);

void bzero(void* anonymous_var_nameX385, unsigned long int anonymous_var_nameX386);

char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);

char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);

int ffs(int anonymous_var_nameX391);

int ffsl(long anonymous_var_nameX392);

int ffsll(long long anonymous_var_nameX393);

int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);

int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long int anonymous_var_nameX398);

int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);

int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);

char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);

int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long int anonymous_var_nameX411);

char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);

char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long int anonymous_var_nameX416);

unsigned long int strnlen(const char* anonymous_var_nameX417, unsigned long int anonymous_var_nameX418);

char* strdup(const char* anonymous_var_nameX419);

char* strndup(const char* anonymous_var_nameX420, unsigned long int anonymous_var_nameX421);

char* strsignal(int anonymous_var_nameX422);

char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);

int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);

unsigned long int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);

void* memmem(const void* anonymous_var_nameX432, unsigned long int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long int anonymous_var_nameX435);

void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long int anonymous_var_nameX439);

char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);

unsigned long int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long int anonymous_var_nameX444);

unsigned long int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long int anonymous_var_nameX447);

void explicit_bzero(void* anonymous_var_nameX448, unsigned long int anonymous_var_nameX449);

int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);

char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);

char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);

void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long int anonymous_var_nameX458);

void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long int anonymous_var_nameX461);

char* basename();

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_catch(int self, void* parent, void (*block)(void*));

int int_value(int self, void* parent, void (*block)(void*));

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

char* __builtin_string(char* str);

_Bool come_is_contained_element(void** array, int len, void* element);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* str);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
_Bool bool_equals(_Bool self, _Bool right);

_Bool char_equals(char self, char right);

_Bool int_equals(int self, int right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(long self, long right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool charp_equals(char* self, char* right);

_Bool string_equals(char* self, char* right);

_Bool string_operator_equals(char* self, char* right);

_Bool charp_operator_equals(char* self, char* right);

_Bool string_operator_not_equals(char* self, char* right);

_Bool charp_operator_not_equals(char* self, char* right);

char* charp_operator_add(char* self, char* right);

char* string_operator_add(char* self, char* right);

char* charp_operator_mult(char* self, int right);

char* string_operator_mult(char* self, int right);

unsigned int bool_get_hash_key(_Bool value);

unsigned int char_get_hash_key(char value);

unsigned int short_get_hash_key(short short value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(long value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(char self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

unsigned long int size_t_clone(long self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswascii(unsigned int c);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xisalpha(char c);

int string_length(char* str);

int charp_length(char* str);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_reverse(char* str);

char* string_reverse(char* str);

char* xsprintf(char* msg, ...);

char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* string_split_char(char* self, char c);

struct list$1charph* charp_split_char(char* self, char c);

char* xrealpath(char* path);

char* xbasename(char* path);

char* xextname(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* bool_to_string(_Bool self);

char* char_to_string(char self);

char* short_to_string(short short self);

char* int_to_string(int self);

char* long_to_string(long self);

char* size_t_to_string(unsigned long int self);

char* float_to_string(float self);

char* double_to_string(double self);

char* string_to_string(char* self);

char* charp_to_string(char* self);

int bool_compare(_Bool left, _Bool right);

int char_compare(char left, char right);

int short_compare(short short left, short short right);

int int_compare(int left, int right);

int long_compare(long left, long right);

int float_compare(float left, float right);

int double_compare(float left, float right);

int size_t_compare(long left, long right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

int FILE_write(struct _IO_FILE* f, char* str);

char* FILE_read(struct _IO_FILE* f);

int FILE_fclose(struct _IO_FILE* f);

int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* charp_read(char* file_name);

char* string_read(char* file_name);

char* charp_puts(char* self);

char* string_puts(char* self);

int int_printf(int self, char* msg);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

char* charp_print(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

int come_main_v1(int argc, char** argv);

_Bool node_compile(struct sNode* node, struct sInfo* info);

int come_main_v2(int argc, char** argv);

void come_init_v2();

void come_final_v2();

void err_msg(struct sInfo* info, char* msg, ...);

int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

struct sModule* sModule_initialize(struct sModule* self);

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);

void sVarTable_finalize(struct sVarTable* self);

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

char* make_come_type_name_string(struct sType* type, struct sInfo* info);

void come_init_v3();

void come_final_v3();

char* header_function(struct sFun* fun, struct sInfo* info);

int transpile_v3(struct sInfo* info);

_Bool output_source_file_v3(struct sInfo* info);

void show_type(struct sType* type, struct sInfo* info);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

void add_last_code_to_source(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void add_last_code_to_source_with_comma(struct sInfo* info);

void dec_stack_ptr(int value, struct sInfo* info);

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

void transpiler_clear_last_code(struct sInfo* info);

_Bool output_header_file(struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

_Bool is_right_values(int right_value_num, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

void remove_object_from_right_values(int right_value_num, struct sInfo* info);

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

void arrange_stack(struct sInfo* info, int top);

struct sNode* parse_function(struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

struct sNode* parse_tuple(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

struct sNode* expression_v13(struct sInfo* info);

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

char* get_none_generics_name(char* class_name);

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

void output_struct(struct sClass* klass, struct sInfo* info);

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_union(char* type_name, struct sInfo* info);

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

void come_init_v5();

void come_final_v5();

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info);

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info);

char* sReturnNode_kind();

_Bool sReturnNode_terminated();

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);

int sLineNode_sline(struct sLineNode* self, struct sInfo* info);

char* sLineNode_sname(struct sLineNode* self, struct sInfo* info);

_Bool sLineNode_terminated();

char* sLineNode_kind();

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);

int sSNameNode_sline(struct sSNameNode* self, struct sInfo* info);

char* sSNameNode_sname(struct sSNameNode* self, struct sInfo* info);

_Bool sSNameNode_terminated();

char* sSNameNode_kind();

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);

int sFuncNode_sline(struct sFuncNode* self, struct sInfo* info);

char* sFuncNode_sname(struct sFuncNode* self, struct sInfo* info);

_Bool sFuncNode_terminated();

char* sFuncNode_kind();

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);

int sCallerFuncNode_sline(struct sCallerFuncNode* self, struct sInfo* info);

char* sCallerFuncNode_sname(struct sCallerFuncNode* self, struct sInfo* info);

_Bool sCallerFuncNode_terminated();

char* sCallerFuncNode_kind();

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);

int sCallerLineNode_sline(struct sCallerLineNode* self, struct sInfo* info);

char* sCallerLineNode_sname(struct sCallerLineNode* self, struct sInfo* info);

_Bool sCallerLineNode_terminated();

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);

char* sCallerLineNode_kind();

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);

int sCallerSNameNode_sline(struct sCallerSNameNode* self, struct sInfo* info);

char* sCallerSNameNode_sname(struct sCallerSNameNode* self, struct sInfo* info);

_Bool sCallerSNameNode_terminated();

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);

char* sCallerSNameNode_kind();

struct sParentReturnNode* sParentReturnNode_initialize(struct sParentReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

int sParentReturnNode_sline(struct sParentReturnNode* self, struct sInfo* info);

char* sParentReturnNode_sname(struct sParentReturnNode* self, struct sInfo* info);

_Bool sParentReturnNode_terminated();

char* sParentReturnNode_kind();

_Bool sParentReturnNode_compile(struct sParentReturnNode* self, struct sInfo* info);

struct sParentBreakNode* sParentBreakNode_initialize(struct sParentBreakNode* self, struct sInfo* info);

int sParentBreakNode_sline(struct sParentBreakNode* self, struct sInfo* info);

char* sParentBreakNode_sname(struct sParentBreakNode* self, struct sInfo* info);

_Bool sParentBreakNode_terminated();

char* sParentBreakNode_kind();

_Bool sParentBreakNode_compile(struct sParentBreakNode* self, struct sInfo* info);

struct sParentContinueNode* sParentContinueNode_initialize(struct sParentContinueNode* self, struct sInfo* info);

int sParentContinueNode_sline(struct sParentContinueNode* self, struct sInfo* info);

char* sParentContinueNode_sname(struct sParentContinueNode* self, struct sInfo* info);

_Bool sParentContinueNode_terminated();

char* sParentContinueNode_kind();

_Bool sParentContinueNode_compile(struct sParentContinueNode* self, struct sInfo* info);

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);

int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info);

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info);

_Bool sDerefferenceNode_terminated();

char* sDerefferenceNode_kind();

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);

int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info);

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info);

_Bool sRefferenceNode_terminated();

char* sRefferenceNode_kind();

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);

int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info);

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info);

_Bool sReverseNode_terminated();

char* sReverseNode_kind();

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
int sFunCallNode_sline(struct sFunCallNode* self, struct sInfo* info);

char* sFunCallNode_sname(struct sFunCallNode* self, struct sInfo* info);

_Bool sFunCallNode_terminated();

char* sFunCallNode_kind();

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item);
static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self);
static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self);
static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);

int sCastNode_sline(struct sCastNode* self, struct sInfo* info);

char* sCastNode_sname(struct sCastNode* self, struct sInfo* info);

_Bool sCastNode_terminated();

char* sCastNode_kind();

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);

int sParenNode_sline(struct sParenNode* self, struct sInfo* info);

char* sParenNode_sname(struct sParenNode* self, struct sInfo* info);

_Bool sParenNode_terminated();

char* sParenNode_kind();

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);

struct sNode* parse_function_call(char* fun_name, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);

_Bool sLogicalDenial_terminated();

char* sLogicalDenial_kind();

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);

int sLogicalDenial_sline(struct sLogicalDenial* self, struct sInfo* info);

char* sLogicalDenial_sname(struct sLogicalDenial* self, struct sInfo* info);

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sMinusNode2_terminated();

char* sMinusNode2_kind();

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);

int sMinusNode2_sline(struct sMinusNode2* self, struct sInfo* info);

char* sMinusNode2_sname(struct sMinusNode2* self, struct sInfo* info);

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sPlusPlusNode2_terminated();

char* sPlusPlusNode2_kind();

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);

int sPlusPlusNode2_sline(struct sPlusPlusNode2* self, struct sInfo* info);

char* sPlusPlusNode2_sname(struct sPlusPlusNode2* self, struct sInfo* info);

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sMinusMinusNode2_terminated();

char* sMinusMinusNode2_kind();

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);

int sMinusMinusNode2_sline(struct sMinusMinusNode2* self, struct sInfo* info);

char* sMinusMinusNode2_sname(struct sMinusMinusNode2* self, struct sInfo* info);

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);

_Bool sComplement_terminated();

char* sComplement_kind();

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);

int sComplement_sline(struct sComplement* self, struct sInfo* info);

char* sComplement_sname(struct sComplement* self, struct sInfo* info);

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info);

static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool sNormalBlock_terminated();

char* sNormalBlock_kind();

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);

int sNormalBlock_sline(struct sNormalBlock* self, struct sInfo* info);

char* sNormalBlock_sname(struct sNormalBlock* self, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

static void sNormalBlock_finalize(struct sNormalBlock* self);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
void backtrace_parse_type(struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

static void sLogicalDenial_finalize(struct sLogicalDenial* self);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static void sMinusNode2_finalize(struct sMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static void sComplement_finalize(struct sComplement* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static void sParentReturnNode_finalize(struct sParentReturnNode* self);
static struct sParentReturnNode* sParentReturnNode_clone(struct sParentReturnNode* self);
static void sParentBreakNode_finalize(struct sParentBreakNode* self);
static struct sParentBreakNode* sParentBreakNode_clone(struct sParentBreakNode* self);
static void sParentContinueNode_finalize(struct sParentContinueNode* self);
static struct sParentContinueNode* sParentContinueNode_clone(struct sParentContinueNode* self);
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
static void sReverseNode_finalize(struct sReverseNode* self);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static void sLineNode_finalize(struct sLineNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static void sSNameNode_finalize(struct sSNameNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sCastNode_finalize(struct sCastNode* self);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
static void sParenNode_finalize(struct sParenNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_v5(struct sInfo* info);

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info);

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self);
static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self);
static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self);
static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self);
int sGlobalVariable_sline(struct sGlobalVariable* self, struct sInfo* info);

char* sGlobalVariable_sname(struct sGlobalVariable* self, struct sInfo* info);

_Bool sGlobalVariable_terminated();

char* sGlobalVariable_kind();

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info);

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self);
static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self);
struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info);

int sExternalGlobalVariable_sline(struct sExternalGlobalVariable* self, struct sInfo* info);

char* sExternalGlobalVariable_sname(struct sExternalGlobalVariable* self, struct sInfo* info);

_Bool sExternalGlobalVariable_terminated();

char* sExternalGlobalVariable_kind();

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);

struct sNode* parse_global_variable(struct sInfo* info);

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self);
static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self);
static void sGlobalVariable_finalize(struct sGlobalVariable* self);
static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
right_value1 = (void*)0;
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1954, "struct smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
right_value3 = (void*)0;
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1964, "struct smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
right_value5 = (void*)0;
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1974, "struct smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
right_value7 = (void*)0;
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1984, "struct smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
right_value9 = (void*)0;
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1994, "struct smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

void come_init_v5(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void come_final_v5(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info){
void* __result_obj__;
void* right_value44;
struct sType* generics_type_29;
_Bool _if_conditional91;
struct sType* __dec_obj28;
_Bool _if_conditional92;
struct sClass* klass_30;
char* class_name_31;
struct sFun* operator_fun_32;
char* fun_name2_33;
_Bool _if_conditional93;
void* right_value45;
char* none_generics_name_34;
void* right_value46;
struct sType* obj_type_35;
void* right_value47;
char* __dec_obj29;
void* right_value48;
char* fun_name3_36;
void* right_value49;
struct sGenericsFun* generics_fun_39;
_Bool _if_conditional108;
void* right_value50;
_Bool _if_conditional109;
_Bool __result30__;
void* right_value51;
_Bool _if_conditional129;
void* right_value52;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_43;
char* fun_name_44;
void* right_value53;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_45;
char* fun_name2_46;
_Bool _if_conditional131;
void* right_value54;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_47;
char* fun_name_48;
void* right_value55;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_49;
char* fun_name2_50;
void* right_value56;
void* right_value57;
char* __dec_obj30;
int i_51;
void* right_value58;
char* new_fun_name_52;
void* right_value59;
_Bool _if_conditional132;
void* right_value60;
char* __dec_obj31;
_Bool _if_conditional133;
void* right_value61;
_Bool result_53;
_Bool _if_conditional134;
void* right_value62;
struct CVALUE* come_value_54;
char* left_value2_55;
void* right_value63;
void* right_value64;
void* right_value65;
void* right_value66;
_Bool _if_conditional139;
void* right_value67;
void* right_value68;
char* __dec_obj32;
void* right_value69;
char* __dec_obj33;
void* right_value70;
char* __dec_obj34;
void* right_value71;
struct sType* type2_59;
void* right_value72;
struct sType* type3_60;
void* right_value73;
struct sType* __dec_obj35;
_Bool _if_conditional140;
void* right_value74;
char* __dec_obj36;
void* right_value75;
char* __dec_obj37;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&operator_fun_32, 0, sizeof(struct sFun*));
memset(&fun_name2_33, 0, sizeof(char*));
right_value45 = (void*)0;
memset(&none_generics_name_34, 0, sizeof(char*));
right_value46 = (void*)0;
memset(&obj_type_35, 0, sizeof(struct sType*));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&fun_name3_36, 0, sizeof(char*));
right_value49 = (void*)0;
memset(&generics_fun_39, 0, sizeof(struct sGenericsFun*));
right_value50 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&fun_43, 0, sizeof(struct sFun*));
memset(&fun_name_44, 0, sizeof(char*));
memset(&fun_43, 0, sizeof(struct sFun*));
memset(&fun_name_44, 0, sizeof(char*));
right_value53 = (void*)0;
memset(&fun2_45, 0, sizeof(struct sFun*));
memset(&fun_name2_46, 0, sizeof(char*));
memset(&fun2_45, 0, sizeof(struct sFun*));
memset(&fun_name2_46, 0, sizeof(char*));
right_value54 = (void*)0;
memset(&fun_47, 0, sizeof(struct sFun*));
memset(&fun_name_48, 0, sizeof(char*));
memset(&fun_47, 0, sizeof(struct sFun*));
memset(&fun_name_48, 0, sizeof(char*));
right_value55 = (void*)0;
memset(&fun2_49, 0, sizeof(struct sFun*));
memset(&fun_name2_50, 0, sizeof(char*));
memset(&fun2_49, 0, sizeof(struct sFun*));
memset(&fun_name2_50, 0, sizeof(char*));
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&i_51, 0, sizeof(int));
right_value58 = (void*)0;
memset(&new_fun_name_52, 0, sizeof(char*));
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
memset(&result_53, 0, sizeof(_Bool));
right_value62 = (void*)0;
memset(&come_value_54, 0, sizeof(struct CVALUE*));
memset(&left_value2_55, 0, sizeof(char*));
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&type2_59, 0, sizeof(struct sType*));
right_value72 = (void*)0;
memset(&type3_60, 0, sizeof(struct sType*));
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(generics_type_29->mNoSolvedGenericsType->v1) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_32=((void*)0);
    if(_if_conditional93=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(type->mClass->mName))));
        right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj29=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_39=((struct sGenericsFun*)(right_value49=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_fun_39) {
            if(_if_conditional109=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(fun_name2_33)))),generics_fun_39,obj_type_35,info),            right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional109) {
                __result30__ = (_Bool)0;
                none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_33 = come_decrement_ref_count2(fun_name2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result30__;
            }
            operator_fun_32=((struct sFun*)(right_value51=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
            come_call_finalizer2(sFun_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        else {
            if(_if_conditional129=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional129) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value52=create_equals_automatically(obj_type_35,"equals",info)));
                fun_43=multiple_assign_var1->v1;
                fun_name_44=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value53=create_operator_equals_automatically(obj_type_35,"operator_equals",info)));
                fun2_45=multiple_assign_var2->v1;
                fun_name2_46=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                operator_fun_32=fun2_45;
                fun_name_44 = come_decrement_ref_count2(fun_name_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_46 = come_decrement_ref_count2(fun_name2_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional131=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional131) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value54=create_equals_automatically(obj_type_35,"not_equals",info)));
                    fun_47=multiple_assign_var3->v1;
                    fun_name_48=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value55=create_operator_not_equals_automatically(obj_type_35,"operator_not_equals",info)));
                    fun2_49=multiple_assign_var4->v1;
                    fun_name2_50=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    operator_fun_32=fun2_49;
                    fun_name_48 = come_decrement_ref_count2(fun_name_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_50 = come_decrement_ref_count2(fun_name2_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    operator_fun_32=((struct sFun*)(right_value56=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
                    come_call_finalizer2(sFun_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj30=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value57=create_method_name(type,(_Bool)0,fun_name,info))));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_51=128-1;        i_51>=1;        i_51--        ){
            new_fun_name_52=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("%s_v%d",fun_name2_33,i_51))));
            right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_32=((struct sFun*)(right_value59=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_52)));
            come_call_finalizer2(sFun_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(operator_fun_32) {
                __dec_obj31=fun_name2_33;
                fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(new_fun_name_52))));
                __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_52 = come_decrement_ref_count2(new_fun_name_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_52 = come_decrement_ref_count2(new_fun_name_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional133=operator_fun_32==((void*)0),        _if_conditional133) {
            operator_fun_32=((struct sFun*)(right_value61=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
            come_call_finalizer2(sFun_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    result_53=(_Bool)0;
    if(operator_fun_32) {
        come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value62=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 85, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value64=xsprintf("\%s is assigned to",((char*)(right_value63=string_to_string(fun_name2_33)))))),((struct sType*)(right_value65=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0))),left_value->type,left_value,(_Bool)0,info);
        right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional139=((struct sType*)(right_value66=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0)))->mHeap&&left_value->type->mHeap,        come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional139) {
            std_move(((struct sType*)(right_value67=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0))),left_value->type,left_value,info);
            come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj32=left_value2_55;
            left_value2_55=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("%s",left_value->c_value))));
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj33=left_value2_55;
            left_value2_55=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(left_value->c_value))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj34=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s(%s)",fun_name2_33,left_value2_55))));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type2_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(operator_fun_32->mResultType))));
        come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type3_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=solve_generics(type2_59,generics_type_29,info))));
        come_call_finalizer2(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj35=come_value_54->type;
        come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(type3_60))));
        come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_54->var=((void*)0);
        if(type3_60->mHeap) {
            __dec_obj36=come_value_54->c_value;
            come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value74=append_object_to_right_values(come_value_54->c_value,(struct sType*)come_increment_ref_count(type3_60),info))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj37=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value75=append_stackframe(come_value_54->c_value,come_value_54->type,info))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_54->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
        result_53=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_55 = come_decrement_ref_count2(left_value2_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type3_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result38__ = result_53;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_33 = come_decrement_ref_count2(fun_name2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result38__;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_33 = come_decrement_ref_count2(fun_name2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sType* __result7__;
void* right_value10;
struct sType* result_5;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value13;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional27;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
char* __dec_obj9;
_Bool _if_conditional29;
void* right_value22;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional33;
void* right_value30;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value31;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional48;
void* right_value38;
struct list$1charph* __dec_obj22;
_Bool _if_conditional52;
void* right_value39;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value40;
struct sNode* __dec_obj24;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value41;
struct sNode* __dec_obj25;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value42;
char* __dec_obj26;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value43;
char* __dec_obj27;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value13 = (void*)0;
right_value14 = (void*)0;
right_value15 = (void*)0;
right_value22 = (void*)0;
right_value30 = (void*)0;
right_value31 = (void*)0;
right_value38 = (void*)0;
right_value39 = (void*)0;
right_value40 = (void*)0;
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            __dec_obj7=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            __dec_obj8=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(self->mGenericsName))));
            __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional29) {
            __dec_obj13=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional33) {
            __dec_obj17=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional47=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional47) {
            __dec_obj18=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional48) {
            __dec_obj22=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional52) {
            __dec_obj23=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional54) {
            __dec_obj24=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNode_clone(self->mAlignas))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value40) { right_value40 = come_decrement_ref_count2(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mException=self->mException;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional78=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional78) {
            __dec_obj25=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mSizeNum))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value41) { right_value41 = come_decrement_ref_count2(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional81=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional81) {
            __dec_obj26=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(self->mOriginalTypeName))));
            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional90=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional90) {
            __dec_obj27=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mAsmName))));
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result24__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result24__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional6) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional9) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional10) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional18) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional19) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional20) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional21) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional11) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional13) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result8__;
void* right_value11;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value12;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
right_value12 = (void*)0;
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    __dec_obj6=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result9__ = __result_obj__ = result_12;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result9__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional25) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
struct list$1sTypeph* __result10__;
void* right_value16;
void* right_value17;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value21;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
right_value17 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
right_value21 = (void*)0;
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(it_14->item)))));
                    come_call_finalizer2(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_14=it_14->next;
                }
                __result13__ = __result_obj__ = result_13;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result13__;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result11__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional31;
void* right_value18;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj10;
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj11;
void* right_value20;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj12;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value19 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
right_value20 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj10=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj11=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj12=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_17;
                                self->tail=litem_17;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result12__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional34;
struct list$1sNodeph* __result14__;
void* right_value23;
void* right_value24;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value29;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value29 = (void*)0;
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(it_19->item)))));
                    if(right_value29) { right_value29 = come_decrement_ref_count2(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_19=it_19->next;
                }
                __result19__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result19__;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result15__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result15__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional35;
void* right_value25;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj14;
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj15;
void* right_value27;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value26 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value27 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj14=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj15=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj16=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result16__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result16__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional37;
struct sNode* __result17__;
void* right_value28;
struct sNode* result_23;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value28) { right_value28 = come_decrement_ref_count2(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional38=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional38) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->kind=self->kind;
                        }
                        __result18__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result18__;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional49;
struct list$1charph* __result20__;
void* right_value32;
void* right_value33;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value37;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value37 = (void*)0;
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value37=string_clone(it_25->item)))));
                    right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_25=it_25->next;
                }
                __result23__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result23__;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result21__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result21__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional50;
void* right_value34;
struct list_item$1charph* litem_26;
char* __dec_obj19;
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_27;
char* __dec_obj20;
void* right_value36;
struct list_item$1charph* litem_28;
char* __dec_obj21;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value35 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value36 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=self->len==0,                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj19=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional51=self->len==1,                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj20=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj21=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result22__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result22__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
        __result25__ = self->len;
        return __result25__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct sGenericsFun* __result26__;
_Bool _if_conditional106;
_Bool _if_conditional107;
struct sGenericsFun* __result27__;
struct sGenericsFun* __result28__;
struct sGenericsFun* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional94=self->item_existance[it_38],                _if_conditional94) {
                    if(_if_conditional95=string_equals(self->keys[it_38],key),                    _if_conditional95) {
                        __result26__ = __result_obj__ = self->items[it_38];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result26__;
                    }
                    it_38++;
                    if(_if_conditional106=it_38>=self->size,                    _if_conditional106) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional107=it_38==hash_37,                        _if_conditional107) {
                            __result27__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result27__;
                        }
                    }
                }
                else {
                    __result28__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result28__;
                }
            }
            __result29__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result29__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional96=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional96) {
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional97=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional97) {
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional98=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional98) {
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional99=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional99) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional100=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional100) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional101) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional102) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional103) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional104) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional105=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional105) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_40;
unsigned int hash_41;
unsigned int it_42;
_Bool _while_condtional8;
_Bool _if_conditional110;
_Bool _if_conditional111;
struct sFun* __result31__;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct sFun* __result32__;
struct sFun* __result33__;
struct sFun* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_40, 0, sizeof(struct sFun*));
memset(&hash_41, 0, sizeof(unsigned int));
memset(&it_42, 0, sizeof(unsigned int));
                memset(&default_value_40,0,sizeof(struct sFun*));
                hash_41=string_get_hash_key(((char*)key))%self->size;
                it_42=hash_41;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional110=self->item_existance[it_42],                    _if_conditional110) {
                        if(_if_conditional111=string_equals(self->keys[it_42],key),                        _if_conditional111) {
                            __result31__ = __result_obj__ = self->items[it_42];
                            come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result31__;
                        }
                        it_42++;
                        if(_if_conditional127=it_42>=self->size,                        _if_conditional127) {
                            it_42=0;
                        }
                        else {
                            if(_if_conditional128=it_42==hash_41,                            _if_conditional128) {
                                __result32__ = __result_obj__ = default_value_40;
                                come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result32__;
                            }
                        }
                    }
                    else {
                        __result33__ = __result_obj__ = default_value_40;
                        come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result33__;
                    }
                }
                __result34__ = __result_obj__ = default_value_40;
                come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result34__;
                come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional112=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional112) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional113=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional113) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional114=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional114) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional115=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional115) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional116=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional116) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional117=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional117) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional118=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional118) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional121=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional121) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional122=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional122) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional123=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional123) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional124=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional124) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional125=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional125) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional126=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional126) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional119;
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional119=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional119) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional120=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional120) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional130=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional130) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional135;
_Bool _if_conditional136;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional135=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional135) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional136=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional136) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional137;
struct list_item$1sTypeph* it_56;
int i_57;
_Bool _while_condtional9;
_Bool _if_conditional138;
struct sType* __result35__;
struct sType* default_value_58;
struct sType* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_57, 0, sizeof(int));
memset(&default_value_58, 0, sizeof(struct sType*));
            if(_if_conditional137=position<0,            _if_conditional137) {
                position+=self->len;
            }
            it_56=self->head;
            i_57=0;
            while(_while_condtional9=it_56!=((void*)0),            _while_condtional9) {
                if(_if_conditional138=position==i_57,                _if_conditional138) {
                    __result35__ = __result_obj__ = it_56->item;
                    return __result35__;
                }
                it_56=it_56->next;
                i_57++;
            }
            memset(&default_value_58,0,sizeof(struct sType*));
            __result36__ = __result_obj__ = default_value_58;
            come_call_finalizer2(sType_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result36__;
            come_call_finalizer2(sType_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional141;
void* right_value76;
struct list_item$1CVALUEph* litem_61;
struct CVALUE* __dec_obj38;
_Bool _if_conditional143;
void* right_value77;
struct list_item$1CVALUEph* litem_62;
struct CVALUE* __dec_obj39;
void* right_value78;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj40;
struct list$1CVALUEph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1CVALUEph*));
right_value77 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1CVALUEph*));
right_value78 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional141=self->len==0,            _if_conditional141) {
                litem_61=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value76=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 225, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_61->prev=((void*)0);
                litem_61->next=((void*)0);
                __dec_obj38=litem_61->item;
                litem_61->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_61;
                self->head=litem_61;
            }
            else {
                if(_if_conditional143=self->len==1,                _if_conditional143) {
                    litem_62=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value77=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 235, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_62->prev=self->head;
                    litem_62->next=((void*)0);
                    __dec_obj39=litem_62->item;
                    litem_62->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_62;
                    self->head->next=litem_62;
                }
                else {
                    litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value78=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 245, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_63->prev=self->tail;
                    litem_63->next=((void*)0);
                    __dec_obj40=litem_63->item;
                    litem_63->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_63;
                    self->tail=litem_63;
                }
            }
            self->len++;
            __result37__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result37__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional142=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional142) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj41;
void* right_value79;
char* __dec_obj42;
void* right_value80;
char* __dec_obj43;
struct sReturnNode* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    __dec_obj41=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj42=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value79=string_clone(value_source))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(info->sname))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result39__ = __result_obj__ = self;
    come_call_finalizer2(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result39__;
    come_call_finalizer2(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
int __result40__;
memset(&__result_obj__, 0, sizeof(void*));
    __result40__ = self->sline;
    return __result40__;
}

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value81;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result41__ = __result_obj__ = ((char*)(right_value81=__builtin_string(self->sname)));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result41__;
}

char* sReturnNode_kind(){
void* __result_obj__;
void* right_value82;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(right_value82=__builtin_string("sReturnNode")));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}

_Bool sReturnNode_terminated(){
void* __result_obj__;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = (_Bool)0;
    return __result43__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional147;
struct sFun* come_fun_64;
void* right_value83;
struct sType* result_type_65;
void* right_value84;
struct sType* result_type2_66;
struct sType* result_type3_67;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool __result44__;
void* right_value85;
struct CVALUE* come_value_68;
_Bool _if_conditional150;
int right_value_id_69;
_Bool _if_conditional151;
void* right_value86;
struct sType* come_value_type_70;
void* right_value87;
struct sType* __dec_obj44;
static int num_result_71=0;
void* right_value88;
char* var_name_72;
int num_result_stack_73;
_Bool _if_conditional152;
void* right_value89;
void* right_value90;
_Bool _if_conditional153;
void* right_value91;
struct sFun* come_fun_74;
_Bool _if_conditional154;
void* right_value92;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_64, 0, sizeof(struct sFun*));
right_value83 = (void*)0;
memset(&result_type_65, 0, sizeof(struct sType*));
right_value84 = (void*)0;
memset(&result_type2_66, 0, sizeof(struct sType*));
memset(&result_type3_67, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&come_value_68, 0, sizeof(struct CVALUE*));
memset(&right_value_id_69, 0, sizeof(int));
right_value86 = (void*)0;
memset(&come_value_type_70, 0, sizeof(struct sType*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&var_name_72, 0, sizeof(char*));
memset(&num_result_stack_73, 0, sizeof(int));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&come_fun_74, 0, sizeof(struct sFun*));
right_value92 = (void*)0;
    if(self->value) {
        come_fun_64=info->come_fun;
        result_type_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(come_fun_64->mResultType))));
        come_call_finalizer2(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=solve_generics(result_type_65,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type3_67=result_type2_66->mNoSolvedGenericsType->v1;
        if(result_type2_66->mNoSolvedGenericsType->v1) {
            result_type3_67=result_type2_66->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_67=result_type2_66;
        }
        if(_if_conditional149=!node_compile(self->value,info),        _if_conditional149) {
            __result44__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result44__;
        }
        come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional150=come_value_68->type->mHeap&&come_value_68->var==((void*)0),        _if_conditional150) {
            right_value_id_69=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_68->c_value));
            if(_if_conditional151=right_value_id_69!=-1,            _if_conditional151) {
                remove_object_from_right_values(right_value_id_69,info);
            }
        }
        come_value_type_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=solve_generics(come_value_68->type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj44=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(come_value_68->type))));
        come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        var_name_72=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("__result%d__",++num_result_71))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        num_result_stack_73=num_result_71;
        if(_if_conditional152=result_type2_66->mPointerNum>0,        _if_conditional152) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value89=make_define_var(result_type2_66,var_name_72,(_Bool)0,info))));
            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_72,come_value_68->c_value);
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value90=make_define_var(result_type2_66,var_name_72,(_Bool)0,info))));
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = %s;\n",var_name_72,come_value_68->c_value);
        }
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_64->mBlock,info,come_value_68->var,(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        caller_end(info);
        if(_if_conditional153=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional153) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value91=xsprintf("come_heap_final();\n"))));
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return __result%d__;\n",num_result_stack_73);
        come_call_finalizer2(sType_finalize,result_type_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,come_value_type_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_72 = come_decrement_ref_count2(var_name_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_74=info->come_fun;
        caller_end(info);
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_74->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(_if_conditional154=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional154) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value92=xsprintf("come_heap_final();\n"))));
            right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    __result45__ = (_Bool)1;
    return __result45__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value93;
char* __dec_obj45;
struct sLineNode* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(info->sname))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result46__ = __result_obj__ = self;
    come_call_finalizer2(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result46__;
    come_call_finalizer2(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLineNode_sline(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    __result47__ = self->sline;
    return __result47__;
}

char* sLineNode_sname(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value94;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    __result48__ = __result_obj__ = ((char*)(right_value94=__builtin_string(self->sname)));
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result48__;
}

_Bool sLineNode_terminated(){
void* __result_obj__;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = (_Bool)0;
    return __result49__;
}

char* sLineNode_kind(){
void* __result_obj__;
void* right_value95;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    __result50__ = __result_obj__ = ((char*)(right_value95=__builtin_string("sLineNode")));
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value96;
struct CVALUE* come_value_75;
void* right_value97;
char* __dec_obj46;
void* right_value98;
void* right_value99;
struct sType* __dec_obj47;
_Bool __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&come_value_75, 0, sizeof(struct CVALUE*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
    come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value96=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 279, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj46=come_value_75->c_value;
    come_value_75->c_value=(char*)come_increment_ref_count(((char*)(right_value97=xsprintf("%d",info->sline))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj47=come_value_75->type;
    come_value_75->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 282, "struct sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_75->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_75));
    add_come_last_code(info,"%s;\n",come_value_75->c_value);
    __result51__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result51__;
    come_call_finalizer2(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value100;
char* __dec_obj48;
struct sSNameNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result52__ = __result_obj__ = self;
    come_call_finalizer2(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer2(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sSNameNode_sline(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = self->sline;
    return __result53__;
}

char* sSNameNode_sname(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value101;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    __result54__ = __result_obj__ = ((char*)(right_value101=__builtin_string(self->sname)));
    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sSNameNode_terminated(){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    __result55__ = (_Bool)0;
    return __result55__;
}

char* sSNameNode_kind(){
void* __result_obj__;
void* right_value102;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
    __result56__ = __result_obj__ = ((char*)(right_value102=__builtin_string("sSNameNode")));
    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value103;
struct CVALUE* come_value_76;
void* right_value104;
char* __dec_obj49;
void* right_value105;
void* right_value106;
struct sType* __dec_obj50;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&come_value_76, 0, sizeof(struct CVALUE*));
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
    come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value103=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 330, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj49=come_value_76->c_value;
    come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("\"%s\"",info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj50=come_value_76->type;
    come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value105=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 333, "struct sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_76->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
    add_come_last_code(info,"%s;\n",come_value_76->c_value);
    __result57__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result57__;
    come_call_finalizer2(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value107;
char* __dec_obj51;
struct sFuncNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result58__ = __result_obj__ = self;
    come_call_finalizer2(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result58__;
    come_call_finalizer2(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sFuncNode_sline(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = self->sline;
    return __result59__;
}

char* sFuncNode_sname(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value108;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
    __result60__ = __result_obj__ = ((char*)(right_value108=__builtin_string(self->sname)));
    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
}

_Bool sFuncNode_terminated(){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    __result61__ = (_Bool)0;
    return __result61__;
}

char* sFuncNode_kind(){
void* __result_obj__;
void* right_value109;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
    __result62__ = __result_obj__ = ((char*)(right_value109=__builtin_string("sFuncNode")));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value110;
struct CVALUE* come_value_77;
void* right_value111;
char* __dec_obj52;
void* right_value112;
void* right_value113;
struct sType* __dec_obj53;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&come_value_77, 0, sizeof(struct CVALUE*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
    come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 381, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=come_value_77->c_value;
    come_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_77->type;
    come_value_77->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value112=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 384, "struct sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_77->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
    add_come_last_code(info,"%s;\n",come_value_77->c_value);
    __result63__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result63__;
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value114;
char* __dec_obj54;
struct sCallerFuncNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
    self->sline=info->sline;
    __dec_obj54=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(info->sname))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result64__ = __result_obj__ = self;
    come_call_finalizer2(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result64__;
    come_call_finalizer2(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerFuncNode_sline(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    __result65__ = self->sline;
    return __result65__;
}

char* sCallerFuncNode_sname(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value115;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
    __result66__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

_Bool sCallerFuncNode_terminated(){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    __result67__ = (_Bool)0;
    return __result67__;
}

char* sCallerFuncNode_kind(){
void* __result_obj__;
void* right_value116;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
    __result68__ = __result_obj__ = ((char*)(right_value116=__builtin_string("sCallerFuncNode")));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value117;
struct CVALUE* come_value_78;
_Bool _if_conditional167;
void* right_value118;
char* __dec_obj55;
void* right_value119;
char* __dec_obj56;
void* right_value120;
void* right_value121;
struct sType* __dec_obj57;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&come_value_78, 0, sizeof(struct CVALUE*));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
    come_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 433, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(info->caller_fun) {
        __dec_obj55=come_value_78->c_value;
        come_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("\"%s\"",info->caller_fun->mName))));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj56=come_value_78->c_value;
        come_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("\"\""))));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj57=come_value_78->type;
    come_value_78->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value120=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 441, "struct sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_78->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
    add_come_last_code(info,"%s;\n",come_value_78->c_value);
    __result69__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result69__;
    come_call_finalizer2(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value122;
char* __dec_obj58;
struct sCallerLineNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result70__ = __result_obj__ = self;
    come_call_finalizer2(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result70__;
    come_call_finalizer2(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerLineNode_sline(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = self->sline;
    return __result71__;
}

char* sCallerLineNode_sname(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value123;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    __result72__ = __result_obj__ = ((char*)(right_value123=__builtin_string(self->sname)));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result72__;
}

_Bool sCallerLineNode_terminated(){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = (_Bool)0;
    return __result73__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value124;
struct CVALUE* come_value_79;
void* right_value125;
char* __dec_obj59;
void* right_value126;
void* right_value127;
struct sType* __dec_obj60;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
memset(&come_value_79, 0, sizeof(struct CVALUE*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
    come_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value124=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 485, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=come_value_79->c_value;
    come_value_79->c_value=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%d",info->caller_line))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj60=come_value_79->type;
    come_value_79->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value126=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 488, "struct sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_79->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_79));
    add_come_last_code(info,"%s;\n",come_value_79->c_value);
    __result74__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result74__;
    come_call_finalizer2(CVALUE_finalize,come_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(){
void* __result_obj__;
void* right_value128;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(right_value128=__builtin_string("sCallerLineNode")));
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value129;
char* __dec_obj61;
struct sCallerSNameNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    self->sline=info->sline;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string(info->sname))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerSNameNode_sline(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = self->sline;
    return __result77__;
}

char* sCallerSNameNode_sname(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value130;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value130=__builtin_string(self->sname)));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sCallerSNameNode_terminated(){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    __result79__ = (_Bool)0;
    return __result79__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value131;
struct CVALUE* come_value_80;
void* right_value132;
char* __dec_obj62;
void* right_value133;
void* right_value134;
struct sType* __dec_obj63;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&come_value_80, 0, sizeof(struct CVALUE*));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 536, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj62=come_value_80->c_value;
    come_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj63=come_value_80->type;
    come_value_80->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 539, "struct sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_80->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
    add_come_last_code(info,"%s;\n",come_value_80->c_value);
    __result80__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(){
void* __result_obj__;
void* right_value135;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value135=__builtin_string("sCallerSNameNode")));
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

struct sParentReturnNode* sParentReturnNode_initialize(struct sParentReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj64;
void* right_value136;
char* __dec_obj65;
void* right_value137;
char* __dec_obj66;
struct sParentReturnNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
    __dec_obj64=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj65=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(value_source))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(info->sname))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result82__ = __result_obj__ = self;
    come_call_finalizer2(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer2(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sParentReturnNode_sline(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = self->sline;
    return __result83__;
}

char* sParentReturnNode_sname(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value138;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value138=__builtin_string(self->sname)));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

_Bool sParentReturnNode_terminated(){
void* __result_obj__;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    __result85__ = (_Bool)0;
    return __result85__;
}

char* sParentReturnNode_kind(){
void* __result_obj__;
void* right_value139;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
    __result86__ = __result_obj__ = ((char*)(right_value139=__builtin_string("sParentReturnNode")));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sParentReturnNode_compile(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional177;
_Bool __result87__;
struct sFun* come_fun_81;
void* right_value140;
struct sType* result_type_82;
void* right_value141;
struct sType* result_type2_83;
struct sType* result_type3_84;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool __result88__;
void* right_value142;
struct CVALUE* come_value_85;
_Bool _if_conditional181;
int right_value_id_86;
_Bool _if_conditional182;
void* right_value143;
char* __dec_obj67;
void* right_value144;
char* var_name2_87;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value148;
_Bool _if_conditional183;
struct sFun* come_fun_88;
void* right_value149;
char* var_name2_89;
void* right_value150;
void* right_value151;
void* right_value152;
_Bool _if_conditional184;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_81, 0, sizeof(struct sFun*));
right_value140 = (void*)0;
memset(&result_type_82, 0, sizeof(struct sType*));
right_value141 = (void*)0;
memset(&result_type2_83, 0, sizeof(struct sType*));
memset(&result_type3_84, 0, sizeof(struct sType*));
right_value142 = (void*)0;
memset(&come_value_85, 0, sizeof(struct CVALUE*));
memset(&right_value_id_86, 0, sizeof(int));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&var_name2_87, 0, sizeof(char*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
memset(&come_fun_88, 0, sizeof(struct sFun*));
right_value149 = (void*)0;
memset(&var_name2_89, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
    if(_if_conditional177=info->current_stack_frame_struct==((void*)0),    _if_conditional177) {
        err_msg(info,"not in method block");
        __result87__ = (_Bool)0;
        return __result87__;
    }
    come_fun_81=info->come_fun;
    result_type_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(come_fun_81->mResultType))));
    come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=solve_generics(result_type_82,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_84=result_type2_83->mNoSolvedGenericsType->v1;
    if(result_type2_83->mNoSolvedGenericsType->v1) {
        result_type3_84=result_type2_83->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_84=result_type2_83;
    }
    if(self->value) {
        if(_if_conditional180=!node_compile(self->value,info),        _if_conditional180) {
            __result88__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result88__;
        }
        come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional181=come_value_85->type->mHeap&&come_value_85->var==((void*)0),        _if_conditional181) {
            right_value_id_86=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_85->c_value));
            if(_if_conditional182=right_value_id_86!=-1,            _if_conditional182) {
                remove_object_from_right_values(right_value_id_86,info);
            }
        }
        __dec_obj67=come_value_85->c_value;
        come_value_85->c_value=(char*)come_increment_ref_count(((char*)(right_value143=increment_ref_count_object(come_value_85->type,come_value_85->c_value,info))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        free_objects_on_return(come_fun_81->mBlock,info,come_value_85->var,(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        var_name2_87=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,((char*)(right_value148=xsprintf("            \%s->__method_block_result_kind__ = 3;\n            \%s->__method_block_return_value__ = \%s;\n",((char*)(right_value145=string_to_string(var_name2_87))),((char*)(right_value146=string_to_string(var_name2_87))),((char*)(right_value147=string_to_string(come_value_85->c_value)))))));
        right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional183=string_operator_equals(result_type3_84->mClass->mName,"void")&&result_type3_84->mPointerNum==0,        _if_conditional183) {
            add_come_code(info,"return;");
        }
        else {
            add_come_code(info,"return (void*)0;");
        }
        come_call_finalizer2(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name2_87 = come_decrement_ref_count2(var_name2_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_88=info->come_fun;
        free_objects_on_return(come_fun_88->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        var_name2_89=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,((char*)(right_value152=xsprintf("            \%s->__method_block_result_kind__ = 4;\n            \%s->__method_block_return_value__ = 0;\n",((char*)(right_value150=string_to_string(var_name2_89))),((char*)(right_value151=string_to_string(var_name2_89)))))));
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional184=string_operator_equals(result_type3_84->mClass->mName,"void")&&result_type3_84->mPointerNum==0,        _if_conditional184) {
            add_come_code(info,"return;");
        }
        else {
            add_come_code(info,"return (void*)0;");
        }
        var_name2_89 = come_decrement_ref_count2(var_name2_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->last_statment_is_return=(_Bool)1;
    __result89__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result89__;
    come_call_finalizer2(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParentBreakNode* sParentBreakNode_initialize(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value153;
char* __dec_obj68;
struct sParentBreakNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
    self->sline=info->sline;
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(info->sname))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result90__ = __result_obj__ = self;
    come_call_finalizer2(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer2(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParentBreakNode_sline(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
int __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    __result91__ = self->sline;
    return __result91__;
}

char* sParentBreakNode_sname(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value154;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
    __result92__ = __result_obj__ = ((char*)(right_value154=__builtin_string(self->sname)));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

_Bool sParentBreakNode_terminated(){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = (_Bool)0;
    return __result93__;
}

char* sParentBreakNode_kind(){
void* __result_obj__;
void* right_value155;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sParentBreakNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sParentBreakNode_compile(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional186;
_Bool __result95__;
struct sFun* come_fun_90;
void* right_value156;
struct sType* result_type_91;
void* right_value157;
struct sType* result_type2_92;
struct sType* result_type3_93;
_Bool _if_conditional187;
void* right_value158;
char* var_name2_94;
void* right_value159;
void* right_value160;
void* right_value161;
_Bool _if_conditional188;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_90, 0, sizeof(struct sFun*));
right_value156 = (void*)0;
memset(&result_type_91, 0, sizeof(struct sType*));
right_value157 = (void*)0;
memset(&result_type2_92, 0, sizeof(struct sType*));
memset(&result_type3_93, 0, sizeof(struct sType*));
right_value158 = (void*)0;
memset(&var_name2_94, 0, sizeof(char*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
    if(_if_conditional186=info->current_stack_frame_struct==((void*)0),    _if_conditional186) {
        err_msg(info,"not in method block");
        __result95__ = (_Bool)0;
        return __result95__;
    }
    come_fun_90=info->come_fun;
    result_type_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(come_fun_90->mResultType))));
    come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=solve_generics(result_type_91,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_93=result_type2_92->mNoSolvedGenericsType->v1;
    if(result_type2_92->mNoSolvedGenericsType->v1) {
        result_type3_93=result_type2_92->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_93=result_type2_92;
    }
    free_objects_on_return(come_fun_90->mBlock,info,((void*)0),(_Bool)0);
    free_right_value_objects(info,(_Bool)0);
    var_name2_94=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,((char*)(right_value161=xsprintf("        \%s->__method_block_result_kind__ = 1;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value159=string_to_string(var_name2_94))),((char*)(right_value160=string_to_string(var_name2_94)))))));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional188=string_operator_equals(result_type3_93->mClass->mName,"void")&&result_type3_93->mPointerNum==0,    _if_conditional188) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result96__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_94 = come_decrement_ref_count2(var_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer2(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_94 = come_decrement_ref_count2(var_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sParentContinueNode* sParentContinueNode_initialize(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __dec_obj69;
struct sParentContinueNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    self->sline=info->sline;
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(info->sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result97__ = __result_obj__ = self;
    come_call_finalizer2(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParentContinueNode_sline(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = self->sline;
    return __result98__;
}

char* sParentContinueNode_sname(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value163=__builtin_string(self->sname)));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

_Bool sParentContinueNode_terminated(){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sParentContinueNode_kind(){
void* __result_obj__;
void* right_value164;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    __result101__ = __result_obj__ = ((char*)(right_value164=__builtin_string("sParentContinueNode")));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool sParentContinueNode_compile(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional190;
_Bool __result102__;
struct sFun* come_fun_95;
void* right_value165;
struct sType* result_type_96;
void* right_value166;
struct sType* result_type2_97;
struct sType* result_type3_98;
_Bool _if_conditional191;
void* right_value167;
char* var_name2_99;
void* right_value168;
void* right_value169;
void* right_value170;
_Bool _if_conditional192;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_95, 0, sizeof(struct sFun*));
right_value165 = (void*)0;
memset(&result_type_96, 0, sizeof(struct sType*));
right_value166 = (void*)0;
memset(&result_type2_97, 0, sizeof(struct sType*));
memset(&result_type3_98, 0, sizeof(struct sType*));
right_value167 = (void*)0;
memset(&var_name2_99, 0, sizeof(char*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
    if(_if_conditional190=info->current_stack_frame_struct==((void*)0),    _if_conditional190) {
        err_msg(info,"not in method block");
        __result102__ = (_Bool)0;
        return __result102__;
    }
    come_fun_95=info->come_fun;
    result_type_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(come_fun_95->mResultType))));
    come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=solve_generics(result_type_96,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_98=result_type2_97->mNoSolvedGenericsType->v1;
    if(result_type2_97->mNoSolvedGenericsType->v1) {
        result_type3_98=result_type2_97->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_98=result_type2_97;
    }
    free_objects_on_return(come_fun_95->mBlock,info,((void*)0),(_Bool)0);
    free_right_value_objects(info,(_Bool)0);
    var_name2_99=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,((char*)(right_value170=xsprintf("        \%s->__method_block_result_kind__ = 2;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value168=string_to_string(var_name2_99))),((char*)(right_value169=string_to_string(var_name2_99)))))));
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional192=string_operator_equals(result_type3_98->mClass->mName,"void")&&result_type3_98->mPointerNum==0,    _if_conditional192) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result103__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_99 = come_decrement_ref_count2(var_name2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result103__;
    come_call_finalizer2(sType_finalize,result_type_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_99 = come_decrement_ref_count2(var_name2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj70;
void* right_value171;
char* __dec_obj71;
struct sDerefferenceNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    __dec_obj70=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj71=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(info->sname))));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __result104__ = __result_obj__ = self;
    come_call_finalizer2(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result104__;
    come_call_finalizer2(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
int __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = self->sline;
    return __result105__;
}

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value172;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    __result106__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self->sname)));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sDerefferenceNode_terminated(){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    __result107__ = (_Bool)0;
    return __result107__;
}

char* sDerefferenceNode_kind(){
void* __result_obj__;
void* right_value173;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
    __result108__ = __result_obj__ = ((char*)(right_value173=__builtin_string("sDerefferenceNode")));
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_100;
_Bool _if_conditional195;
_Bool __result109__;
void* right_value174;
struct CVALUE* left_value_101;
struct sType* type_102;
char* fun_name_103;
_Bool calling_fun_104;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value175;
struct CVALUE* come_value_105;
void* right_value176;
char* __dec_obj72;
void* right_value177;
struct sType* __dec_obj73;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_100, 0, sizeof(struct sNode*));
right_value174 = (void*)0;
memset(&left_value_101, 0, sizeof(struct CVALUE*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&fun_name_103, 0, sizeof(char*));
memset(&calling_fun_104, 0, sizeof(_Bool));
right_value175 = (void*)0;
memset(&come_value_105, 0, sizeof(struct CVALUE*));
right_value176 = (void*)0;
right_value177 = (void*)0;
    value_100=self->value;
    if(_if_conditional195=!node_compile(value_100,info),    _if_conditional195) {
        __result109__ = (_Bool)0;
        return __result109__;
    }
    left_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_102=(struct sType*)come_increment_ref_count(left_value_101->type);
    fun_name_103="operator_derefference";
    if(self->mQuote) {
        calling_fun_104=(_Bool)0;
    }
    else {
        calling_fun_104=operator_overload_fun_self(type_102,fun_name_103,left_value_101,info);
    }
    if(_if_conditional197=!calling_fun_104,    _if_conditional197) {
        come_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value175=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 890, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj72=come_value_105->c_value;
        come_value_105->c_value=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("*%s",left_value_101->c_value))));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj73=come_value_105->type;
        come_value_105->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(left_value_101->type))));
        come_call_finalizer2(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_105->type->mPointerNum--;
        come_value_105->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_105->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_105));
        come_call_finalizer2(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result110__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result110__;
    come_call_finalizer2(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj74;
void* right_value178;
char* __dec_obj75;
struct sRefferenceNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
    __dec_obj74=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string(info->sname))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result111__ = __result_obj__ = self;
    come_call_finalizer2(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result111__;
    come_call_finalizer2(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = self->sline;
    return __result112__;
}

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value179;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value179=__builtin_string(self->sname)));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sRefferenceNode_terminated(){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = (_Bool)0;
    return __result114__;
}

char* sRefferenceNode_kind(){
void* __result_obj__;
void* right_value180;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
    __result115__ = __result_obj__ = ((char*)(right_value180=__builtin_string("sRefferenceNode")));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result115__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_106;
_Bool _if_conditional200;
_Bool __result116__;
void* right_value181;
struct CVALUE* left_value_107;
void* right_value182;
struct CVALUE* come_value_108;
void* right_value183;
char* __dec_obj76;
void* right_value184;
struct sType* __dec_obj77;
_Bool __result117__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_106, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&left_value_107, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
memset(&come_value_108, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
right_value184 = (void*)0;
    value_106=self->value;
    if(_if_conditional200=!node_compile(value_106,info),    _if_conditional200) {
        __result116__ = (_Bool)0;
        return __result116__;
    }
    left_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 953, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj76=come_value_108->c_value;
    come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("&%s",left_value_107->c_value))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj77=come_value_108->type;
    come_value_108->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(left_value_107->type))));
    come_call_finalizer2(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_108->type->mPointerNum++;
    come_value_108->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_108->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
    __result117__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result117__;
    __result118__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result118__;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj78;
void* right_value185;
char* __dec_obj79;
struct sReverseNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
    __dec_obj78=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result119__ = __result_obj__ = self;
    come_call_finalizer2(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result119__;
    come_call_finalizer2(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = self->sline;
    return __result120__;
}

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value186;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
    __result121__ = __result_obj__ = ((char*)(right_value186=__builtin_string(self->sname)));
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result121__;
}

_Bool sReverseNode_terminated(){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = (_Bool)0;
    return __result122__;
}

char* sReverseNode_kind(){
void* __result_obj__;
void* right_value187;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
    __result123__ = __result_obj__ = ((char*)(right_value187=__builtin_string("sReverseNode")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_109;
_Bool _if_conditional203;
_Bool __result124__;
void* right_value188;
struct CVALUE* left_value_110;
void* right_value189;
struct CVALUE* come_value_111;
void* right_value190;
char* __dec_obj80;
void* right_value191;
struct sType* __dec_obj81;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_109, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
memset(&left_value_110, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
memset(&come_value_111, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
    value_109=self->value;
    if(_if_conditional203=!node_compile(value_109,info),    _if_conditional203) {
        __result124__ = (_Bool)0;
        return __result124__;
    }
    left_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1016, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj80=come_value_111->c_value;
    come_value_111->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("!%s",left_value_110->c_value))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj81=come_value_111->type;
    come_value_111->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(left_value_110->type))));
    come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_111->type->mPointerNum--;
    come_value_111->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_111->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_111));
    __result125__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result125__;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__;
struct sNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    stackframe();
    exit(3);
    __result126__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result126__;
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __dec_obj82;
void* right_value202;
struct list$1tuple2$2charphsNodephph* __dec_obj88;
void* right_value203;
char* __dec_obj89;
struct sFunCallNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
    __dec_obj82=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(fun_name))));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value202=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(info->sname))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result133__ = __result_obj__ = self;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result133__;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional204;
struct list$1tuple2$2charphsNodephph* __result127__;
void* right_value193;
void* right_value194;
struct list$1tuple2$2charphsNodephph* result_114;
struct list_item$1tuple2$2charphsNodephph* it_115;
_Bool _while_condtional11;
void* right_value201;
struct list$1tuple2$2charphsNodephph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&result_114, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_115, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value201 = (void*)0;
        if(_if_conditional204=self==((void*)0),        _if_conditional204) {
            __result127__ = __result_obj__ = ((void*)0);
            return __result127__;
        }
        result_114=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value194=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value193=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 141, "struct list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_115=self->head;
        while(_while_condtional11=it_115!=((void*)0),        _while_condtional11) {
            list$1tuple2$2charphsNodephph_add(result_114,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value201=tuple2$2charphsNodephp_clone(it_115->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_115=it_115->next;
        }
        __result132__ = __result_obj__ = result_114;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_114, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result132__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result128__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result128__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_112;
_Bool _while_condtional10;
struct list_item$1tuple2$2charphsNodephph* prev_it_113;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_112, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_113, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_112=self->head;
                while(_while_condtional10=it_112!=((void*)0),                _while_condtional10) {
                    prev_it_113=it_112;
                    it_112=it_112->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional205=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional205) {
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional206;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional206=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional206) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional207=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional207) {
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional208;
void* right_value195;
struct list_item$1tuple2$2charphsNodephph* litem_116;
struct tuple2$2charphsNodeph* __dec_obj83;
_Bool _if_conditional211;
void* right_value196;
struct list_item$1tuple2$2charphsNodephph* litem_117;
struct tuple2$2charphsNodeph* __dec_obj84;
void* right_value197;
struct list_item$1tuple2$2charphsNodephph* litem_118;
struct tuple2$2charphsNodeph* __dec_obj85;
struct list$1tuple2$2charphsNodephph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&litem_116, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value196 = (void*)0;
memset(&litem_117, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value197 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional208=self->len==0,                _if_conditional208) {
                    litem_116=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value195=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 155, "struct list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_116->prev=((void*)0);
                    litem_116->next=((void*)0);
                    __dec_obj83=litem_116->item;
                    litem_116->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_116;
                    self->head=litem_116;
                }
                else {
                    if(_if_conditional211=self->len==1,                    _if_conditional211) {
                        litem_117=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value196=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 165, "struct list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_117->prev=self->head;
                        litem_117->next=((void*)0);
                        __dec_obj84=litem_117->item;
                        litem_117->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_117;
                        self->head->next=litem_117;
                    }
                    else {
                        litem_118=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value197=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 175, "struct list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_118->prev=self->tail;
                        litem_118->next=((void*)0);
                        __dec_obj85=litem_118->item;
                        litem_118->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_118;
                        self->tail=litem_118;
                    }
                }
                self->len++;
                __result129__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result129__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional209=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional209) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional210=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional210) {
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional212;
struct tuple2$2charphsNodeph* __result130__;
void* right_value198;
struct tuple2$2charphsNodeph* result_119;
_Bool _if_conditional213;
void* right_value199;
char* __dec_obj86;
_Bool _if_conditional214;
void* right_value200;
struct sNode* __dec_obj87;
struct tuple2$2charphsNodeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
memset(&result_119, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value199 = (void*)0;
right_value200 = (void*)0;
                if(_if_conditional212=self==(void*)0,                _if_conditional212) {
                    __result130__ = __result_obj__ = (void*)0;
                    return __result130__;
                }
                result_119=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value198=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional213=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional213) {
                    __dec_obj86=result_119->v1;
                    result_119->v1=(char*)come_increment_ref_count(((char*)(right_value199=string_clone(self->v1))));
                    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional214=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional214) {
                    __dec_obj87=result_119->v2;
                    result_119->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value200=sNode_clone(self->v2))));
                    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value200) { right_value200 = come_decrement_ref_count2(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result131__ = __result_obj__ = result_119;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_119, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result131__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sFunCallNode_sline(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    __result134__ = self->sline;
    return __result134__;
}

char* sFunCallNode_sname(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value204;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    __result135__ = __result_obj__ = ((char*)(right_value204=__builtin_string(self->sname)));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sFunCallNode_terminated(){
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = (_Bool)0;
    return __result136__;
}

char* sFunCallNode_kind(){
void* __result_obj__;
void* right_value205;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    __result137__ = __result_obj__ = ((char*)(right_value205=__builtin_string("sFunCallNode")));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result137__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_120;
struct list$1tuple2$2charphsNodephph* params_121;
struct sVar* var__122;
_Bool _if_conditional218;
_Bool _if_conditional219;
struct sType* lambda_type_123;
void* right_value206;
struct sType* result_type_124;
void* right_value207;
void* right_value208;
struct list$1CVALUEph* come_params_127;
_Bool _if_conditional220;
_Bool __result140__;
int i_128;
struct list$1tuple2$2charphsNodephph* o2_saved_129;
struct tuple2$2charphsNodeph* it_132;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_135;
struct sNode* node_136;
_Bool _if_conditional225;
_Bool __result148__;
void* right_value209;
struct CVALUE* come_value_137;
void* right_value210;
_Bool _if_conditional226;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
void* right_value215;
_Bool _if_conditional227;
void* right_value216;
void* right_value217;
void* right_value218;
struct buffer* buf_138;
int j_139;
struct list$1CVALUEph* o2_saved_140;
struct CVALUE* it_143;
_Bool _if_conditional232;
void* right_value219;
struct CVALUE* come_value_146;
void* right_value220;
char* __dec_obj90;
_Bool _if_conditional233;
void* right_value221;
char* __dec_obj91;
void* right_value222;
struct sType* __dec_obj92;
_Bool _if_conditional234;
void* right_value223;
void* right_value224;
struct list$1CVALUEph* come_params_147;
struct list$1tuple2$2charphsNodephph* o2_saved_148;
struct tuple2$2charphsNodeph* it_149;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_150;
struct sNode* node_151;
_Bool _if_conditional235;
_Bool __result157__;
void* right_value225;
struct CVALUE* come_value_152;
void* right_value226;
void* right_value227;
struct buffer* buf_153;
int j_154;
struct list$1CVALUEph* o2_saved_155;
struct CVALUE* it_156;
_Bool _if_conditional236;
void* right_value228;
struct CVALUE* come_value_157;
void* right_value229;
char* __dec_obj93;
_Bool _if_conditional237;
void* right_value230;
void* right_value231;
struct sType* __dec_obj94;
_Bool _if_conditional238;
void* right_value232;
void* right_value233;
struct sType* __dec_obj95;
_Bool _if_conditional239;
void* right_value234;
void* right_value235;
struct sType* __dec_obj96;
_Bool _if_conditional240;
void* right_value236;
void* right_value237;
struct sType* __dec_obj97;
_Bool __result158__;
_Bool _if_conditional241;
void* right_value238;
char* __dec_obj98;
_Bool _if_conditional242;
void* right_value239;
char* __dec_obj99;
_Bool _if_conditional243;
char* p_158;
int version_159;
_Bool _while_condtional13;
_Bool _if_conditional244;
char* p2_160;
_Bool _while_condtional14;
int i_162;
void* right_value240;
char* new_fun_name_163;
void* right_value241;
_Bool _if_conditional245;
void* right_value242;
char* __dec_obj100;
_Bool _if_conditional246;
void* right_value243;
char* new_fun_name_164;
void* right_value244;
_Bool _if_conditional247;
void* right_value245;
char* __dec_obj101;
_Bool _if_conditional248;
_Bool __result159__;
int i_165;
void* right_value246;
char* new_fun_name_166;
void* right_value247;
_Bool _if_conditional249;
void* right_value248;
char* __dec_obj102;
void* right_value249;
struct sFun* fun_169;
_Bool _if_conditional254;
_Bool __result164__;
void* right_value250;
struct sType* result_type_170;
void* right_value251;
void* right_value252;
struct list$1sTypeph* param_types_171;
struct list$1sTypeph* o2_saved_172;
struct sType* it_175;
void* right_value253;
void* right_value254;
struct sType* it2_178;
void* right_value258;
void* right_value259;
struct sType* __dec_obj106;
void* right_value260;
void* right_value261;
struct list$1CVALUEph* come_params_182;
void* right_value262;
void* right_value268;
struct map$2charphCVALUEph* label_params_188;
int i_189;
struct list$1tuple2$2charphsNodephph* o2_saved_190;
struct tuple2$2charphsNodeph* it_191;
struct tuple2$2charphsNodeph* multiple_assign_var7;
char* label_192;
struct sNode* node_193;
_Bool _if_conditional265;
_Bool __result175__;
void* right_value269;
struct CVALUE* come_value_194;
void* right_value270;
_Bool _if_conditional266;
_Bool _if_conditional267;
int n_195;
struct list$1charph* o2_saved_196;
char* it_199;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
_Bool _if_conditional274;
void* right_value276;
_Bool _if_conditional275;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
_Bool _if_conditional276;
void* right_value282;
_Bool _if_conditional277;
void* right_value291;
_Bool _if_conditional325;
void* right_value292;
void* right_value293;
char* default_param_249;
void* right_value294;
char* param_name_250;
void* right_value295;
struct CVALUE* come_value_254;
_Bool _if_conditional332;
struct buffer* source_255;
char* p_256;
char* head_257;
int sline_258;
void* right_value296;
struct buffer* __dec_obj108;
void* right_value297;
struct sNode* node_259;
_Bool _if_conditional333;
_Bool __result213__;
struct buffer* __dec_obj109;
void* right_value298;
struct CVALUE* come_value_260;
void* right_value299;
void* right_value300;
void* right_value301;
void* right_value302;
void* right_value303;
_Bool _if_conditional334;
void* right_value304;
_Bool _if_conditional335;
_Bool __result214__;
_Bool _if_conditional336;
void* right_value305;
char* param_name_261;
void* right_value306;
struct CVALUE* come_value_262;
_Bool _if_conditional337;
void* right_value307;
void* right_value308;
void* right_value309;
void* right_value310;
void* right_value314;
_Bool _if_conditional345;
_Bool __result221__;
void* right_value315;
void* right_value316;
struct buffer* buf_266;
int j_267;
struct list$1CVALUEph* o2_saved_268;
struct CVALUE* it_269;
_Bool _if_conditional346;
void* right_value317;
struct CVALUE* come_value_270;
void* right_value318;
char* __dec_obj113;
void* right_value319;
struct sType* __dec_obj114;
_Bool _if_conditional347;
void* right_value320;
char* __dec_obj115;
_Bool _if_conditional348;
_Bool _if_conditional349;
void* right_value321;
char* __dec_obj116;
_Bool __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_120, 0, sizeof(char*));
memset(&params_121, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__122, 0, sizeof(struct sVar*));
memset(&lambda_type_123, 0, sizeof(struct sType*));
right_value206 = (void*)0;
memset(&result_type_124, 0, sizeof(struct sType*));
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&come_params_127, 0, sizeof(struct list$1CVALUEph*));
memset(&i_128, 0, sizeof(int));
memset(&o2_saved_129, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_132, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_135, 0, sizeof(char*));
memset(&node_136, 0, sizeof(struct sNode*));
memset(&label_135, 0, sizeof(char*));
memset(&node_136, 0, sizeof(struct sNode*));
right_value209 = (void*)0;
memset(&come_value_137, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&buf_138, 0, sizeof(struct buffer*));
memset(&j_139, 0, sizeof(int));
memset(&o2_saved_140, 0, sizeof(struct list$1CVALUEph*));
memset(&it_143, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&come_params_147, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_148, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_149, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_150, 0, sizeof(char*));
memset(&node_151, 0, sizeof(struct sNode*));
memset(&label_150, 0, sizeof(char*));
memset(&node_151, 0, sizeof(struct sNode*));
right_value225 = (void*)0;
memset(&come_value_152, 0, sizeof(struct CVALUE*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&buf_153, 0, sizeof(struct buffer*));
memset(&j_154, 0, sizeof(int));
memset(&o2_saved_155, 0, sizeof(struct list$1CVALUEph*));
memset(&it_156, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
memset(&come_value_157, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&p_158, 0, sizeof(char*));
memset(&version_159, 0, sizeof(int));
memset(&p2_160, 0, sizeof(char*));
memset(&i_162, 0, sizeof(int));
right_value240 = (void*)0;
memset(&new_fun_name_163, 0, sizeof(char*));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&new_fun_name_164, 0, sizeof(char*));
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&i_165, 0, sizeof(int));
right_value246 = (void*)0;
memset(&new_fun_name_166, 0, sizeof(char*));
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&fun_169, 0, sizeof(struct sFun*));
right_value250 = (void*)0;
memset(&result_type_170, 0, sizeof(struct sType*));
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&param_types_171, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_172, 0, sizeof(struct list$1sTypeph*));
memset(&it_175, 0, sizeof(struct sType*));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&it2_178, 0, sizeof(struct sType*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&come_params_182, 0, sizeof(struct list$1CVALUEph*));
right_value262 = (void*)0;
right_value268 = (void*)0;
memset(&label_params_188, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_189, 0, sizeof(int));
memset(&o2_saved_190, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_191, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_192, 0, sizeof(char*));
memset(&node_193, 0, sizeof(struct sNode*));
memset(&label_192, 0, sizeof(char*));
memset(&node_193, 0, sizeof(struct sNode*));
right_value269 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
memset(&n_195, 0, sizeof(int));
memset(&o2_saved_196, 0, sizeof(struct list$1charph*));
memset(&it_199, 0, sizeof(char*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&default_param_249, 0, sizeof(char*));
right_value294 = (void*)0;
memset(&param_name_250, 0, sizeof(char*));
right_value295 = (void*)0;
memset(&come_value_254, 0, sizeof(struct CVALUE*));
memset(&source_255, 0, sizeof(struct buffer*));
memset(&p_256, 0, sizeof(char*));
memset(&head_257, 0, sizeof(char*));
memset(&sline_258, 0, sizeof(int));
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&node_259, 0, sizeof(struct sNode*));
right_value298 = (void*)0;
memset(&come_value_260, 0, sizeof(struct CVALUE*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&param_name_261, 0, sizeof(char*));
right_value306 = (void*)0;
memset(&come_value_262, 0, sizeof(struct CVALUE*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
memset(&buf_266, 0, sizeof(struct buffer*));
memset(&j_267, 0, sizeof(int));
memset(&o2_saved_268, 0, sizeof(struct list$1CVALUEph*));
memset(&it_269, 0, sizeof(struct CVALUE*));
right_value317 = (void*)0;
memset(&come_value_270, 0, sizeof(struct CVALUE*));
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
    fun_name_120=(char*)come_increment_ref_count(self->fun_name);
    params_121=self->params;
    var__122=get_variable_from_table(info->lv_table,fun_name_120);
    if(_if_conditional218=var__122==((void*)0),    _if_conditional218) {
        var__122=get_variable_from_table(info->gv_table,fun_name_120);
    }
    if(var__122) {
        lambda_type_123=var__122->mType;
        result_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(lambda_type_123->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_124->mStatic=(_Bool)0;
        come_params_127=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value208=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value207=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1096, "struct list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional220=list$1sTypeph_length(lambda_type_123->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_121)&&!lambda_type_123->mVarArgs,        _if_conditional220) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_120,list$1sTypeph_length(lambda_type_123->mParamTypes),list$1tuple2$2charphsNodephph_length(params_121));
            __result140__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result140__;
        }
        i_128=0;
        for(        o2_saved_129=(params_121),it_132=list$1tuple2$2charphsNodephph_begin((o2_saved_129));        !list$1tuple2$2charphsNodephph_end((o2_saved_129));        it_132=list$1tuple2$2charphsNodephph_next((o2_saved_129))        ){
            multiple_assign_var5=it_132;
            label_135=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_136=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            if(_if_conditional225=!node_compile(node_136,info),            _if_conditional225) {
                __result148__ = (_Bool)0;
                label_135 = come_decrement_ref_count2(label_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_136) { node_136 = come_decrement_ref_count2(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result148__;
            }
            come_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional226=lambda_type_123->mVarArgs&&((struct sType*)(right_value210=list$1sTypephp_operator_load_element(lambda_type_123->mParamTypes,i_128)))==((void*)0),            come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
            _if_conditional226) {
            }
            else {
                check_assign_type(((char*)(right_value213=xsprintf("\%s calling param #\%s",((char*)(right_value211=string_to_string(fun_name_120))),((char*)(right_value212=int_to_string(i_128)))))),((struct sType*)(right_value214=list$1sTypephp_operator_load_element(lambda_type_123->mParamTypes,i_128))),come_value_137->type,come_value_137,(_Bool)0,info);
                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional227=((struct sType*)(right_value215=list$1sTypephp_operator_load_element(lambda_type_123->mParamTypes,i_128)))->mHeap&&come_value_137->type->mHeap,                come_call_finalizer2(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                _if_conditional227) {
                    std_move(((struct sType*)(right_value216=list$1sTypephp_operator_load_element(lambda_type_123->mParamTypes,i_128))),come_value_137->type,come_value_137,info);
                    come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
            list$1CVALUEph_push_back(come_params_127,(struct CVALUE*)come_increment_ref_count(come_value_137));
            dec_stack_ptr(1,info);
            i_128++;
            label_135 = come_decrement_ref_count2(label_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_136) { node_136 = come_decrement_ref_count2(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buf_138=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value218=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value217=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1127, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_138,var__122->mCValueName);
        buffer_append_str(buf_138,"(");
        j_139=0;
        for(        o2_saved_140=(struct list$1CVALUEph*)come_increment_ref_count((come_params_127)),it_143=list$1CVALUEph_begin((o2_saved_140));        !list$1CVALUEph_end((o2_saved_140));        it_143=list$1CVALUEph_next((o2_saved_140))        ){
            buffer_append_str(buf_138,it_143->c_value);
            if(_if_conditional232=j_139!=list$1CVALUEph_length(come_params_127)-1,            _if_conditional232) {
                buffer_append_str(buf_138,",");
            }
            j_139++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_138,")");
        come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value219=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1144, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj90=come_value_146->c_value;
        come_value_146->c_value=(char*)come_increment_ref_count(((char*)(right_value220=buffer_to_string(buf_138))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(lambda_type_123->mResultType->v1->mHeap) {
            __dec_obj91=come_value_146->c_value;
            come_value_146->c_value=(char*)come_increment_ref_count(((char*)(right_value221=append_object_to_right_values(come_value_146->c_value,(struct sType*)come_increment_ref_count(lambda_type_123->mResultType->v1),info))));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj92=come_value_146->type;
        come_value_146->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(result_type_124))));
        come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_146->type->mStatic=(_Bool)0;
        come_value_146->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_146->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_146));
        come_call_finalizer2(sType_finalize,result_type_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional234=string_operator_equals(fun_name_120,"__builtin_memmove")||string_operator_equals(fun_name_120,"__builtin_memset")||string_operator_equals(fun_name_120,"__builtin_ffs")||string_operator_equals(fun_name_120,"__builtin_ffsl")||string_operator_equals(fun_name_120,"__builtin_ffsll"),        _if_conditional234) {
            come_params_147=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value224=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value223=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1162, "struct list$1CVALUEph"))))))));
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_148=(params_121),it_149=list$1tuple2$2charphsNodephph_begin((o2_saved_148));            !list$1tuple2$2charphsNodephph_end((o2_saved_148));            it_149=list$1tuple2$2charphsNodephph_next((o2_saved_148))            ){
                multiple_assign_var6=it_149;
                label_150=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_151=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional235=!node_compile(node_151,info),                _if_conditional235) {
                    __result157__ = (_Bool)0;
                    label_150 = come_decrement_ref_count2(label_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result157__;
                }
                come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value225=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_147,(struct CVALUE*)come_increment_ref_count(come_value_152));
                label_150 = come_decrement_ref_count2(label_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            buf_153=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value227=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value226=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1176, "struct buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_153,fun_name_120);
            buffer_append_str(buf_153,"(");
            j_154=0;
            for(            o2_saved_155=(struct list$1CVALUEph*)come_increment_ref_count((come_params_147)),it_156=list$1CVALUEph_begin((o2_saved_155));            !list$1CVALUEph_end((o2_saved_155));            it_156=list$1CVALUEph_next((o2_saved_155))            ){
                buffer_append_str(buf_153,it_156->c_value);
                if(_if_conditional236=j_154!=list$1CVALUEph_length(come_params_147)-1,                _if_conditional236) {
                    buffer_append_str(buf_153,",");
                }
                j_154++;
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_153,")");
            come_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1193, "struct CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj93=come_value_157->c_value;
            come_value_157->c_value=(char*)come_increment_ref_count(((char*)(right_value229=buffer_to_string(buf_153))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional237=string_operator_equals(fun_name_120,"__builtin_memmove")||string_operator_equals(fun_name_120,"__builtin_memset"),            _if_conditional237) {
                __dec_obj94=come_value_157->type;
                come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1197, "struct sType")))),"void",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional238=string_operator_equals(fun_name_120,"__builtin_ffs"),                _if_conditional238) {
                    __dec_obj95=come_value_157->type;
                    come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1200, "struct sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional239=string_operator_equals(fun_name_120,"__builtin_ffsl"),                    _if_conditional239) {
                        __dec_obj96=come_value_157->type;
                        come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1203, "struct sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        if(_if_conditional240=string_operator_equals(fun_name_120,"__builtin_ffsll"),                        _if_conditional240) {
                            __dec_obj97=come_value_157->type;
                            come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1206, "struct sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
            }
            come_value_157->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_157->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_157));
            __result158__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result158__;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional241=string_operator_equals(fun_name_120,"string"),            _if_conditional241) {
                __dec_obj98=fun_name_120;
                fun_name_120=(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string("__builtin_string"))));
                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional242=string_operator_equals(fun_name_120,"wstring"),                _if_conditional242) {
                    __dec_obj99=fun_name_120;
                    fun_name_120=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string("__builtin_wstring"))));
                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional243=string_operator_equals(fun_name_120,"inherit"),                    _if_conditional243) {
                        p_158=info->come_fun->mName;
                        version_159=0;
                        while(_while_condtional13=*p_158,                        _while_condtional13) {
                            if(_if_conditional244=*p_158==95&&*(p_158+1)==118&&xisdigit(*(p_158+2)),                            _if_conditional244) {
                                p2_160=p_158+2;
                                version_159=0;
                                while(_while_condtional14=xisdigit(*p2_160),                                _while_condtional14) {
                                    version_159=version_159*10+(*p2_160-48);
                                    p2_160++;
                                }
                                break;
                            }
                            else {
                                p_158++;
                            }
                        }
                        char real_fun_name_161[2048];
                        memset(&real_fun_name_161, 0, sizeof(char)                        *(2048)                        );
                        memcpy(real_fun_name_161,info->come_fun->mName,p_158-info->come_fun->mName);
                        real_fun_name_161[p_158-info->come_fun->mName]=0;
                        for(                        i_162=version_159-1;                        i_162>=1;                        i_162--                        ){
                            new_fun_name_163=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("%s_v%d",real_fun_name_161,i_162))));
                            right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional245=((struct sFun*)(right_value241=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_163))),                            come_call_finalizer2(sFun_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                            _if_conditional245) {
                                __dec_obj100=fun_name_120;
                                fun_name_120=(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string(new_fun_name_163))));
                                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional246=i_162==0,                        _if_conditional246) {
                            new_fun_name_164=(char*)come_increment_ref_count(((char*)(right_value243=xsprintf("%s",real_fun_name_161))));
                            right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional247=((struct sFun*)(right_value244=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_164))),                            come_call_finalizer2(sFun_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                            _if_conditional247) {
                                __dec_obj101=fun_name_120;
                                fun_name_120=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(new_fun_name_164))));
                                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional248=string_operator_equals(fun_name_120,info->come_fun->mName),                            _if_conditional248) {
                                err_msg(info,"invalid inherit");
                                __result159__ = (_Bool)0;
                                new_fun_name_164 = come_decrement_ref_count2(new_fun_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result159__;
                            }
                            new_fun_name_164 = come_decrement_ref_count2(new_fun_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_165=128;                        i_165>=1;                        i_165--                        ){
                            new_fun_name_166=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("%s_v%d",fun_name_120,i_165))));
                            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional249=((struct sFun*)(right_value247=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_166))),                            come_call_finalizer2(sFun_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                            _if_conditional249) {
                                __dec_obj102=fun_name_120;
                                fun_name_120=(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(new_fun_name_166))));
                                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_166 = come_decrement_ref_count2(new_fun_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_166 = come_decrement_ref_count2(new_fun_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        fun_169=((struct sFun*)(right_value249=map$2charphsFunph_at(info->funcs,fun_name_120,((void*)0))));
        come_call_finalizer2(sFun_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional254=fun_169==((void*)0),        _if_conditional254) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_120);
            __result164__ = (_Bool)1;
            fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result164__;
        }
        result_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(fun_169->mResultType))));
        come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_170->mStatic=(_Bool)0;
        param_types_171=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value252=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value251=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1290, "struct list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_172=(struct list$1sTypeph*)come_increment_ref_count((fun_169->mParamTypes)),it_175=list$1sTypeph_begin((o2_saved_172));        !list$1sTypeph_end((o2_saved_172));        it_175=list$1sTypeph_next((o2_saved_172))        ){
            it2_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=solve_generics(((struct sType*)(right_value253=sType_clone(it_175))),info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(param_types_171,(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(it2_178)))));
            come_call_finalizer2(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,it2_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj106=result_type_170;
        result_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=solve_generics(result_type_170,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_params_182=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value261=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value260=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1298, "struct list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        label_params_188=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value268=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value262=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "05function.c", 1300, "struct map$2charphCVALUEph"))))))));
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_189=0;
        for(        o2_saved_190=(params_121),it_191=list$1tuple2$2charphsNodephph_begin((o2_saved_190));        !list$1tuple2$2charphsNodephph_end((o2_saved_190));        it_191=list$1tuple2$2charphsNodephph_next((o2_saved_190))        ){
            multiple_assign_var7=it_191;
            label_192=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_193=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(_if_conditional265=!node_compile(node_193,info),            _if_conditional265) {
                __result175__ = (_Bool)0;
                label_192 = come_decrement_ref_count2(label_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_193) { node_193 = come_decrement_ref_count2(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result175__;
            }
            come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional266=fun_169->mVarArgs&&((struct sType*)(right_value270=list$1sTypephp_operator_load_element(fun_169->mParamTypes,i_189)))==((void*)0),            come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
            _if_conditional266) {
            }
            else {
                if(_if_conditional267=label_192!=((void*)0),                _if_conditional267) {
                    n_195=0;
                    for(                    o2_saved_196=(struct list$1charph*)come_increment_ref_count((fun_169->mParamNames)),it_199=list$1charph_begin((o2_saved_196));                    !list$1charph_end((o2_saved_196));                    it_199=list$1charph_next((o2_saved_196))                    ){
                        if(_if_conditional272=string_operator_equals(label_192,it_199),                        _if_conditional272) {
                            break;
                        }
                        n_195++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional273=n_195<list$1sTypeph_length(fun_169->mParamTypes),                    _if_conditional273) {
                        check_assign_type(((char*)(right_value273=xsprintf("\%s calling param #\%s",((char*)(right_value271=string_to_string(fun_name_120))),((char*)(right_value272=int_to_string(n_195)))))),((struct sType*)(right_value274=list$1sTypephp_operator_load_element(param_types_171,n_195))),come_value_194->type,come_value_194,(_Bool)0,info);
                        right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional274=n_195<list$1sTypeph_length(fun_169->mParamTypes)&&((struct sType*)(right_value275=list$1sTypephp_operator_load_element(param_types_171,n_195)))->mHeap&&come_value_194->type->mHeap,                    come_call_finalizer2(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                    _if_conditional274) {
                        std_move(((struct sType*)(right_value276=list$1sTypephp_operator_load_element(param_types_171,n_195))),come_value_194->type,come_value_194,info);
                        come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    if(_if_conditional275=i_189<list$1sTypeph_length(fun_169->mParamTypes),                    _if_conditional275) {
                        check_assign_type(((char*)(right_value279=xsprintf("\%s calling param #\%s",((char*)(right_value277=string_to_string(fun_name_120))),((char*)(right_value278=int_to_string(i_189)))))),((struct sType*)(right_value280=list$1sTypephp_operator_load_element(param_types_171,i_189))),come_value_194->type,come_value_194,(_Bool)0,info);
                        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional276=i_189<list$1sTypeph_length(fun_169->mParamTypes)&&((struct sType*)(right_value281=list$1sTypephp_operator_load_element(param_types_171,i_189)))->mHeap&&come_value_194->type->mHeap,                    come_call_finalizer2(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                    _if_conditional276) {
                        std_move(((struct sType*)(right_value282=list$1sTypephp_operator_load_element(param_types_171,i_189))),come_value_194->type,come_value_194,info);
                        come_call_finalizer2(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            if(_if_conditional277=label_192==((void*)0),            _if_conditional277) {
                list$1CVALUEph_push_back(come_params_182,(struct CVALUE*)come_increment_ref_count(come_value_194));
                i_189++;
            }
            else {
                map$2charphCVALUEph_insert(label_params_188,(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string(label_192)))),(struct CVALUE*)come_increment_ref_count(come_value_194));
                right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            dec_stack_ptr(1,info);
            label_192 = come_decrement_ref_count2(label_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_193) { node_193 = come_decrement_ref_count2(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional325=list$1tuple2$2charphsNodephph_length(params_121)<list$1sTypeph_length(fun_169->mParamTypes),        _if_conditional325) {
            for(            ;            i_189<list$1sTypeph_length(fun_169->mParamTypes);            i_189++            ){
                default_param_249=(char*)come_increment_ref_count(((char*)(right_value293=string_clone(((char*)(right_value292=list$1charphp_operator_load_element(fun_169->mParamDefaultParametors,i_189)))))));
                right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_250=((char*)(right_value294=list$1charphp_operator_load_element(fun_169->mParamNames,i_189)));
                right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_value_254=((struct CVALUE*)(right_value295=map$2charphCVALUEphp_operator_load_element(label_params_188,param_name_250)));
                come_call_finalizer2(CVALUE_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional332=default_param_249&&string_operator_not_equals(default_param_249,""),                _if_conditional332) {
                    source_255=(struct buffer*)come_increment_ref_count(info->source);
                    p_256=info->p;
                    head_257=info->head;
                    sline_258=info->sline;
                    __dec_obj108=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value296=string_to_buffer(default_param_249))));
                    come_call_finalizer2(buffer_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=expression_v13(info))));
                    if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional333=!node_compile(node_259,info),                    _if_conditional333) {
                        __result213__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_249 = come_decrement_ref_count2(default_param_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result213__;
                    }
                    __dec_obj109=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_255);
                    come_call_finalizer2(buffer_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    info->p=p_256;
                    info->head=head_257;
                    info->sline=sline_258;
                    come_value_260=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    check_assign_type(((char*)(right_value301=xsprintf("\%s calling param #\%s",((char*)(right_value299=string_to_string(fun_name_120))),((char*)(right_value300=int_to_string(i_189)))))),((struct sType*)(right_value302=list$1sTypephp_operator_load_element(param_types_171,i_189))),come_value_260->type,come_value_260,(_Bool)0,info);
                    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional334=((struct sType*)(right_value303=list$1sTypephp_operator_load_element(param_types_171,i_189)))->mHeap&&come_value_260->type->mHeap,                    come_call_finalizer2(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                    _if_conditional334) {
                        std_move(((struct sType*)(right_value304=list$1sTypephp_operator_load_element(param_types_171,i_189))),come_value_260->type,come_value_260,info);
                        come_call_finalizer2(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1CVALUEph_push_back(come_params_182,(struct CVALUE*)come_increment_ref_count(come_value_260));
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional335=come_value_254==((void*)0),                    _if_conditional335) {
                        err_msg(info,"require parametor(%s)",fun_169->mName);
                        __result214__ = (_Bool)0;
                        default_param_249 = come_decrement_ref_count2(default_param_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result214__;
                    }
                    else {
                        list$1CVALUEph_push_back(come_params_182,((void*)0));
                    }
                }
                default_param_249 = come_decrement_ref_count2(default_param_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional336=map$2charphCVALUEph_length(label_params_188)>0,        _if_conditional336) {
            for(            i_189=0;            i_189<list$1charph_length(fun_169->mParamNames);            i_189++            ){
                param_name_261=((char*)(right_value305=list$1charphp_operator_load_element(fun_169->mParamNames,i_189)));
                right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_value_262=((struct CVALUE*)(right_value306=map$2charphCVALUEphp_operator_load_element(label_params_188,param_name_261)));
                come_call_finalizer2(CVALUE_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(come_value_262) {
                    check_assign_type(((char*)(right_value309=xsprintf("\%s calling param \%s",((char*)(right_value307=string_to_string(fun_name_120))),((char*)(right_value308=int_to_string(i_189)))))),((struct sType*)(right_value310=list$1sTypephp_operator_load_element(param_types_171,i_189))),come_value_262->type,come_value_262,(_Bool)0,info);
                    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_replace(come_params_182,i_189,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value314=CVALUE_clone(come_value_262)))));
                    come_call_finalizer2(CVALUE_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        if(_if_conditional345=list$1sTypeph_length(fun_169->mParamTypes)!=list$1CVALUEph_length(come_params_182)&&!fun_169->mVarArgs&&string_operator_not_equals(fun_name_120,"__builtin_va_start")&&string_operator_not_equals(fun_name_120,"__builtin_va_end"),        _if_conditional345) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_120,list$1sTypeph_length(fun_169->mParamTypes),list$1tuple2$2charphsNodephph_length(params_121));
            __result221__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result221__;
        }
        buf_266=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value316=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value315=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1421, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_266,fun_name_120);
        buffer_append_str(buf_266,"(");
        j_267=0;
        for(        o2_saved_268=(struct list$1CVALUEph*)come_increment_ref_count((come_params_182)),it_269=list$1CVALUEph_begin((o2_saved_268));        !list$1CVALUEph_end((o2_saved_268));        it_269=list$1CVALUEph_next((o2_saved_268))        ){
            buffer_append_str(buf_266,it_269->c_value);
            if(_if_conditional346=j_267!=list$1CVALUEph_length(come_params_182)-1,            _if_conditional346) {
                buffer_append_str(buf_266,",");
            }
            j_267++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_266,")");
        come_value_270=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value317=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1438, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj113=come_value_270->c_value;
        come_value_270->c_value=(char*)come_increment_ref_count(((char*)(right_value318=buffer_to_string(buf_266))));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj114=come_value_270->type;
        come_value_270->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_clone(result_type_170))));
        come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_270->type->mStatic=(_Bool)0;
        come_value_270->var=((void*)0);
        if(fun_169->mResultType->mHeap) {
            __dec_obj115=come_value_270->c_value;
            come_value_270->c_value=(char*)come_increment_ref_count(((char*)(right_value320=append_object_to_right_values(come_value_270->c_value,(struct sType*)come_increment_ref_count(result_type_170),info))));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional348=string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free"),        _if_conditional348) {
            if(_if_conditional349=string_operator_not_equals(fun_name_120,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_120,"null_check")&&string_operator_not_equals(fun_name_120,"come_push_stackframe")&&string_operator_not_equals(fun_name_120,"come_pop_stackframe"),            _if_conditional349) {
                __dec_obj116=come_value_270->c_value;
                come_value_270->c_value=(char*)come_increment_ref_count(((char*)(right_value321=append_stackframe(come_value_270->c_value,come_value_270->type,info))));
                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        add_come_last_code(info,"%s;\n",come_value_270->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_270));
        come_call_finalizer2(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result222__ = (_Bool)1;
    fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result222__;
    fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result138__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result138__;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_125;
_Bool _while_condtional12;
struct list_item$1CVALUEph* prev_it_126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_125, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_126, 0, sizeof(struct list_item$1CVALUEph*));
                it_125=self->head;
                while(_while_condtional12=it_125!=((void*)0),                _while_condtional12) {
                    prev_it_126=it_125;
                    it_125=it_125->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
            __result139__ = self->len;
            return __result139__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional221;
struct tuple2$2charphsNodeph* result_130;
struct tuple2$2charphsNodeph* __result141__;
_Bool _if_conditional222;
struct tuple2$2charphsNodeph* __result142__;
struct tuple2$2charphsNodeph* result_131;
struct tuple2$2charphsNodeph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_130, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_131, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional221=self==((void*)0),            _if_conditional221) {
                memset(&result_130,0,sizeof(struct tuple2$2charphsNodeph*));
                __result141__ = __result_obj__ = result_130;
                return __result141__;
            }
            self->it=self->head;
            if(self->it) {
                __result142__ = __result_obj__ = self->it->item;
                return __result142__;
            }
            memset(&result_131,0,sizeof(struct tuple2$2charphsNodeph*));
            __result143__ = __result_obj__ = result_131;
            return __result143__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
            __result144__ = self==((void*)0)||self->it==((void*)0);
            return __result144__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional223;
struct tuple2$2charphsNodeph* result_133;
struct tuple2$2charphsNodeph* __result145__;
_Bool _if_conditional224;
struct tuple2$2charphsNodeph* __result146__;
struct tuple2$2charphsNodeph* result_134;
struct tuple2$2charphsNodeph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_134, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional223=self==((void*)0)||self->it==((void*)0),            _if_conditional223) {
                memset(&result_133,0,sizeof(struct tuple2$2charphsNodeph*));
                __result145__ = __result_obj__ = result_133;
                return __result145__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result146__ = __result_obj__ = self->it->item;
                return __result146__;
            }
            memset(&result_134,0,sizeof(struct tuple2$2charphsNodeph*));
            __result147__ = __result_obj__ = result_134;
            return __result147__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional228;
struct CVALUE* result_141;
struct CVALUE* __result149__;
_Bool _if_conditional229;
struct CVALUE* __result150__;
struct CVALUE* result_142;
struct CVALUE* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_141, 0, sizeof(struct CVALUE*));
memset(&result_142, 0, sizeof(struct CVALUE*));
            if(_if_conditional228=self==((void*)0),            _if_conditional228) {
                memset(&result_141,0,sizeof(struct CVALUE*));
                __result149__ = __result_obj__ = result_141;
                return __result149__;
            }
            self->it=self->head;
            if(self->it) {
                __result150__ = __result_obj__ = self->it->item;
                return __result150__;
            }
            memset(&result_142,0,sizeof(struct CVALUE*));
            __result151__ = __result_obj__ = result_142;
            return __result151__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
            __result152__ = self==((void*)0)||self->it==((void*)0);
            return __result152__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional230;
struct CVALUE* result_144;
struct CVALUE* __result153__;
_Bool _if_conditional231;
struct CVALUE* __result154__;
struct CVALUE* result_145;
struct CVALUE* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct CVALUE*));
memset(&result_145, 0, sizeof(struct CVALUE*));
            if(_if_conditional230=self==((void*)0)||self->it==((void*)0),            _if_conditional230) {
                memset(&result_144,0,sizeof(struct CVALUE*));
                __result153__ = __result_obj__ = result_144;
                return __result153__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result154__ = __result_obj__ = self->it->item;
                return __result154__;
            }
            memset(&result_145,0,sizeof(struct CVALUE*));
            __result155__ = __result_obj__ = result_145;
            return __result155__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
                __result156__ = self->len;
                return __result156__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_167;
unsigned int it_168;
_Bool _while_condtional15;
_Bool _if_conditional250;
_Bool _if_conditional251;
struct sFun* __result160__;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct sFun* __result161__;
struct sFun* __result162__;
struct sFun* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_167, 0, sizeof(unsigned int));
memset(&it_168, 0, sizeof(unsigned int));
            hash_167=string_get_hash_key(((char*)key))%self->size;
            it_168=hash_167;
            while(_while_condtional15=(_Bool)1,            _while_condtional15) {
                if(_if_conditional250=self->item_existance[it_168],                _if_conditional250) {
                    if(_if_conditional251=string_equals(self->keys[it_168],key),                    _if_conditional251) {
                        __result160__ = __result_obj__ = self->items[it_168];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result160__;
                    }
                    it_168++;
                    if(_if_conditional252=it_168>=self->size,                    _if_conditional252) {
                        it_168=0;
                    }
                    else {
                        if(_if_conditional253=it_168==hash_167,                        _if_conditional253) {
                            __result161__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result161__;
                        }
                    }
                }
                else {
                    __result162__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result162__;
                }
            }
            __result163__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result163__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional255;
struct sType* result_173;
struct sType* __result165__;
_Bool _if_conditional256;
struct sType* __result166__;
struct sType* result_174;
struct sType* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_173, 0, sizeof(struct sType*));
memset(&result_174, 0, sizeof(struct sType*));
            if(_if_conditional255=self==((void*)0),            _if_conditional255) {
                memset(&result_173,0,sizeof(struct sType*));
                __result165__ = __result_obj__ = result_173;
                return __result165__;
            }
            self->it=self->head;
            if(self->it) {
                __result166__ = __result_obj__ = self->it->item;
                return __result166__;
            }
            memset(&result_174,0,sizeof(struct sType*));
            __result167__ = __result_obj__ = result_174;
            return __result167__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
            __result168__ = self==((void*)0)||self->it==((void*)0);
            return __result168__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional257;
struct sType* result_176;
struct sType* __result169__;
_Bool _if_conditional258;
struct sType* __result170__;
struct sType* result_177;
struct sType* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(struct sType*));
memset(&result_177, 0, sizeof(struct sType*));
            if(_if_conditional257=self==((void*)0)||self->it==((void*)0),            _if_conditional257) {
                memset(&result_176,0,sizeof(struct sType*));
                __result169__ = __result_obj__ = result_176;
                return __result169__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result170__ = __result_obj__ = self->it->item;
                return __result170__;
            }
            memset(&result_177,0,sizeof(struct sType*));
            __result171__ = __result_obj__ = result_177;
            return __result171__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional259;
void* right_value255;
struct list_item$1sTypeph* litem_179;
struct sType* __dec_obj103;
_Bool _if_conditional260;
void* right_value256;
struct list_item$1sTypeph* litem_180;
struct sType* __dec_obj104;
void* right_value257;
struct list_item$1sTypeph* litem_181;
struct sType* __dec_obj105;
struct list$1sTypeph* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
memset(&litem_179, 0, sizeof(struct list_item$1sTypeph*));
right_value256 = (void*)0;
memset(&litem_180, 0, sizeof(struct list_item$1sTypeph*));
right_value257 = (void*)0;
memset(&litem_181, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional259=self->len==0,                _if_conditional259) {
                    litem_179=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value255=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 225, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_179->prev=((void*)0);
                    litem_179->next=((void*)0);
                    __dec_obj103=litem_179->item;
                    litem_179->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_179;
                    self->head=litem_179;
                }
                else {
                    if(_if_conditional260=self->len==1,                    _if_conditional260) {
                        litem_180=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value256=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 235, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_180->prev=self->head;
                        litem_180->next=((void*)0);
                        __dec_obj104=litem_180->item;
                        litem_180->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_180;
                        self->head->next=litem_180;
                    }
                    else {
                        litem_181=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value257=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 245, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_181->prev=self->tail;
                        litem_181->next=((void*)0);
                        __dec_obj105=litem_181->item;
                        litem_181->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_181;
                        self->tail=litem_181;
                    }
                }
                self->len++;
                __result172__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result172__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
void* right_value263;
void* right_value264;
void* right_value265;
int i_183;
void* right_value266;
void* right_value267;
struct list$1charp* __dec_obj107;
struct map$2charphCVALUEph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&i_183, 0, sizeof(int));
right_value266 = (void*)0;
right_value267 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value263=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value264=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1084, "struct CVALUE*"))));
            come_call_finalizer2(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value265=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_183=0;            i_183<1024;            i_183++            ){
                self->item_existance[i_183]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj107=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value267=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value266=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result174__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result174__;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result173__ = __result_obj__ = self;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result173__;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_184;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_185;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_184, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_185, 0, sizeof(struct list_item$1charp*));
                    it_184=self->head;
                    while(_while_condtional16=it_184!=((void*)0),                    _while_condtional16) {
                        prev_it_185=it_184;
                        it_184=it_184->next;
                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
void* __result_obj__;
int i_186;
_Bool _if_conditional261;
_Bool _if_conditional262;
int i_187;
_Bool _if_conditional263;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_186, 0, sizeof(int));
memset(&i_187, 0, sizeof(int));
                for(                i_186=0;                i_186<self->size;                i_186++                ){
                    if(_if_conditional261=self->item_existance[i_186],                    _if_conditional261) {
                        if(_if_conditional262=1,                        _if_conditional262) {
                            come_call_finalizer2(CVALUE_finalize,self->items[i_186], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_187=0;                i_187<self->size;                i_187++                ){
                    if(_if_conditional263=self->item_existance[i_187],                    _if_conditional263) {
                        if(_if_conditional264=1,                        _if_conditional264) {
                            self->keys[i_187] = come_decrement_ref_count2(self->keys[i_187], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional268;
char* result_197;
char* __result176__;
_Bool _if_conditional269;
char* __result177__;
char* result_198;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_197, 0, sizeof(char*));
memset(&result_198, 0, sizeof(char*));
                        if(_if_conditional268=self==((void*)0),                        _if_conditional268) {
                            memset(&result_197,0,sizeof(char*));
                            __result176__ = __result_obj__ = result_197;
                            return __result176__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result177__ = __result_obj__ = self->it->item;
                            return __result177__;
                        }
                        memset(&result_198,0,sizeof(char*));
                        __result178__ = __result_obj__ = result_198;
                        return __result178__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result179__ = self==((void*)0)||self->it==((void*)0);
                        return __result179__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional270;
char* result_200;
char* __result180__;
_Bool _if_conditional271;
char* __result181__;
char* result_201;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_200, 0, sizeof(char*));
memset(&result_201, 0, sizeof(char*));
                        if(_if_conditional270=self==((void*)0)||self->it==((void*)0),                        _if_conditional270) {
                            memset(&result_200,0,sizeof(char*));
                            __result180__ = __result_obj__ = result_200;
                            return __result180__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result181__ = __result_obj__ = self->it->item;
                            return __result181__;
                        }
                        memset(&result_201,0,sizeof(char*));
                        __result182__ = __result_obj__ = result_201;
                        return __result182__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional278;
unsigned int hash_219;
unsigned int it_220;
_Bool _while_condtional19;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool same_key_exist_237;
char* it2_240;
_Bool _if_conditional321;
_Bool _if_conditional322;
struct map$2charphCVALUEph* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_219, 0, sizeof(unsigned int));
memset(&it_220, 0, sizeof(unsigned int));
memset(&same_key_exist_237, 0, sizeof(_Bool));
memset(&it2_240, 0, sizeof(char*));
                    if(_if_conditional278=self->len*10>=self->size,                    _if_conditional278) {
                        map$2charphCVALUEph_rehash(self);
                    }
                    hash_219=string_get_hash_key(key)%self->size;
                    it_220=hash_219;
                    while(_while_condtional19=(_Bool)1,                    _while_condtional19) {
                        if(_if_conditional290=self->item_existance[it_220],                        _if_conditional290) {
                            if(_if_conditional291=string_equals(self->keys[it_220],key),                            _if_conditional291) {
                                if(_if_conditional292=1,                                _if_conditional292) {
                                    list$1charp_remove(self->key_list,self->keys[it_220]);
                                    self->keys[it_220] = come_decrement_ref_count2(self->keys[it_220], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    self->keys[it_220]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    list$1charp_remove(self->key_list,self->keys[it_220]);
                                    self->keys[it_220]=key;
                                }
                                if(_if_conditional312=1,                                _if_conditional312) {
                                    come_call_finalizer2(CVALUE_finalize,self->items[it_220], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->items[it_220]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_220]=item;
                                }
                                break;
                            }
                            it_220++;
                            if(_if_conditional313=it_220>=self->size,                            _if_conditional313) {
                                it_220=0;
                            }
                            else {
                                if(_if_conditional314=it_220==hash_219,                                _if_conditional314) {
                                    printf("unexpected error in map.insert\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            self->item_existance[it_220]=(_Bool)1;
                            if(_if_conditional315=1,                            _if_conditional315) {
                                self->keys[it_220]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                self->keys[it_220]=key;
                            }
                            if(_if_conditional316=1,                            _if_conditional316) {
                                self->items[it_220]=(struct CVALUE*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_220]=item;
                            }
                            self->len++;
                            break;
                        }
                    }
                    same_key_exist_237=(_Bool)0;
                    for(                    it2_240=list$1charp_begin(self->key_list);                    !list$1charp_end(self->key_list);                    it2_240=list$1charp_next(self->key_list)                    ){
                        if(_if_conditional321=string_equals(it2_240,key),                        _if_conditional321) {
                            same_key_exist_237=(_Bool)1;
                        }
                    }
                    if(_if_conditional322=!same_key_exist_237,                    _if_conditional322) {
                        list$1charp_push_back(self->key_list,key);
                    }
                    __result206__ = __result_obj__ = self;
                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result206__;
                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
int size_202;
void* right_value283;
char** keys_203;
void* right_value284;
struct CVALUE** items_204;
void* right_value285;
_Bool* item_existance_205;
int len_206;
char* it_209;
struct CVALUE* default_value_212;
void* right_value286;
struct CVALUE* it2_215;
unsigned int hash_216;
int n_217;
_Bool _while_condtional18;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct CVALUE* default_value_218;
void* right_value287;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_202, 0, sizeof(int));
right_value283 = (void*)0;
memset(&keys_203, 0, sizeof(char**));
right_value284 = (void*)0;
memset(&items_204, 0, sizeof(struct CVALUE**));
right_value285 = (void*)0;
memset(&item_existance_205, 0, sizeof(_Bool*));
memset(&len_206, 0, sizeof(int));
memset(&it_209, 0, sizeof(char*));
memset(&default_value_212, 0, sizeof(struct CVALUE*));
right_value286 = (void*)0;
memset(&it2_215, 0, sizeof(struct CVALUE*));
memset(&hash_216, 0, sizeof(unsigned int));
memset(&n_217, 0, sizeof(int));
memset(&default_value_218, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
                            size_202=self->size*10;
                            keys_203=(char**)come_increment_ref_count(((char**)(right_value283=(char**)come_calloc(1, sizeof(char*)*(1*(size_202)), "./comelang2.h", 1334, "char*"))));
                            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            items_204=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value284=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_202)), "./comelang2.h", 1335, "struct CVALUE*"))));
                            come_call_finalizer2(CVALUE_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            item_existance_205=(_Bool*)come_increment_ref_count(((_Bool*)(right_value285=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_202)), "./comelang2.h", 1336, "_Bool"))));
                            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            len_206=0;
                            for(                            it_209=map$2charphCVALUEph_begin(self);                            !map$2charphCVALUEph_end(self);                            it_209=map$2charphCVALUEph_next(self)                            ){
                                memset(&default_value_212,0,sizeof(struct CVALUE*));
                                it2_215=((struct CVALUE*)(right_value286=map$2charphCVALUEph_at(self,it_209,default_value_212)));
                                come_call_finalizer2(CVALUE_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                hash_216=string_get_hash_key(it_209)%size_202;
                                n_217=hash_216;
                                while(_while_condtional18=(_Bool)1,                                _while_condtional18) {
                                    if(_if_conditional287=item_existance_205[n_217],                                    _if_conditional287) {
                                        n_217++;
                                        if(_if_conditional288=n_217>=size_202,                                        _if_conditional288) {
                                            n_217=0;
                                        }
                                        else {
                                            if(_if_conditional289=n_217==hash_216,                                            _if_conditional289) {
                                                printf("unexpected error in map.rehash(1)\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        item_existance_205[n_217]=(_Bool)1;
                                        keys_203[n_217]=it_209;
                                        items_204[n_217]=((struct CVALUE*)(right_value287=map$2charphCVALUEph_at(self,it_209,default_value_218)));
                                        come_call_finalizer2(CVALUE_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        len_206++;
                                        break;
                                    }
                                }
                            }
                            come_free((char*)self->items);
                            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_free((char*)self->keys);
                            self->keys=keys_203;
                            self->items=items_204;
                            self->item_existance=item_existance_205;
                            self->size=size_202;
                            self->len=len_206;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional279;
char* result_207;
char* __result183__;
_Bool _if_conditional280;
char* __result184__;
char* result_208;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(char*));
memset(&result_208, 0, sizeof(char*));
                                if(_if_conditional279=self==((void*)0),                                _if_conditional279) {
                                    memset(&result_207,0,sizeof(char*));
                                    __result183__ = __result_obj__ = result_207;
                                    return __result183__;
                                }
                                self->key_list->it=self->key_list->head;
                                if(self->key_list->it) {
                                    __result184__ = __result_obj__ = self->key_list->it->item;
                                    return __result184__;
                                }
                                memset(&result_208,0,sizeof(char*));
                                __result185__ = __result_obj__ = result_208;
                                return __result185__;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result186__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                return __result186__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional281;
char* result_210;
char* __result187__;
_Bool _if_conditional282;
char* __result188__;
char* result_211;
char* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_210, 0, sizeof(char*));
memset(&result_211, 0, sizeof(char*));
                                if(_if_conditional281=self==((void*)0)||self->key_list->it==((void*)0),                                _if_conditional281) {
                                    memset(&result_210,0,sizeof(char*));
                                    __result187__ = __result_obj__ = result_210;
                                    return __result187__;
                                }
                                self->key_list->it=self->key_list->it->next;
                                if(self->key_list->it) {
                                    __result188__ = __result_obj__ = self->key_list->it->item;
                                    return __result188__;
                                }
                                memset(&result_211,0,sizeof(char*));
                                __result189__ = __result_obj__ = result_211;
                                return __result189__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
unsigned int hash_213;
unsigned int it_214;
_Bool _while_condtional17;
_Bool _if_conditional283;
_Bool _if_conditional284;
struct CVALUE* __result190__;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct CVALUE* __result191__;
struct CVALUE* __result192__;
struct CVALUE* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_213, 0, sizeof(unsigned int));
memset(&it_214, 0, sizeof(unsigned int));
                                    hash_213=string_get_hash_key(((char*)key))%self->size;
                                    it_214=hash_213;
                                    while(_while_condtional17=(_Bool)1,                                    _while_condtional17) {
                                        if(_if_conditional283=self->item_existance[it_214],                                        _if_conditional283) {
                                            if(_if_conditional284=string_equals(self->keys[it_214],key),                                            _if_conditional284) {
                                                __result190__ = __result_obj__ = self->items[it_214];
                                                come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result190__;
                                            }
                                            it_214++;
                                            if(_if_conditional285=it_214>=self->size,                                            _if_conditional285) {
                                                it_214=0;
                                            }
                                            else {
                                                if(_if_conditional286=it_214==hash_213,                                                _if_conditional286) {
                                                    __result191__ = __result_obj__ = default_value;
                                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result191__;
                                                }
                                            }
                                        }
                                        else {
                                            __result192__ = __result_obj__ = default_value;
                                            come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result192__;
                                        }
                                    }
                                    __result193__ = __result_obj__ = default_value;
                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result193__;
                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_221;
struct list_item$1charp* it_222;
_Bool _while_condtional20;
_Bool _if_conditional293;
struct list$1charp* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_221, 0, sizeof(int));
memset(&it_222, 0, sizeof(struct list_item$1charp*));
                                        it2_221=0;
                                        it_222=self->head;
                                        while(_while_condtional20=it_222!=((void*)0),                                        _while_condtional20) {
                                            if(_if_conditional293=string_equals(it_222->item,item),                                            _if_conditional293) {
                                                list$1charp_delete(self,it2_221,it2_221+1);
                                                break;
                                            }
                                            it2_221++;
                                            it_222=it_222->next;
                                        }
                                        __result197__ = __result_obj__ = self;
                                        return __result197__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
int tmp_223;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list$1charp* __result194__;
_Bool _if_conditional300;
_Bool _if_conditional301;
struct list_item$1charp* it_226;
int i_227;
_Bool _while_condtional22;
_Bool _if_conditional302;
struct list_item$1charp* prev_it_228;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct list_item$1charp* it_229;
int i_230;
_Bool _while_condtional23;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct list_item$1charp* prev_it_231;
struct list_item$1charp* it_232;
struct list_item$1charp* head_prev_it_233;
struct list_item$1charp* tail_it_234;
int i_235;
_Bool _while_condtional24;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
struct list_item$1charp* prev_it_236;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list$1charp* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_223, 0, sizeof(int));
memset(&it_226, 0, sizeof(struct list_item$1charp*));
memset(&i_227, 0, sizeof(int));
memset(&prev_it_228, 0, sizeof(struct list_item$1charp*));
memset(&it_229, 0, sizeof(struct list_item$1charp*));
memset(&i_230, 0, sizeof(int));
memset(&prev_it_231, 0, sizeof(struct list_item$1charp*));
memset(&it_232, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_233, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_234, 0, sizeof(struct list_item$1charp*));
memset(&i_235, 0, sizeof(int));
memset(&prev_it_236, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional294=head<0,                                                    _if_conditional294) {
                                                        head+=self->len;
                                                    }
                                                    if(_if_conditional295=tail<0,                                                    _if_conditional295) {
                                                        tail+=self->len+1;
                                                    }
                                                    if(_if_conditional296=head>tail,                                                    _if_conditional296) {
                                                        tmp_223=tail;
                                                        tail=head;
                                                        head=tmp_223;
                                                    }
                                                    if(_if_conditional297=head<0,                                                    _if_conditional297) {
                                                        head=0;
                                                    }
                                                    if(_if_conditional298=tail>self->len,                                                    _if_conditional298) {
                                                        tail=self->len;
                                                    }
                                                    if(_if_conditional299=head==tail,                                                    _if_conditional299) {
                                                        __result194__ = __result_obj__ = self;
                                                        return __result194__;
                                                    }
                                                    if(_if_conditional300=head==0&&tail==self->len,                                                    _if_conditional300) {
                                                        list$1charp_reset(self);
                                                    }
                                                    else {
                                                        if(_if_conditional301=head==0,                                                        _if_conditional301) {
                                                            it_226=self->head;
                                                            i_227=0;
                                                            while(_while_condtional22=it_226!=((void*)0),                                                            _while_condtional22) {
                                                                if(_if_conditional302=i_227<tail,                                                                _if_conditional302) {
                                                                    prev_it_228=it_226;
                                                                    it_226=it_226->next;
                                                                    i_227++;
                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    self->len--;
                                                                }
                                                                else {
                                                                    if(_if_conditional303=i_227==tail,                                                                    _if_conditional303) {
                                                                        self->head=it_226;
                                                                        self->head->prev=((void*)0);
                                                                        break;
                                                                    }
                                                                    else {
                                                                        it_226=it_226->next;
                                                                        i_227++;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional304=tail==self->len,                                                            _if_conditional304) {
                                                                it_229=self->head;
                                                                i_230=0;
                                                                while(_while_condtional23=it_229!=((void*)0),                                                                _while_condtional23) {
                                                                    if(_if_conditional305=i_230==head,                                                                    _if_conditional305) {
                                                                        self->tail=it_229->prev;
                                                                        self->tail->next=((void*)0);
                                                                    }
                                                                    if(_if_conditional306=i_230>=head,                                                                    _if_conditional306) {
                                                                        prev_it_231=it_229;
                                                                        it_229=it_229->next;
                                                                        i_230++;
                                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->len--;
                                                                    }
                                                                    else {
                                                                        it_229=it_229->next;
                                                                        i_230++;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                it_232=self->head;
                                                                head_prev_it_233=((void*)0);
                                                                tail_it_234=((void*)0);
                                                                i_235=0;
                                                                while(_while_condtional24=it_232!=((void*)0),                                                                _while_condtional24) {
                                                                    if(_if_conditional307=i_235==head,                                                                    _if_conditional307) {
                                                                        head_prev_it_233=it_232->prev;
                                                                    }
                                                                    if(_if_conditional308=i_235==tail,                                                                    _if_conditional308) {
                                                                        tail_it_234=it_232;
                                                                    }
                                                                    if(_if_conditional309=i_235>=head&&i_235<tail,                                                                    _if_conditional309) {
                                                                        prev_it_236=it_232;
                                                                        it_232=it_232->next;
                                                                        i_235++;
                                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->len--;
                                                                    }
                                                                    else {
                                                                        it_232=it_232->next;
                                                                        i_235++;
                                                                    }
                                                                }
                                                                if(_if_conditional310=head_prev_it_233!=((void*)0),                                                                _if_conditional310) {
                                                                    head_prev_it_233->next=tail_it_234;
                                                                }
                                                                if(_if_conditional311=tail_it_234!=((void*)0),                                                                _if_conditional311) {
                                                                    tail_it_234->prev=head_prev_it_233;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    __result196__ = __result_obj__ = self;
                                                    return __result196__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_224;
_Bool _while_condtional21;
struct list_item$1charp* prev_it_225;
struct list$1charp* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_224, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_225, 0, sizeof(struct list_item$1charp*));
                                                            it_224=self->head;
                                                            while(_while_condtional21=it_224!=((void*)0),                                                            _while_condtional21) {
                                                                prev_it_225=it_224;
                                                                it_224=it_224->next;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            self->head=((void*)0);
                                                            self->tail=((void*)0);
                                                            self->len=0;
                                                            __result195__ = __result_obj__ = self;
                                                            return __result195__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional317;
char* result_238;
char* __result198__;
_Bool _if_conditional318;
char* __result199__;
char* result_239;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_238, 0, sizeof(char*));
memset(&result_239, 0, sizeof(char*));
                        if(_if_conditional317=self==((void*)0),                        _if_conditional317) {
                            memset(&result_238,0,sizeof(char*));
                            __result198__ = __result_obj__ = result_238;
                            return __result198__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result199__ = __result_obj__ = self->it->item;
                            return __result199__;
                        }
                        memset(&result_239,0,sizeof(char*));
                        __result200__ = __result_obj__ = result_239;
                        return __result200__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result201__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result201__ = self==((void*)0)||self->it==((void*)0);
                        return __result201__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional319;
char* result_241;
char* __result202__;
_Bool _if_conditional320;
char* __result203__;
char* result_242;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_241, 0, sizeof(char*));
memset(&result_242, 0, sizeof(char*));
                        if(_if_conditional319=self==((void*)0)||self->it==((void*)0),                        _if_conditional319) {
                            memset(&result_241,0,sizeof(char*));
                            __result202__ = __result_obj__ = result_241;
                            return __result202__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result203__ = __result_obj__ = self->it->item;
                            return __result203__;
                        }
                        memset(&result_242,0,sizeof(char*));
                        __result204__ = __result_obj__ = result_242;
                        return __result204__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional323;
void* right_value288;
struct list_item$1charp* litem_243;
_Bool _if_conditional324;
void* right_value289;
struct list_item$1charp* litem_244;
void* right_value290;
struct list_item$1charp* litem_245;
struct list$1charp* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
memset(&litem_243, 0, sizeof(struct list_item$1charp*));
right_value289 = (void*)0;
memset(&litem_244, 0, sizeof(struct list_item$1charp*));
right_value290 = (void*)0;
memset(&litem_245, 0, sizeof(struct list_item$1charp*));
                            if(_if_conditional323=self->len==0,                            _if_conditional323) {
                                litem_243=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value288=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                                come_call_finalizer2(list_item$1charpp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_243->prev=((void*)0);
                                litem_243->next=((void*)0);
                                litem_243->item=item;
                                self->tail=litem_243;
                                self->head=litem_243;
                            }
                            else {
                                if(_if_conditional324=self->len==1,                                _if_conditional324) {
                                    litem_244=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value289=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_244->prev=self->head;
                                    litem_244->next=((void*)0);
                                    litem_244->item=item;
                                    self->tail=litem_244;
                                    self->head->next=litem_244;
                                }
                                else {
                                    litem_245=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value290=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_245->prev=self->tail;
                                    litem_245->next=((void*)0);
                                    litem_245->item=item;
                                    self->tail->next=litem_245;
                                    self->tail=litem_245;
                                }
                            }
                            self->len++;
                            __result205__ = __result_obj__ = self;
                            return __result205__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional326;
struct list_item$1charph* it_246;
int i_247;
_Bool _while_condtional25;
_Bool _if_conditional327;
char* __result207__;
char* default_value_248;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_246, 0, sizeof(struct list_item$1charph*));
memset(&i_247, 0, sizeof(int));
memset(&default_value_248, 0, sizeof(char*));
                    if(_if_conditional326=position<0,                    _if_conditional326) {
                        position+=self->len;
                    }
                    it_246=self->head;
                    i_247=0;
                    while(_while_condtional25=it_246!=((void*)0),                    _while_condtional25) {
                        if(_if_conditional327=position==i_247,                        _if_conditional327) {
                            __result207__ = __result_obj__ = it_246->item;
                            return __result207__;
                        }
                        it_246=it_246->next;
                        i_247++;
                    }
                    memset(&default_value_248,0,sizeof(char*));
                    __result208__ = __result_obj__ = default_value_248;
                    default_value_248 = come_decrement_ref_count2(default_value_248, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result208__;
                    default_value_248 = come_decrement_ref_count2(default_value_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
struct CVALUE* default_value_251;
unsigned int hash_252;
unsigned int it_253;
_Bool _while_condtional26;
_Bool _if_conditional328;
_Bool _if_conditional329;
struct CVALUE* __result209__;
_Bool _if_conditional330;
_Bool _if_conditional331;
struct CVALUE* __result210__;
struct CVALUE* __result211__;
struct CVALUE* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_251, 0, sizeof(struct CVALUE*));
memset(&hash_252, 0, sizeof(unsigned int));
memset(&it_253, 0, sizeof(unsigned int));
                    memset(&default_value_251,0,sizeof(struct CVALUE*));
                    hash_252=string_get_hash_key(((char*)key))%self->size;
                    it_253=hash_252;
                    while(_while_condtional26=(_Bool)1,                    _while_condtional26) {
                        if(_if_conditional328=self->item_existance[it_253],                        _if_conditional328) {
                            if(_if_conditional329=string_equals(self->keys[it_253],key),                            _if_conditional329) {
                                __result209__ = __result_obj__ = self->items[it_253];
                                come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result209__;
                            }
                            it_253++;
                            if(_if_conditional330=it_253>=self->size,                            _if_conditional330) {
                                it_253=0;
                            }
                            else {
                                if(_if_conditional331=it_253==hash_252,                                _if_conditional331) {
                                    __result210__ = __result_obj__ = default_value_251;
                                    come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result210__;
                                }
                            }
                        }
                        else {
                            __result211__ = __result_obj__ = default_value_251;
                            come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result211__;
                        }
                    }
                    __result212__ = __result_obj__ = default_value_251;
                    come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result212__;
                    come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
int __result215__;
memset(&__result_obj__, 0, sizeof(void*));
            __result215__ = self->len;
            return __result215__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result216__;
memset(&__result_obj__, 0, sizeof(void*));
                __result216__ = self->len;
                return __result216__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional338;
_Bool _if_conditional339;
struct list$1CVALUEph* __result217__;
struct list_item$1CVALUEph* it_263;
int i_264;
_Bool _while_condtional27;
_Bool _if_conditional340;
struct CVALUE* __dec_obj110;
struct list$1CVALUEph* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_263, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_264, 0, sizeof(int));
                        if(_if_conditional338=position<0,                        _if_conditional338) {
                            position+=self->len;
                        }
                        if(_if_conditional339=position>=self->len,                        _if_conditional339) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result217__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result217__;
                        }
                        it_263=self->head;
                        i_264=0;
                        while(_while_condtional27=it_263!=((void*)0),                        _while_condtional27) {
                            if(_if_conditional340=position==i_264,                            _if_conditional340) {
                                __dec_obj110=it_263->item;
                                it_263->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_263=it_263->next;
                            i_264++;
                        }
                        __result218__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result218__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional341;
struct CVALUE* __result219__;
void* right_value311;
struct CVALUE* result_265;
_Bool _if_conditional342;
void* right_value312;
char* __dec_obj111;
_Bool _if_conditional343;
void* right_value313;
struct sType* __dec_obj112;
_Bool _if_conditional344;
struct CVALUE* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value311 = (void*)0;
memset(&result_265, 0, sizeof(struct CVALUE*));
right_value312 = (void*)0;
right_value313 = (void*)0;
                        if(_if_conditional341=self==(void*)0,                        _if_conditional341) {
                            __result219__ = __result_obj__ = (void*)0;
                            return __result219__;
                        }
                        result_265=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional342=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional342) {
                            __dec_obj111=result_265->c_value;
                            result_265->c_value=(char*)come_increment_ref_count(((char*)(right_value312=string_clone(self->c_value))));
                            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional343=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional343) {
                            __dec_obj112=result_265->type;
                            result_265->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_clone(self->type))));
                            come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional344=self!=((void*)0),                        _if_conditional344) {
                            result_265->var=self->var;
                        }
                        __result220__ = __result_obj__ = result_265;
                        come_call_finalizer2(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result220__;
                        come_call_finalizer2(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value322;
struct sType* __dec_obj117;
void* right_value323;
struct sNode* __dec_obj118;
void* right_value324;
char* __dec_obj119;
struct sCastNode* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
    __dec_obj117=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=sNode_clone(left))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value323) { right_value323 = come_decrement_ref_count2(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj119=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value324=__builtin_string(info->sname))));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result223__ = __result_obj__ = self;
    come_call_finalizer2(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result223__;
    come_call_finalizer2(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCastNode_sline(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
int __result224__;
memset(&__result_obj__, 0, sizeof(void*));
    __result224__ = self->sline;
    return __result224__;
}

char* sCastNode_sname(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value325;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
    __result225__ = __result_obj__ = ((char*)(right_value325=__builtin_string(self->sname)));
    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result225__;
}

_Bool sCastNode_terminated(){
void* __result_obj__;
_Bool __result226__;
memset(&__result_obj__, 0, sizeof(void*));
    __result226__ = (_Bool)0;
    return __result226__;
}

char* sCastNode_kind(){
void* __result_obj__;
void* right_value326;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value326 = (void*)0;
    __result227__ = __result_obj__ = ((char*)(right_value326=__builtin_string("sCastNode")));
    right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result227__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_271;
struct sNode* left_272;
_Bool _if_conditional353;
_Bool __result228__;
void* right_value327;
struct CVALUE* left_value_273;
void* right_value328;
void* right_value329;
struct sType* type2_274;
void* right_value330;
struct CVALUE* come_value_275;
void* right_value331;
void* right_value332;
char* __dec_obj120;
void* right_value333;
struct sType* __dec_obj121;
_Bool __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_271, 0, sizeof(struct sType*));
memset(&left_272, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
memset(&left_value_273, 0, sizeof(struct CVALUE*));
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&type2_274, 0, sizeof(struct sType*));
right_value330 = (void*)0;
memset(&come_value_275, 0, sizeof(struct CVALUE*));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
    type_271=self->mType;
    left_272=self->mLeft;
    if(_if_conditional353=!node_compile(left_272,info),    _if_conditional353) {
        __result228__ = (_Bool)0;
        return __result228__;
    }
    left_value_273=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value327=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type2_274=(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=solve_generics(((struct sType*)(right_value328=sType_clone(type_271))),info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_275=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1514, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj120=come_value_275->c_value;
    come_value_275->c_value=(char*)come_increment_ref_count(((char*)(right_value332=xsprintf("(%s)%s",((char*)(right_value331=make_type_name_string(type2_274,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_273->c_value))));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj121=come_value_275->type;
    come_value_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_clone(type2_274))));
    come_call_finalizer2(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_275->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_275->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_275));
    __result229__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result229__;
    come_call_finalizer2(CVALUE_finalize,left_value_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value334;
struct sNode* __dec_obj122;
void* right_value335;
char* __dec_obj123;
struct sParenNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
right_value335 = (void*)0;
    __dec_obj122=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=sNode_clone(left))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj123=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string(info->sname))));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result230__ = __result_obj__ = self;
    come_call_finalizer2(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result230__;
    come_call_finalizer2(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParenNode_sline(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
int __result231__;
memset(&__result_obj__, 0, sizeof(void*));
    __result231__ = self->sline;
    return __result231__;
}

char* sParenNode_sname(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value336;
char* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value336 = (void*)0;
    __result232__ = __result_obj__ = ((char*)(right_value336=__builtin_string(self->sname)));
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result232__;
}

_Bool sParenNode_terminated(){
void* __result_obj__;
_Bool __result233__;
memset(&__result_obj__, 0, sizeof(void*));
    __result233__ = (_Bool)0;
    return __result233__;
}

char* sParenNode_kind(){
void* __result_obj__;
void* right_value337;
char* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
right_value337 = (void*)0;
    __result234__ = __result_obj__ = ((char*)(right_value337=__builtin_string("sParenNode")));
    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result234__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_276;
_Bool _if_conditional356;
_Bool __result235__;
void* right_value338;
struct CVALUE* left_value_277;
void* right_value339;
struct CVALUE* come_value_278;
void* right_value340;
char* __dec_obj124;
void* right_value341;
struct sType* __dec_obj125;
_Bool __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_276, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
memset(&left_value_277, 0, sizeof(struct CVALUE*));
right_value339 = (void*)0;
memset(&come_value_278, 0, sizeof(struct CVALUE*));
right_value340 = (void*)0;
right_value341 = (void*)0;
    left_276=self->mLeft;
    if(_if_conditional356=!node_compile(left_276,info),    _if_conditional356) {
        __result235__ = (_Bool)0;
        return __result235__;
    }
    left_value_277=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value338=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_278=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value339=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1573, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj124=come_value_278->c_value;
    come_value_278->c_value=(char*)come_increment_ref_count(((char*)(right_value340=xsprintf("(%s)",left_value_277->c_value))));
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj125=come_value_278->type;
    come_value_278->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(left_value_277->type))));
    come_call_finalizer2(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_278->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_278->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_278));
    __result236__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result236__;
    come_call_finalizer2(CVALUE_finalize,left_value_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value342;
void* right_value343;
struct list$1tuple2$2charphsNodephph* params_279;
_Bool _while_condtional28;
_Bool _if_conditional357;
char* p_280;
int sline_281;
_Bool err_flag_282;
void* right_value344;
char* label_283;
_Bool _if_conditional358;
void* right_value345;
char* __dec_obj126;
_Bool _if_conditional359;
char* __dec_obj127;
_Bool no_comma_284;
void* right_value346;
struct sNode* node_285;
void* right_value347;
struct sNode* __dec_obj128;
void* right_value351;
void* right_value352;
_Bool _if_conditional362;
_Bool _if_conditional363;
void* right_value353;
void* right_value354;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value359;
struct sNode* node_290;
struct sNode* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&params_279, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_280, 0, sizeof(char*));
memset(&sline_281, 0, sizeof(int));
memset(&err_flag_282, 0, sizeof(_Bool));
right_value344 = (void*)0;
memset(&label_283, 0, sizeof(char*));
right_value345 = (void*)0;
memset(&no_comma_284, 0, sizeof(_Bool));
right_value346 = (void*)0;
memset(&node_285, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value359 = (void*)0;
memset(&node_290, 0, sizeof(struct sNode*));
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_279=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value343=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value342=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05function.c", 1592, "struct list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        if(_if_conditional357=*info->p==41,        _if_conditional357) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_280=info->p;
        sline_281=info->sline;
        err_flag_282=(_Bool)0;
        label_283=(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(""))));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional358=xisalpha(*info->p)||*info->p==95,        _if_conditional358) {
            __dec_obj126=label_283;
            label_283=(char*)come_increment_ref_count(((char*)(right_value345=parse_word(info))));
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            err_flag_282=(_Bool)1;
        }
        if(_if_conditional359=err_flag_282==(_Bool)1&&*info->p==58,        _if_conditional359) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj127=label_283;
            label_283=((void*)0);
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_280;
            info->sline=sline_281;
        }
        no_comma_284=info->no_comma;
        info->no_comma=(_Bool)1;
        node_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=expression_v13(info))));
        if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj128=node_285;
        node_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_285),info))));
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value347) { right_value347 = come_decrement_ref_count2(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_284;
        list$1tuple2$2charphsNodephph_push_back(params_279,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value352=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value351=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05function.c", 1631, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_283),(struct sNode*)come_increment_ref_count(node_285))))));
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional362=*info->p==44,        _if_conditional362) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional363=*info->p==41,            _if_conditional363) {
                info->p++;
                skip_spaces_and_lf(info);
                label_283 = come_decrement_ref_count2(label_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_285) { node_285 = come_decrement_ref_count2(node_285, ((struct sNode*)node_285)->finalize, ((struct sNode*)node_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_283 = come_decrement_ref_count2(label_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_285) { node_285 = come_decrement_ref_count2(node_285, ((struct sNode*)node_285)->finalize, ((struct sNode*)node_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    parse_sharp_v5(info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1649, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value354=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value353=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05function.c", 1649, "struct sFunCallNode")))),fun_name,params_279,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sFunCallNode_sline;
    _inf_value1->sname=(void*)sFunCallNode_sname;
    _inf_value1->terminated=(void*)sFunCallNode_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=_inf_value1)));
    come_call_finalizer2(sFunCallNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunCallNode_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result241__ = __result_obj__ = node_290;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result241__;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional360;
void* right_value348;
struct list_item$1tuple2$2charphsNodephph* litem_286;
struct tuple2$2charphsNodeph* __dec_obj129;
_Bool _if_conditional361;
void* right_value349;
struct list_item$1tuple2$2charphsNodephph* litem_287;
struct tuple2$2charphsNodeph* __dec_obj130;
void* right_value350;
struct list_item$1tuple2$2charphsNodephph* litem_288;
struct tuple2$2charphsNodeph* __dec_obj131;
struct list$1tuple2$2charphsNodephph* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value348 = (void*)0;
memset(&litem_286, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value349 = (void*)0;
memset(&litem_287, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value350 = (void*)0;
memset(&litem_288, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            if(_if_conditional360=self->len==0,            _if_conditional360) {
                litem_286=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value348=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 225, "struct list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_286->prev=((void*)0);
                litem_286->next=((void*)0);
                __dec_obj129=litem_286->item;
                litem_286->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_286;
                self->head=litem_286;
            }
            else {
                if(_if_conditional361=self->len==1,                _if_conditional361) {
                    litem_287=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value349=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 235, "struct list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_287->prev=self->head;
                    litem_287->next=((void*)0);
                    __dec_obj130=litem_287->item;
                    litem_287->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_287;
                    self->head->next=litem_287;
                }
                else {
                    litem_288=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value350=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 245, "struct list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_288->prev=self->tail;
                    litem_288->next=((void*)0);
                    __dec_obj131=litem_288->item;
                    litem_288->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_288;
                    self->tail=litem_288;
                }
            }
            self->len++;
            __result237__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result237__;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj132;
struct sNode* __dec_obj133;
struct tuple2$2charphsNodeph* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj132=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj133=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
            __result238__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result238__;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional364=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional364) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional365=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional365) {
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional366=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional366) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional367;
struct sFunCallNode* __result239__;
void* right_value355;
struct sFunCallNode* result_289;
_Bool _if_conditional368;
void* right_value356;
char* __dec_obj134;
_Bool _if_conditional369;
void* right_value357;
struct list$1tuple2$2charphsNodephph* __dec_obj135;
_Bool _if_conditional370;
_Bool _if_conditional371;
void* right_value358;
char* __dec_obj136;
struct sFunCallNode* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
memset(&result_289, 0, sizeof(struct sFunCallNode*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
        if(_if_conditional367=self==(void*)0,        _if_conditional367) {
            __result239__ = __result_obj__ = (void*)0;
            return __result239__;
        }
        result_289=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value355=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode"))));
        come_call_finalizer2(sFunCallNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional368=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional368) {
            __dec_obj134=result_289->fun_name;
            result_289->fun_name=(char*)come_increment_ref_count(((char*)(right_value356=string_clone(self->fun_name))));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional369=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional369) {
            __dec_obj135=result_289->params;
            result_289->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value357=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional370=self!=((void*)0),        _if_conditional370) {
            result_289->sline=self->sline;
        }
        if(_if_conditional371=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional371) {
            __dec_obj136=result_289->sname;
            result_289->sname=(char*)come_increment_ref_count(((char*)(right_value358=string_clone(self->sname))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result240__ = __result_obj__ = result_289;
        come_call_finalizer2(sFunCallNode_finalize,result_289, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result240__;
        come_call_finalizer2(sFunCallNode_finalize,result_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
    __result242__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result242__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj137;
void* right_value360;
char* __dec_obj138;
struct sLogicalDenial* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
right_value360 = (void*)0;
    __dec_obj137=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj138=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value360=__builtin_string(info->sname))));
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result243__ = __result_obj__ = self;
    come_call_finalizer2(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result243__;
    come_call_finalizer2(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLogicalDenial_terminated(){
void* __result_obj__;
_Bool __result244__;
memset(&__result_obj__, 0, sizeof(void*));
    __result244__ = (_Bool)0;
    return __result244__;
}

char* sLogicalDenial_kind(){
void* __result_obj__;
void* right_value361;
char* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
    __result245__ = __result_obj__ = ((char*)(right_value361=__builtin_string("sLogicalDenial")));
    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result245__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional374;
_Bool __result246__;
void* right_value362;
struct CVALUE* come_value_291;
void* right_value363;
struct CVALUE* come_value2_292;
void* right_value364;
char* __dec_obj139;
void* right_value365;
struct sType* __dec_obj140;
_Bool __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value362 = (void*)0;
memset(&come_value_291, 0, sizeof(struct CVALUE*));
right_value363 = (void*)0;
memset(&come_value2_292, 0, sizeof(struct CVALUE*));
right_value364 = (void*)0;
right_value365 = (void*)0;
    if(_if_conditional374=!node_compile(self->value,info),    _if_conditional374) {
        __result246__ = (_Bool)0;
        return __result246__;
    }
    come_value_291=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value362=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_292=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value363=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1702, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj139=come_value2_292->c_value;
    come_value2_292->c_value=(char*)come_increment_ref_count(((char*)(right_value364=xsprintf("!%s",come_value_291->c_value))));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj140=come_value2_292->type;
    come_value2_292->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value365=sType_clone(come_value_291->type))));
    come_call_finalizer2(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_292->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_292));
    add_come_last_code(info,"%s;\n",come_value2_292->c_value);
    __result247__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result247__;
    come_call_finalizer2(CVALUE_finalize,come_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLogicalDenial_sline(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
int __result248__;
memset(&__result_obj__, 0, sizeof(void*));
    __result248__ = self->sline;
    return __result248__;
}

char* sLogicalDenial_sname(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
void* right_value366;
char* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
    __result249__ = __result_obj__ = ((char*)(right_value366=__builtin_string(self->sname)));
    right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result249__;
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj141;
void* right_value367;
char* __dec_obj142;
struct sMinusNode2* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value367 = (void*)0;
    __dec_obj141=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj142=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string(info->sname))));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result250__ = __result_obj__ = self;
    come_call_finalizer2(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result250__;
    come_call_finalizer2(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusNode2_terminated(){
void* __result_obj__;
_Bool __result251__;
memset(&__result_obj__, 0, sizeof(void*));
    __result251__ = (_Bool)0;
    return __result251__;
}

char* sMinusNode2_kind(){
void* __result_obj__;
void* right_value368;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value368 = (void*)0;
    __result252__ = __result_obj__ = ((char*)(right_value368=__builtin_string("sMinusNode2")));
    right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional377;
_Bool __result253__;
void* right_value369;
struct CVALUE* come_value_293;
void* right_value370;
struct CVALUE* come_value2_294;
void* right_value371;
char* __dec_obj143;
void* right_value372;
struct sType* __dec_obj144;
_Bool __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value369 = (void*)0;
memset(&come_value_293, 0, sizeof(struct CVALUE*));
right_value370 = (void*)0;
memset(&come_value2_294, 0, sizeof(struct CVALUE*));
right_value371 = (void*)0;
right_value372 = (void*)0;
    if(_if_conditional377=!node_compile(self->value,info),    _if_conditional377) {
        __result253__ = (_Bool)0;
        return __result253__;
    }
    come_value_293=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value369=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_294=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value370=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1761, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj143=come_value2_294->c_value;
    come_value2_294->c_value=(char*)come_increment_ref_count(((char*)(right_value371=xsprintf("-%s",come_value_293->c_value))));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj144=come_value2_294->type;
    come_value2_294->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value372=sType_clone(come_value_293->type))));
    come_call_finalizer2(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_294->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_294));
    add_come_last_code(info,"%s;\n",come_value2_294->c_value);
    __result254__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result254__;
    come_call_finalizer2(CVALUE_finalize,come_value_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusNode2_sline(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result255__;
memset(&__result_obj__, 0, sizeof(void*));
    __result255__ = self->sline;
    return __result255__;
}

char* sMinusNode2_sname(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value373;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
right_value373 = (void*)0;
    __result256__ = __result_obj__ = ((char*)(right_value373=__builtin_string(self->sname)));
    right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result256__;
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj145;
void* right_value374;
char* __dec_obj146;
struct sPlusPlusNode2* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value374 = (void*)0;
    __dec_obj145=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj146=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value374=__builtin_string(info->sname))));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result257__ = __result_obj__ = self;
    come_call_finalizer2(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result257__;
    come_call_finalizer2(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusPlusNode2_terminated(){
void* __result_obj__;
_Bool __result258__;
memset(&__result_obj__, 0, sizeof(void*));
    __result258__ = (_Bool)0;
    return __result258__;
}

char* sPlusPlusNode2_kind(){
void* __result_obj__;
void* right_value375;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
right_value375 = (void*)0;
    __result259__ = __result_obj__ = ((char*)(right_value375=__builtin_string("sPlusPlusNode2")));
    right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result259__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional380;
_Bool __result260__;
void* right_value376;
struct CVALUE* come_value_295;
void* right_value377;
struct CVALUE* come_value2_296;
void* right_value378;
char* __dec_obj147;
void* right_value379;
struct sType* __dec_obj148;
_Bool __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value376 = (void*)0;
memset(&come_value_295, 0, sizeof(struct CVALUE*));
right_value377 = (void*)0;
memset(&come_value2_296, 0, sizeof(struct CVALUE*));
right_value378 = (void*)0;
right_value379 = (void*)0;
    if(_if_conditional380=!node_compile(self->value,info),    _if_conditional380) {
        __result260__ = (_Bool)0;
        return __result260__;
    }
    come_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value376=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_296=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value377=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1820, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj147=come_value2_296->c_value;
    come_value2_296->c_value=(char*)come_increment_ref_count(((char*)(right_value378=xsprintf("++%s",come_value_295->c_value))));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj148=come_value2_296->type;
    come_value2_296->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value379=sType_clone(come_value_295->type))));
    come_call_finalizer2(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_296->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_296));
    add_come_last_code(info,"%s;\n",come_value2_296->c_value);
    __result261__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result261__;
    come_call_finalizer2(CVALUE_finalize,come_value_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sPlusPlusNode2_sline(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
    __result262__ = self->sline;
    return __result262__;
}

char* sPlusPlusNode2_sname(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value380;
char* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value380 = (void*)0;
    __result263__ = __result_obj__ = ((char*)(right_value380=__builtin_string(self->sname)));
    right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result263__;
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj149;
void* right_value381;
char* __dec_obj150;
struct sMinusMinusNode2* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
    __dec_obj149=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj150=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value381=__builtin_string(info->sname))));
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result264__ = __result_obj__ = self;
    come_call_finalizer2(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result264__;
    come_call_finalizer2(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode2_terminated(){
void* __result_obj__;
_Bool __result265__;
memset(&__result_obj__, 0, sizeof(void*));
    __result265__ = (_Bool)0;
    return __result265__;
}

char* sMinusMinusNode2_kind(){
void* __result_obj__;
void* right_value382;
char* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
    __result266__ = __result_obj__ = ((char*)(right_value382=__builtin_string("sMinusMinusNode2")));
    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result266__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional383;
_Bool __result267__;
void* right_value383;
struct CVALUE* come_value_297;
void* right_value384;
struct CVALUE* come_value2_298;
void* right_value385;
char* __dec_obj151;
void* right_value386;
struct sType* __dec_obj152;
_Bool __result268__;
memset(&__result_obj__, 0, sizeof(void*));
right_value383 = (void*)0;
memset(&come_value_297, 0, sizeof(struct CVALUE*));
right_value384 = (void*)0;
memset(&come_value2_298, 0, sizeof(struct CVALUE*));
right_value385 = (void*)0;
right_value386 = (void*)0;
    if(_if_conditional383=!node_compile(self->value,info),    _if_conditional383) {
        __result267__ = (_Bool)0;
        return __result267__;
    }
    come_value_297=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value383=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_298=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value384=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1879, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj151=come_value2_298->c_value;
    come_value2_298->c_value=(char*)come_increment_ref_count(((char*)(right_value385=xsprintf("--%s",come_value_297->c_value))));
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj152=come_value2_298->type;
    come_value2_298->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value386=sType_clone(come_value_297->type))));
    come_call_finalizer2(sType_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_298->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_298));
    add_come_last_code(info,"%s;\n",come_value2_298->c_value);
    __result268__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result268__;
    come_call_finalizer2(CVALUE_finalize,come_value_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusMinusNode2_sline(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result269__;
memset(&__result_obj__, 0, sizeof(void*));
    __result269__ = self->sline;
    return __result269__;
}

char* sMinusMinusNode2_sname(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value387;
char* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
right_value387 = (void*)0;
    __result270__ = __result_obj__ = ((char*)(right_value387=__builtin_string(self->sname)));
    right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result270__;
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj153;
void* right_value388;
char* __dec_obj154;
struct sComplement* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
right_value388 = (void*)0;
    __dec_obj153=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj154=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value388=__builtin_string(info->sname))));
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result271__ = __result_obj__ = self;
    come_call_finalizer2(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result271__;
    come_call_finalizer2(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sComplement_terminated(){
void* __result_obj__;
_Bool __result272__;
memset(&__result_obj__, 0, sizeof(void*));
    __result272__ = (_Bool)0;
    return __result272__;
}

char* sComplement_kind(){
void* __result_obj__;
void* right_value389;
char* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
    __result273__ = __result_obj__ = ((char*)(right_value389=__builtin_string("sComplement")));
    right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result273__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional386;
_Bool __result274__;
void* right_value390;
struct CVALUE* come_value_299;
void* right_value391;
struct CVALUE* come_value2_300;
void* right_value392;
char* __dec_obj155;
void* right_value393;
struct sType* __dec_obj156;
_Bool __result275__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&come_value_299, 0, sizeof(struct CVALUE*));
right_value391 = (void*)0;
memset(&come_value2_300, 0, sizeof(struct CVALUE*));
right_value392 = (void*)0;
right_value393 = (void*)0;
    if(_if_conditional386=!node_compile(self->value,info),    _if_conditional386) {
        __result274__ = (_Bool)0;
        return __result274__;
    }
    come_value_299=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value390=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_300=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value391=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1938, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj155=come_value2_300->c_value;
    come_value2_300->c_value=(char*)come_increment_ref_count(((char*)(right_value392=xsprintf("~%s",come_value_299->c_value))));
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj156=come_value2_300->type;
    come_value2_300->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value393=sType_clone(come_value_299->type))));
    come_call_finalizer2(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_300->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_300));
    add_come_last_code(info,"%s;\n",come_value2_300->c_value);
    __result275__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result275__;
    come_call_finalizer2(CVALUE_finalize,come_value_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sComplement_sline(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
int __result276__;
memset(&__result_obj__, 0, sizeof(void*));
    __result276__ = self->sline;
    return __result276__;
}

char* sComplement_sname(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
void* right_value394;
char* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
right_value394 = (void*)0;
    __result277__ = __result_obj__ = ((char*)(right_value394=__builtin_string(self->sname)));
    right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result277__;
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value395;
char* __dec_obj157;
void* right_value422;
struct sBlock* __dec_obj167;
struct sNormalBlock* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
right_value395 = (void*)0;
right_value422 = (void*)0;
    self->sline=info->sline;
    __dec_obj157=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value395=__builtin_string(info->sname))));
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj167=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value422=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result299__ = __result_obj__ = self;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result299__;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional387;
struct sBlock* __result278__;
void* right_value396;
struct sBlock* result_301;
_Bool _if_conditional388;
void* right_value397;
struct list$1sNodeph* __dec_obj158;
_Bool _if_conditional389;
void* right_value421;
struct sVarTable* __dec_obj166;
struct sBlock* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value396 = (void*)0;
memset(&result_301, 0, sizeof(struct sBlock*));
right_value397 = (void*)0;
right_value421 = (void*)0;
        if(_if_conditional387=self==(void*)0,        _if_conditional387) {
            __result278__ = __result_obj__ = (void*)0;
            return __result278__;
        }
        result_301=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value396=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional388=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional388) {
            __dec_obj158=result_301->mNodes;
            result_301->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value397=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional389=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional389) {
            __dec_obj166=result_301->mVarTable;
            result_301->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value421=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result298__ = __result_obj__ = result_301;
        come_call_finalizer2(sBlock_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result298__;
        come_call_finalizer2(sBlock_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional390;
struct sVarTable* __result279__;
void* right_value398;
struct sVarTable* result_302;
_Bool _if_conditional391;
void* right_value420;
struct map$2charphsVarph* __dec_obj165;
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
struct sVarTable* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value398 = (void*)0;
memset(&result_302, 0, sizeof(struct sVarTable*));
right_value420 = (void*)0;
                if(_if_conditional390=self==(void*)0,                _if_conditional390) {
                    __result279__ = __result_obj__ = (void*)0;
                    return __result279__;
                }
                result_302=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value398=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional391=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional391) {
                    __dec_obj165=result_302->mVars;
                    result_302->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value420=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional434=self!=((void*)0),                _if_conditional434) {
                    result_302->mGlobal=self->mGlobal;
                }
                if(_if_conditional435=self!=((void*)0),                _if_conditional435) {
                    result_302->mParent=self->mParent;
                }
                if(_if_conditional436=self!=((void*)0),                _if_conditional436) {
                    result_302->mID=self->mID;
                }
                __result297__ = __result_obj__ = result_302;
                come_call_finalizer2(sVarTable_finalize,result_302, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result297__;
                come_call_finalizer2(sVarTable_finalize,result_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional392;
struct map$2charphsVarph* __result280__;
void* right_value399;
void* right_value405;
struct map$2charphsVarph* result_306;
void* right_value406;
void* right_value407;
struct list$1charp* __dec_obj160;
char* it_309;
struct sVar* default_value_312;
void* right_value408;
struct sVar* it2_315;
void* right_value419;
struct map$2charphsVarph* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
right_value399 = (void*)0;
right_value405 = (void*)0;
memset(&result_306, 0, sizeof(struct map$2charphsVarph*));
right_value406 = (void*)0;
right_value407 = (void*)0;
memset(&it_309, 0, sizeof(char*));
memset(&default_value_312, 0, sizeof(struct sVar*));
right_value408 = (void*)0;
memset(&it2_315, 0, sizeof(struct sVar*));
right_value419 = (void*)0;
                        if(_if_conditional392=self==((void*)0),                        _if_conditional392) {
                            __result280__ = __result_obj__ = ((void*)0);
                            return __result280__;
                        }
                        result_306=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value405=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value399=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1177, "struct map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj160=result_306->key_list;
                        result_306->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value407=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value406=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1179, "struct list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_309=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_309=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_312,0,sizeof(struct sVar*));
                            it2_315=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value408=map$2charphsVarph_at(self,it_309,default_value_312))));
                            come_call_finalizer2(sVar_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            map$2charphsVarph_insert2(result_306,it_309,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value419=sVar_clone(it2_315)))));
                            come_call_finalizer2(sVar_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sVar_finalize,it2_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        __result296__ = __result_obj__ = result_306;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_306, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result296__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value400;
void* right_value401;
void* right_value402;
int i_303;
void* right_value403;
void* right_value404;
struct list$1charp* __dec_obj159;
struct map$2charphsVarph* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&i_303, 0, sizeof(int));
right_value403 = (void*)0;
right_value404 = (void*)0;
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value400=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1083, "char*"))));
                            right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value401=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1084, "struct sVar*"))));
                            come_call_finalizer2(sVar_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value402=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1085, "_Bool"))));
                            right_value402 = come_decrement_ref_count2(right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_303=0;                            i_303<1024;                            i_303++                            ){
                                self->item_existance[i_303]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj159=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value404=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value403=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1095, "struct list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result281__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result281__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional393=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional393) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional394=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional394) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional395=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional395) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional396=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional396) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_304;
_Bool _if_conditional397;
_Bool _if_conditional398;
int i_305;
_Bool _if_conditional399;
_Bool _if_conditional400;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_304, 0, sizeof(int));
memset(&i_305, 0, sizeof(int));
                                for(                                i_304=0;                                i_304<self->size;                                i_304++                                ){
                                    if(_if_conditional397=self->item_existance[i_304],                                    _if_conditional397) {
                                        if(_if_conditional398=1,                                        _if_conditional398) {
                                            come_call_finalizer2(sVar_finalize,self->items[i_304], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_305=0;                                i_305<self->size;                                i_305++                                ){
                                    if(_if_conditional399=self->item_existance[i_305],                                    _if_conditional399) {
                                        if(_if_conditional400=1,                                        _if_conditional400) {
                                            self->keys[i_305] = come_decrement_ref_count2(self->keys[i_305], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional401;
char* result_307;
char* __result282__;
_Bool _if_conditional402;
char* __result283__;
char* result_308;
char* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_307, 0, sizeof(char*));
memset(&result_308, 0, sizeof(char*));
                            if(_if_conditional401=self==((void*)0),                            _if_conditional401) {
                                memset(&result_307,0,sizeof(char*));
                                __result282__ = __result_obj__ = result_307;
                                return __result282__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result283__ = __result_obj__ = self->key_list->it->item;
                                return __result283__;
                            }
                            memset(&result_308,0,sizeof(char*));
                            __result284__ = __result_obj__ = result_308;
                            return __result284__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result285__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result285__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result285__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional403;
char* result_310;
char* __result286__;
_Bool _if_conditional404;
char* __result287__;
char* result_311;
char* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_310, 0, sizeof(char*));
memset(&result_311, 0, sizeof(char*));
                            if(_if_conditional403=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional403) {
                                memset(&result_310,0,sizeof(char*));
                                __result286__ = __result_obj__ = result_310;
                                return __result286__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result287__ = __result_obj__ = self->key_list->it->item;
                                return __result287__;
                            }
                            memset(&result_311,0,sizeof(char*));
                            __result288__ = __result_obj__ = result_311;
                            return __result288__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_313;
unsigned int it_314;
_Bool _while_condtional29;
_Bool _if_conditional405;
_Bool _if_conditional406;
struct sVar* __result289__;
_Bool _if_conditional407;
_Bool _if_conditional408;
struct sVar* __result290__;
struct sVar* __result291__;
struct sVar* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_313, 0, sizeof(unsigned int));
memset(&it_314, 0, sizeof(unsigned int));
                                hash_313=string_get_hash_key(((char*)key))%self->size;
                                it_314=hash_313;
                                while(_while_condtional29=(_Bool)1,                                _while_condtional29) {
                                    if(_if_conditional405=self->item_existance[it_314],                                    _if_conditional405) {
                                        if(_if_conditional406=string_equals(self->keys[it_314],key),                                        _if_conditional406) {
                                            __result289__ = __result_obj__ = self->items[it_314];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result289__;
                                        }
                                        it_314++;
                                        if(_if_conditional407=it_314>=self->size,                                        _if_conditional407) {
                                            it_314=0;
                                        }
                                        else {
                                            if(_if_conditional408=it_314==hash_313,                                            _if_conditional408) {
                                                __result290__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result290__;
                                            }
                                        }
                                    }
                                    else {
                                        __result291__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result291__;
                                    }
                                }
                                __result292__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result292__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional409;
unsigned int hash_327;
int it_328;
_Bool _while_condtional31;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool same_key_exist_329;
char* it2_330;
_Bool _if_conditional421;
_Bool _if_conditional422;
struct map$2charphsVarph* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_327, 0, sizeof(unsigned int));
memset(&it_328, 0, sizeof(int));
memset(&same_key_exist_329, 0, sizeof(_Bool));
memset(&it2_330, 0, sizeof(char*));
                                if(_if_conditional409=self->len*2>=self->size,                                _if_conditional409) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_327=string_get_hash_key(key)%self->size;
                                it_328=hash_327;
                                while(_while_condtional31=(_Bool)1,                                _while_condtional31) {
                                    if(_if_conditional413=self->item_existance[it_328],                                    _if_conditional413) {
                                        if(_if_conditional414=string_equals(self->keys[it_328],key),                                        _if_conditional414) {
                                            if(_if_conditional415=1,                                            _if_conditional415) {
                                                self->keys[it_328] = come_decrement_ref_count2(self->keys[it_328], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_328]);
                                                self->keys[it_328]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_328]);
                                                self->keys[it_328]=key;
                                            }
                                            if(_if_conditional416=1,                                            _if_conditional416) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_328], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_328]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_328]=item;
                                            }
                                            break;
                                        }
                                        it_328++;
                                        if(_if_conditional417=it_328>=self->size,                                        _if_conditional417) {
                                            it_328=0;
                                        }
                                        else {
                                            if(_if_conditional418=it_328==hash_327,                                            _if_conditional418) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_328]=(_Bool)1;
                                        if(_if_conditional419=1,                                        _if_conditional419) {
                                            self->keys[it_328]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_328]=key;
                                        }
                                        if(_if_conditional420=1,                                        _if_conditional420) {
                                            self->items[it_328]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_328]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_329=(_Bool)0;
                                for(                                it2_330=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_330=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional421=string_equals(it2_330,key),                                    _if_conditional421) {
                                        same_key_exist_329=(_Bool)1;
                                    }
                                }
                                if(_if_conditional422=!same_key_exist_329,                                _if_conditional422) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result293__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result293__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_316;
void* right_value409;
char** keys_317;
void* right_value410;
struct sVar** items_318;
void* right_value411;
_Bool* item_existance_319;
int len_320;
char* it_321;
struct sVar* default_value_322;
void* right_value412;
struct sVar* it2_323;
unsigned int hash_324;
int n_325;
_Bool _while_condtional30;
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool _if_conditional412;
struct sVar* default_value_326;
void* right_value413;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_316, 0, sizeof(int));
right_value409 = (void*)0;
memset(&keys_317, 0, sizeof(char**));
right_value410 = (void*)0;
memset(&items_318, 0, sizeof(struct sVar**));
right_value411 = (void*)0;
memset(&item_existance_319, 0, sizeof(_Bool*));
memset(&len_320, 0, sizeof(int));
memset(&it_321, 0, sizeof(char*));
memset(&default_value_322, 0, sizeof(struct sVar*));
right_value412 = (void*)0;
memset(&it2_323, 0, sizeof(struct sVar*));
memset(&hash_324, 0, sizeof(unsigned int));
memset(&n_325, 0, sizeof(int));
memset(&default_value_326, 0, sizeof(struct sVar*));
right_value413 = (void*)0;
                                        size_316=self->size*10;
                                        keys_317=(char**)come_increment_ref_count(((char**)(right_value409=(char**)come_calloc(1, sizeof(char*)*(1*(size_316)), "./comelang2.h", 1334, "char*"))));
                                        right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_318=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value410=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_316)), "./comelang2.h", 1335, "struct sVar*"))));
                                        come_call_finalizer2(sVar_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_319=(_Bool*)come_increment_ref_count(((_Bool*)(right_value411=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_316)), "./comelang2.h", 1336, "_Bool"))));
                                        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_320=0;
                                        for(                                        it_321=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_321=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_322,0,sizeof(struct sVar*));
                                            it2_323=((struct sVar*)(right_value412=map$2charphsVarph_at(self,it_321,default_value_322)));
                                            come_call_finalizer2(sVar_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            hash_324=string_get_hash_key(it_321)%size_316;
                                            n_325=hash_324;
                                            while(_while_condtional30=(_Bool)1,                                            _while_condtional30) {
                                                if(_if_conditional410=item_existance_319[n_325],                                                _if_conditional410) {
                                                    n_325++;
                                                    if(_if_conditional411=n_325>=size_316,                                                    _if_conditional411) {
                                                        n_325=0;
                                                    }
                                                    else {
                                                        if(_if_conditional412=n_325==hash_324,                                                        _if_conditional412) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_319[n_325]=(_Bool)1;
                                                    keys_317[n_325]=it_321;
                                                    items_318[n_325]=((struct sVar*)(right_value413=map$2charphsVarph_at(self,it_321,default_value_326)));
                                                    come_call_finalizer2(sVar_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    len_320++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_317;
                                        self->items=items_318;
                                        self->item_existance=item_existance_319;
                                        self->size=size_316;
                                        self->len=len_320;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional423;
struct sVar* __result294__;
void* right_value414;
struct sVar* result_331;
_Bool _if_conditional424;
void* right_value415;
char* __dec_obj161;
_Bool _if_conditional425;
void* right_value416;
char* __dec_obj162;
_Bool _if_conditional426;
void* right_value417;
struct sType* __dec_obj163;
_Bool _if_conditional427;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
void* right_value418;
char* __dec_obj164;
struct sVar* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
right_value414 = (void*)0;
memset(&result_331, 0, sizeof(struct sVar*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
                                if(_if_conditional423=self==(void*)0,                                _if_conditional423) {
                                    __result294__ = __result_obj__ = (void*)0;
                                    return __result294__;
                                }
                                result_331=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value414=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar"))));
                                come_call_finalizer2(sVar_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional424=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional424) {
                                    __dec_obj161=result_331->mName;
                                    result_331->mName=(char*)come_increment_ref_count(((char*)(right_value415=string_clone(self->mName))));
                                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional425=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional425) {
                                    __dec_obj162=result_331->mCValueName;
                                    result_331->mCValueName=(char*)come_increment_ref_count(((char*)(right_value416=string_clone(self->mCValueName))));
                                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional426=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional426) {
                                    __dec_obj163=result_331->mType;
                                    result_331->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value417=sType_clone(self->mType))));
                                    come_call_finalizer2(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional427=self!=((void*)0),                                _if_conditional427) {
                                    result_331->mBlockLevel=self->mBlockLevel;
                                }
                                if(_if_conditional428=self!=((void*)0),                                _if_conditional428) {
                                    result_331->mGlobal=self->mGlobal;
                                }
                                if(_if_conditional429=self!=((void*)0),                                _if_conditional429) {
                                    result_331->mAllocaValue=self->mAllocaValue;
                                }
                                if(_if_conditional430=self!=((void*)0),                                _if_conditional430) {
                                    result_331->mFunctionParam=self->mFunctionParam;
                                }
                                if(_if_conditional431=self!=((void*)0),                                _if_conditional431) {
                                    result_331->mNoFree=self->mNoFree;
                                }
                                if(_if_conditional432=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional432) {
                                    __dec_obj164=result_331->mFunName;
                                    result_331->mFunName=(char*)come_increment_ref_count(((char*)(right_value418=string_clone(self->mFunName))));
                                    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result295__ = __result_obj__ = result_331;
                                come_call_finalizer2(sVar_finalize,result_331, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result295__;
                                come_call_finalizer2(sVar_finalize,result_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional433;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional433=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional433) {
                            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

_Bool sNormalBlock_terminated(){
void* __result_obj__;
_Bool __result300__;
memset(&__result_obj__, 0, sizeof(void*));
    __result300__ = (_Bool)1;
    return __result300__;
}

char* sNormalBlock_kind(){
void* __result_obj__;
void* right_value423;
char* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value423 = (void*)0;
    __result301__ = __result_obj__ = ((char*)(right_value423=__builtin_string("sNormalBlock")));
    right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result301__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* block_332;
_Bool __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_332, 0, sizeof(struct sBlock*));
    block_332=self->mBlock;
    add_come_code(info,"{\n");
    transpile_block(block_332,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result302__ = (_Bool)1;
    return __result302__;
}

int sNormalBlock_sline(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
int __result303__;
memset(&__result_obj__, 0, sizeof(void*));
    __result303__ = self->sline;
    return __result303__;
}

char* sNormalBlock_sname(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value424;
char* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value424 = (void*)0;
    __result304__ = __result_obj__ = ((char*)(right_value424=__builtin_string(self->sname)));
    right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result304__;
}

struct sNode* parse_normal_block(struct sInfo* info){
void* __result_obj__;
void* right_value425;
struct sBlock* block_333;
void* right_value426;
void* right_value427;
struct sNode* _inf_value2;
struct sNormalBlock* _inf_obj_value2;
void* right_value431;
struct sNode* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
right_value425 = (void*)0;
memset(&block_333, 0, sizeof(struct sBlock*));
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value431 = (void*)0;
    block_333=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value425=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2019, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sNormalBlock*)(right_value427=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value426=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05function.c", 2019, "struct sNormalBlock")))),block_333,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNormalBlock_finalize;
    _inf_value2->clone=(void*)sNormalBlock_clone;
    _inf_value2->compile=(void*)sNormalBlock_compile;
    _inf_value2->sline=(void*)sNormalBlock_sline;
    _inf_value2->sname=(void*)sNormalBlock_sname;
    _inf_value2->terminated=(void*)sNormalBlock_terminated;
    _inf_value2->kind=(void*)sNormalBlock_kind;
    __result307__ = __result_obj__ = ((struct sNode*)(right_value431=_inf_value2));
    come_call_finalizer2(sBlock_finalize,block_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sNormalBlock_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNormalBlock_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result307__;
    come_call_finalizer2(sBlock_finalize,block_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional439;
_Bool _if_conditional440;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional439=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional439) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional440=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional440) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional441;
struct sNormalBlock* __result305__;
void* right_value428;
struct sNormalBlock* result_334;
_Bool _if_conditional442;
void* right_value429;
struct sBlock* __dec_obj168;
_Bool _if_conditional443;
_Bool _if_conditional444;
void* right_value430;
char* __dec_obj169;
struct sNormalBlock* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value428 = (void*)0;
memset(&result_334, 0, sizeof(struct sNormalBlock*));
right_value429 = (void*)0;
right_value430 = (void*)0;
        if(_if_conditional441=self==(void*)0,        _if_conditional441) {
            __result305__ = __result_obj__ = (void*)0;
            return __result305__;
        }
        result_334=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value428=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "struct sNormalBlock"))));
        come_call_finalizer2(sNormalBlock_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional442=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional442) {
            __dec_obj168=result_334->mBlock;
            result_334->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value429=sBlock_clone(self->mBlock))));
            come_call_finalizer2(sBlock_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional443=self!=((void*)0),        _if_conditional443) {
            result_334->sline=self->sline;
        }
        if(_if_conditional444=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional444) {
            __dec_obj169=result_334->sname;
            result_334->sname=(char*)come_increment_ref_count(((char*)(right_value430=string_clone(self->sname))));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result306__ = __result_obj__ = result_334;
        come_call_finalizer2(sNormalBlock_finalize,result_334, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result306__;
        come_call_finalizer2(sNormalBlock_finalize,result_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void backtrace_parse_type(struct sInfo* info){
void* __result_obj__;
void* right_value432;
memset(&__result_obj__, 0, sizeof(void*));
right_value432 = (void*)0;
    info->no_output_err=(_Bool)1;
    ((struct tuple3$3sTypephcharphbool*)(right_value432=parse_type(info,(_Bool)0,(_Bool)1)));
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional445;
_Bool _if_conditional446;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional445=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional445) {
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional446=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional446) {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value433;
void* right_value434;
void* right_value435;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value439;
struct sNode* __result310__;
memset(&__result_obj__, 0, sizeof(void*));
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value439 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2031, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(right_value435=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value433=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2031, "struct sLogicalDenial")))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(node)))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sLogicalDenial_finalize;
    _inf_value3->clone=(void*)sLogicalDenial_clone;
    _inf_value3->compile=(void*)sLogicalDenial_compile;
    _inf_value3->sline=(void*)sLogicalDenial_sline;
    _inf_value3->sname=(void*)sLogicalDenial_sname;
    _inf_value3->terminated=(void*)sLogicalDenial_terminated;
    _inf_value3->kind=(void*)sLogicalDenial_kind;
    __result310__ = __result_obj__ = ((struct sNode*)(right_value439=_inf_value3));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result310__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* expression_node_v99(struct sInfo* info){
void* __result_obj__;
_Bool refference_336;
char* p_337;
int sline_338;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool _while_condtional32;
_Bool _if_conditional456;
_Bool _if_conditional457;
void* right_value440;
struct sNode* __result311__;
_Bool _if_conditional458;
void* right_value441;
struct sNode* node_339;
void* right_value442;
void* right_value443;
struct sNode* _inf_value4;
struct sLogicalDenial* _inf_obj_value4;
void* right_value447;
struct sNode* __result314__;
_Bool _if_conditional465;
void* right_value448;
struct sNode* node_341;
void* right_value449;
void* right_value450;
struct sNode* _inf_value5;
struct sMinusMinusNode2* _inf_obj_value5;
void* right_value454;
struct sNode* __result317__;
_Bool _if_conditional472;
void* right_value455;
struct sNode* node_343;
void* right_value456;
void* right_value457;
struct sNode* _inf_value6;
struct sMinusNode2* _inf_obj_value6;
void* right_value461;
struct sNode* __result320__;
_Bool _if_conditional479;
void* right_value462;
struct sNode* node_345;
void* right_value463;
void* right_value464;
struct sNode* _inf_value7;
struct sPlusPlusNode2* _inf_obj_value7;
void* right_value468;
struct sNode* __result323__;
_Bool _if_conditional486;
void* right_value469;
struct sNode* node_347;
void* right_value470;
void* right_value471;
struct sNode* _inf_value8;
struct sComplement* _inf_obj_value8;
void* right_value475;
struct sNode* __result326__;
_Bool _if_conditional493;
void* right_value476;
struct sNode* node_349;
void* right_value477;
struct sNode* __dec_obj182;
struct sNode* __result327__;
_Bool _if_conditional494;
void* right_value478;
struct sNode* node_350;
void* right_value479;
struct sNode* __dec_obj183;
struct sNode* __result328__;
_Bool _if_conditional495;
void* right_value480;
struct sNode* node_351;
void* right_value481;
struct sNode* __dec_obj184;
struct sNode* __result329__;
_Bool _if_conditional496;
void* right_value482;
struct sNode* node_352;
void* right_value483;
struct sNode* __dec_obj185;
struct sNode* __result330__;
_Bool _if_conditional497;
_Bool _if_conditional498;
void* right_value484;
void* right_value485;
void* right_value486;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* right_value491;
struct sNode* __result333__;
char* head_354;
void* right_value492;
struct sNode* value_355;
char* tail_356;
void* right_value493;
struct sNode* __dec_obj189;
void* right_value494;
struct sNode* __dec_obj190;
void* right_value495;
void* right_value496;
void* right_value497;
struct sNode* _inf_value10;
struct sReturnNode* _inf_obj_value10;
void* right_value502;
struct sNode* __result336__;
_Bool _if_conditional515;
_Bool _if_conditional516;
void* right_value503;
void* right_value504;
void* right_value505;
struct sNode* _inf_value11;
struct sParentReturnNode* _inf_obj_value11;
void* right_value510;
struct sNode* __result339__;
char* head_360;
void* right_value511;
struct sNode* value_361;
char* tail_362;
void* right_value512;
struct sNode* __dec_obj197;
void* right_value513;
struct sNode* __dec_obj198;
void* right_value514;
void* right_value515;
void* right_value516;
struct sNode* _inf_value12;
struct sParentReturnNode* _inf_obj_value12;
void* right_value521;
struct sNode* __result342__;
_Bool _if_conditional533;
void* right_value522;
void* right_value523;
struct sNode* _inf_value13;
struct sParentBreakNode* _inf_obj_value13;
void* right_value526;
struct sNode* __result345__;
_Bool _if_conditional538;
void* right_value527;
void* right_value528;
struct sNode* _inf_value14;
struct sParentContinueNode* _inf_obj_value14;
void* right_value531;
struct sNode* __result348__;
_Bool _if_conditional543;
_Bool quote_367;
_Bool _if_conditional544;
_Bool no_assign_368;
void* right_value532;
struct sNode* value_369;
void* right_value533;
void* right_value534;
struct sNode* _inf_value15;
struct sDerefferenceNode* _inf_obj_value15;
void* right_value538;
struct sNode* __result351__;
_Bool _if_conditional552;
void* right_value539;
struct sNode* value_371;
void* right_value540;
void* right_value541;
struct sNode* _inf_value16;
struct sRefferenceNode* _inf_obj_value16;
void* right_value545;
struct sNode* __result354__;
_Bool _if_conditional559;
void* right_value546;
struct sNode* value_373;
void* right_value547;
void* right_value548;
struct sNode* _inf_value17;
struct sReverseNode* _inf_obj_value17;
void* right_value552;
struct sNode* __result357__;
_Bool _if_conditional566;
char* head_375;
int head_sline_376;
char* buf_377;
char* p_378;
int sline_379;
_Bool _if_conditional567;
void* right_value553;
char* __dec_obj210;
void* right_value554;
char* __dec_obj211;
_Bool is_type_name__380;
_Bool define_function_pointer_flag_381;
_Bool _if_conditional568;
_Bool _if_conditional569;
_Bool _if_conditional570;
_Bool lambda_flag_382;
_Bool _if_conditional571;
_Bool _if_conditional572;
void* right_value555;
char* word2_383;
_Bool _if_conditional573;
_Bool fun_name_with_type_name_384;
_Bool _if_conditional574;
_Bool _if_conditional575;
void* right_value556;
char* word2_385;
_Bool _while_condtional33;
_Bool _if_conditional576;
_Bool _if_conditional577;
void* right_value557;
char* __dec_obj212;
_Bool _if_conditional578;
void* right_value558;
struct sNode* __result358__;
_Bool _if_conditional579;
void* right_value559;
struct sNode* node_386;
void* right_value560;
struct sNode* __dec_obj213;
void* right_value561;
struct sNode* __dec_obj214;
struct sNode* __result359__;
_Bool _if_conditional580;
void* right_value562;
void* right_value563;
struct sNode* _inf_value18;
struct sFuncNode* _inf_obj_value18;
void* right_value568;
struct sNode* __result362__;
_Bool _if_conditional589;
void* right_value569;
void* right_value570;
struct sNode* _inf_value19;
struct sLineNode* _inf_obj_value19;
void* right_value575;
struct sNode* __result365__;
_Bool _if_conditional598;
void* right_value576;
void* right_value577;
struct sNode* _inf_value20;
struct sSNameNode* _inf_obj_value20;
void* right_value582;
struct sNode* __result368__;
_Bool _if_conditional607;
void* right_value583;
void* right_value584;
struct sNode* _inf_value21;
struct sCallerFuncNode* _inf_obj_value21;
void* right_value589;
struct sNode* __result371__;
_Bool _if_conditional616;
void* right_value590;
void* right_value591;
struct sNode* _inf_value22;
struct sCallerLineNode* _inf_obj_value22;
void* right_value596;
struct sNode* __result374__;
_Bool _if_conditional625;
void* right_value597;
void* right_value598;
struct sNode* _inf_value23;
struct sCallerSNameNode* _inf_obj_value23;
void* right_value603;
struct sNode* __result377__;
_Bool _if_conditional634;
void* right_value604;
struct sNode* node_393;
void* right_value605;
struct sNode* __dec_obj233;
struct sNode* __result378__;
_Bool _if_conditional635;
void* right_value606;
void* right_value607;
struct buffer* fun_name_394;
void* right_value608;
void* right_value609;
void* right_value610;
struct sType* type_398;
_Bool _if_conditional640;
void* right_value611;
void* right_value612;
struct sClass* klass_404;
_Bool _if_conditional651;
void* right_value613;
void* right_value614;
struct sType* __dec_obj234;
_Bool _while_condtional37;
_Bool _if_conditional652;
void* right_value615;
char* buf2_405;
void* right_value616;
void* right_value617;
struct sNode* node_406;
void* right_value618;
struct sNode* __dec_obj235;
void* right_value619;
struct sNode* __dec_obj236;
struct sNode* __result387__;
_Bool _if_conditional653;
void* right_value620;
void* right_value621;
struct buffer* fun_name_407;
void* right_value622;
char* buf2_408;
void* right_value623;
void* right_value624;
struct sNode* node_409;
void* right_value625;
struct sNode* __dec_obj237;
void* right_value626;
struct sNode* __dec_obj238;
struct sNode* __result388__;
_Bool _if_conditional654;
void* right_value627;
struct sNode* node_410;
void* right_value628;
struct sNode* __dec_obj239;
void* right_value629;
struct sNode* __dec_obj240;
struct sNode* __result389__;
void* right_value630;
struct sNode* node_411;
void* right_value631;
struct sNode* __dec_obj241;
struct sNode* __result390__;
_Bool _if_conditional655;
_Bool cast_expression_flag_412;
char* p_413;
int sline_414;
void* right_value632;
char* word_415;
_Bool _if_conditional656;
void* right_value633;
char* __dec_obj242;
_Bool _if_conditional657;
_Bool tuple_expression_flag_416;
char* p_417;
int sline_418;
_Bool no_comma_419;
_Bool no_output_err_420;
_Bool no_output_come_code_421;
void* right_value634;
struct sNode* node_422;
_Bool _if_conditional658;
_Bool _if_conditional659;
void* right_value635;
struct sNode* node_423;
void* right_value636;
struct sNode* __dec_obj243;
struct sNode* __result391__;
_Bool _if_conditional660;
void* right_value637;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_424;
char* name_425;
_Bool err_426;
_Bool _if_conditional661;
void* right_value638;
struct sNode* node_427;
void* right_value639;
struct sNode* __dec_obj244;
void* right_value640;
void* right_value641;
struct sNode* _inf_value24;
struct sCastNode* _inf_obj_value24;
void* right_value646;
struct sNode* __result394__;
void* right_value647;
struct sNode* node_429;
void* right_value648;
void* right_value649;
struct sNode* _inf_value25;
struct sParenNode* _inf_obj_value25;
void* right_value653;
struct sNode* __dec_obj250;
void* right_value654;
struct sNode* __dec_obj251;
struct sNode* __result397__;
void* right_value655;
struct sNode* node_431;
void* right_value656;
struct sNode* __dec_obj252;
struct sNode* __result398__;
struct sNode* __result399__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&refference_336, 0, sizeof(_Bool));
memset(&p_337, 0, sizeof(char*));
memset(&sline_338, 0, sizeof(int));
right_value440 = (void*)0;
right_value441 = (void*)0;
memset(&node_339, 0, sizeof(struct sNode*));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
memset(&node_341, 0, sizeof(struct sNode*));
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
memset(&node_343, 0, sizeof(struct sNode*));
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
memset(&node_345, 0, sizeof(struct sNode*));
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
memset(&node_347, 0, sizeof(struct sNode*));
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
memset(&node_349, 0, sizeof(struct sNode*));
right_value477 = (void*)0;
right_value478 = (void*)0;
memset(&node_350, 0, sizeof(struct sNode*));
right_value479 = (void*)0;
right_value480 = (void*)0;
memset(&node_351, 0, sizeof(struct sNode*));
right_value481 = (void*)0;
right_value482 = (void*)0;
memset(&node_352, 0, sizeof(struct sNode*));
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value491 = (void*)0;
memset(&head_354, 0, sizeof(char*));
right_value492 = (void*)0;
memset(&value_355, 0, sizeof(struct sNode*));
memset(&tail_356, 0, sizeof(char*));
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value497 = (void*)0;
right_value502 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value505 = (void*)0;
right_value510 = (void*)0;
memset(&head_360, 0, sizeof(char*));
right_value511 = (void*)0;
memset(&value_361, 0, sizeof(struct sNode*));
memset(&tail_362, 0, sizeof(char*));
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value526 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
right_value531 = (void*)0;
memset(&quote_367, 0, sizeof(_Bool));
memset(&no_assign_368, 0, sizeof(_Bool));
right_value532 = (void*)0;
memset(&value_369, 0, sizeof(struct sNode*));
right_value533 = (void*)0;
right_value534 = (void*)0;
right_value538 = (void*)0;
right_value539 = (void*)0;
memset(&value_371, 0, sizeof(struct sNode*));
right_value540 = (void*)0;
right_value541 = (void*)0;
right_value545 = (void*)0;
right_value546 = (void*)0;
memset(&value_373, 0, sizeof(struct sNode*));
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value552 = (void*)0;
memset(&head_375, 0, sizeof(char*));
memset(&head_sline_376, 0, sizeof(int));
memset(&buf_377, 0, sizeof(char*));
memset(&p_378, 0, sizeof(char*));
memset(&sline_379, 0, sizeof(int));
right_value553 = (void*)0;
right_value554 = (void*)0;
memset(&is_type_name__380, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_381, 0, sizeof(_Bool));
memset(&lambda_flag_382, 0, sizeof(_Bool));
right_value555 = (void*)0;
memset(&word2_383, 0, sizeof(char*));
memset(&fun_name_with_type_name_384, 0, sizeof(_Bool));
right_value556 = (void*)0;
memset(&word2_385, 0, sizeof(char*));
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value559 = (void*)0;
memset(&node_386, 0, sizeof(struct sNode*));
right_value560 = (void*)0;
right_value561 = (void*)0;
right_value562 = (void*)0;
right_value563 = (void*)0;
right_value568 = (void*)0;
right_value569 = (void*)0;
right_value570 = (void*)0;
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value582 = (void*)0;
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
right_value596 = (void*)0;
right_value597 = (void*)0;
right_value598 = (void*)0;
right_value603 = (void*)0;
right_value604 = (void*)0;
memset(&node_393, 0, sizeof(struct sNode*));
right_value605 = (void*)0;
right_value606 = (void*)0;
right_value607 = (void*)0;
memset(&fun_name_394, 0, sizeof(struct buffer*));
right_value608 = (void*)0;
right_value609 = (void*)0;
right_value610 = (void*)0;
memset(&type_398, 0, sizeof(struct sType*));
right_value611 = (void*)0;
right_value612 = (void*)0;
memset(&klass_404, 0, sizeof(struct sClass*));
right_value613 = (void*)0;
right_value614 = (void*)0;
right_value615 = (void*)0;
memset(&buf2_405, 0, sizeof(char*));
right_value616 = (void*)0;
right_value617 = (void*)0;
memset(&node_406, 0, sizeof(struct sNode*));
right_value618 = (void*)0;
right_value619 = (void*)0;
right_value620 = (void*)0;
right_value621 = (void*)0;
memset(&fun_name_407, 0, sizeof(struct buffer*));
right_value622 = (void*)0;
memset(&buf2_408, 0, sizeof(char*));
right_value623 = (void*)0;
right_value624 = (void*)0;
memset(&node_409, 0, sizeof(struct sNode*));
right_value625 = (void*)0;
right_value626 = (void*)0;
right_value627 = (void*)0;
memset(&node_410, 0, sizeof(struct sNode*));
right_value628 = (void*)0;
right_value629 = (void*)0;
right_value630 = (void*)0;
memset(&node_411, 0, sizeof(struct sNode*));
right_value631 = (void*)0;
memset(&cast_expression_flag_412, 0, sizeof(_Bool));
memset(&p_413, 0, sizeof(char*));
memset(&sline_414, 0, sizeof(int));
right_value632 = (void*)0;
memset(&word_415, 0, sizeof(char*));
right_value633 = (void*)0;
memset(&tuple_expression_flag_416, 0, sizeof(_Bool));
memset(&p_417, 0, sizeof(char*));
memset(&sline_418, 0, sizeof(int));
memset(&no_comma_419, 0, sizeof(_Bool));
memset(&no_output_err_420, 0, sizeof(_Bool));
memset(&no_output_come_code_421, 0, sizeof(_Bool));
right_value634 = (void*)0;
memset(&node_422, 0, sizeof(struct sNode*));
right_value635 = (void*)0;
memset(&node_423, 0, sizeof(struct sNode*));
right_value636 = (void*)0;
right_value637 = (void*)0;
memset(&type_424, 0, sizeof(struct sType*));
memset(&name_425, 0, sizeof(char*));
memset(&err_426, 0, sizeof(_Bool));
memset(&type_424, 0, sizeof(struct sType*));
memset(&name_425, 0, sizeof(char*));
memset(&err_426, 0, sizeof(_Bool));
right_value638 = (void*)0;
memset(&node_427, 0, sizeof(struct sNode*));
right_value639 = (void*)0;
right_value640 = (void*)0;
right_value641 = (void*)0;
right_value646 = (void*)0;
right_value647 = (void*)0;
memset(&node_429, 0, sizeof(struct sNode*));
right_value648 = (void*)0;
right_value649 = (void*)0;
right_value653 = (void*)0;
right_value654 = (void*)0;
right_value655 = (void*)0;
memset(&node_431, 0, sizeof(struct sNode*));
right_value656 = (void*)0;
    skip_spaces_and_lf(info);
    refference_336=(_Bool)0;
    {
        p_337=info->p;
        sline_338=info->sline;
        if(_if_conditional453=*info->p==38,        _if_conditional453) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional454=xisalpha(*info->p)||*info->p==95,            _if_conditional454) {
                refference_336=(_Bool)1;
            }
            else {
                if(_if_conditional455=*info->p==40,                _if_conditional455) {
                    while(_while_condtional32=*info->p==40,                    _while_condtional32) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional456=xisalpha(*info->p)||*info->p==95,                    _if_conditional456) {
                        refference_336=(_Bool)1;
                    }
                }
            }
        }
        info->p=p_337;
        info->sline=sline_338;
    }
    parse_sharp_v5(info);
    if(_if_conditional457=*info->p==123,    _if_conditional457) {
        __result311__ = __result_obj__ = ((struct sNode*)(right_value440=parse_normal_block(info)));
        if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result311__;
    }
    else {
        if(_if_conditional458=*info->p==33,        _if_conditional458) {
            info->p++;
            skip_spaces_and_lf(info);
            node_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=expression_node_v99(info))));
            if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2078, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sLogicalDenial*)(right_value443=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value442=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2078, "struct sLogicalDenial")))),(struct sNode*)come_increment_ref_count(node_339),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLogicalDenial_finalize;
            _inf_value4->clone=(void*)sLogicalDenial_clone;
            _inf_value4->compile=(void*)sLogicalDenial_compile;
            _inf_value4->sline=(void*)sLogicalDenial_sline;
            _inf_value4->sname=(void*)sLogicalDenial_sname;
            _inf_value4->terminated=(void*)sLogicalDenial_terminated;
            _inf_value4->kind=(void*)sLogicalDenial_kind;
            __result314__ = __result_obj__ = ((struct sNode*)(right_value447=_inf_value4));
            if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sLogicalDenial_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLogicalDenial_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result314__;
            if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional465=*info->p==45&&*(info->p+1)==45,            _if_conditional465) {
                info->p+=2;
                skip_spaces_and_lf(info);
                node_341=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value448=expression_node_v99(info))));
                if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2086, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sMinusMinusNode2*)(right_value450=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value449=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05function.c", 2086, "struct sMinusMinusNode2")))),(struct sNode*)come_increment_ref_count(node_341),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sMinusMinusNode2_finalize;
                _inf_value5->clone=(void*)sMinusMinusNode2_clone;
                _inf_value5->compile=(void*)sMinusMinusNode2_compile;
                _inf_value5->sline=(void*)sMinusMinusNode2_sline;
                _inf_value5->sname=(void*)sMinusMinusNode2_sname;
                _inf_value5->terminated=(void*)sMinusMinusNode2_terminated;
                _inf_value5->kind=(void*)sMinusMinusNode2_kind;
                __result317__ = __result_obj__ = ((struct sNode*)(right_value454=_inf_value5));
                if(node_341) { node_341 = come_decrement_ref_count2(node_341, ((struct sNode*)node_341)->finalize, ((struct sNode*)node_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result317__;
                if(node_341) { node_341 = come_decrement_ref_count2(node_341, ((struct sNode*)node_341)->finalize, ((struct sNode*)node_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional472=*info->p==45,                _if_conditional472) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_343=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=expression_node_v99(info))));
                    if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2094, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sMinusNode2*)(right_value457=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value456=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05function.c", 2094, "struct sMinusNode2")))),(struct sNode*)come_increment_ref_count(node_343),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sMinusNode2_finalize;
                    _inf_value6->clone=(void*)sMinusNode2_clone;
                    _inf_value6->compile=(void*)sMinusNode2_compile;
                    _inf_value6->sline=(void*)sMinusNode2_sline;
                    _inf_value6->sname=(void*)sMinusNode2_sname;
                    _inf_value6->terminated=(void*)sMinusNode2_terminated;
                    _inf_value6->kind=(void*)sMinusNode2_kind;
                    __result320__ = __result_obj__ = ((struct sNode*)(right_value461=_inf_value6));
                    if(node_343) { node_343 = come_decrement_ref_count2(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sMinusNode2_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sMinusNode2_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value461) { right_value461 = come_decrement_ref_count2(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result320__;
                    if(node_343) { node_343 = come_decrement_ref_count2(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional479=*info->p==43&&*(info->p+1)==43,                    _if_conditional479) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        node_345=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value462=expression_node_v99(info))));
                        if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2102, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sPlusPlusNode2*)(right_value464=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value463=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05function.c", 2102, "struct sPlusPlusNode2")))),(struct sNode*)come_increment_ref_count(node_345),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sPlusPlusNode2_finalize;
                        _inf_value7->clone=(void*)sPlusPlusNode2_clone;
                        _inf_value7->compile=(void*)sPlusPlusNode2_compile;
                        _inf_value7->sline=(void*)sPlusPlusNode2_sline;
                        _inf_value7->sname=(void*)sPlusPlusNode2_sname;
                        _inf_value7->terminated=(void*)sPlusPlusNode2_terminated;
                        _inf_value7->kind=(void*)sPlusPlusNode2_kind;
                        __result323__ = __result_obj__ = ((struct sNode*)(right_value468=_inf_value7));
                        if(node_345) { node_345 = come_decrement_ref_count2(node_345, ((struct sNode*)node_345)->finalize, ((struct sNode*)node_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value468) { right_value468 = come_decrement_ref_count2(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result323__;
                        if(node_345) { node_345 = come_decrement_ref_count2(node_345, ((struct sNode*)node_345)->finalize, ((struct sNode*)node_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional486=*info->p==126,                        _if_conditional486) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            node_347=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value469=expression_node_v99(info))));
                            if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2110, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sComplement*)(right_value471=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value470=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05function.c", 2110, "struct sComplement")))),(struct sNode*)come_increment_ref_count(node_347),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sComplement_finalize;
                            _inf_value8->clone=(void*)sComplement_clone;
                            _inf_value8->compile=(void*)sComplement_compile;
                            _inf_value8->sline=(void*)sComplement_sline;
                            _inf_value8->sname=(void*)sComplement_sname;
                            _inf_value8->terminated=(void*)sComplement_terminated;
                            _inf_value8->kind=(void*)sComplement_kind;
                            __result326__ = __result_obj__ = ((struct sNode*)(right_value475=_inf_value8));
                            if(node_347) { node_347 = come_decrement_ref_count2(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sComplement_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sComplement_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value475) { right_value475 = come_decrement_ref_count2(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result326__;
                            if(node_347) { node_347 = come_decrement_ref_count2(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional493=*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88),                            _if_conditional493) {
                                info->p+=2;
                                node_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=get_hex_number((_Bool)0,info))));
                                if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __dec_obj182=node_349;
                                node_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value477=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_349),info))));
                                if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value477) { right_value477 = come_decrement_ref_count2(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __result327__ = __result_obj__ = node_349;
                                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result327__;
                                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional494=*info->p==48&&xisdigit(*(info->p+1)),                                _if_conditional494) {
                                    info->p++;
                                    node_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value478=get_oct_number(info))));
                                    if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __dec_obj183=node_350;
                                    node_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_350),info))));
                                    if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __result328__ = __result_obj__ = node_350;
                                    if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    return __result328__;
                                    if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional495=xisdigit(*info->p),                                    _if_conditional495) {
                                        node_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value480=get_number((_Bool)0,info))));
                                        if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __dec_obj184=node_351;
                                        node_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value481=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_351),info))));
                                        if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value481) { right_value481 = come_decrement_ref_count2(right_value481, ((struct sNode*)right_value481)->finalize, ((struct sNode*)right_value481)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __result329__ = __result_obj__ = node_351;
                                        if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        return __result329__;
                                        if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional496=*info->p==45&&xisdigit(*(info->p+1)),                                        _if_conditional496) {
                                            info->p++;
                                            node_352=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value482=get_number((_Bool)1,info))));
                                            if(right_value482) { right_value482 = come_decrement_ref_count2(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __dec_obj185=node_352;
                                            node_352=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value483=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_352),info))));
                                            if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value483) { right_value483 = come_decrement_ref_count2(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __result330__ = __result_obj__ = node_352;
                                            if(node_352) { node_352 = come_decrement_ref_count2(node_352, ((struct sNode*)node_352)->finalize, ((struct sNode*)node_352)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            return __result330__;
                                            if(node_352) { node_352 = come_decrement_ref_count2(node_352, ((struct sNode*)node_352)->finalize, ((struct sNode*)node_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional497=parsecmp("return",info),                                            _if_conditional497) {
                                                info->p+=strlen("return");
                                                skip_spaces_and_lf(info);
                                                if(_if_conditional498=*info->p==59,                                                _if_conditional498) {
                                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2154, "struct sNode");
                                                    _inf_obj_value9=come_increment_ref_count(((struct sReturnNode*)(right_value486=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value484=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2154, "struct sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value485=__builtin_string("0")))),info))));
                                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                                    _inf_value9->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value9->clone=(void*)sReturnNode_clone;
                                                    _inf_value9->compile=(void*)sReturnNode_compile;
                                                    _inf_value9->sline=(void*)sReturnNode_sline;
                                                    _inf_value9->sname=(void*)sReturnNode_sname;
                                                    _inf_value9->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value9->kind=(void*)sReturnNode_kind;
                                                    __result333__ = __result_obj__ = ((struct sNode*)(right_value491=_inf_value9));
                                                    come_call_finalizer2(sReturnNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value491) { right_value491 = come_decrement_ref_count2(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result333__;
                                                }
                                                else {
                                                    head_354=info->p;
                                                    value_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value492=expression_v13(info))));
                                                    if(right_value492) { right_value492 = come_decrement_ref_count2(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    tail_356=info->p;
                                                    __dec_obj189=value_355;
                                                    value_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value493=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_355),info))));
                                                    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    __dec_obj190=value_355;
                                                    value_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value494=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_355),info))));
                                                    if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value494) { right_value494 = come_decrement_ref_count2(right_value494, ((struct sNode*)right_value494)->finalize, ((struct sNode*)right_value494)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    char buf_357[tail_356-head_354+1];
                                                    memset(&buf_357, 0, sizeof(char)                                                    *(tail_356-head_354+1)                                                    );
                                                    memcpy(buf_357,head_354,tail_356-head_354);
                                                    buf_357[tail_356-head_354]=0;
                                                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2167, "struct sNode");
                                                    _inf_obj_value10=come_increment_ref_count(((struct sReturnNode*)(right_value497=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value495=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2167, "struct sReturnNode")))),(struct sNode*)come_increment_ref_count(value_355),(char*)come_increment_ref_count(((char*)(right_value496=__builtin_string(buf_357)))),info))));
                                                    _inf_value10->_protocol_obj=_inf_obj_value10;
                                                    _inf_value10->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value10->clone=(void*)sReturnNode_clone;
                                                    _inf_value10->compile=(void*)sReturnNode_compile;
                                                    _inf_value10->sline=(void*)sReturnNode_sline;
                                                    _inf_value10->sname=(void*)sReturnNode_sname;
                                                    _inf_value10->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value10->kind=(void*)sReturnNode_kind;
                                                    __result336__ = __result_obj__ = ((struct sNode*)(right_value502=_inf_value10));
                                                    if(value_355) { value_355 = come_decrement_ref_count2(value_355, ((struct sNode*)value_355)->finalize, ((struct sNode*)value_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sReturnNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value496 = come_decrement_ref_count2(right_value496, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value502) { right_value502 = come_decrement_ref_count2(right_value502, ((struct sNode*)right_value502)->finalize, ((struct sNode*)right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result336__;
                                                    if(value_355) { value_355 = come_decrement_ref_count2(value_355, ((struct sNode*)value_355)->finalize, ((struct sNode*)value_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                if(_if_conditional515=parsecmp("return!",info),                                                _if_conditional515) {
                                                    info->p+=strlen("return!");
                                                    skip_spaces_and_lf(info);
                                                    if(_if_conditional516=*info->p==59,                                                    _if_conditional516) {
                                                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2175, "struct sNode");
                                                        _inf_obj_value11=come_increment_ref_count(((struct sParentReturnNode*)(right_value505=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value503=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2175, "struct sParentReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value504=__builtin_string("0")))),info))));
                                                        _inf_value11->_protocol_obj=_inf_obj_value11;
                                                        _inf_value11->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value11->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value11->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value11->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value11->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value11->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value11->kind=(void*)sParentReturnNode_kind;
                                                        __result339__ = __result_obj__ = ((struct sNode*)(right_value510=_inf_value11));
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value504 = come_decrement_ref_count2(right_value504, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value510) { right_value510 = come_decrement_ref_count2(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result339__;
                                                    }
                                                    else {
                                                        head_360=info->p;
                                                        value_361=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=expression_v13(info))));
                                                        if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        tail_362=info->p;
                                                        __dec_obj197=value_361;
                                                        value_361=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value512=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_361),info))));
                                                        if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value512) { right_value512 = come_decrement_ref_count2(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        __dec_obj198=value_361;
                                                        value_361=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value513=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_361),info))));
                                                        if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value513) { right_value513 = come_decrement_ref_count2(right_value513, ((struct sNode*)right_value513)->finalize, ((struct sNode*)right_value513)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        char buf_363[tail_362-head_360+1];
                                                        memset(&buf_363, 0, sizeof(char)                                                        *(tail_362-head_360+1)                                                        );
                                                        memcpy(buf_363,head_360,tail_362-head_360);
                                                        buf_363[tail_362-head_360]=0;
                                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2188, "struct sNode");
                                                        _inf_obj_value12=come_increment_ref_count(((struct sParentReturnNode*)(right_value516=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value514=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2188, "struct sParentReturnNode")))),(struct sNode*)come_increment_ref_count(value_361),(char*)come_increment_ref_count(((char*)(right_value515=__builtin_string(buf_363)))),info))));
                                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                                        _inf_value12->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value12->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value12->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value12->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value12->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value12->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value12->kind=(void*)sParentReturnNode_kind;
                                                        __result342__ = __result_obj__ = ((struct sNode*)(right_value521=_inf_value12));
                                                        if(value_361) { value_361 = come_decrement_ref_count2(value_361, ((struct sNode*)value_361)->finalize, ((struct sNode*)value_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value515 = come_decrement_ref_count2(right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value521) { right_value521 = come_decrement_ref_count2(right_value521, ((struct sNode*)right_value521)->finalize, ((struct sNode*)right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result342__;
                                                        if(value_361) { value_361 = come_decrement_ref_count2(value_361, ((struct sNode*)value_361)->finalize, ((struct sNode*)value_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional533=parsecmp("break!",info),                                                    _if_conditional533) {
                                                        info->p+=strlen("break!");
                                                        skip_spaces_and_lf(info);
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2195, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sParentBreakNode*)(right_value523=sParentBreakNode_initialize((struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value522=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "05function.c", 2195, "struct sParentBreakNode")))),info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sParentBreakNode_finalize;
                                                        _inf_value13->clone=(void*)sParentBreakNode_clone;
                                                        _inf_value13->compile=(void*)sParentBreakNode_compile;
                                                        _inf_value13->sline=(void*)sParentBreakNode_sline;
                                                        _inf_value13->sname=(void*)sParentBreakNode_sname;
                                                        _inf_value13->terminated=(void*)sParentBreakNode_terminated;
                                                        _inf_value13->kind=(void*)sParentBreakNode_kind;
                                                        __result345__ = __result_obj__ = ((struct sNode*)(right_value526=_inf_value13));
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result345__;
                                                    }
                                                    else {
                                                        if(_if_conditional538=parsecmp("continue!",info),                                                        _if_conditional538) {
                                                            info->p+=strlen("continue!");
                                                            skip_spaces_and_lf(info);
                                                            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2201, "struct sNode");
                                                            _inf_obj_value14=come_increment_ref_count(((struct sParentContinueNode*)(right_value528=sParentContinueNode_initialize((struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value527=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "05function.c", 2201, "struct sParentContinueNode")))),info))));
                                                            _inf_value14->_protocol_obj=_inf_obj_value14;
                                                            _inf_value14->finalize=(void*)sParentContinueNode_finalize;
                                                            _inf_value14->clone=(void*)sParentContinueNode_clone;
                                                            _inf_value14->compile=(void*)sParentContinueNode_compile;
                                                            _inf_value14->sline=(void*)sParentContinueNode_sline;
                                                            _inf_value14->sname=(void*)sParentContinueNode_sname;
                                                            _inf_value14->terminated=(void*)sParentContinueNode_terminated;
                                                            _inf_value14->kind=(void*)sParentContinueNode_kind;
                                                            __result348__ = __result_obj__ = ((struct sNode*)(right_value531=_inf_value14));
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value531) { right_value531 = come_decrement_ref_count2(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result348__;
                                                        }
                                                        else {
                                                            if(_if_conditional543=(*info->p==92&&*(info->p+1)==42)||*info->p==42,                                                            _if_conditional543) {
                                                                if(_if_conditional544=*info->p==92,                                                                _if_conditional544) {
                                                                    info->p+=2;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_367=(_Bool)1;
                                                                }
                                                                else {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_367=(_Bool)0;
                                                                }
                                                                no_assign_368=info->no_assign;
                                                                info->no_assign=(_Bool)1;
                                                                value_369=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value532=expression_node_v99(info))));
                                                                if(right_value532) { right_value532 = come_decrement_ref_count2(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                info->no_assign=no_assign_368;
                                                                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2222, "struct sNode");
                                                                _inf_obj_value15=come_increment_ref_count(((struct sDerefferenceNode*)(right_value534=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value533=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05function.c", 2221, "struct sDerefferenceNode")))),(struct sNode*)come_increment_ref_count(value_369),quote_367,info))));
                                                                _inf_value15->_protocol_obj=_inf_obj_value15;
                                                                _inf_value15->finalize=(void*)sDerefferenceNode_finalize;
                                                                _inf_value15->clone=(void*)sDerefferenceNode_clone;
                                                                _inf_value15->compile=(void*)sDerefferenceNode_compile;
                                                                _inf_value15->sline=(void*)sDerefferenceNode_sline;
                                                                _inf_value15->sname=(void*)sDerefferenceNode_sname;
                                                                _inf_value15->terminated=(void*)sDerefferenceNode_terminated;
                                                                _inf_value15->kind=(void*)sDerefferenceNode_kind;
                                                                __result351__ = __result_obj__ = ((struct sNode*)(right_value538=_inf_value15));
                                                                if(value_369) { value_369 = come_decrement_ref_count2(value_369, ((struct sNode*)value_369)->finalize, ((struct sNode*)value_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value538) { right_value538 = come_decrement_ref_count2(right_value538, ((struct sNode*)right_value538)->finalize, ((struct sNode*)right_value538)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result351__;
                                                                if(value_369) { value_369 = come_decrement_ref_count2(value_369, ((struct sNode*)value_369)->finalize, ((struct sNode*)value_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                if(_if_conditional552=*info->p==38&&refference_336,                                                                _if_conditional552) {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    value_371=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value539=expression_node_v99(info))));
                                                                    if(right_value539) { right_value539 = come_decrement_ref_count2(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2229, "struct sNode");
                                                                    _inf_obj_value16=come_increment_ref_count(((struct sRefferenceNode*)(right_value541=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value540=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05function.c", 2229, "struct sRefferenceNode")))),(struct sNode*)come_increment_ref_count(value_371),info))));
                                                                    _inf_value16->_protocol_obj=_inf_obj_value16;
                                                                    _inf_value16->finalize=(void*)sRefferenceNode_finalize;
                                                                    _inf_value16->clone=(void*)sRefferenceNode_clone;
                                                                    _inf_value16->compile=(void*)sRefferenceNode_compile;
                                                                    _inf_value16->sline=(void*)sRefferenceNode_sline;
                                                                    _inf_value16->sname=(void*)sRefferenceNode_sname;
                                                                    _inf_value16->terminated=(void*)sRefferenceNode_terminated;
                                                                    _inf_value16->kind=(void*)sRefferenceNode_kind;
                                                                    __result354__ = __result_obj__ = ((struct sNode*)(right_value545=_inf_value16));
                                                                    if(value_371) { value_371 = come_decrement_ref_count2(value_371, ((struct sNode*)value_371)->finalize, ((struct sNode*)value_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value545) { right_value545 = come_decrement_ref_count2(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    return __result354__;
                                                                    if(value_371) { value_371 = come_decrement_ref_count2(value_371, ((struct sNode*)value_371)->finalize, ((struct sNode*)value_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    if(_if_conditional559=*info->p==33,                                                                    _if_conditional559) {
                                                                        info->p++;
                                                                        skip_spaces_and_lf(info);
                                                                        value_373=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=expression_node_v99(info))));
                                                                        if(right_value546) { right_value546 = come_decrement_ref_count2(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2237, "struct sNode");
                                                                        _inf_obj_value17=come_increment_ref_count(((struct sReverseNode*)(right_value548=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value547=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05function.c", 2237, "struct sReverseNode")))),(struct sNode*)come_increment_ref_count(value_373),info))));
                                                                        _inf_value17->_protocol_obj=_inf_obj_value17;
                                                                        _inf_value17->finalize=(void*)sReverseNode_finalize;
                                                                        _inf_value17->clone=(void*)sReverseNode_clone;
                                                                        _inf_value17->compile=(void*)sReverseNode_compile;
                                                                        _inf_value17->sline=(void*)sReverseNode_sline;
                                                                        _inf_value17->sname=(void*)sReverseNode_sname;
                                                                        _inf_value17->terminated=(void*)sReverseNode_terminated;
                                                                        _inf_value17->kind=(void*)sReverseNode_kind;
                                                                        __result357__ = __result_obj__ = ((struct sNode*)(right_value552=_inf_value17));
                                                                        if(value_373) { value_373 = come_decrement_ref_count2(value_373, ((struct sNode*)value_373)->finalize, ((struct sNode*)value_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value552) { right_value552 = come_decrement_ref_count2(right_value552, ((struct sNode*)right_value552)->finalize, ((struct sNode*)right_value552)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result357__;
                                                                        if(value_373) { value_373 = come_decrement_ref_count2(value_373, ((struct sNode*)value_373)->finalize, ((struct sNode*)value_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    else {
                                                                        if(_if_conditional566=(xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34),                                                                        _if_conditional566) {
                                                                            head_375=info->p;
                                                                            head_sline_376=info->sline;
                                                                            {
                                                                                p_378=info->p;
                                                                                sline_379=info->sline;
                                                                                if(_if_conditional567=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional567) {
                                                                                    __dec_obj210=buf_377;
                                                                                    buf_377=(char*)come_increment_ref_count(((char*)(right_value553=parse_word(info))));
                                                                                    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    __dec_obj211=buf_377;
                                                                                    buf_377=(char*)come_increment_ref_count(((char*)(right_value554=__builtin_string(""))));
                                                                                    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value554 = come_decrement_ref_count2(right_value554, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                info->p=p_378;
                                                                                info->sline=sline_379;
                                                                            }
                                                                            is_type_name__380=is_type_name(buf_377,info);
                                                                            define_function_pointer_flag_381=(_Bool)0;
                                                                            if(_if_conditional568=string_operator_not_equals(buf_377,"if")&&string_operator_not_equals(buf_377,"while")&&string_operator_not_equals(buf_377,"for")&&string_operator_not_equals(buf_377,"switch")&&string_operator_not_equals(buf_377,"return")&&string_operator_not_equals(buf_377,"sizeof")&&string_operator_not_equals(buf_377,"isheap")&&string_operator_not_equals(buf_377,"__typeof__")&&string_operator_not_equals(buf_377,"gc_inc")&&string_operator_not_equals(buf_377,"gc_dec")&&string_operator_not_equals(buf_377,"case")&&string_operator_not_equals(buf_377,"_Alignof")&&string_operator_not_equals(buf_377,"_Alignas")&&string_operator_not_equals(buf_377,"__alignof__")&&*info->p==40&&*(info->p+1)!=42,                                                                            _if_conditional568) {
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional569=*info->p==40,                                                                                _if_conditional569) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional570=*info->p==42,                                                                                    _if_conditional570) {
                                                                                        info->p++;
                                                                                        skip_spaces_and_lf(info);
                                                                                        define_function_pointer_flag_381=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->p=head_375;
                                                                                info->sline=head_sline_376;
                                                                            }
                                                                            lambda_flag_382=(_Bool)0;
                                                                            if(_if_conditional571=string_operator_not_equals(buf_377,"if")&&string_operator_not_equals(buf_377,"while")&&string_operator_not_equals(buf_377,"for")&&string_operator_not_equals(buf_377,"switch")&&string_operator_not_equals(buf_377,"return")&&string_operator_not_equals(buf_377,"sizeof")&&string_operator_not_equals(buf_377,"_Alignof")&&string_operator_not_equals(buf_377,"__alignof__")&&string_operator_not_equals(buf_377,"_Alignas")&&string_operator_not_equals(buf_377,"isheap")&&string_operator_not_equals(buf_377,"__typeof__")&&string_operator_not_equals(buf_377,"gc_inc")&&string_operator_not_equals(buf_377,"gc_dec")&&string_operator_not_equals(buf_377,"case")&&is_type_name__380,                                                                            _if_conditional571) {
                                                                                info->p=head_375;
                                                                                info->sline=head_sline_376;
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional572=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional572) {
                                                                                    word2_383=(char*)come_increment_ref_count(((char*)(right_value555=parse_word(info))));
                                                                                    right_value555 = come_decrement_ref_count2(right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional573=string_operator_equals(word2_383,"lambda"),                                                                                    _if_conditional573) {
                                                                                        lambda_flag_382=(_Bool)1;
                                                                                    }
                                                                                    word2_383 = come_decrement_ref_count2(word2_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                info->p=head_375;
                                                                                info->sline=head_sline_376;
                                                                            }
                                                                            fun_name_with_type_name_384=(_Bool)0;
                                                                            if(_if_conditional574=string_operator_not_equals(buf_377,"if")&&string_operator_not_equals(buf_377,"while")&&string_operator_not_equals(buf_377,"for")&&string_operator_not_equals(buf_377,"switch")&&string_operator_not_equals(buf_377,"return")&&string_operator_not_equals(buf_377,"sizeof")&&string_operator_not_equals(buf_377,"_Alignof")&&string_operator_not_equals(buf_377,"__alignof__")&&string_operator_not_equals(buf_377,"_Alignas")&&string_operator_not_equals(buf_377,"isheap")&&string_operator_not_equals(buf_377,"__typeof__")&&string_operator_not_equals(buf_377,"gc_inc")&&string_operator_not_equals(buf_377,"gc_dec")&&string_operator_not_equals(buf_377,"case"),                                                                            _if_conditional574) {
                                                                                info->p=head_375;
                                                                                info->sline=head_sline_376;
                                                                                info->no_output_err=(_Bool)1;
                                                                                if(_if_conditional575=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional575) {
                                                                                    word2_385=(char*)come_increment_ref_count(((char*)(right_value556=parse_word(info))));
                                                                                    right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    word2_385 = come_decrement_ref_count2(word2_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                while(_while_condtional33=*info->p==42,                                                                                _while_condtional33) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                }
                                                                                if(_if_conditional576=*info->p==58&&*(info->p+1)==58,                                                                                _if_conditional576) {
                                                                                    info->p+=2;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional577=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional577) {
                                                                                        fun_name_with_type_name_384=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->no_output_err=(_Bool)0;
                                                                                info->p=head_375;
                                                                                info->sline=head_sline_376;
                                                                            }
                                                                            __dec_obj212=buf_377;
                                                                            buf_377=(char*)come_increment_ref_count(((char*)(right_value557=parse_word(info))));
                                                                            __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value557 = come_decrement_ref_count2(right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(lambda_flag_382) {
                                                                                info->p=head_375;
                                                                                info->sline=head_sline_376;
                                                                                __result358__ = __result_obj__ = ((struct sNode*)(right_value558=parse_function(info)));
                                                                                buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                if(right_value558) { right_value558 = come_decrement_ref_count2(right_value558, ((struct sNode*)right_value558)->finalize, ((struct sNode*)right_value558)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result358__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional579=(string_operator_equals(buf_377,"string")||string_operator_equals(buf_377,"wstring"))&&*info->p==40,                                                                                _if_conditional579) {
                                                                                    node_386=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value559=parse_function_call(buf_377,info))));
                                                                                    if(right_value559) { right_value559 = come_decrement_ref_count2(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj213=node_386;
                                                                                    node_386=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value560=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_386),info))));
                                                                                    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value560) { right_value560 = come_decrement_ref_count2(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj214=node_386;
                                                                                    node_386=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_386),info))));
                                                                                    if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result359__ = __result_obj__ = node_386;
                                                                                    if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    return __result359__;
                                                                                    if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional580=string_operator_equals(buf_377,"__func__"),                                                                                    _if_conditional580) {
                                                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2352, "struct sNode");
                                                                                        _inf_obj_value18=come_increment_ref_count(((struct sFuncNode*)(right_value563=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value562=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05function.c", 2352, "struct sFuncNode")))),info))));
                                                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                                                        _inf_value18->finalize=(void*)sFuncNode_finalize;
                                                                                        _inf_value18->clone=(void*)sFuncNode_clone;
                                                                                        _inf_value18->compile=(void*)sFuncNode_compile;
                                                                                        _inf_value18->sline=(void*)sFuncNode_sline;
                                                                                        _inf_value18->sname=(void*)sFuncNode_sname;
                                                                                        _inf_value18->terminated=(void*)sFuncNode_terminated;
                                                                                        _inf_value18->kind=(void*)sFuncNode_kind;
                                                                                        __result362__ = __result_obj__ = ((struct sNode*)(right_value568=_inf_value18));
                                                                                        buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value568) { right_value568 = come_decrement_ref_count2(right_value568, ((struct sNode*)right_value568)->finalize, ((struct sNode*)right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result362__;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional589=string_operator_equals(buf_377,"__line__"),                                                                                        _if_conditional589) {
                                                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2355, "struct sNode");
                                                                                            _inf_obj_value19=come_increment_ref_count(((struct sLineNode*)(right_value570=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value569=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05function.c", 2355, "struct sLineNode")))),info))));
                                                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                                                            _inf_value19->finalize=(void*)sLineNode_finalize;
                                                                                            _inf_value19->clone=(void*)sLineNode_clone;
                                                                                            _inf_value19->compile=(void*)sLineNode_compile;
                                                                                            _inf_value19->sline=(void*)sLineNode_sline;
                                                                                            _inf_value19->sname=(void*)sLineNode_sname;
                                                                                            _inf_value19->terminated=(void*)sLineNode_terminated;
                                                                                            _inf_value19->kind=(void*)sLineNode_kind;
                                                                                            __result365__ = __result_obj__ = ((struct sNode*)(right_value575=_inf_value19));
                                                                                            buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value575) { right_value575 = come_decrement_ref_count2(right_value575, ((struct sNode*)right_value575)->finalize, ((struct sNode*)right_value575)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result365__;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional598=string_operator_equals(buf_377,"__sname__"),                                                                                            _if_conditional598) {
                                                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2358, "struct sNode");
                                                                                                _inf_obj_value20=come_increment_ref_count(((struct sSNameNode*)(right_value577=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value576=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05function.c", 2358, "struct sSNameNode")))),info))));
                                                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                                                _inf_value20->finalize=(void*)sSNameNode_finalize;
                                                                                                _inf_value20->clone=(void*)sSNameNode_clone;
                                                                                                _inf_value20->compile=(void*)sSNameNode_compile;
                                                                                                _inf_value20->sline=(void*)sSNameNode_sline;
                                                                                                _inf_value20->sname=(void*)sSNameNode_sname;
                                                                                                _inf_value20->terminated=(void*)sSNameNode_terminated;
                                                                                                _inf_value20->kind=(void*)sSNameNode_kind;
                                                                                                __result368__ = __result_obj__ = ((struct sNode*)(right_value582=_inf_value20));
                                                                                                buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(right_value582) { right_value582 = come_decrement_ref_count2(right_value582, ((struct sNode*)right_value582)->finalize, ((struct sNode*)right_value582)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                return __result368__;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional607=string_operator_equals(buf_377,"__caller_func__"),                                                                                                _if_conditional607) {
                                                                                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2361, "struct sNode");
                                                                                                    _inf_obj_value21=come_increment_ref_count(((struct sCallerFuncNode*)(right_value584=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value583=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05function.c", 2361, "struct sCallerFuncNode")))),info))));
                                                                                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                                                    _inf_value21->finalize=(void*)sCallerFuncNode_finalize;
                                                                                                    _inf_value21->clone=(void*)sCallerFuncNode_clone;
                                                                                                    _inf_value21->compile=(void*)sCallerFuncNode_compile;
                                                                                                    _inf_value21->sline=(void*)sCallerFuncNode_sline;
                                                                                                    _inf_value21->sname=(void*)sCallerFuncNode_sname;
                                                                                                    _inf_value21->terminated=(void*)sCallerFuncNode_terminated;
                                                                                                    _inf_value21->kind=(void*)sCallerFuncNode_kind;
                                                                                                    __result371__ = __result_obj__ = ((struct sNode*)(right_value589=_inf_value21));
                                                                                                    buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value583, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    return __result371__;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional616=string_operator_equals(buf_377,"__caller_line__"),                                                                                                    _if_conditional616) {
                                                                                                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2364, "struct sNode");
                                                                                                        _inf_obj_value22=come_increment_ref_count(((struct sCallerLineNode*)(right_value591=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value590=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05function.c", 2364, "struct sCallerLineNode")))),info))));
                                                                                                        _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                                        _inf_value22->finalize=(void*)sCallerLineNode_finalize;
                                                                                                        _inf_value22->clone=(void*)sCallerLineNode_clone;
                                                                                                        _inf_value22->compile=(void*)sCallerLineNode_compile;
                                                                                                        _inf_value22->sline=(void*)sCallerLineNode_sline;
                                                                                                        _inf_value22->sname=(void*)sCallerLineNode_sname;
                                                                                                        _inf_value22->terminated=(void*)sCallerLineNode_terminated;
                                                                                                        _inf_value22->kind=(void*)sCallerLineNode_kind;
                                                                                                        __result374__ = __result_obj__ = ((struct sNode*)(right_value596=_inf_value22));
                                                                                                        buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(right_value596) { right_value596 = come_decrement_ref_count2(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        return __result374__;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(_if_conditional625=string_operator_equals(buf_377,"__caller_sname__"),                                                                                                        _if_conditional625) {
                                                                                                            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2367, "struct sNode");
                                                                                                            _inf_obj_value23=come_increment_ref_count(((struct sCallerSNameNode*)(right_value598=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value597=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05function.c", 2367, "struct sCallerSNameNode")))),info))));
                                                                                                            _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                                            _inf_value23->finalize=(void*)sCallerSNameNode_finalize;
                                                                                                            _inf_value23->clone=(void*)sCallerSNameNode_clone;
                                                                                                            _inf_value23->compile=(void*)sCallerSNameNode_compile;
                                                                                                            _inf_value23->sline=(void*)sCallerSNameNode_sline;
                                                                                                            _inf_value23->sname=(void*)sCallerSNameNode_sname;
                                                                                                            _inf_value23->terminated=(void*)sCallerSNameNode_terminated;
                                                                                                            _inf_value23->kind=(void*)sCallerSNameNode_kind;
                                                                                                            __result377__ = __result_obj__ = ((struct sNode*)(right_value603=_inf_value23));
                                                                                                            buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(right_value603) { right_value603 = come_decrement_ref_count2(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            return __result377__;
                                                                                                        }
                                                                                                        else {
                                                                                                            if(_if_conditional634=(string_operator_equals(buf_377,"sizeof")||string_operator_equals(buf_377,"_Alignof")||string_operator_equals(buf_377,"_Alignas")||string_operator_equals(buf_377,"__alignof__"))&&*info->p==40,                                                                                                            _if_conditional634) {
                                                                                                                node_393=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value604=string_node_v21(buf_377,head_375,head_sline_376,info))));
                                                                                                                if(right_value604) { right_value604 = come_decrement_ref_count2(right_value604, ((struct sNode*)right_value604)->finalize, ((struct sNode*)right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __dec_obj233=node_393;
                                                                                                                node_393=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value605=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_393),info))));
                                                                                                                if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value605) { right_value605 = come_decrement_ref_count2(right_value605, ((struct sNode*)right_value605)->finalize, ((struct sNode*)right_value605)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __result378__ = __result_obj__ = node_393;
                                                                                                                if(node_393) { node_393 = come_decrement_ref_count2(node_393, ((struct sNode*)node_393)->finalize, ((struct sNode*)node_393)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                return __result378__;
                                                                                                                if(node_393) { node_393 = come_decrement_ref_count2(node_393, ((struct sNode*)node_393)->finalize, ((struct sNode*)node_393)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            else {
                                                                                                                if(fun_name_with_type_name_384) {
                                                                                                                    fun_name_394=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value607=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value606=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2377, "struct buffer"))))))));
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_394,buf_377);
                                                                                                                    type_398=(struct sType*)come_increment_ref_count(((struct sType*)(right_value610=sType_clone(((struct sType*)(right_value609=map$2charphsTypephp_operator_load_element(info->types,((char*)(right_value608=buffer_to_string(fun_name_394))))))))));
                                                                                                                    right_value608 = come_decrement_ref_count2(right_value608, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(sType_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(sType_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    if(_if_conditional640=type_398==((void*)0),                                                                                                                    _if_conditional640) {
                                                                                                                        klass_404=((struct sClass*)(right_value612=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value611=buffer_to_string(fun_name_394))))));
                                                                                                                        right_value611 = come_decrement_ref_count2(right_value611, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        come_call_finalizer2(sClass_finalize,right_value612, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        if(klass_404) {
                                                                                                                            __dec_obj234=type_398;
                                                                                                                            type_398=(struct sType*)come_increment_ref_count(((struct sType*)(right_value614=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value613=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2387, "struct sType")))),buf_377,(_Bool)0,info))));
                                                                                                                            come_call_finalizer2(sType_finalize,__dec_obj234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value613, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            err_msg(info,"null type(%s)",buf_377);
                                                                                                                            exit(2);
                                                                                                                        }
                                                                                                                    }
                                                                                                                    while(_while_condtional37=*info->p==42,                                                                                                                    _while_condtional37) {
                                                                                                                        info->p++;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        if(_if_conditional652=type_398->mClass->mStruct==(_Bool)0,                                                                                                                        _if_conditional652) {
                                                                                                                            buffer_append_str(fun_name_394,"p");
                                                                                                                        }
                                                                                                                    }
                                                                                                                    expected_next_character(58,info);
                                                                                                                    expected_next_character(58,info);
                                                                                                                    buffer_append_str(fun_name_394,"_");
                                                                                                                    buf2_405=(char*)come_increment_ref_count(((char*)(right_value615=parse_word(info))));
                                                                                                                    right_value615 = come_decrement_ref_count2(right_value615, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_394,buf2_405);
                                                                                                                    node_406=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value617=parse_function_call(((char*)(right_value616=buffer_to_string(fun_name_394))),info))));
                                                                                                                    right_value616 = come_decrement_ref_count2(right_value616, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    if(right_value617) { right_value617 = come_decrement_ref_count2(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj235=node_406;
                                                                                                                    node_406=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value618=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_406),info))));
                                                                                                                    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value618) { right_value618 = come_decrement_ref_count2(right_value618, ((struct sNode*)right_value618)->finalize, ((struct sNode*)right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj236=node_406;
                                                                                                                    node_406=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value619=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_406),info))));
                                                                                                                    if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value619) { right_value619 = come_decrement_ref_count2(right_value619, ((struct sNode*)right_value619)->finalize, ((struct sNode*)right_value619)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __result387__ = __result_obj__ = node_406;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_405 = come_decrement_ref_count2(buf2_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_406) { node_406 = come_decrement_ref_count2(node_406, ((struct sNode*)node_406)->finalize, ((struct sNode*)node_406)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                    buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    return __result387__;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_405 = come_decrement_ref_count2(buf2_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_406) { node_406 = come_decrement_ref_count2(node_406, ((struct sNode*)node_406)->finalize, ((struct sNode*)node_406)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                else {
                                                                                                                    if(_if_conditional653=*info->p==58&&*(info->p+1)==58,                                                                                                                    _if_conditional653) {
                                                                                                                        info->p+=2;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        fun_name_407=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value621=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value620=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2424, "struct buffer"))))))));
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_407,buf_377);
                                                                                                                        buffer_append_str(fun_name_407,"_");
                                                                                                                        buf2_408=(char*)come_increment_ref_count(((char*)(right_value622=parse_word(info))));
                                                                                                                        right_value622 = come_decrement_ref_count2(right_value622, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_407,buf2_408);
                                                                                                                        node_409=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value624=parse_function_call(((char*)(right_value623=buffer_to_string(fun_name_407))),info))));
                                                                                                                        right_value623 = come_decrement_ref_count2(right_value623, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        if(right_value624) { right_value624 = come_decrement_ref_count2(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj237=node_409;
                                                                                                                        node_409=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value625=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_409),info))));
                                                                                                                        if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj238=node_409;
                                                                                                                        node_409=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value626=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_409),info))));
                                                                                                                        if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value626) { right_value626 = come_decrement_ref_count2(right_value626, ((struct sNode*)right_value626)->finalize, ((struct sNode*)right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __result388__ = __result_obj__ = node_409;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_407, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_408 = come_decrement_ref_count2(buf2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_409) { node_409 = come_decrement_ref_count2(node_409, ((struct sNode*)node_409)->finalize, ((struct sNode*)node_409)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                        buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        return __result388__;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_407, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_408 = come_decrement_ref_count2(buf2_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_409) { node_409 = come_decrement_ref_count2(node_409, ((struct sNode*)node_409)->finalize, ((struct sNode*)node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                    }
                                                                                                                    else {
                                                                                                                        if(_if_conditional654=string_operator_not_equals(buf_377,"if")&&string_operator_not_equals(buf_377,"while")&&string_operator_not_equals(buf_377,"for")&&string_operator_not_equals(buf_377,"switch")&&string_operator_not_equals(buf_377,"return")&&string_operator_not_equals(buf_377,"sizeof")&&string_operator_not_equals(buf_377,"isheap")&&string_operator_not_equals(buf_377,"__typeof__")&&string_operator_not_equals(buf_377,"gc_inc")&&string_operator_not_equals(buf_377,"gc_dec")&&string_operator_not_equals(buf_377,"case")&&string_operator_not_equals(buf_377,"_Alignof")&&string_operator_not_equals(buf_377,"__alignof__")&&string_operator_not_equals(buf_377,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__380),                                                                                                                        _if_conditional654) {
                                                                                                                            node_410=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=parse_function_call(buf_377,info))));
                                                                                                                            if(right_value627) { right_value627 = come_decrement_ref_count2(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj239=node_410;
                                                                                                                            node_410=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value628=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_410),info))));
                                                                                                                            if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value628) { right_value628 = come_decrement_ref_count2(right_value628, ((struct sNode*)right_value628)->finalize, ((struct sNode*)right_value628)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj240=node_410;
                                                                                                                            node_410=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value629=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_410),info))));
                                                                                                                            if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value629) { right_value629 = come_decrement_ref_count2(right_value629, ((struct sNode*)right_value629)->finalize, ((struct sNode*)right_value629)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result389__ = __result_obj__ = node_410;
                                                                                                                            if(node_410) { node_410 = come_decrement_ref_count2(node_410, ((struct sNode*)node_410)->finalize, ((struct sNode*)node_410)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result389__;
                                                                                                                            if(node_410) { node_410 = come_decrement_ref_count2(node_410, ((struct sNode*)node_410)->finalize, ((struct sNode*)node_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            node_411=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value630=string_node_v21(buf_377,head_375,head_sline_376,info))));
                                                                                                                            if(right_value630) { right_value630 = come_decrement_ref_count2(right_value630, ((struct sNode*)right_value630)->finalize, ((struct sNode*)right_value630)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj241=node_411;
                                                                                                                            node_411=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value631=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_411),info))));
                                                                                                                            if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value631) { right_value631 = come_decrement_ref_count2(right_value631, ((struct sNode*)right_value631)->finalize, ((struct sNode*)right_value631)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result390__ = __result_obj__ = node_411;
                                                                                                                            if(node_411) { node_411 = come_decrement_ref_count2(node_411, ((struct sNode*)node_411)->finalize, ((struct sNode*)node_411)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result390__;
                                                                                                                            if(node_411) { node_411 = come_decrement_ref_count2(node_411, ((struct sNode*)node_411)->finalize, ((struct sNode*)node_411)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional655=*info->p==40,                                                                            _if_conditional655) {
                                                                                info->p++;
                                                                                skip_spaces_and_lf(info);
                                                                                cast_expression_flag_412=(_Bool)0;
                                                                                {
                                                                                    p_413=info->p;
                                                                                    sline_414=info->sline;
                                                                                    word_415=(char*)come_increment_ref_count(((char*)(right_value632=__builtin_string(""))));
                                                                                    right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional656=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional656) {
                                                                                        __dec_obj242=word_415;
                                                                                        word_415=(char*)come_increment_ref_count(((char*)(right_value633=parse_word(info))));
                                                                                        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value633 = come_decrement_ref_count2(right_value633, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    if(_if_conditional657=is_type_name(word_415,info),                                                                                    _if_conditional657) {
                                                                                        cast_expression_flag_412=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_413;
                                                                                    info->sline=sline_414;
                                                                                    word_415 = come_decrement_ref_count2(word_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                tuple_expression_flag_416=(_Bool)0;
                                                                                {
                                                                                    p_417=info->p;
                                                                                    sline_418=info->sline;
                                                                                    no_comma_419=info->no_comma;
                                                                                    info->no_comma=(_Bool)1;
                                                                                    no_output_err_420=info->no_output_err;
                                                                                    info->no_output_err=(_Bool)1;
                                                                                    no_output_come_code_421=info->no_output_come_code;
                                                                                    info->no_output_come_code=(_Bool)1;
                                                                                    node_422=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value634=expression_v13(info))));
                                                                                    if(right_value634) { right_value634 = come_decrement_ref_count2(right_value634, ((struct sNode*)right_value634)->finalize, ((struct sNode*)right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    info->no_comma=no_comma_419;
                                                                                    info->no_output_err=no_output_err_420;
                                                                                    info->no_output_come_code=no_output_come_code_421;
                                                                                    if(_if_conditional658=*info->p==44,                                                                                    _if_conditional658) {
                                                                                        tuple_expression_flag_416=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_417;
                                                                                    info->sline=sline_418;
                                                                                    if(node_422) { node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                if(_if_conditional659=!gComeC&&tuple_expression_flag_416,                                                                                _if_conditional659) {
                                                                                    node_423=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value635=parse_tuple(info))));
                                                                                    if(right_value635) { right_value635 = come_decrement_ref_count2(right_value635, ((struct sNode*)right_value635)->finalize, ((struct sNode*)right_value635)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj243=node_423;
                                                                                    node_423=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value636=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_423),info))));
                                                                                    if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value636) { right_value636 = come_decrement_ref_count2(right_value636, ((struct sNode*)right_value636)->finalize, ((struct sNode*)right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result391__ = __result_obj__ = node_423;
                                                                                    if(node_423) { node_423 = come_decrement_ref_count2(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    return __result391__;
                                                                                    if(node_423) { node_423 = come_decrement_ref_count2(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(cast_expression_flag_412) {
                                                                                        parse_sharp_v5(info);
                                                                                        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value637=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                                        type_424=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                        name_425=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                        err_426=multiple_assign_var8->v3;
                                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional661=!err_426,                                                                                        _if_conditional661) {
                                                                                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                                                                            exit(2);
                                                                                        }
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        node_427=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value638=expression_node_v99(info))));
                                                                                        if(right_value638) { right_value638 = come_decrement_ref_count2(right_value638, ((struct sNode*)right_value638)->finalize, ((struct sNode*)right_value638)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj244=node_427;
                                                                                        node_427=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value639=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_427),info))));
                                                                                        if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value639) { right_value639 = come_decrement_ref_count2(right_value639, ((struct sNode*)right_value639)->finalize, ((struct sNode*)right_value639)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2531, "struct sNode");
                                                                                        _inf_obj_value24=come_increment_ref_count(((struct sCastNode*)(right_value641=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value640=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05function.c", 2531, "struct sCastNode")))),type_424,node_427,info))));
                                                                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                        _inf_value24->finalize=(void*)sCastNode_finalize;
                                                                                        _inf_value24->clone=(void*)sCastNode_clone;
                                                                                        _inf_value24->compile=(void*)sCastNode_compile;
                                                                                        _inf_value24->sline=(void*)sCastNode_sline;
                                                                                        _inf_value24->sname=(void*)sCastNode_sname;
                                                                                        _inf_value24->terminated=(void*)sCastNode_terminated;
                                                                                        _inf_value24->kind=(void*)sCastNode_kind;
                                                                                        __result394__ = __result_obj__ = ((struct sNode*)(right_value646=_inf_value24));
                                                                                        come_call_finalizer2(sType_finalize,type_424, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_425 = come_decrement_ref_count2(name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_427) { node_427 = come_decrement_ref_count2(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value646) { right_value646 = come_decrement_ref_count2(right_value646, ((struct sNode*)right_value646)->finalize, ((struct sNode*)right_value646)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result394__;
                                                                                        come_call_finalizer2(sType_finalize,type_424, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_425 = come_decrement_ref_count2(name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_427) { node_427 = come_decrement_ref_count2(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                    else {
                                                                                        parse_sharp_v5(info);
                                                                                        node_429=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value647=expression_v13(info))));
                                                                                        if(right_value647) { right_value647 = come_decrement_ref_count2(right_value647, ((struct sNode*)right_value647)->finalize, ((struct sNode*)right_value647)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        parse_sharp_v5(info);
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2541, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sParenNode*)(right_value649=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value648=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05function.c", 2541, "struct sParenNode")))),node_429,info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sParenNode_finalize;
                                                                                        _inf_value25->clone=(void*)sParenNode_clone;
                                                                                        _inf_value25->compile=(void*)sParenNode_compile;
                                                                                        _inf_value25->sline=(void*)sParenNode_sline;
                                                                                        _inf_value25->sname=(void*)sParenNode_sname;
                                                                                        _inf_value25->terminated=(void*)sParenNode_terminated;
                                                                                        _inf_value25->kind=(void*)sParenNode_kind;
                                                                                        __dec_obj250=node_429;
                                                                                        node_429=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value653=_inf_value25)));
                                                                                        if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value649, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value653) { right_value653 = come_decrement_ref_count2(right_value653, ((struct sNode*)right_value653)->finalize, ((struct sNode*)right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj251=node_429;
                                                                                        node_429=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value654=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_429),info))));
                                                                                        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value654) { right_value654 = come_decrement_ref_count2(right_value654, ((struct sNode*)right_value654)->finalize, ((struct sNode*)right_value654)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __result397__ = __result_obj__ = node_429;
                                                                                        if(node_429) { node_429 = come_decrement_ref_count2(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                        return __result397__;
                                                                                        if(node_429) { node_429 = come_decrement_ref_count2(node_429, ((struct sNode*)node_429)->finalize, ((struct sNode*)node_429)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                node_431=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=expression_node_v98(info))));
                                                                                if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __dec_obj252=node_431;
                                                                                node_431=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value656=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_431),info))));
                                                                                if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value656) { right_value656 = come_decrement_ref_count2(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __result398__ = __result_obj__ = node_431;
                                                                                if(node_431) { node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result398__;
                                                                                if(node_431) { node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result399__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result399__;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional459;
_Bool _if_conditional460;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional459=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional459) {
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional460=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional460) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional461;
struct sLogicalDenial* __result312__;
void* right_value444;
struct sLogicalDenial* result_340;
_Bool _if_conditional462;
void* right_value445;
struct sNode* __dec_obj172;
_Bool _if_conditional463;
_Bool _if_conditional464;
void* right_value446;
char* __dec_obj173;
struct sLogicalDenial* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
right_value444 = (void*)0;
memset(&result_340, 0, sizeof(struct sLogicalDenial*));
right_value445 = (void*)0;
right_value446 = (void*)0;
                if(_if_conditional461=self==(void*)0,                _if_conditional461) {
                    __result312__ = __result_obj__ = (void*)0;
                    return __result312__;
                }
                result_340=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value444=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "struct sLogicalDenial"))));
                come_call_finalizer2(sLogicalDenial_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional462=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional462) {
                    __dec_obj172=result_340->value;
                    result_340->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=sNode_clone(self->value))));
                    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional463=self!=((void*)0),                _if_conditional463) {
                    result_340->sline=self->sline;
                }
                if(_if_conditional464=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional464) {
                    __dec_obj173=result_340->sname;
                    result_340->sname=(char*)come_increment_ref_count(((char*)(right_value446=string_clone(self->sname))));
                    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result313__ = __result_obj__ = result_340;
                come_call_finalizer2(sLogicalDenial_finalize,result_340, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result313__;
                come_call_finalizer2(sLogicalDenial_finalize,result_340, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional466;
_Bool _if_conditional467;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional466=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional466) {
                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional467=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional467) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional468;
struct sMinusMinusNode2* __result315__;
void* right_value451;
struct sMinusMinusNode2* result_342;
_Bool _if_conditional469;
void* right_value452;
struct sNode* __dec_obj174;
_Bool _if_conditional470;
_Bool _if_conditional471;
void* right_value453;
char* __dec_obj175;
struct sMinusMinusNode2* __result316__;
memset(&__result_obj__, 0, sizeof(void*));
right_value451 = (void*)0;
memset(&result_342, 0, sizeof(struct sMinusMinusNode2*));
right_value452 = (void*)0;
right_value453 = (void*)0;
                    if(_if_conditional468=self==(void*)0,                    _if_conditional468) {
                        __result315__ = __result_obj__ = (void*)0;
                        return __result315__;
                    }
                    result_342=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value451=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "struct sMinusMinusNode2"))));
                    come_call_finalizer2(sMinusMinusNode2_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional469=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional469) {
                        __dec_obj174=result_342->value;
                        result_342->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value452=sNode_clone(self->value))));
                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional470=self!=((void*)0),                    _if_conditional470) {
                        result_342->sline=self->sline;
                    }
                    if(_if_conditional471=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional471) {
                        __dec_obj175=result_342->sname;
                        result_342->sname=(char*)come_increment_ref_count(((char*)(right_value453=string_clone(self->sname))));
                        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value453 = come_decrement_ref_count2(right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result316__ = __result_obj__ = result_342;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_342, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result316__;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_342, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional473;
_Bool _if_conditional474;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional473=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional473) {
                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional474=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional474) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional475;
struct sMinusNode2* __result318__;
void* right_value458;
struct sMinusNode2* result_344;
_Bool _if_conditional476;
void* right_value459;
struct sNode* __dec_obj176;
_Bool _if_conditional477;
_Bool _if_conditional478;
void* right_value460;
char* __dec_obj177;
struct sMinusNode2* __result319__;
memset(&__result_obj__, 0, sizeof(void*));
right_value458 = (void*)0;
memset(&result_344, 0, sizeof(struct sMinusNode2*));
right_value459 = (void*)0;
right_value460 = (void*)0;
                        if(_if_conditional475=self==(void*)0,                        _if_conditional475) {
                            __result318__ = __result_obj__ = (void*)0;
                            return __result318__;
                        }
                        result_344=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value458=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "struct sMinusNode2"))));
                        come_call_finalizer2(sMinusNode2_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional476=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional476) {
                            __dec_obj176=result_344->value;
                            result_344->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value459=sNode_clone(self->value))));
                            if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value459) { right_value459 = come_decrement_ref_count2(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional477=self!=((void*)0),                        _if_conditional477) {
                            result_344->sline=self->sline;
                        }
                        if(_if_conditional478=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional478) {
                            __dec_obj177=result_344->sname;
                            result_344->sname=(char*)come_increment_ref_count(((char*)(right_value460=string_clone(self->sname))));
                            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value460 = come_decrement_ref_count2(right_value460, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result319__ = __result_obj__ = result_344;
                        come_call_finalizer2(sMinusNode2_finalize,result_344, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result319__;
                        come_call_finalizer2(sMinusNode2_finalize,result_344, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional480;
_Bool _if_conditional481;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional480=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional480) {
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional481=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional481) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional482;
struct sPlusPlusNode2* __result321__;
void* right_value465;
struct sPlusPlusNode2* result_346;
_Bool _if_conditional483;
void* right_value466;
struct sNode* __dec_obj178;
_Bool _if_conditional484;
_Bool _if_conditional485;
void* right_value467;
char* __dec_obj179;
struct sPlusPlusNode2* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
right_value465 = (void*)0;
memset(&result_346, 0, sizeof(struct sPlusPlusNode2*));
right_value466 = (void*)0;
right_value467 = (void*)0;
                            if(_if_conditional482=self==(void*)0,                            _if_conditional482) {
                                __result321__ = __result_obj__ = (void*)0;
                                return __result321__;
                            }
                            result_346=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value465=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "struct sPlusPlusNode2"))));
                            come_call_finalizer2(sPlusPlusNode2_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional483=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional483) {
                                __dec_obj178=result_346->value;
                                result_346->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value466=sNode_clone(self->value))));
                                if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value466) { right_value466 = come_decrement_ref_count2(right_value466, ((struct sNode*)right_value466)->finalize, ((struct sNode*)right_value466)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional484=self!=((void*)0),                            _if_conditional484) {
                                result_346->sline=self->sline;
                            }
                            if(_if_conditional485=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional485) {
                                __dec_obj179=result_346->sname;
                                result_346->sname=(char*)come_increment_ref_count(((char*)(right_value467=string_clone(self->sname))));
                                __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value467 = come_decrement_ref_count2(right_value467, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result322__ = __result_obj__ = result_346;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_346, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result322__;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_346, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sComplement_finalize(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional487;
_Bool _if_conditional488;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional487=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional487) {
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional488=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional488) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional489;
struct sComplement* __result324__;
void* right_value472;
struct sComplement* result_348;
_Bool _if_conditional490;
void* right_value473;
struct sNode* __dec_obj180;
_Bool _if_conditional491;
_Bool _if_conditional492;
void* right_value474;
char* __dec_obj181;
struct sComplement* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
right_value472 = (void*)0;
memset(&result_348, 0, sizeof(struct sComplement*));
right_value473 = (void*)0;
right_value474 = (void*)0;
                                if(_if_conditional489=self==(void*)0,                                _if_conditional489) {
                                    __result324__ = __result_obj__ = (void*)0;
                                    return __result324__;
                                }
                                result_348=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value472=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "struct sComplement"))));
                                come_call_finalizer2(sComplement_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional490=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional490) {
                                    __dec_obj180=result_348->value;
                                    result_348->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value473=sNode_clone(self->value))));
                                    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value473) { right_value473 = come_decrement_ref_count2(right_value473, ((struct sNode*)right_value473)->finalize, ((struct sNode*)right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional491=self!=((void*)0),                                _if_conditional491) {
                                    result_348->sline=self->sline;
                                }
                                if(_if_conditional492=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional492) {
                                    __dec_obj181=result_348->sname;
                                    result_348->sname=(char*)come_increment_ref_count(((char*)(right_value474=string_clone(self->sname))));
                                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result325__ = __result_obj__ = result_348;
                                come_call_finalizer2(sComplement_finalize,result_348, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result325__;
                                come_call_finalizer2(sComplement_finalize,result_348, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReturnNode_finalize(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional507;
_Bool _if_conditional508;
_Bool _if_conditional509;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional507=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional507) {
                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional508=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional508) {
                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional509=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional509) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional510;
struct sReturnNode* __result334__;
void* right_value498;
struct sReturnNode* result_358;
_Bool _if_conditional511;
void* right_value499;
struct sNode* __dec_obj191;
_Bool _if_conditional512;
void* right_value500;
char* __dec_obj192;
_Bool _if_conditional513;
_Bool _if_conditional514;
void* right_value501;
char* __dec_obj193;
struct sReturnNode* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
right_value498 = (void*)0;
memset(&result_358, 0, sizeof(struct sReturnNode*));
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
                                                        if(_if_conditional510=self==(void*)0,                                                        _if_conditional510) {
                                                            __result334__ = __result_obj__ = (void*)0;
                                                            return __result334__;
                                                        }
                                                        result_358=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value498=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode"))));
                                                        come_call_finalizer2(sReturnNode_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional511=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional511) {
                                                            __dec_obj191=result_358->value;
                                                            result_358->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value499=sNode_clone(self->value))));
                                                            if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value499) { right_value499 = come_decrement_ref_count2(right_value499, ((struct sNode*)right_value499)->finalize, ((struct sNode*)right_value499)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional512=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional512) {
                                                            __dec_obj192=result_358->value_source;
                                                            result_358->value_source=(char*)come_increment_ref_count(((char*)(right_value500=string_clone(self->value_source))));
                                                            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value500 = come_decrement_ref_count2(right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional513=self!=((void*)0),                                                        _if_conditional513) {
                                                            result_358->sline=self->sline;
                                                        }
                                                        if(_if_conditional514=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional514) {
                                                            __dec_obj193=result_358->sname;
                                                            result_358->sname=(char*)come_increment_ref_count(((char*)(right_value501=string_clone(self->sname))));
                                                            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result335__ = __result_obj__ = result_358;
                                                        come_call_finalizer2(sReturnNode_finalize,result_358, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result335__;
                                                        come_call_finalizer2(sReturnNode_finalize,result_358, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentReturnNode_finalize(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional525;
_Bool _if_conditional526;
_Bool _if_conditional527;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional525=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional525) {
                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional526=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional526) {
                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(_if_conditional527=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional527) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentReturnNode* sParentReturnNode_clone(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional528;
struct sParentReturnNode* __result340__;
void* right_value517;
struct sParentReturnNode* result_364;
_Bool _if_conditional529;
void* right_value518;
struct sNode* __dec_obj199;
_Bool _if_conditional530;
void* right_value519;
char* __dec_obj200;
_Bool _if_conditional531;
_Bool _if_conditional532;
void* right_value520;
char* __dec_obj201;
struct sParentReturnNode* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value517 = (void*)0;
memset(&result_364, 0, sizeof(struct sParentReturnNode*));
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
                                                            if(_if_conditional528=self==(void*)0,                                                            _if_conditional528) {
                                                                __result340__ = __result_obj__ = (void*)0;
                                                                return __result340__;
                                                            }
                                                            result_364=(struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value517=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "sParentReturnNode_clone", 3, "struct sParentReturnNode"))));
                                                            come_call_finalizer2(sParentReturnNode_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional529=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional529) {
                                                                __dec_obj199=result_364->value;
                                                                result_364->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value518=sNode_clone(self->value))));
                                                                if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value518) { right_value518 = come_decrement_ref_count2(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional530=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional530) {
                                                                __dec_obj200=result_364->value_source;
                                                                result_364->value_source=(char*)come_increment_ref_count(((char*)(right_value519=string_clone(self->value_source))));
                                                                __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            if(_if_conditional531=self!=((void*)0),                                                            _if_conditional531) {
                                                                result_364->sline=self->sline;
                                                            }
                                                            if(_if_conditional532=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional532) {
                                                                __dec_obj201=result_364->sname;
                                                                result_364->sname=(char*)come_increment_ref_count(((char*)(right_value520=string_clone(self->sname))));
                                                                __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value520 = come_decrement_ref_count2(right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result341__ = __result_obj__ = result_364;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_364, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result341__;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentBreakNode_finalize(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional534;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional534=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional534) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentBreakNode* sParentBreakNode_clone(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional535;
struct sParentBreakNode* __result343__;
void* right_value524;
struct sParentBreakNode* result_365;
_Bool _if_conditional536;
_Bool _if_conditional537;
void* right_value525;
char* __dec_obj202;
struct sParentBreakNode* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
right_value524 = (void*)0;
memset(&result_365, 0, sizeof(struct sParentBreakNode*));
right_value525 = (void*)0;
                                                            if(_if_conditional535=self==(void*)0,                                                            _if_conditional535) {
                                                                __result343__ = __result_obj__ = (void*)0;
                                                                return __result343__;
                                                            }
                                                            result_365=(struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value524=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "sParentBreakNode_clone", 3, "struct sParentBreakNode"))));
                                                            come_call_finalizer2(sParentBreakNode_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional536=self!=((void*)0),                                                            _if_conditional536) {
                                                                result_365->sline=self->sline;
                                                            }
                                                            if(_if_conditional537=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional537) {
                                                                __dec_obj202=result_365->sname;
                                                                result_365->sname=(char*)come_increment_ref_count(((char*)(right_value525=string_clone(self->sname))));
                                                                __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value525 = come_decrement_ref_count2(right_value525, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result344__ = __result_obj__ = result_365;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_365, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result344__;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentContinueNode_finalize(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional539;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional539=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional539) {
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sParentContinueNode* sParentContinueNode_clone(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional540;
struct sParentContinueNode* __result346__;
void* right_value529;
struct sParentContinueNode* result_366;
_Bool _if_conditional541;
_Bool _if_conditional542;
void* right_value530;
char* __dec_obj203;
struct sParentContinueNode* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value529 = (void*)0;
memset(&result_366, 0, sizeof(struct sParentContinueNode*));
right_value530 = (void*)0;
                                                                if(_if_conditional540=self==(void*)0,                                                                _if_conditional540) {
                                                                    __result346__ = __result_obj__ = (void*)0;
                                                                    return __result346__;
                                                                }
                                                                result_366=(struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value529=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "sParentContinueNode_clone", 3, "struct sParentContinueNode"))));
                                                                come_call_finalizer2(sParentContinueNode_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional541=self!=((void*)0),                                                                _if_conditional541) {
                                                                    result_366->sline=self->sline;
                                                                }
                                                                if(_if_conditional542=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional542) {
                                                                    __dec_obj203=result_366->sname;
                                                                    result_366->sname=(char*)come_increment_ref_count(((char*)(right_value530=string_clone(self->sname))));
                                                                    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                __result347__ = __result_obj__ = result_366;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_366, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result347__;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_366, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional545;
_Bool _if_conditional546;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional545=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional545) {
                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    if(_if_conditional546=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional546) {
                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional547;
struct sDerefferenceNode* __result349__;
void* right_value535;
struct sDerefferenceNode* result_370;
_Bool _if_conditional548;
void* right_value536;
struct sNode* __dec_obj204;
_Bool _if_conditional549;
_Bool _if_conditional550;
_Bool _if_conditional551;
void* right_value537;
char* __dec_obj205;
struct sDerefferenceNode* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value535 = (void*)0;
memset(&result_370, 0, sizeof(struct sDerefferenceNode*));
right_value536 = (void*)0;
right_value537 = (void*)0;
                                                                    if(_if_conditional547=self==(void*)0,                                                                    _if_conditional547) {
                                                                        __result349__ = __result_obj__ = (void*)0;
                                                                        return __result349__;
                                                                    }
                                                                    result_370=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value535=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "struct sDerefferenceNode"))));
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional548=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional548) {
                                                                        __dec_obj204=result_370->value;
                                                                        result_370->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value536=sNode_clone(self->value))));
                                                                        if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); }
                                                                        if(right_value536) { right_value536 = come_decrement_ref_count2(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    }
                                                                    if(_if_conditional549=self!=((void*)0),                                                                    _if_conditional549) {
                                                                        result_370->mQuote=self->mQuote;
                                                                    }
                                                                    if(_if_conditional550=self!=((void*)0),                                                                    _if_conditional550) {
                                                                        result_370->sline=self->sline;
                                                                    }
                                                                    if(_if_conditional551=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional551) {
                                                                        __dec_obj205=result_370->sname;
                                                                        result_370->sname=(char*)come_increment_ref_count(((char*)(right_value537=string_clone(self->sname))));
                                                                        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value537 = come_decrement_ref_count2(right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    __result350__ = __result_obj__ = result_370;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_370, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result350__;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_370, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional553;
_Bool _if_conditional554;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional553=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional553) {
                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                        if(_if_conditional554=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional554) {
                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional555;
struct sRefferenceNode* __result352__;
void* right_value542;
struct sRefferenceNode* result_372;
_Bool _if_conditional556;
void* right_value543;
struct sNode* __dec_obj206;
_Bool _if_conditional557;
_Bool _if_conditional558;
void* right_value544;
char* __dec_obj207;
struct sRefferenceNode* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
right_value542 = (void*)0;
memset(&result_372, 0, sizeof(struct sRefferenceNode*));
right_value543 = (void*)0;
right_value544 = (void*)0;
                                                                        if(_if_conditional555=self==(void*)0,                                                                        _if_conditional555) {
                                                                            __result352__ = __result_obj__ = (void*)0;
                                                                            return __result352__;
                                                                        }
                                                                        result_372=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value542=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "struct sRefferenceNode"))));
                                                                        come_call_finalizer2(sRefferenceNode_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional556=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional556) {
                                                                            __dec_obj206=result_372->value;
                                                                            result_372->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value543=sNode_clone(self->value))));
                                                                            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); }
                                                                            if(right_value543) { right_value543 = come_decrement_ref_count2(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        }
                                                                        if(_if_conditional557=self!=((void*)0),                                                                        _if_conditional557) {
                                                                            result_372->sline=self->sline;
                                                                        }
                                                                        if(_if_conditional558=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional558) {
                                                                            __dec_obj207=result_372->sname;
                                                                            result_372->sname=(char*)come_increment_ref_count(((char*)(right_value544=string_clone(self->sname))));
                                                                            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        __result353__ = __result_obj__ = result_372;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_372, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result353__;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReverseNode_finalize(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional560;
_Bool _if_conditional561;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional560=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional560) {
                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            if(_if_conditional561=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional561) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional562;
struct sReverseNode* __result355__;
void* right_value549;
struct sReverseNode* result_374;
_Bool _if_conditional563;
void* right_value550;
struct sNode* __dec_obj208;
_Bool _if_conditional564;
_Bool _if_conditional565;
void* right_value551;
char* __dec_obj209;
struct sReverseNode* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
right_value549 = (void*)0;
memset(&result_374, 0, sizeof(struct sReverseNode*));
right_value550 = (void*)0;
right_value551 = (void*)0;
                                                                            if(_if_conditional562=self==(void*)0,                                                                            _if_conditional562) {
                                                                                __result355__ = __result_obj__ = (void*)0;
                                                                                return __result355__;
                                                                            }
                                                                            result_374=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value549=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "struct sReverseNode"))));
                                                                            come_call_finalizer2(sReverseNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional563=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional563) {
                                                                                __dec_obj208=result_374->value;
                                                                                result_374->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value550=sNode_clone(self->value))));
                                                                                if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value550) { right_value550 = come_decrement_ref_count2(right_value550, ((struct sNode*)right_value550)->finalize, ((struct sNode*)right_value550)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            }
                                                                            if(_if_conditional564=self!=((void*)0),                                                                            _if_conditional564) {
                                                                                result_374->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional565=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional565) {
                                                                                __dec_obj209=result_374->sname;
                                                                                result_374->sname=(char*)come_increment_ref_count(((char*)(right_value551=string_clone(self->sname))));
                                                                                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value551 = come_decrement_ref_count2(right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result356__ = __result_obj__ = result_374;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_374, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result356__;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_374, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional581;
_Bool _if_conditional582;
_Bool _if_conditional583;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional581=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional581) {
                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional582=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional582) {
                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional583=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional583) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional584;
struct sFuncNode* __result360__;
void* right_value564;
struct sFuncNode* result_387;
_Bool _if_conditional585;
void* right_value565;
struct sNode* __dec_obj215;
_Bool _if_conditional586;
void* right_value566;
char* __dec_obj216;
_Bool _if_conditional587;
_Bool _if_conditional588;
void* right_value567;
char* __dec_obj217;
struct sFuncNode* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value564 = (void*)0;
memset(&result_387, 0, sizeof(struct sFuncNode*));
right_value565 = (void*)0;
right_value566 = (void*)0;
right_value567 = (void*)0;
                                                                                            if(_if_conditional584=self==(void*)0,                                                                                            _if_conditional584) {
                                                                                                __result360__ = __result_obj__ = (void*)0;
                                                                                                return __result360__;
                                                                                            }
                                                                                            result_387=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value564=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode"))));
                                                                                            come_call_finalizer2(sFuncNode_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional585=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional585) {
                                                                                                __dec_obj215=result_387->value;
                                                                                                result_387->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value565=sNode_clone(self->value))));
                                                                                                if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value565) { right_value565 = come_decrement_ref_count2(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional586=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional586) {
                                                                                                __dec_obj216=result_387->value_source;
                                                                                                result_387->value_source=(char*)come_increment_ref_count(((char*)(right_value566=string_clone(self->value_source))));
                                                                                                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value566 = come_decrement_ref_count2(right_value566, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional587=self!=((void*)0),                                                                                            _if_conditional587) {
                                                                                                result_387->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional588=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional588) {
                                                                                                __dec_obj217=result_387->sname;
                                                                                                result_387->sname=(char*)come_increment_ref_count(((char*)(right_value567=string_clone(self->sname))));
                                                                                                __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value567 = come_decrement_ref_count2(right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result361__ = __result_obj__ = result_387;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_387, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result361__;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_387, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional590;
_Bool _if_conditional591;
_Bool _if_conditional592;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional590=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional590) {
                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
                                                                                                if(_if_conditional591=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional591) {
                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                if(_if_conditional592=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional592) {
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional593;
struct sLineNode* __result363__;
void* right_value571;
struct sLineNode* result_388;
_Bool _if_conditional594;
void* right_value572;
struct sNode* __dec_obj218;
_Bool _if_conditional595;
void* right_value573;
char* __dec_obj219;
_Bool _if_conditional596;
_Bool _if_conditional597;
void* right_value574;
char* __dec_obj220;
struct sLineNode* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
right_value571 = (void*)0;
memset(&result_388, 0, sizeof(struct sLineNode*));
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value574 = (void*)0;
                                                                                                if(_if_conditional593=self==(void*)0,                                                                                                _if_conditional593) {
                                                                                                    __result363__ = __result_obj__ = (void*)0;
                                                                                                    return __result363__;
                                                                                                }
                                                                                                result_388=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value571=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode"))));
                                                                                                come_call_finalizer2(sLineNode_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional594=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional594) {
                                                                                                    __dec_obj218=result_388->value;
                                                                                                    result_388->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value572=sNode_clone(self->value))));
                                                                                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value572) { right_value572 = come_decrement_ref_count2(right_value572, ((struct sNode*)right_value572)->finalize, ((struct sNode*)right_value572)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                if(_if_conditional595=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional595) {
                                                                                                    __dec_obj219=result_388->value_source;
                                                                                                    result_388->value_source=(char*)come_increment_ref_count(((char*)(right_value573=string_clone(self->value_source))));
                                                                                                    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value573 = come_decrement_ref_count2(right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                if(_if_conditional596=self!=((void*)0),                                                                                                _if_conditional596) {
                                                                                                    result_388->sline=self->sline;
                                                                                                }
                                                                                                if(_if_conditional597=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional597) {
                                                                                                    __dec_obj220=result_388->sname;
                                                                                                    result_388->sname=(char*)come_increment_ref_count(((char*)(right_value574=string_clone(self->sname))));
                                                                                                    __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value574 = come_decrement_ref_count2(right_value574, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                __result364__ = __result_obj__ = result_388;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_388, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result364__;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_388, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional599;
_Bool _if_conditional600;
_Bool _if_conditional601;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                    if(_if_conditional599=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional599) {
                                                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                    }
                                                                                                    if(_if_conditional600=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional600) {
                                                                                                        self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    if(_if_conditional601=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional601) {
                                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional602;
struct sSNameNode* __result366__;
void* right_value578;
struct sSNameNode* result_389;
_Bool _if_conditional603;
void* right_value579;
struct sNode* __dec_obj221;
_Bool _if_conditional604;
void* right_value580;
char* __dec_obj222;
_Bool _if_conditional605;
_Bool _if_conditional606;
void* right_value581;
char* __dec_obj223;
struct sSNameNode* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
right_value578 = (void*)0;
memset(&result_389, 0, sizeof(struct sSNameNode*));
right_value579 = (void*)0;
right_value580 = (void*)0;
right_value581 = (void*)0;
                                                                                                    if(_if_conditional602=self==(void*)0,                                                                                                    _if_conditional602) {
                                                                                                        __result366__ = __result_obj__ = (void*)0;
                                                                                                        return __result366__;
                                                                                                    }
                                                                                                    result_389=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value578=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode"))));
                                                                                                    come_call_finalizer2(sSNameNode_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(_if_conditional603=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional603) {
                                                                                                        __dec_obj221=result_389->value;
                                                                                                        result_389->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value579=sNode_clone(self->value))));
                                                                                                        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                        if(right_value579) { right_value579 = come_decrement_ref_count2(right_value579, ((struct sNode*)right_value579)->finalize, ((struct sNode*)right_value579)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    }
                                                                                                    if(_if_conditional604=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional604) {
                                                                                                        __dec_obj222=result_389->value_source;
                                                                                                        result_389->value_source=(char*)come_increment_ref_count(((char*)(right_value580=string_clone(self->value_source))));
                                                                                                        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value580 = come_decrement_ref_count2(right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    if(_if_conditional605=self!=((void*)0),                                                                                                    _if_conditional605) {
                                                                                                        result_389->sline=self->sline;
                                                                                                    }
                                                                                                    if(_if_conditional606=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional606) {
                                                                                                        __dec_obj223=result_389->sname;
                                                                                                        result_389->sname=(char*)come_increment_ref_count(((char*)(right_value581=string_clone(self->sname))));
                                                                                                        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value581 = come_decrement_ref_count2(right_value581, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    __result367__ = __result_obj__ = result_389;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_389, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                    return __result367__;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional608;
_Bool _if_conditional609;
_Bool _if_conditional610;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                        if(_if_conditional608=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional608) {
                                                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                        }
                                                                                                        if(_if_conditional609=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional609) {
                                                                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        if(_if_conditional610=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional610) {
                                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional611;
struct sCallerFuncNode* __result369__;
void* right_value585;
struct sCallerFuncNode* result_390;
_Bool _if_conditional612;
void* right_value586;
struct sNode* __dec_obj224;
_Bool _if_conditional613;
void* right_value587;
char* __dec_obj225;
_Bool _if_conditional614;
_Bool _if_conditional615;
void* right_value588;
char* __dec_obj226;
struct sCallerFuncNode* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value585 = (void*)0;
memset(&result_390, 0, sizeof(struct sCallerFuncNode*));
right_value586 = (void*)0;
right_value587 = (void*)0;
right_value588 = (void*)0;
                                                                                                        if(_if_conditional611=self==(void*)0,                                                                                                        _if_conditional611) {
                                                                                                            __result369__ = __result_obj__ = (void*)0;
                                                                                                            return __result369__;
                                                                                                        }
                                                                                                        result_390=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value585=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode"))));
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(_if_conditional612=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional612) {
                                                                                                            __dec_obj224=result_390->value;
                                                                                                            result_390->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value586=sNode_clone(self->value))));
                                                                                                            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                            if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        }
                                                                                                        if(_if_conditional613=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional613) {
                                                                                                            __dec_obj225=result_390->value_source;
                                                                                                            result_390->value_source=(char*)come_increment_ref_count(((char*)(right_value587=string_clone(self->value_source))));
                                                                                                            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value587 = come_decrement_ref_count2(right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        if(_if_conditional614=self!=((void*)0),                                                                                                        _if_conditional614) {
                                                                                                            result_390->sline=self->sline;
                                                                                                        }
                                                                                                        if(_if_conditional615=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional615) {
                                                                                                            __dec_obj226=result_390->sname;
                                                                                                            result_390->sname=(char*)come_increment_ref_count(((char*)(right_value588=string_clone(self->sname))));
                                                                                                            __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        __result370__ = __result_obj__ = result_390;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_390, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                        return __result370__;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_390, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional617;
_Bool _if_conditional618;
_Bool _if_conditional619;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                            if(_if_conditional617=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional617) {
                                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            if(_if_conditional618=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional618) {
                                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
                                                                                                            if(_if_conditional619=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional619) {
                                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional620;
struct sCallerLineNode* __result372__;
void* right_value592;
struct sCallerLineNode* result_391;
_Bool _if_conditional621;
void* right_value593;
struct sNode* __dec_obj227;
_Bool _if_conditional622;
void* right_value594;
char* __dec_obj228;
_Bool _if_conditional623;
_Bool _if_conditional624;
void* right_value595;
char* __dec_obj229;
struct sCallerLineNode* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
right_value592 = (void*)0;
memset(&result_391, 0, sizeof(struct sCallerLineNode*));
right_value593 = (void*)0;
right_value594 = (void*)0;
right_value595 = (void*)0;
                                                                                                            if(_if_conditional620=self==(void*)0,                                                                                                            _if_conditional620) {
                                                                                                                __result372__ = __result_obj__ = (void*)0;
                                                                                                                return __result372__;
                                                                                                            }
                                                                                                            result_391=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value592=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode"))));
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(_if_conditional621=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional621) {
                                                                                                                __dec_obj227=result_391->value;
                                                                                                                result_391->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=sNode_clone(self->value))));
                                                                                                                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value593) { right_value593 = come_decrement_ref_count2(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            }
                                                                                                            if(_if_conditional622=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional622) {
                                                                                                                __dec_obj228=result_391->value_source;
                                                                                                                result_391->value_source=(char*)come_increment_ref_count(((char*)(right_value594=string_clone(self->value_source))));
                                                                                                                __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value594 = come_decrement_ref_count2(right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            if(_if_conditional623=self!=((void*)0),                                                                                                            _if_conditional623) {
                                                                                                                result_391->sline=self->sline;
                                                                                                            }
                                                                                                            if(_if_conditional624=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional624) {
                                                                                                                __dec_obj229=result_391->sname;
                                                                                                                result_391->sname=(char*)come_increment_ref_count(((char*)(right_value595=string_clone(self->sname))));
                                                                                                                __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value595 = come_decrement_ref_count2(right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            __result373__ = __result_obj__ = result_391;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_391, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                            return __result373__;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_391, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional626;
_Bool _if_conditional627;
_Bool _if_conditional628;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                if(_if_conditional626=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional626) {
                                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                if(_if_conditional627=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional627) {
                                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
                                                                                                                if(_if_conditional628=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional628) {
                                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional629;
struct sCallerSNameNode* __result375__;
void* right_value599;
struct sCallerSNameNode* result_392;
_Bool _if_conditional630;
void* right_value600;
struct sNode* __dec_obj230;
_Bool _if_conditional631;
void* right_value601;
char* __dec_obj231;
_Bool _if_conditional632;
_Bool _if_conditional633;
void* right_value602;
char* __dec_obj232;
struct sCallerSNameNode* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
right_value599 = (void*)0;
memset(&result_392, 0, sizeof(struct sCallerSNameNode*));
right_value600 = (void*)0;
right_value601 = (void*)0;
right_value602 = (void*)0;
                                                                                                                if(_if_conditional629=self==(void*)0,                                                                                                                _if_conditional629) {
                                                                                                                    __result375__ = __result_obj__ = (void*)0;
                                                                                                                    return __result375__;
                                                                                                                }
                                                                                                                result_392=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value599=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode"))));
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,right_value599, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                if(_if_conditional630=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional630) {
                                                                                                                    __dec_obj230=result_392->value;
                                                                                                                    result_392->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value600=sNode_clone(self->value))));
                                                                                                                    if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value600) { right_value600 = come_decrement_ref_count2(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                }
                                                                                                                if(_if_conditional631=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional631) {
                                                                                                                    __dec_obj231=result_392->value_source;
                                                                                                                    result_392->value_source=(char*)come_increment_ref_count(((char*)(right_value601=string_clone(self->value_source))));
                                                                                                                    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value601 = come_decrement_ref_count2(right_value601, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                if(_if_conditional632=self!=((void*)0),                                                                                                                _if_conditional632) {
                                                                                                                    result_392->sline=self->sline;
                                                                                                                }
                                                                                                                if(_if_conditional633=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional633) {
                                                                                                                    __dec_obj232=result_392->sname;
                                                                                                                    result_392->sname=(char*)come_increment_ref_count(((char*)(right_value602=string_clone(self->sname))));
                                                                                                                    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value602 = come_decrement_ref_count2(right_value602, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                __result376__ = __result_obj__ = result_392;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_392, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                return __result376__;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_392, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_395;
unsigned int hash_396;
unsigned int it_397;
_Bool _while_condtional34;
_Bool _if_conditional636;
_Bool _if_conditional637;
struct sType* __result379__;
_Bool _if_conditional638;
_Bool _if_conditional639;
struct sType* __result380__;
struct sType* __result381__;
struct sType* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_395, 0, sizeof(struct sType*));
memset(&hash_396, 0, sizeof(unsigned int));
memset(&it_397, 0, sizeof(unsigned int));
                                                                                                                        memset(&default_value_395,0,sizeof(struct sType*));
                                                                                                                        hash_396=string_get_hash_key(((char*)key))%self->size;
                                                                                                                        it_397=hash_396;
                                                                                                                        while(_while_condtional34=(_Bool)1,                                                                                                                        _while_condtional34) {
                                                                                                                            if(_if_conditional636=self->item_existance[it_397],                                                                                                                            _if_conditional636) {
                                                                                                                                if(_if_conditional637=string_equals(self->keys[it_397],key),                                                                                                                                _if_conditional637) {
                                                                                                                                    __result379__ = __result_obj__ = self->items[it_397];
                                                                                                                                    come_call_finalizer2(sType_finalize,default_value_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                    return __result379__;
                                                                                                                                }
                                                                                                                                it_397++;
                                                                                                                                if(_if_conditional638=it_397>=self->size,                                                                                                                                _if_conditional638) {
                                                                                                                                    it_397=0;
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    if(_if_conditional639=it_397==hash_396,                                                                                                                                    _if_conditional639) {
                                                                                                                                        __result380__ = __result_obj__ = default_value_395;
                                                                                                                                        come_call_finalizer2(sType_finalize,default_value_395, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                        return __result380__;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                __result381__ = __result_obj__ = default_value_395;
                                                                                                                                come_call_finalizer2(sType_finalize,default_value_395, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                return __result381__;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        __result382__ = __result_obj__ = default_value_395;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_395, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                        return __result382__;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_399;
unsigned int hash_400;
unsigned int it_401;
_Bool _while_condtional35;
_Bool _if_conditional641;
_Bool _if_conditional642;
struct sClass* __result383__;
_Bool _if_conditional649;
_Bool _if_conditional650;
struct sClass* __result384__;
struct sClass* __result385__;
struct sClass* __result386__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_399, 0, sizeof(struct sClass*));
memset(&hash_400, 0, sizeof(unsigned int));
memset(&it_401, 0, sizeof(unsigned int));
                                                                                                                            memset(&default_value_399,0,sizeof(struct sClass*));
                                                                                                                            hash_400=string_get_hash_key(((char*)key))%self->size;
                                                                                                                            it_401=hash_400;
                                                                                                                            while(_while_condtional35=(_Bool)1,                                                                                                                            _while_condtional35) {
                                                                                                                                if(_if_conditional641=self->item_existance[it_401],                                                                                                                                _if_conditional641) {
                                                                                                                                    if(_if_conditional642=string_equals(self->keys[it_401],key),                                                                                                                                    _if_conditional642) {
                                                                                                                                        __result383__ = __result_obj__ = self->items[it_401];
                                                                                                                                        come_call_finalizer2(sClass_finalize,default_value_399, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                        return __result383__;
                                                                                                                                    }
                                                                                                                                    it_401++;
                                                                                                                                    if(_if_conditional649=it_401>=self->size,                                                                                                                                    _if_conditional649) {
                                                                                                                                        it_401=0;
                                                                                                                                    }
                                                                                                                                    else {
                                                                                                                                        if(_if_conditional650=it_401==hash_400,                                                                                                                                        _if_conditional650) {
                                                                                                                                            __result384__ = __result_obj__ = default_value_399;
                                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_399, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                            return __result384__;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    __result385__ = __result_obj__ = default_value_399;
                                                                                                                                    come_call_finalizer2(sClass_finalize,default_value_399, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                    return __result385__;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            __result386__ = __result_obj__ = default_value_399;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_399, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                            return __result386__;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_399, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional643;
_Bool _if_conditional644;
_Bool _if_conditional648;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                            if(_if_conditional643=self!=((void*)0)&&self->mName!=((void*)0),                                                                                                                                            _if_conditional643) {
                                                                                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional644=self!=((void*)0)&&self->mFields!=((void*)0),                                                                                                                                            _if_conditional644) {
                                                                                                                                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional648=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                                                                                            _if_conditional648) {
                                                                                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_402;
_Bool _while_condtional36;
struct list_item$1tuple2$2charphsTypephph* prev_it_403;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_402, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_403, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                                                                                    it_402=self->head;
                                                                                                                                                    while(_while_condtional36=it_402!=((void*)0),                                                                                                                                                    _while_condtional36) {
                                                                                                                                                        prev_it_403=it_402;
                                                                                                                                                        it_402=it_402->next;
                                                                                                                                                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional645;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                            if(_if_conditional645=self!=((void*)0)&&self->item!=((void*)0),                                                                                                                                                            _if_conditional645) {
                                                                                                                                                                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional646;
_Bool _if_conditional647;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                                    if(_if_conditional646=self!=((void*)0)&&self->v1!=((void*)0),                                                                                                                                                                    _if_conditional646) {
                                                                                                                                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
                                                                                                                                                                    if(_if_conditional647=self!=((void*)0)&&self->v2!=((void*)0),                                                                                                                                                                    _if_conditional647) {
                                                                                                                                                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
}

static void sCastNode_finalize(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional662;
_Bool _if_conditional663;
_Bool _if_conditional664;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional662=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional662) {
                                                                                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional663=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional663) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional664=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional664) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional665;
struct sCastNode* __result392__;
void* right_value642;
struct sCastNode* result_428;
_Bool _if_conditional666;
void* right_value643;
struct sType* __dec_obj245;
_Bool _if_conditional667;
void* right_value644;
struct sNode* __dec_obj246;
_Bool _if_conditional668;
_Bool _if_conditional669;
void* right_value645;
char* __dec_obj247;
struct sCastNode* __result393__;
memset(&__result_obj__, 0, sizeof(void*));
right_value642 = (void*)0;
memset(&result_428, 0, sizeof(struct sCastNode*));
right_value643 = (void*)0;
right_value644 = (void*)0;
right_value645 = (void*)0;
                                                                                            if(_if_conditional665=self==(void*)0,                                                                                            _if_conditional665) {
                                                                                                __result392__ = __result_obj__ = (void*)0;
                                                                                                return __result392__;
                                                                                            }
                                                                                            result_428=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value642=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "struct sCastNode"))));
                                                                                            come_call_finalizer2(sCastNode_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional666=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional666) {
                                                                                                __dec_obj245=result_428->mType;
                                                                                                result_428->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value643=sType_clone(self->mType))));
                                                                                                come_call_finalizer2(sType_finalize,__dec_obj245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sType_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional667=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional667) {
                                                                                                __dec_obj246=result_428->mLeft;
                                                                                                result_428->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value644=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value644) { right_value644 = come_decrement_ref_count2(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional668=self!=((void*)0),                                                                                            _if_conditional668) {
                                                                                                result_428->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional669=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional669) {
                                                                                                __dec_obj247=result_428->sname;
                                                                                                result_428->sname=(char*)come_increment_ref_count(((char*)(right_value645=string_clone(self->sname))));
                                                                                                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value645 = come_decrement_ref_count2(right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result393__ = __result_obj__ = result_428;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_428, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result393__;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_428, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParenNode_finalize(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional670;
_Bool _if_conditional671;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional670=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional670) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional671=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional671) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional672;
struct sParenNode* __result395__;
void* right_value650;
struct sParenNode* result_430;
_Bool _if_conditional673;
void* right_value651;
struct sNode* __dec_obj248;
_Bool _if_conditional674;
_Bool _if_conditional675;
void* right_value652;
char* __dec_obj249;
struct sParenNode* __result396__;
memset(&__result_obj__, 0, sizeof(void*));
right_value650 = (void*)0;
memset(&result_430, 0, sizeof(struct sParenNode*));
right_value651 = (void*)0;
right_value652 = (void*)0;
                                                                                            if(_if_conditional672=self==(void*)0,                                                                                            _if_conditional672) {
                                                                                                __result395__ = __result_obj__ = (void*)0;
                                                                                                return __result395__;
                                                                                            }
                                                                                            result_430=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value650=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "struct sParenNode"))));
                                                                                            come_call_finalizer2(sParenNode_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional673=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional673) {
                                                                                                __dec_obj248=result_430->mLeft;
                                                                                                result_430->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value651=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value651) { right_value651 = come_decrement_ref_count2(right_value651, ((struct sNode*)right_value651)->finalize, ((struct sNode*)right_value651)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional674=self!=((void*)0),                                                                                            _if_conditional674) {
                                                                                                result_430->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional675=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional675) {
                                                                                                __dec_obj249=result_430->sname;
                                                                                                result_430->sname=(char*)come_increment_ref_count(((char*)(right_value652=string_clone(self->sname))));
                                                                                                __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value652 = come_decrement_ref_count2(right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result396__ = __result_obj__ = result_430;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_430, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result396__;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_430, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value657;
struct sNode* __result400__;
memset(&__result_obj__, 0, sizeof(void*));
right_value657 = (void*)0;
    __result400__ = __result_obj__ = ((struct sNode*)(right_value657=expression_node_v99(info)));
    if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result400__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional676;
void* right_value658;
void* right_value659;
struct sNode* __dec_obj253;
struct sNode* __result401__;
_Bool _if_conditional677;
void* right_value660;
void* right_value661;
struct sNode* __dec_obj254;
struct sNode* __result402__;
struct sNode* __result403__;
memset(&__result_obj__, 0, sizeof(void*));
right_value658 = (void*)0;
right_value659 = (void*)0;
right_value660 = (void*)0;
right_value661 = (void*)0;
    if(_if_conditional676=strmemcmp(info->p,"or"),    _if_conditional676) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj253=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value659=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=sNode_clone(node)))),info))));
        if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value658) { right_value658 = come_decrement_ref_count2(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value659) { right_value659 = come_decrement_ref_count2(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result401__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result401__;
    }
    else {
        if(_if_conditional677=strmemcmp(info->p,"and"),        _if_conditional677) {
            info->p+=strlen("and");
            skip_spaces_and_lf(info);
            __dec_obj254=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value661=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value660=sNode_clone(node)))),info))));
            if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value660) { right_value660 = come_decrement_ref_count2(right_value660, ((struct sNode*)right_value660)->finalize, ((struct sNode*)right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value661) { right_value661 = come_decrement_ref_count2(right_value661, ((struct sNode*)right_value661)->finalize, ((struct sNode*)right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result402__ = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result402__;
        }
    }
    __result403__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result403__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__;
void* right_value662;
struct sNode* node_432;
void* right_value663;
struct sNode* __dec_obj255;
struct sNode* __result404__;
memset(&__result_obj__, 0, sizeof(void*));
right_value662 = (void*)0;
memset(&node_432, 0, sizeof(struct sNode*));
right_value663 = (void*)0;
    node_432=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value662=expression_node_v99(info))));
    if(right_value662) { right_value662 = come_decrement_ref_count2(right_value662, ((struct sNode*)right_value662)->finalize, ((struct sNode*)right_value662)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj255=node_432;
    node_432=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value663=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_432),info))));
    if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value663) { right_value663 = come_decrement_ref_count2(right_value663, ((struct sNode*)right_value663)->finalize, ((struct sNode*)right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result404__ = __result_obj__ = node_432;
    if(node_432) { node_432 = come_decrement_ref_count2(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result404__;
    if(node_432) { node_432 = come_decrement_ref_count2(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
void* __result_obj__;
char* __dec_obj256;
void* right_value664;
struct sType* __dec_obj257;
void* right_value665;
char* __dec_obj258;
struct sNode* __dec_obj259;
char* __dec_obj260;
void* right_value675;
struct list$1tuple2$2sTypephcharphph* __dec_obj266;
void* right_value676;
char* __dec_obj267;
struct sGlobalVariable* __result411__;
memset(&__result_obj__, 0, sizeof(void*));
right_value664 = (void*)0;
right_value665 = (void*)0;
right_value675 = (void*)0;
right_value676 = (void*)0;
    self->sline=info->sline;
    __dec_obj256=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj257=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value664=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj257, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj258=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value665=__builtin_string(name))));
    __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value665 = come_decrement_ref_count2(right_value665, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj259=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj260=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj266=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value675=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj267=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value676=__builtin_string(info->sname))));
    __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value676 = come_decrement_ref_count2(right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result411__ = __result_obj__ = self;
    come_call_finalizer2(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result411__;
    come_call_finalizer2(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional678;
struct list$1tuple2$2sTypephcharphph* __result405__;
void* right_value666;
void* right_value667;
struct list$1tuple2$2sTypephcharphph* result_435;
struct list_item$1tuple2$2sTypephcharphph* it_436;
_Bool _while_condtional39;
void* right_value674;
struct list$1tuple2$2sTypephcharphph* __result410__;
memset(&__result_obj__, 0, sizeof(void*));
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&result_435, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_436, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value674 = (void*)0;
        if(_if_conditional678=self==((void*)0),        _if_conditional678) {
            __result405__ = __result_obj__ = ((void*)0);
            return __result405__;
        }
        result_435=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value667=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value666=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 141, "struct list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_436=self->head;
        while(_while_condtional39=it_436!=((void*)0),        _while_condtional39) {
            list$1tuple2$2sTypephcharphph_add(result_435,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value674=tuple2$2sTypephcharphp_clone(it_436->item)))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value674, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_436=it_436->next;
        }
        __result410__ = __result_obj__ = result_435;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_435, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result410__;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_435, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list$1tuple2$2sTypephcharphph* __result406__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result406__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result406__;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list_item$1tuple2$2sTypephcharphph* it_433;
_Bool _while_condtional38;
struct list_item$1tuple2$2sTypephcharphph* prev_it_434;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_433, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&prev_it_434, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                it_433=self->head;
                while(_while_condtional38=it_433!=((void*)0),                _while_condtional38) {
                    prev_it_434=it_433;
                    it_433=it_433->next;
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,prev_it_434, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional679;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional679=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional679) {
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional680;
_Bool _if_conditional681;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional680=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional680) {
                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional681=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional681) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional682;
void* right_value668;
struct list_item$1tuple2$2sTypephcharphph* litem_437;
struct tuple2$2sTypephcharph* __dec_obj261;
_Bool _if_conditional685;
void* right_value669;
struct list_item$1tuple2$2sTypephcharphph* litem_438;
struct tuple2$2sTypephcharph* __dec_obj262;
void* right_value670;
struct list_item$1tuple2$2sTypephcharphph* litem_439;
struct tuple2$2sTypephcharph* __dec_obj263;
struct list$1tuple2$2sTypephcharphph* __result407__;
memset(&__result_obj__, 0, sizeof(void*));
right_value668 = (void*)0;
memset(&litem_437, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value669 = (void*)0;
memset(&litem_438, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value670 = (void*)0;
memset(&litem_439, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                if(_if_conditional682=self->len==0,                _if_conditional682) {
                    litem_437=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value668=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 155, "struct list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_437->prev=((void*)0);
                    litem_437->next=((void*)0);
                    __dec_obj261=litem_437->item;
                    litem_437->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_437;
                    self->head=litem_437;
                }
                else {
                    if(_if_conditional685=self->len==1,                    _if_conditional685) {
                        litem_438=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value669=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 165, "struct list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_438->prev=self->head;
                        litem_438->next=((void*)0);
                        __dec_obj262=litem_438->item;
                        litem_438->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_438;
                        self->head->next=litem_438;
                    }
                    else {
                        litem_439=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value670=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 175, "struct list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_439->prev=self->tail;
                        litem_439->next=((void*)0);
                        __dec_obj263=litem_439->item;
                        litem_439->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_439;
                        self->tail=litem_439;
                    }
                }
                self->len++;
                __result407__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result407__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional683;
_Bool _if_conditional684;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional683=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional683) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional684=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional684) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional686;
struct tuple2$2sTypephcharph* __result408__;
void* right_value671;
struct tuple2$2sTypephcharph* result_440;
_Bool _if_conditional687;
void* right_value672;
struct sType* __dec_obj264;
_Bool _if_conditional688;
void* right_value673;
char* __dec_obj265;
struct tuple2$2sTypephcharph* __result409__;
memset(&__result_obj__, 0, sizeof(void*));
right_value671 = (void*)0;
memset(&result_440, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value672 = (void*)0;
right_value673 = (void*)0;
                if(_if_conditional686=self==(void*)0,                _if_conditional686) {
                    __result408__ = __result_obj__ = (void*)0;
                    return __result408__;
                }
                result_440=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value671=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3, "struct tuple2$2sTypephcharph"))));
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional687=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional687) {
                    __dec_obj264=result_440->v1;
                    result_440->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value672=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional688=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional688) {
                    __dec_obj265=result_440->v2;
                    result_440->v2=(char*)come_increment_ref_count(((char*)(right_value673=string_clone(self->v2))));
                    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value673 = come_decrement_ref_count2(right_value673, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result409__ = __result_obj__ = result_440;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_440, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result409__;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sGlobalVariable_sline(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result412__;
memset(&__result_obj__, 0, sizeof(void*));
    __result412__ = self->sline;
    return __result412__;
}

char* sGlobalVariable_sname(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value677;
char* __result413__;
memset(&__result_obj__, 0, sizeof(void*));
right_value677 = (void*)0;
    __result413__ = __result_obj__ = ((char*)(right_value677=__builtin_string(self->sname)));
    right_value677 = come_decrement_ref_count2(right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result413__;
}

_Bool sGlobalVariable_terminated(){
void* __result_obj__;
_Bool __result414__;
memset(&__result_obj__, 0, sizeof(void*));
    __result414__ = (_Bool)0;
    return __result414__;
}

char* sGlobalVariable_kind(){
void* __result_obj__;
void* right_value678;
char* __result415__;
memset(&__result_obj__, 0, sizeof(void*));
right_value678 = (void*)0;
    __result415__ = __result_obj__ = ((char*)(right_value678=__builtin_string("sGlobalVariable")));
    right_value678 = come_decrement_ref_count2(right_value678, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result415__;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value679;
struct sType* type_441;
void* right_value680;
char* name_442;
struct sNode* right_node_443;
void* right_value681;
char* array_initializer_444;
_Bool _if_conditional696;
struct list$1tuple2$2sTypephcharphph* o2_saved_445;
struct tuple2$2sTypephcharph* it_448;
struct tuple2$2sTypephcharph* multiple_assign_var9;
struct sType* type_451;
char* name_452;
_Bool _if_conditional701;
void* right_value682;
void* right_value683;
_Bool _if_conditional702;
_Bool _if_conditional703;
void* right_value684;
_Bool _if_conditional704;
_Bool _if_conditional705;
_Bool __result423__;
void* right_value685;
struct CVALUE* come_value_453;
_Bool _if_conditional706;
void* right_value686;
_Bool _if_conditional707;
void* right_value687;
_Bool __result424__;
memset(&__result_obj__, 0, sizeof(void*));
right_value679 = (void*)0;
memset(&type_441, 0, sizeof(struct sType*));
right_value680 = (void*)0;
memset(&name_442, 0, sizeof(char*));
memset(&right_node_443, 0, sizeof(struct sNode*));
right_value681 = (void*)0;
memset(&array_initializer_444, 0, sizeof(char*));
memset(&o2_saved_445, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_448, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_451, 0, sizeof(struct sType*));
memset(&name_452, 0, sizeof(char*));
memset(&type_451, 0, sizeof(struct sType*));
memset(&name_452, 0, sizeof(char*));
right_value682 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
right_value685 = (void*)0;
memset(&come_value_453, 0, sizeof(struct CVALUE*));
right_value686 = (void*)0;
right_value687 = (void*)0;
    type_441=(struct sType*)come_increment_ref_count(((struct sType*)(right_value679=sType_clone(self->type))));
    come_call_finalizer2(sType_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    name_442=(char*)come_increment_ref_count(((char*)(right_value680=string_clone(self->name))));
    right_value680 = come_decrement_ref_count2(right_value680, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_node_443=self->right_node;
    array_initializer_444=(char*)come_increment_ref_count(((char*)(right_value681=string_clone(self->array_initializer))));
    right_value681 = come_decrement_ref_count2(right_value681, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->multiple_declare) {
        for(        o2_saved_445=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_448=list$1tuple2$2sTypephcharphph_begin((o2_saved_445));        !list$1tuple2$2sTypephcharphph_end((o2_saved_445));        it_448=list$1tuple2$2sTypephcharphph_next((o2_saved_445))        ){
            multiple_assign_var9=it_448;
            type_451=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_452=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(_if_conditional701=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional701) {
            }
            else {
                add_come_code_at_source_head(info,"%s;\n",((char*)(right_value682=make_define_var(type_451,name_452,(_Bool)0,info))));
                right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_452 = come_decrement_ref_count2(name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_445, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_442,(struct sType*)come_increment_ref_count(((struct sType*)(right_value683=sType_clone(type_441)))),info);
        come_call_finalizer2(sType_finalize,right_value683, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(array_initializer_444) {
            if(_if_conditional703=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional703) {
            }
            else {
                add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value684=make_define_var(type_441,name_442,(_Bool)0,info))),array_initializer_444);
                right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        else {
            if(right_node_443) {
                if(_if_conditional705=!node_compile(right_node_443,info),                _if_conditional705) {
                    __result423__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,type_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_442 = come_decrement_ref_count2(name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    array_initializer_444 = come_decrement_ref_count2(array_initializer_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result423__;
                }
                come_value_453=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value685=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                if(_if_conditional706=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional706) {
                }
                else {
                    add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value686=make_define_var(type_441,name_442,(_Bool)0,info))),come_value_453->c_value);
                    right_value686 = come_decrement_ref_count2(right_value686, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_453, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional707=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional707) {
                }
                else {
                    add_come_code_at_source_head(info,"%s;\n",((char*)(right_value687=make_define_var(type_441,name_442,(_Bool)0,info))));
                    right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    __result424__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,type_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_442 = come_decrement_ref_count2(name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_444 = come_decrement_ref_count2(array_initializer_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result424__;
    come_call_finalizer2(sType_finalize,type_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_442 = come_decrement_ref_count2(name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_444 = come_decrement_ref_count2(array_initializer_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional697;
struct tuple2$2sTypephcharph* result_446;
struct tuple2$2sTypephcharph* __result416__;
_Bool _if_conditional698;
struct tuple2$2sTypephcharph* __result417__;
struct tuple2$2sTypephcharph* result_447;
struct tuple2$2sTypephcharph* __result418__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_446, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_447, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional697=self==((void*)0),            _if_conditional697) {
                memset(&result_446,0,sizeof(struct tuple2$2sTypephcharph*));
                __result416__ = __result_obj__ = result_446;
                return __result416__;
            }
            self->it=self->head;
            if(self->it) {
                __result417__ = __result_obj__ = self->it->item;
                return __result417__;
            }
            memset(&result_447,0,sizeof(struct tuple2$2sTypephcharph*));
            __result418__ = __result_obj__ = result_447;
            return __result418__;
}

static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __result419__;
memset(&__result_obj__, 0, sizeof(void*));
            __result419__ = self==((void*)0)||self->it==((void*)0);
            return __result419__;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional699;
struct tuple2$2sTypephcharph* result_449;
struct tuple2$2sTypephcharph* __result420__;
_Bool _if_conditional700;
struct tuple2$2sTypephcharph* __result421__;
struct tuple2$2sTypephcharph* result_450;
struct tuple2$2sTypephcharph* __result422__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_449, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_450, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional699=self==((void*)0)||self->it==((void*)0),            _if_conditional699) {
                memset(&result_449,0,sizeof(struct tuple2$2sTypephcharph*));
                __result420__ = __result_obj__ = result_449;
                return __result420__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result421__ = __result_obj__ = self->it->item;
                return __result421__;
            }
            memset(&result_450,0,sizeof(struct tuple2$2sTypephcharph*));
            __result422__ = __result_obj__ = result_450;
            return __result422__;
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value688;
struct sType* __dec_obj268;
void* right_value689;
char* __dec_obj269;
char* __dec_obj270;
void* right_value690;
struct list$1tuple2$2sTypephcharphph* __dec_obj271;
void* right_value691;
char* __dec_obj272;
struct sExternalGlobalVariable* __result425__;
memset(&__result_obj__, 0, sizeof(void*));
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
right_value691 = (void*)0;
    __dec_obj268=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value688=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj269=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value689=__builtin_string(name))));
    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value689 = come_decrement_ref_count2(right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj270=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj271=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value690=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj272=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value691=__builtin_string(info->sname))));
    __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value691 = come_decrement_ref_count2(right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result425__ = __result_obj__ = self;
    come_call_finalizer2(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result425__;
    come_call_finalizer2(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sExternalGlobalVariable_sline(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result426__;
memset(&__result_obj__, 0, sizeof(void*));
    __result426__ = self->sline;
    return __result426__;
}

char* sExternalGlobalVariable_sname(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value692;
char* __result427__;
memset(&__result_obj__, 0, sizeof(void*));
right_value692 = (void*)0;
    __result427__ = __result_obj__ = ((char*)(right_value692=__builtin_string(self->sname)));
    right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result427__;
}

_Bool sExternalGlobalVariable_terminated(){
void* __result_obj__;
_Bool __result428__;
memset(&__result_obj__, 0, sizeof(void*));
    __result428__ = (_Bool)0;
    return __result428__;
}

char* sExternalGlobalVariable_kind(){
void* __result_obj__;
void* right_value693;
char* __result429__;
memset(&__result_obj__, 0, sizeof(void*));
right_value693 = (void*)0;
    __result429__ = __result_obj__ = ((char*)(right_value693=__builtin_string("sExternalGlobalVariable")));
    right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result429__;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_454;
char* name_455;
_Bool _if_conditional713;
struct list$1tuple2$2sTypephcharphph* o2_saved_456;
struct tuple2$2sTypephcharph* it_457;
struct tuple2$2sTypephcharph* multiple_assign_var10;
struct sType* type_458;
char* name_459;
void* right_value694;
_Bool _if_conditional714;
void* right_value695;
void* right_value696;
_Bool _if_conditional715;
void* right_value697;
_Bool __result430__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_454, 0, sizeof(struct sType*));
memset(&name_455, 0, sizeof(char*));
memset(&o2_saved_456, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_457, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_458, 0, sizeof(struct sType*));
memset(&name_459, 0, sizeof(char*));
memset(&type_458, 0, sizeof(struct sType*));
memset(&name_459, 0, sizeof(char*));
right_value694 = (void*)0;
right_value695 = (void*)0;
right_value696 = (void*)0;
right_value697 = (void*)0;
    type_454=self->type;
    name_455=(char*)come_increment_ref_count(self->name);
    if(self->multiple_declare) {
        for(        o2_saved_456=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_457=list$1tuple2$2sTypephcharphph_begin((o2_saved_456));        !list$1tuple2$2sTypephcharphph_end((o2_saved_456));        it_457=list$1tuple2$2sTypephcharphph_next((o2_saved_456))        ){
            multiple_assign_var10=it_457;
            type_458=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_459=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            add_variable_to_global_table(name_459,(struct sType*)come_increment_ref_count(((struct sType*)(right_value694=sType_clone(type_458)))),info);
            come_call_finalizer2(sType_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional714=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional714) {
            }
            else {
                add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value695=make_define_var(type_458,name_459,(_Bool)0,info))));
                right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_458, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_459 = come_decrement_ref_count2(name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_456, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_455,(struct sType*)come_increment_ref_count(((struct sType*)(right_value696=sType_clone(type_454)))),info);
        come_call_finalizer2(sType_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional715=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),        _if_conditional715) {
        }
        else {
            add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value697=make_define_var(type_454,name_455,(_Bool)0,info))));
            right_value697 = come_decrement_ref_count2(right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __result430__ = (_Bool)1;
    name_455 = come_decrement_ref_count2(name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result430__;
    name_455 = come_decrement_ref_count2(name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* struct_name_460;
void* right_value698;
void* right_value699;
struct buffer* buf_461;
_Bool _if_conditional716;
void* right_value700;
char* __dec_obj273;
_Bool _if_conditional717;
int i_462;
_Bool _if_conditional718;
void* right_value701;
char* __dec_obj274;
void* right_value702;
char* __dec_obj275;
int i_463;
void* right_value703;
void* right_value704;
char* __result431__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_460, 0, sizeof(char*));
right_value698 = (void*)0;
right_value699 = (void*)0;
memset(&buf_461, 0, sizeof(struct buffer*));
right_value700 = (void*)0;
memset(&i_462, 0, sizeof(int));
right_value701 = (void*)0;
right_value702 = (void*)0;
memset(&i_463, 0, sizeof(int));
right_value703 = (void*)0;
right_value704 = (void*)0;
    buf_461=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value699=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value698=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2787, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional716=string_operator_not_equals(obj_type->mOriginalTypeName,""),    _if_conditional716) {
        __dec_obj273=struct_name_460;
        struct_name_460=(char*)come_increment_ref_count(((char*)(right_value700=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value700 = come_decrement_ref_count2(right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional717=!obj_type->mClass->mStruct,        _if_conditional717) {
            for(            i_462=0;            i_462<obj_type->mOriginalTypeNamePointerNum;            i_462++            ){
                buffer_append_str(buf_461,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj274=struct_name_460;
            struct_name_460=(char*)come_increment_ref_count(((char*)(right_value701=__builtin_string(obj_type->mClass->mName))));
            __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value701 = come_decrement_ref_count2(right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj275=struct_name_460;
            struct_name_460=(char*)come_increment_ref_count(((char*)(right_value702=create_generics_name(obj_type,info))));
            __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_463=0;            i_463<obj_type->mPointerNum;            i_463++            ){
                buffer_append_str(buf_461,"p");
            }
        }
    }
    __result431__ = __result_obj__ = ((char*)(right_value704=xsprintf("%s%s_%s",struct_name_460,((char*)(right_value703=buffer_to_string(buf_461))),fun_name)));
    struct_name_460 = come_decrement_ref_count2(struct_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value703 = come_decrement_ref_count2(right_value703, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value704 = come_decrement_ref_count2(right_value704, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result431__;
    struct_name_460 = come_decrement_ref_count2(struct_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_global_variable(struct sInfo* info){
void* __result_obj__;
_Bool multiple_declare_464;
char* p_465;
int sline_466;
_Bool _if_conditional719;
void* right_value705;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_467;
char* name_468;
_Bool err_469;
_Bool _if_conditional720;
void* right_value706;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type_470;
char* name_471;
_Bool _if_conditional721;
_Bool _if_conditional722;
void* right_value707;
void* right_value708;
struct list$1tuple2$2sTypephcharphph* multiple_declare_472;
void* right_value709;
struct tuple3$3sTypephcharphbool* multiple_assign_var13;
struct sType* base_type_473;
char* name_474;
_Bool err_475;
_Bool _if_conditional723;
void* right_value710;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_476;
char* var_name_477;
void* right_value714;
void* right_value715;
_Bool _while_condtional40;
void* right_value716;
struct tuple2$2sTypephcharph* multiple_assign_var15;
struct sType* type2_481;
char* var_name_482;
void* right_value717;
void* right_value718;
struct sNode* right_node_483;
char* array_initializer_484;
void* right_value719;
char* var_name2_485;
_Bool _if_conditional726;
_Bool _if_conditional727;
void* right_value720;
void* right_value721;
struct sNode* _inf_value26;
struct sExternalGlobalVariable* _inf_obj_value26;
void* right_value728;
struct sNode* __result436__;
void* right_value729;
void* right_value730;
struct sNode* _inf_value27;
struct sGlobalVariable* _inf_obj_value27;
void* right_value739;
struct sNode* __result439__;
void* right_value740;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* result_type_488;
char* var_name_489;
_Bool err_490;
_Bool _if_conditional756;
struct sNode* right_node_491;
char* array_initializer_492;
_Bool _if_conditional757;
_Bool _if_conditional758;
void* right_value741;
void* right_value742;
struct buffer* buf_493;
_Bool squort_494;
_Bool dquort_495;
int nest_496;
_Bool _while_condtional41;
_Bool _if_conditional759;
_Bool _if_conditional760;
_Bool _if_conditional761;
_Bool _if_conditional762;
_Bool _if_conditional763;
_Bool _if_conditional764;
_Bool _if_conditional765;
_Bool _if_conditional766;
void* right_value743;
char* __dec_obj293;
void* right_value744;
struct sNode* __dec_obj294;
_Bool _if_conditional767;
_Bool _if_conditional768;
void* right_value745;
void* right_value746;
struct sNode* _inf_value28;
struct sExternalGlobalVariable* _inf_obj_value28;
void* right_value753;
struct sNode* __result442__;
void* right_value754;
void* right_value755;
struct sNode* _inf_value29;
struct sGlobalVariable* _inf_obj_value29;
void* right_value764;
struct sNode* __result445__;
struct sNode* __result446__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&multiple_declare_464, 0, sizeof(_Bool));
memset(&p_465, 0, sizeof(char*));
memset(&sline_466, 0, sizeof(int));
right_value705 = (void*)0;
memset(&type_467, 0, sizeof(struct sType*));
memset(&name_468, 0, sizeof(char*));
memset(&err_469, 0, sizeof(_Bool));
memset(&type_467, 0, sizeof(struct sType*));
memset(&name_468, 0, sizeof(char*));
memset(&err_469, 0, sizeof(_Bool));
right_value706 = (void*)0;
memset(&type_470, 0, sizeof(struct sType*));
memset(&name_471, 0, sizeof(char*));
memset(&type_470, 0, sizeof(struct sType*));
memset(&name_471, 0, sizeof(char*));
right_value707 = (void*)0;
right_value708 = (void*)0;
memset(&multiple_declare_472, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
right_value709 = (void*)0;
memset(&base_type_473, 0, sizeof(struct sType*));
memset(&name_474, 0, sizeof(char*));
memset(&err_475, 0, sizeof(_Bool));
memset(&base_type_473, 0, sizeof(struct sType*));
memset(&name_474, 0, sizeof(char*));
memset(&err_475, 0, sizeof(_Bool));
right_value710 = (void*)0;
memset(&type2_476, 0, sizeof(struct sType*));
memset(&var_name_477, 0, sizeof(char*));
memset(&type2_476, 0, sizeof(struct sType*));
memset(&var_name_477, 0, sizeof(char*));
right_value714 = (void*)0;
right_value715 = (void*)0;
right_value716 = (void*)0;
memset(&type2_481, 0, sizeof(struct sType*));
memset(&var_name_482, 0, sizeof(char*));
memset(&type2_481, 0, sizeof(struct sType*));
memset(&var_name_482, 0, sizeof(char*));
right_value717 = (void*)0;
right_value718 = (void*)0;
memset(&right_node_483, 0, sizeof(struct sNode*));
memset(&array_initializer_484, 0, sizeof(char*));
right_value719 = (void*)0;
memset(&var_name2_485, 0, sizeof(char*));
right_value720 = (void*)0;
right_value721 = (void*)0;
right_value728 = (void*)0;
right_value729 = (void*)0;
right_value730 = (void*)0;
right_value739 = (void*)0;
right_value740 = (void*)0;
memset(&result_type_488, 0, sizeof(struct sType*));
memset(&var_name_489, 0, sizeof(char*));
memset(&err_490, 0, sizeof(_Bool));
memset(&result_type_488, 0, sizeof(struct sType*));
memset(&var_name_489, 0, sizeof(char*));
memset(&err_490, 0, sizeof(_Bool));
memset(&right_node_491, 0, sizeof(struct sNode*));
memset(&array_initializer_492, 0, sizeof(char*));
right_value741 = (void*)0;
right_value742 = (void*)0;
memset(&buf_493, 0, sizeof(struct buffer*));
memset(&squort_494, 0, sizeof(_Bool));
memset(&dquort_495, 0, sizeof(_Bool));
memset(&nest_496, 0, sizeof(int));
right_value743 = (void*)0;
right_value744 = (void*)0;
right_value745 = (void*)0;
right_value746 = (void*)0;
right_value753 = (void*)0;
right_value754 = (void*)0;
right_value755 = (void*)0;
right_value764 = (void*)0;
    multiple_declare_464=(_Bool)0;
    {
        p_465=info->p;
        sline_466=info->sline;
        if(_if_conditional719=xisalpha(*info->p)||*info->p==95,        _if_conditional719) {
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value705=parse_type(info,(_Bool)0,(_Bool)1)));
            type_467=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_468=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_469=multiple_assign_var11->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(err_469) {
                multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value706=parse_variable_name((struct sType*)come_increment_ref_count(type_467),(_Bool)1,info)));
                type_470=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_471=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value706, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional721=!is_type_name(name_471,info)&&*info->p==44,                _if_conditional721) {
                    multiple_declare_464=(_Bool)1;
                }
                come_call_finalizer2(sType_finalize,type_470, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_471 = come_decrement_ref_count2(name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,type_467, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_468 = come_decrement_ref_count2(name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_465;
        info->sline=sline_466;
    }
    if(multiple_declare_464) {
        multiple_declare_472=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value708=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value707=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "05function.c", 2846, "struct list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(right_value709=parse_type(info,(_Bool)0,(_Bool)1)));
        base_type_473=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
        name_474=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        err_475=multiple_assign_var13->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value709, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional723=!err_475,        _if_conditional723) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var14=((struct tuple2$2sTypephcharph*)(right_value710=parse_variable_name((struct sType*)come_increment_ref_count(base_type_473),(_Bool)1,info)));
        type2_476=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
        var_name_477=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value710, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        list$1tuple2$2sTypephcharphph_push_back(multiple_declare_472,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value715=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value714=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2859, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_476),(char*)come_increment_ref_count(var_name_477))))));
        come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional40=*info->p==44,        _while_condtional40) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var15=((struct tuple2$2sTypephcharph*)(right_value716=parse_variable_name((struct sType*)come_increment_ref_count(base_type_473),(_Bool)0,info)));
            type2_481=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            var_name_482=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value716, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_472,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value718=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value717=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2869, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_481),(char*)come_increment_ref_count(var_name_482))))));
            come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value717, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value718, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,type2_481, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_483=((void*)0);
        array_initializer_484=((void*)0);
        var_name2_485=(char*)come_increment_ref_count(((char*)(right_value719=__builtin_string(""))));
        right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(base_type_473->mExtern) {
            if(right_node_483) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2881, "struct sNode");
            _inf_obj_value26=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value721=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value720=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 2881, "struct sExternalGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_472),base_type_473,(char*)come_increment_ref_count(var_name2_485),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value26->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value26->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value26->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value26->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value26->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value26->kind=(void*)sExternalGlobalVariable_kind;
            __result436__ = __result_obj__ = ((struct sNode*)(right_value728=_inf_value26));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_474 = come_decrement_ref_count2(name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_476, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_477 = come_decrement_ref_count2(var_name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_483) { right_node_483 = come_decrement_ref_count2(right_node_483, ((struct sNode*)right_node_483)->finalize, ((struct sNode*)right_node_483)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_484 = come_decrement_ref_count2(array_initializer_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_485 = come_decrement_ref_count2(var_name2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value720, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value721, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value728) { right_value728 = come_decrement_ref_count2(right_value728, ((struct sNode*)right_value728)->finalize, ((struct sNode*)right_value728)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result436__;
        }
        else {
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2884, "struct sNode");
            _inf_obj_value27=come_increment_ref_count(((struct sGlobalVariable*)(right_value730=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value729=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 2884, "struct sGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_472),base_type_473,(char*)come_increment_ref_count(var_name2_485),(struct sNode*)come_increment_ref_count(right_node_483),(char*)come_increment_ref_count(array_initializer_484),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sGlobalVariable_finalize;
            _inf_value27->clone=(void*)sGlobalVariable_clone;
            _inf_value27->compile=(void*)sGlobalVariable_compile;
            _inf_value27->sline=(void*)sGlobalVariable_sline;
            _inf_value27->sname=(void*)sGlobalVariable_sname;
            _inf_value27->terminated=(void*)sGlobalVariable_terminated;
            _inf_value27->kind=(void*)sGlobalVariable_kind;
            __result439__ = __result_obj__ = ((struct sNode*)(right_value739=_inf_value27));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_474 = come_decrement_ref_count2(name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_476, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_477 = come_decrement_ref_count2(var_name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_483) { right_node_483 = come_decrement_ref_count2(right_node_483, ((struct sNode*)right_node_483)->finalize, ((struct sNode*)right_node_483)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_484 = come_decrement_ref_count2(array_initializer_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_485 = come_decrement_ref_count2(var_name2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value729, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value730, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value739) { right_value739 = come_decrement_ref_count2(right_value739, ((struct sNode*)right_value739)->finalize, ((struct sNode*)right_value739)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result439__;
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,base_type_473, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_474 = come_decrement_ref_count2(name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_476, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_477 = come_decrement_ref_count2(var_name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_483) { right_node_483 = come_decrement_ref_count2(right_node_483, ((struct sNode*)right_node_483)->finalize, ((struct sNode*)right_node_483)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_484 = come_decrement_ref_count2(array_initializer_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        var_name2_485 = come_decrement_ref_count2(var_name2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(right_value740=parse_type(info,(_Bool)1,(_Bool)1)));
        result_type_488=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        var_name_489=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        err_490=multiple_assign_var16->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional756=!err_490,        _if_conditional756) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        right_node_491=((void*)0);
        array_initializer_492=((void*)0);
        if(_if_conditional757=*info->p==61,        _if_conditional757) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional758=*info->p==123,            _if_conditional758) {
                buf_493=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value742=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value741=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2903, "struct buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value741, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value742, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buffer_append_char(buf_493,*info->p);
                info->p++;
                squort_494=(_Bool)0;
                dquort_495=(_Bool)0;
                nest_496=1;
                while(_while_condtional41=1,                _while_condtional41) {
                    if(_if_conditional759=*info->p==0,                    _if_conditional759) {
                        err_msg(info,"unexpected source end in array initiailizer");
                        exit(2);
                    }
                    else {
                        if(_if_conditional760=*info->p==92,                        _if_conditional760) {
                            buffer_append_char(buf_493,*info->p);
                            info->p++;
                            buffer_append_char(buf_493,*info->p);
                            info->p++;
                        }
                        else {
                            if(_if_conditional761=!squort_494&&*info->p==34,                            _if_conditional761) {
                                buffer_append_char(buf_493,*info->p);
                                info->p++;
                                dquort_495=!dquort_495;
                            }
                            else {
                                if(_if_conditional762=!dquort_495&&*info->p==39,                                _if_conditional762) {
                                    buffer_append_char(buf_493,*info->p);
                                    info->p++;
                                    squort_494=!squort_494;
                                }
                                else {
                                    if(_if_conditional763=squort_494||dquort_495,                                    _if_conditional763) {
                                        buffer_append_char(buf_493,*info->p);
                                        info->p++;
                                    }
                                    else {
                                        if(_if_conditional764=*info->p==123,                                        _if_conditional764) {
                                            nest_496++;
                                            buffer_append_char(buf_493,*info->p);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional765=*info->p==125,                                            _if_conditional765) {
                                                nest_496--;
                                                buffer_append_char(buf_493,*info->p);
                                                info->p++;
                                                if(_if_conditional766=nest_496==0,                                                _if_conditional766) {
                                                    skip_spaces_and_lf(info);
                                                    break;
                                                }
                                            }
                                            else {
                                                buffer_append_char(buf_493,*info->p);
                                                info->p++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                __dec_obj293=array_initializer_492;
                array_initializer_492=(char*)come_increment_ref_count(((char*)(right_value743=buffer_to_string(buf_493))));
                __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value743 = come_decrement_ref_count2(right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,buf_493, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                parse_sharp_v5(info);
                __dec_obj294=right_node_491;
                right_node_491=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value744=expression_v13(info))));
                if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value744) { right_value744 = come_decrement_ref_count2(right_value744, ((struct sNode*)right_value744)->finalize, ((struct sNode*)right_value744)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                parse_sharp_v5(info);
            }
        }
        if(result_type_488->mExtern) {
            if(right_node_491) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2970, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value746=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value745=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 2970, "struct sExternalGlobalVariable")))),((void*)0),result_type_488,(char*)come_increment_ref_count(var_name_489),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value28->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value28->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value28->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value28->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value28->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value28->kind=(void*)sExternalGlobalVariable_kind;
            __result442__ = __result_obj__ = ((struct sNode*)(right_value753=_inf_value28));
            come_call_finalizer2(sType_finalize,result_type_488, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_489 = come_decrement_ref_count2(var_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_491) { right_node_491 = come_decrement_ref_count2(right_node_491, ((struct sNode*)right_node_491)->finalize, ((struct sNode*)right_node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_492 = come_decrement_ref_count2(array_initializer_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value745, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value746, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value753) { right_value753 = come_decrement_ref_count2(right_value753, ((struct sNode*)right_value753)->finalize, ((struct sNode*)right_value753)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result442__;
        }
        else {
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2973, "struct sNode");
            _inf_obj_value29=come_increment_ref_count(((struct sGlobalVariable*)(right_value755=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value754=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 2973, "struct sGlobalVariable")))),((void*)0),result_type_488,(char*)come_increment_ref_count(var_name_489),(struct sNode*)come_increment_ref_count(right_node_491),(char*)come_increment_ref_count(array_initializer_492),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sGlobalVariable_finalize;
            _inf_value29->clone=(void*)sGlobalVariable_clone;
            _inf_value29->compile=(void*)sGlobalVariable_compile;
            _inf_value29->sline=(void*)sGlobalVariable_sline;
            _inf_value29->sname=(void*)sGlobalVariable_sname;
            _inf_value29->terminated=(void*)sGlobalVariable_terminated;
            _inf_value29->kind=(void*)sGlobalVariable_kind;
            __result445__ = __result_obj__ = ((struct sNode*)(right_value764=_inf_value29));
            come_call_finalizer2(sType_finalize,result_type_488, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_489 = come_decrement_ref_count2(var_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_491) { right_node_491 = come_decrement_ref_count2(right_node_491, ((struct sNode*)right_node_491)->finalize, ((struct sNode*)right_node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_492 = come_decrement_ref_count2(array_initializer_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value754, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value755, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value764) { right_value764 = come_decrement_ref_count2(right_value764, ((struct sNode*)right_value764)->finalize, ((struct sNode*)right_value764)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result445__;
        }
        come_call_finalizer2(sType_finalize,result_type_488, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_489 = come_decrement_ref_count2(var_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_491) { right_node_491 = come_decrement_ref_count2(right_node_491, ((struct sNode*)right_node_491)->finalize, ((struct sNode*)right_node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_492 = come_decrement_ref_count2(array_initializer_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result446__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result446__;
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional724;
void* right_value711;
struct list_item$1tuple2$2sTypephcharphph* litem_478;
struct tuple2$2sTypephcharph* __dec_obj276;
_Bool _if_conditional725;
void* right_value712;
struct list_item$1tuple2$2sTypephcharphph* litem_479;
struct tuple2$2sTypephcharph* __dec_obj277;
void* right_value713;
struct list_item$1tuple2$2sTypephcharphph* litem_480;
struct tuple2$2sTypephcharph* __dec_obj278;
struct list$1tuple2$2sTypephcharphph* __result432__;
memset(&__result_obj__, 0, sizeof(void*));
right_value711 = (void*)0;
memset(&litem_478, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value712 = (void*)0;
memset(&litem_479, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value713 = (void*)0;
memset(&litem_480, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
            if(_if_conditional724=self->len==0,            _if_conditional724) {
                litem_478=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value711=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 225, "struct list_item$1tuple2$2sTypephcharphph"))));
                come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value711, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_478->prev=((void*)0);
                litem_478->next=((void*)0);
                __dec_obj276=litem_478->item;
                litem_478->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_478;
                self->head=litem_478;
            }
            else {
                if(_if_conditional725=self->len==1,                _if_conditional725) {
                    litem_479=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value712=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 235, "struct list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value712, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_479->prev=self->head;
                    litem_479->next=((void*)0);
                    __dec_obj277=litem_479->item;
                    litem_479->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_479;
                    self->head->next=litem_479;
                }
                else {
                    litem_480=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value713=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 245, "struct list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_480->prev=self->tail;
                    litem_480->next=((void*)0);
                    __dec_obj278=litem_480->item;
                    litem_480->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_480;
                    self->tail=litem_480;
                }
            }
            self->len++;
            __result432__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result432__;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj279;
char* __dec_obj280;
struct tuple2$2sTypephcharph* __result433__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj279=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj280=self->v2;
            self->v2=(char*)come_increment_ref_count(v2);
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            __result433__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result433__;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional769;
_Bool _if_conditional770;
_Bool _if_conditional771;
_Bool _if_conditional772;
_Bool _if_conditional773;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional769=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional769) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional770=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional770) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional771=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional771) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional772=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional772) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional773=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional773) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional774;
struct sExternalGlobalVariable* __result440__;
void* right_value747;
struct sExternalGlobalVariable* result_497;
_Bool _if_conditional775;
void* right_value748;
struct sType* __dec_obj295;
_Bool _if_conditional776;
void* right_value749;
char* __dec_obj296;
_Bool _if_conditional777;
_Bool _if_conditional778;
void* right_value750;
char* __dec_obj297;
_Bool _if_conditional779;
void* right_value751;
struct list$1tuple2$2sTypephcharphph* __dec_obj298;
_Bool _if_conditional780;
void* right_value752;
char* __dec_obj299;
struct sExternalGlobalVariable* __result441__;
memset(&__result_obj__, 0, sizeof(void*));
right_value747 = (void*)0;
memset(&result_497, 0, sizeof(struct sExternalGlobalVariable*));
right_value748 = (void*)0;
right_value749 = (void*)0;
right_value750 = (void*)0;
right_value751 = (void*)0;
right_value752 = (void*)0;
                if(_if_conditional774=self==(void*)0,                _if_conditional774) {
                    __result440__ = __result_obj__ = (void*)0;
                    return __result440__;
                }
                result_497=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value747=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "sExternalGlobalVariable_clone", 3, "struct sExternalGlobalVariable"))));
                come_call_finalizer2(sExternalGlobalVariable_finalize,right_value747, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional775=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional775) {
                    __dec_obj295=result_497->type;
                    result_497->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value748=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value748, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional776=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional776) {
                    __dec_obj296=result_497->name;
                    result_497->name=(char*)come_increment_ref_count(((char*)(right_value749=string_clone(self->name))));
                    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value749 = come_decrement_ref_count2(right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional777=self!=((void*)0),                _if_conditional777) {
                    result_497->sline=self->sline;
                }
                if(_if_conditional778=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional778) {
                    __dec_obj297=result_497->sname;
                    result_497->sname=(char*)come_increment_ref_count(((char*)(right_value750=string_clone(self->sname))));
                    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value750 = come_decrement_ref_count2(right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional779=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional779) {
                    __dec_obj298=result_497->multiple_declare;
                    result_497->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value751=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional780=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional780) {
                    __dec_obj299=result_497->mDeclareSName;
                    result_497->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value752=string_clone(self->mDeclareSName))));
                    __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value752 = come_decrement_ref_count2(right_value752, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result441__ = __result_obj__ = result_497;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_497, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result441__;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_497, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional781;
_Bool _if_conditional782;
_Bool _if_conditional783;
_Bool _if_conditional784;
_Bool _if_conditional785;
_Bool _if_conditional786;
_Bool _if_conditional787;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional781=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional781) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional782=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional782) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional783=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional783) {
                    if(self->right_node) { self->right_node = come_decrement_ref_count2(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional784=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional784) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional785=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional785) {
                    self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional786=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional786) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional787=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional787) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional788;
struct sGlobalVariable* __result443__;
void* right_value756;
struct sGlobalVariable* result_498;
_Bool _if_conditional789;
void* right_value757;
struct sType* __dec_obj300;
_Bool _if_conditional790;
void* right_value758;
char* __dec_obj301;
_Bool _if_conditional791;
void* right_value759;
struct sNode* __dec_obj302;
_Bool _if_conditional792;
_Bool _if_conditional793;
void* right_value760;
char* __dec_obj303;
_Bool _if_conditional794;
void* right_value761;
char* __dec_obj304;
_Bool _if_conditional795;
void* right_value762;
struct list$1tuple2$2sTypephcharphph* __dec_obj305;
_Bool _if_conditional796;
void* right_value763;
char* __dec_obj306;
struct sGlobalVariable* __result444__;
memset(&__result_obj__, 0, sizeof(void*));
right_value756 = (void*)0;
memset(&result_498, 0, sizeof(struct sGlobalVariable*));
right_value757 = (void*)0;
right_value758 = (void*)0;
right_value759 = (void*)0;
right_value760 = (void*)0;
right_value761 = (void*)0;
right_value762 = (void*)0;
right_value763 = (void*)0;
                if(_if_conditional788=self==(void*)0,                _if_conditional788) {
                    __result443__ = __result_obj__ = (void*)0;
                    return __result443__;
                }
                result_498=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value756=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "sGlobalVariable_clone", 3, "struct sGlobalVariable"))));
                come_call_finalizer2(sGlobalVariable_finalize,right_value756, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional789=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional789) {
                    __dec_obj300=result_498->type;
                    result_498->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value757=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value757, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional790=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional790) {
                    __dec_obj301=result_498->name;
                    result_498->name=(char*)come_increment_ref_count(((char*)(right_value758=string_clone(self->name))));
                    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value758 = come_decrement_ref_count2(right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional791=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional791) {
                    __dec_obj302=result_498->right_node;
                    result_498->right_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value759=sNode_clone(self->right_node))));
                    if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value759) { right_value759 = come_decrement_ref_count2(right_value759, ((struct sNode*)right_value759)->finalize, ((struct sNode*)right_value759)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional792=self!=((void*)0),                _if_conditional792) {
                    result_498->sline=self->sline;
                }
                if(_if_conditional793=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional793) {
                    __dec_obj303=result_498->sname;
                    result_498->sname=(char*)come_increment_ref_count(((char*)(right_value760=string_clone(self->sname))));
                    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value760 = come_decrement_ref_count2(right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional794=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional794) {
                    __dec_obj304=result_498->array_initializer;
                    result_498->array_initializer=(char*)come_increment_ref_count(((char*)(right_value761=string_clone(self->array_initializer))));
                    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value761 = come_decrement_ref_count2(right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional795=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional795) {
                    __dec_obj305=result_498->multiple_declare;
                    result_498->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value762=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value762, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional796=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional796) {
                    __dec_obj306=result_498->mDeclareSName;
                    result_498->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value763=string_clone(self->mDeclareSName))));
                    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value763 = come_decrement_ref_count2(right_value763, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result444__ = __result_obj__ = result_498;
                come_call_finalizer2(sGlobalVariable_finalize,result_498, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result444__;
                come_call_finalizer2(sGlobalVariable_finalize,result_498, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
struct sNode* __result447__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result447__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result447__;
}

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result448__;
memset(&__result_obj__, 0, sizeof(void*));
    __result448__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result448__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

