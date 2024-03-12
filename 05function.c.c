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
struct integer
{
    long value;
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
struct tuple1$1sTypeph
{
    struct sType* v1;
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
    struct list$1sTypeph* mMultipleTypes;
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

void* come_dynamic_typeof(void* mem);

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

struct integer* integer_initialize(struct integer* self, long value);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_to_int(struct integer* self);

_Bool integer_equals(struct integer* self, struct integer* right);

int integer_compare(struct integer* self, struct integer* right);

_Bool integer_operator_equals(struct integer* self, struct integer* right);

_Bool integer_operator_not_equals(struct integer* self, struct integer* right);

struct integer* integer_operator_add(struct integer* left, struct integer* right);

struct integer* integer_operator_sub(struct integer* left, struct integer* right);

struct integer* integer_operator_mult(struct integer* left, struct integer* right);

struct integer* integer_operator_div(struct integer* left, struct integer* right);

struct integer* integer_operator_mod(struct integer* left, struct integer* right);

struct integer* integer_operator_lshift(struct integer* left, struct integer* right);

struct integer* integer_operator_rshift(struct integer* left, struct integer* right);

struct integer* integer_operator_gteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lt(struct integer* left, struct integer* right);

struct integer* integer_operator_gt(struct integer* left, struct integer* right);

struct integer* integer_operator_and(struct integer* left, struct integer* right);

struct integer* integer_operator_xor(struct integer* left, struct integer* right);

struct integer* integer_operator_or(struct integer* left, struct integer* right);

struct integer* integer_operator_andand(struct integer* left, struct integer* right);

struct integer* integer_operator_oror(struct integer* left, struct integer* right);

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

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

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

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

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
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "smart_pointer$1long"))));
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
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value10;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result7__ = __result_obj__ = ((char*)(right_value10=xsprintf(msg,self)));
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result7__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value11;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result8__ = __result_obj__ = ((char*)(right_value11=xsprintf(msg,self)));
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value12;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value12=xsprintf(msg,self)));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
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
void* right_value48;
struct sType* generics_type_29;
_Bool _if_conditional93;
struct sType* __dec_obj29;
_Bool _if_conditional94;
struct sClass* klass_30;
char* class_name_31;
struct sFun* operator_fun_32;
char* fun_name2_33;
_Bool _if_conditional95;
void* right_value49;
char* none_generics_name_34;
void* right_value50;
struct sType* obj_type_35;
void* right_value51;
char* __dec_obj30;
void* right_value52;
char* fun_name3_36;
struct sGenericsFun* generics_fun_39;
_Bool _if_conditional110;
void* right_value53;
_Bool _if_conditional111;
_Bool __result33__;
_Bool _if_conditional131;
void* right_value54;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_43;
char* fun_name_44;
void* right_value55;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_45;
char* fun_name2_46;
_Bool _if_conditional133;
void* right_value56;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_47;
char* fun_name_48;
void* right_value57;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_49;
char* fun_name2_50;
void* right_value58;
char* __dec_obj31;
int i_51;
void* right_value59;
char* new_fun_name_52;
_Bool _if_conditional134;
void* right_value60;
char* __dec_obj32;
_Bool _if_conditional135;
_Bool result_53;
_Bool _if_conditional136;
void* right_value61;
struct CVALUE* come_value_54;
char* left_value2_55;
void* right_value62;
void* right_value63;
_Bool _if_conditional141;
void* right_value64;
char* __dec_obj33;
void* right_value65;
char* __dec_obj34;
void* right_value66;
char* __dec_obj35;
void* right_value67;
struct sType* type2_59;
void* right_value68;
struct sType* type3_60;
void* right_value69;
struct sType* __dec_obj36;
_Bool _if_conditional142;
void* right_value70;
char* __dec_obj37;
void* right_value71;
char* __dec_obj38;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&operator_fun_32, 0, sizeof(struct sFun*));
memset(&fun_name2_33, 0, sizeof(char*));
right_value49 = (void*)0;
memset(&none_generics_name_34, 0, sizeof(char*));
right_value50 = (void*)0;
memset(&obj_type_35, 0, sizeof(struct sType*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&fun_name3_36, 0, sizeof(char*));
memset(&generics_fun_39, 0, sizeof(struct sGenericsFun*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&fun_43, 0, sizeof(struct sFun*));
memset(&fun_name_44, 0, sizeof(char*));
memset(&fun_43, 0, sizeof(struct sFun*));
memset(&fun_name_44, 0, sizeof(char*));
right_value55 = (void*)0;
memset(&fun2_45, 0, sizeof(struct sFun*));
memset(&fun_name2_46, 0, sizeof(char*));
memset(&fun2_45, 0, sizeof(struct sFun*));
memset(&fun_name2_46, 0, sizeof(char*));
right_value56 = (void*)0;
memset(&fun_47, 0, sizeof(struct sFun*));
memset(&fun_name_48, 0, sizeof(char*));
memset(&fun_47, 0, sizeof(struct sFun*));
memset(&fun_name_48, 0, sizeof(char*));
right_value57 = (void*)0;
memset(&fun2_49, 0, sizeof(struct sFun*));
memset(&fun_name2_50, 0, sizeof(char*));
memset(&fun2_49, 0, sizeof(struct sFun*));
memset(&fun_name2_50, 0, sizeof(char*));
right_value58 = (void*)0;
memset(&i_51, 0, sizeof(int));
right_value59 = (void*)0;
memset(&new_fun_name_52, 0, sizeof(char*));
right_value60 = (void*)0;
memset(&result_53, 0, sizeof(_Bool));
right_value61 = (void*)0;
memset(&come_value_54, 0, sizeof(struct CVALUE*));
memset(&left_value2_55, 0, sizeof(char*));
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
memset(&type2_59, 0, sizeof(struct sType*));
right_value68 = (void*)0;
memset(&type3_60, 0, sizeof(struct sType*));
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value48=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(generics_type_29->mNoSolvedGenericsType->v1) {
        __dec_obj29=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_32=((void*)0);
    if(_if_conditional95=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional95) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value49=get_none_generics_name(type->mClass->mName))));
        right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj30=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value51=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value52=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_39=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0));
        if(generics_fun_39) {
            if(_if_conditional111=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value53=__builtin_string(fun_name2_33)))),generics_fun_39,obj_type_35,info),            right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional111) {
                __result33__ = (_Bool)0;
                none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_33 = come_decrement_ref_count2(fun_name2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result33__;
            }
            operator_fun_32=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33);
        }
        else {
            if(_if_conditional131=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional131) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value54=create_equals_automatically(obj_type_35,"equals",info)));
                fun_43=multiple_assign_var1->v1;
                fun_name_44=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value55=create_operator_equals_automatically(obj_type_35,"operator_equals",info)));
                fun2_45=multiple_assign_var2->v1;
                fun_name2_46=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                operator_fun_32=fun2_45;
                fun_name_44 = come_decrement_ref_count2(fun_name_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_46 = come_decrement_ref_count2(fun_name2_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional133=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional133) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value56=create_equals_automatically(obj_type_35,"not_equals",info)));
                    fun_47=multiple_assign_var3->v1;
                    fun_name_48=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value57=create_operator_not_equals_automatically(obj_type_35,"operator_not_equals",info)));
                    fun2_49=multiple_assign_var4->v1;
                    fun_name2_50=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    operator_fun_32=fun2_49;
                    fun_name_48 = come_decrement_ref_count2(fun_name_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_50 = come_decrement_ref_count2(fun_name2_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    operator_fun_32=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33);
                }
            }
        }
        none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj31=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value58=create_method_name(type,(_Bool)0,fun_name,info))));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_51=128-1;        i_51>=1;        i_51--        ){
            new_fun_name_52=(char*)come_increment_ref_count(((char*)(right_value59=xsprintf("%s_v%d",fun_name2_33,i_51))));
            right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_32=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_52);
            if(operator_fun_32) {
                __dec_obj32=fun_name2_33;
                fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(new_fun_name_52))));
                __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_52 = come_decrement_ref_count2(new_fun_name_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_52 = come_decrement_ref_count2(new_fun_name_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional135=operator_fun_32==((void*)0),        _if_conditional135) {
            operator_fun_32=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33);
        }
    }
    result_53=(_Bool)0;
    if(operator_fun_32) {
        come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value61=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 85, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value63=xsprintf("\%s is assigned to",((char*)(right_value62=string_to_string(fun_name2_33)))))),list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional141=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0)->mHeap&&left_value->type->mHeap,        _if_conditional141) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0),left_value->type,left_value,info);
            __dec_obj33=left_value2_55;
            left_value2_55=(char*)come_increment_ref_count(((char*)(right_value64=xsprintf("%s",left_value->c_value))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj34=left_value2_55;
            left_value2_55=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(left_value->c_value))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj35=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value66=xsprintf("%s(%s)",fun_name2_33,left_value2_55))));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type2_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(operator_fun_32->mResultType))));
        come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type3_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=solve_generics(type2_59,generics_type_29,info))));
        come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=come_value_54->type;
        come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=sType_clone(type3_60))));
        come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_54->var=((void*)0);
        if(type3_60->mHeap) {
            __dec_obj37=come_value_54->c_value;
            come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value70=append_object_to_right_values(come_value_54->c_value,(struct sType*)come_increment_ref_count(type3_60),info))));
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj38=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value71=append_stackframe(come_value_54->c_value,come_value_54->type,info))));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_54->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
        result_53=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_55 = come_decrement_ref_count2(left_value2_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type3_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result41__ = result_53;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_33 = come_decrement_ref_count2(fun_name2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result41__;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_33 = come_decrement_ref_count2(fun_name2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sType* __result10__;
void* right_value13;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value20;
struct list$1sTypeph* __dec_obj9;
_Bool _if_conditional28;
void* right_value23;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional32;
void* right_value24;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional33;
void* right_value25;
char* __dec_obj13;
_Bool _if_conditional34;
void* right_value26;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional35;
void* right_value34;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional48;
_Bool _if_conditional49;
void* right_value35;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional50;
void* right_value42;
struct list$1charph* __dec_obj23;
_Bool _if_conditional54;
void* right_value43;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value44;
struct sNode* __dec_obj25;
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
_Bool _if_conditional79;
_Bool _if_conditional80;
void* right_value45;
struct sNode* __dec_obj26;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
void* right_value46;
char* __dec_obj27;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value47;
char* __dec_obj28;
struct sType* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value20 = (void*)0;
right_value23 = (void*)0;
right_value24 = (void*)0;
right_value25 = (void*)0;
right_value26 = (void*)0;
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result10__ = __result_obj__ = (void*)0;
            return __result10__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional23=self!=((void*)0),        _if_conditional23) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional24=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional24) {
            __dec_obj9=result_5->mMultipleTypes;
            result_5->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional28) {
            __dec_obj11=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value23=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional32=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional32) {
            __dec_obj12=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value24=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional33) {
            __dec_obj13=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value25=string_clone(self->mGenericsName))));
            __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional34) {
            __dec_obj14=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value26=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional35=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional35) {
            __dec_obj18=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value34=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0),        _if_conditional48) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional49=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional49) {
            __dec_obj19=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional50) {
            __dec_obj23=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional54) {
            __dec_obj24=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value43=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional56=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional56) {
            __dec_obj25=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(self->mAlignas))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value44) { right_value44 = come_decrement_ref_count2(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mException=self->mException;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional80=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional80) {
            __dec_obj26=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(self->mSizeNum))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value45) { right_value45 = come_decrement_ref_count2(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional83=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional83) {
            __dec_obj27=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(self->mOriginalTypeName))));
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional92=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional92) {
            __dec_obj28=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(self->mAsmName))));
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result27__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result27__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional6) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional8=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional10=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional10) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional11=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional11) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional12=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional13=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional13) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional16=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional16) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional19=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional19) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional20) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional21=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional21) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional22) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional7=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional7) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional9) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional14) {
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
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
struct list$1sTypeph* __result11__;
void* right_value14;
void* right_value15;
struct list$1sTypeph* result_12;
struct list_item$1sTypeph* it_13;
_Bool _while_condtional4;
void* right_value19;
struct list$1sTypeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&result_12, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
right_value19 = (void*)0;
                if(_if_conditional25=self==((void*)0),                _if_conditional25) {
                    __result11__ = __result_obj__ = ((void*)0);
                    return __result11__;
                }
                result_12=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value15=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value14=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_13=self->head;
                while(_while_condtional4=it_13!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_12,(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_clone(it_13->item)))));
                    come_call_finalizer2(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_13=it_13->next;
                }
                __result14__ = __result_obj__ = result_12;
                come_call_finalizer2(list$1sTypephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result14__;
                come_call_finalizer2(list$1sTypephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result12__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result12__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional26;
void* right_value16;
struct list_item$1sTypeph* litem_14;
struct sType* __dec_obj6;
_Bool _if_conditional27;
void* right_value17;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj7;
void* right_value18;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj8;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*));
right_value17 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value18 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional26=self->len==0,                        _if_conditional26) {
                            litem_14=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value16=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_14->prev=((void*)0);
                            litem_14->next=((void*)0);
                            __dec_obj6=litem_14->item;
                            litem_14->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_14;
                            self->head=litem_14;
                        }
                        else {
                            if(_if_conditional27=self->len==1,                            _if_conditional27) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value17=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_15->prev=self->head;
                                litem_15->next=((void*)0);
                                __dec_obj7=litem_15->item;
                                litem_15->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_15;
                                self->head->next=litem_15;
                            }
                            else {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=self->tail;
                                litem_16->next=((void*)0);
                                __dec_obj8=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_16;
                                self->tail=litem_16;
                            }
                        }
                        self->len++;
                        __result13__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result13__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
struct tuple1$1sTypeph* __result15__;
void* right_value21;
struct tuple1$1sTypeph* result_17;
_Bool _if_conditional31;
void* right_value22;
struct sType* __dec_obj10;
struct tuple1$1sTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
memset(&result_17, 0, sizeof(struct tuple1$1sTypeph*));
right_value22 = (void*)0;
                if(_if_conditional29=self==(void*)0,                _if_conditional29) {
                    __result15__ = __result_obj__ = (void*)0;
                    return __result15__;
                }
                result_17=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value21=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional31=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional31) {
                    __dec_obj10=result_17->v1;
                    result_17->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result16__ = __result_obj__ = result_17;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result16__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional30) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional36;
struct list$1sNodeph* __result17__;
void* right_value27;
void* right_value28;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value33;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value33 = (void*)0;
                if(_if_conditional36=self==((void*)0),                _if_conditional36) {
                    __result17__ = __result_obj__ = ((void*)0);
                    return __result17__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value28=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=sNode_clone(it_19->item)))));
                    if(right_value33) { right_value33 = come_decrement_ref_count2(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_19=it_19->next;
                }
                __result22__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result22__;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result18__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result18__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional37;
void* right_value29;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional38;
void* right_value30;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value31;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value30 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value31 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional37=self->len==0,                        _if_conditional37) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj15=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional38=self->len==1,                            _if_conditional38) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj16=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj17=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result19__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result19__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional39;
struct sNode* __result20__;
void* right_value32;
struct sNode* result_23;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
struct sNode* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional39=self==(void*)0,                        _if_conditional39) {
                            __result20__ = __result_obj__ = (void*)0;
                            return __result20__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value32) { right_value32 = come_decrement_ref_count2(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional40=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional40) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_23->kind=self->kind;
                        }
                        __result21__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result21__;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1charph* __result23__;
void* right_value36;
void* right_value37;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value41;
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
right_value37 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value41 = (void*)0;
                if(_if_conditional51=self==((void*)0),                _if_conditional51) {
                    __result23__ = __result_obj__ = ((void*)0);
                    return __result23__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value41=string_clone(it_25->item)))));
                    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_25=it_25->next;
                }
                __result26__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result26__;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result24__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result24__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional52;
void* right_value38;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional53;
void* right_value39;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value40;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value39 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value40 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional52=self->len==0,                        _if_conditional52) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj20=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional53=self->len==1,                            _if_conditional53) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj21=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj22=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result25__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result25__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
        __result28__ = self->len;
        return __result28__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional96;
_Bool _if_conditional97;
struct sGenericsFun* __result29__;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct sGenericsFun* __result30__;
struct sGenericsFun* __result31__;
struct sGenericsFun* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional96=self->item_existance[it_38],                _if_conditional96) {
                    if(_if_conditional97=string_equals(self->keys[it_38],key),                    _if_conditional97) {
                        __result29__ = __result_obj__ = self->items[it_38];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result29__;
                    }
                    it_38++;
                    if(_if_conditional108=it_38>=self->size,                    _if_conditional108) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional109=it_38==hash_37,                        _if_conditional109) {
                            __result30__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result30__;
                        }
                    }
                }
                else {
                    __result31__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result31__;
                }
            }
            __result32__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result32__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional98=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional98) {
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional99=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional99) {
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional100=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional100) {
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional101) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional102) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional103) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional104) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional105=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional105) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional106=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional106) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional107=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional107) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_40;
unsigned int hash_41;
unsigned int it_42;
_Bool _while_condtional8;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct sFun* __result34__;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct sFun* __result35__;
struct sFun* __result36__;
struct sFun* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_40, 0, sizeof(struct sFun*));
memset(&hash_41, 0, sizeof(unsigned int));
memset(&it_42, 0, sizeof(unsigned int));
                memset(&default_value_40,0,sizeof(struct sFun*));
                hash_41=string_get_hash_key(((char*)key))%self->size;
                it_42=hash_41;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional112=self->item_existance[it_42],                    _if_conditional112) {
                        if(_if_conditional113=string_equals(self->keys[it_42],key),                        _if_conditional113) {
                            __result34__ = __result_obj__ = self->items[it_42];
                            come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result34__;
                        }
                        it_42++;
                        if(_if_conditional129=it_42>=self->size,                        _if_conditional129) {
                            it_42=0;
                        }
                        else {
                            if(_if_conditional130=it_42==hash_41,                            _if_conditional130) {
                                __result35__ = __result_obj__ = default_value_40;
                                come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result35__;
                            }
                        }
                    }
                    else {
                        __result36__ = __result_obj__ = default_value_40;
                        come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result36__;
                    }
                }
                __result37__ = __result_obj__ = default_value_40;
                come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result37__;
                come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional114=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional114) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional115=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional115) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional116=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional116) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional117=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional117) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional118=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional118) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional119=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional119) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional120=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional120) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional123=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional123) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional124=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional124) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional125=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional125) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional126=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional126) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional127=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional127) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional128=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional128) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional121;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional121=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional121) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional122=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional122) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional132=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional132) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional137;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional137=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional137) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional138=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional138) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional139;
struct list_item$1sTypeph* it_56;
int i_57;
_Bool _while_condtional9;
_Bool _if_conditional140;
struct sType* __result38__;
struct sType* default_value_58;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_57, 0, sizeof(int));
memset(&default_value_58, 0, sizeof(struct sType*));
            if(_if_conditional139=position<0,            _if_conditional139) {
                position+=self->len;
            }
            it_56=self->head;
            i_57=0;
            while(_while_condtional9=it_56!=((void*)0),            _while_condtional9) {
                if(_if_conditional140=position==i_57,                _if_conditional140) {
                    __result38__ = __result_obj__ = it_56->item;
                    return __result38__;
                }
                it_56=it_56->next;
                i_57++;
            }
            memset(&default_value_58,0,sizeof(struct sType*));
            __result39__ = __result_obj__ = default_value_58;
            come_call_finalizer2(sType_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result39__;
            come_call_finalizer2(sType_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional143;
void* right_value72;
struct list_item$1CVALUEph* litem_61;
struct CVALUE* __dec_obj39;
_Bool _if_conditional145;
void* right_value73;
struct list_item$1CVALUEph* litem_62;
struct CVALUE* __dec_obj40;
void* right_value74;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj41;
struct list$1CVALUEph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1CVALUEph*));
right_value73 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1CVALUEph*));
right_value74 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional143=self->len==0,            _if_conditional143) {
                litem_61=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value72=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_61->prev=((void*)0);
                litem_61->next=((void*)0);
                __dec_obj39=litem_61->item;
                litem_61->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_61;
                self->head=litem_61;
            }
            else {
                if(_if_conditional145=self->len==1,                _if_conditional145) {
                    litem_62=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value73=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_62->prev=self->head;
                    litem_62->next=((void*)0);
                    __dec_obj40=litem_62->item;
                    litem_62->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_62;
                    self->head->next=litem_62;
                }
                else {
                    litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value74=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_63->prev=self->tail;
                    litem_63->next=((void*)0);
                    __dec_obj41=litem_63->item;
                    litem_63->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_63;
                    self->tail=litem_63;
                }
            }
            self->len++;
            __result40__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result40__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional144=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional144) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj42;
void* right_value75;
char* __dec_obj43;
void* right_value76;
char* __dec_obj44;
struct sReturnNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
right_value76 = (void*)0;
    __dec_obj42=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj43=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value75=string_clone(value_source))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value76=__builtin_string(info->sname))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result42__ = __result_obj__ = self;
    come_call_finalizer2(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result42__;
    come_call_finalizer2(sReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sReturnNode_sline(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = self->sline;
    return __result43__;
}

char* sReturnNode_sname(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value77;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result44__ = __result_obj__ = ((char*)(right_value77=__builtin_string(self->sname)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result44__;
}

char* sReturnNode_kind(){
void* __result_obj__;
void* right_value78;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result45__ = __result_obj__ = ((char*)(right_value78=__builtin_string("sReturnNode")));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result45__;
}

_Bool sReturnNode_terminated(){
void* __result_obj__;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = (_Bool)0;
    return __result46__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional149;
struct sFun* come_fun_64;
void* right_value79;
struct sType* result_type_65;
void* right_value80;
struct sType* result_type2_66;
struct sType* result_type3_67;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool __result47__;
void* right_value81;
struct CVALUE* come_value_68;
_Bool _if_conditional152;
int right_value_id_69;
_Bool _if_conditional153;
void* right_value82;
struct sType* come_value_type_70;
void* right_value83;
struct sType* __dec_obj45;
static int num_result_71=0;
void* right_value84;
char* var_name_72;
int num_result_stack_73;
_Bool _if_conditional154;
void* right_value85;
void* right_value86;
_Bool _if_conditional155;
void* right_value87;
struct sFun* come_fun_74;
_Bool _if_conditional156;
void* right_value88;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_64, 0, sizeof(struct sFun*));
right_value79 = (void*)0;
memset(&result_type_65, 0, sizeof(struct sType*));
right_value80 = (void*)0;
memset(&result_type2_66, 0, sizeof(struct sType*));
memset(&result_type3_67, 0, sizeof(struct sType*));
right_value81 = (void*)0;
memset(&come_value_68, 0, sizeof(struct CVALUE*));
memset(&right_value_id_69, 0, sizeof(int));
right_value82 = (void*)0;
memset(&come_value_type_70, 0, sizeof(struct sType*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&var_name_72, 0, sizeof(char*));
memset(&num_result_stack_73, 0, sizeof(int));
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&come_fun_74, 0, sizeof(struct sFun*));
right_value88 = (void*)0;
    if(self->value) {
        come_fun_64=info->come_fun;
        result_type_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(come_fun_64->mResultType))));
        come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=solve_generics(result_type_65,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type3_67=result_type2_66->mNoSolvedGenericsType->v1;
        if(result_type2_66->mNoSolvedGenericsType->v1) {
            result_type3_67=result_type2_66->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_67=result_type2_66;
        }
        if(_if_conditional151=!node_compile(self->value,info),        _if_conditional151) {
            __result47__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result47__;
        }
        come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional152=come_value_68->type->mHeap&&come_value_68->var==((void*)0),        _if_conditional152) {
            right_value_id_69=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_68->c_value));
            if(_if_conditional153=right_value_id_69!=-1,            _if_conditional153) {
                remove_object_from_right_values(right_value_id_69,info);
            }
        }
        come_value_type_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=solve_generics(come_value_68->type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj45=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(come_value_68->type))));
        come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        var_name_72=(char*)come_increment_ref_count(((char*)(right_value84=xsprintf("__result%d__",++num_result_71))));
        right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        num_result_stack_73=num_result_71;
        if(_if_conditional154=result_type2_66->mPointerNum>0,        _if_conditional154) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value85=make_define_var(result_type2_66,var_name_72,(_Bool)0,info))));
            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_72,come_value_68->c_value);
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value86=make_define_var(result_type2_66,var_name_72,(_Bool)0,info))));
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = %s;\n",var_name_72,come_value_68->c_value);
        }
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_64->mBlock,info,come_value_68->var,(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        caller_end(info);
        if(_if_conditional155=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional155) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value87=xsprintf("come_heap_final();\n"))));
            right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
        if(_if_conditional156=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional156) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value88=xsprintf("come_heap_final();\n"))));
            right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    __result48__ = (_Bool)1;
    return __result48__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value89;
char* __dec_obj46;
struct sLineNode* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
    self->sline=info->sline;
    __dec_obj46=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(info->sname))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result49__ = __result_obj__ = self;
    come_call_finalizer2(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result49__;
    come_call_finalizer2(sLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLineNode_sline(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
int __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    __result50__ = self->sline;
    return __result50__;
}

char* sLineNode_sname(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value90;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
    __result51__ = __result_obj__ = ((char*)(right_value90=__builtin_string(self->sname)));
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
}

_Bool sLineNode_terminated(){
void* __result_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    __result52__ = (_Bool)0;
    return __result52__;
}

char* sLineNode_kind(){
void* __result_obj__;
void* right_value91;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value91=__builtin_string("sLineNode")));
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value92;
struct CVALUE* come_value_75;
void* right_value93;
char* __dec_obj47;
void* right_value94;
void* right_value95;
struct sType* __dec_obj48;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&come_value_75, 0, sizeof(struct CVALUE*));
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
    come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value92=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 279, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=come_value_75->c_value;
    come_value_75->c_value=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("%d",info->sline))));
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj48=come_value_75->type;
    come_value_75->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value94=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 282, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_75->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_75));
    add_come_last_code(info,"%s;\n",come_value_75->c_value);
    __result54__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result54__;
    come_call_finalizer2(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value96;
char* __dec_obj49;
struct sSNameNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result55__ = __result_obj__ = self;
    come_call_finalizer2(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result55__;
    come_call_finalizer2(sSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sSNameNode_sline(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = self->sline;
    return __result56__;
}

char* sSNameNode_sname(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value97;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    __result57__ = __result_obj__ = ((char*)(right_value97=__builtin_string(self->sname)));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result57__;
}

_Bool sSNameNode_terminated(){
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    __result58__ = (_Bool)0;
    return __result58__;
}

char* sSNameNode_kind(){
void* __result_obj__;
void* right_value98;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
    __result59__ = __result_obj__ = ((char*)(right_value98=__builtin_string("sSNameNode")));
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result59__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value99;
struct CVALUE* come_value_76;
void* right_value100;
char* __dec_obj50;
void* right_value101;
void* right_value102;
struct sType* __dec_obj51;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&come_value_76, 0, sizeof(struct CVALUE*));
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
    come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 330, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=come_value_76->c_value;
    come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("\"%s\"",info->sname))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value_76->type;
    come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value101=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 333, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_76->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
    add_come_last_code(info,"%s;\n",come_value_76->c_value);
    __result60__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result60__;
    come_call_finalizer2(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value103;
char* __dec_obj52;
struct sFuncNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result61__ = __result_obj__ = self;
    come_call_finalizer2(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result61__;
    come_call_finalizer2(sFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sFuncNode_sline(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    __result62__ = self->sline;
    return __result62__;
}

char* sFuncNode_sname(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value104;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
    __result63__ = __result_obj__ = ((char*)(right_value104=__builtin_string(self->sname)));
    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}

_Bool sFuncNode_terminated(){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    __result64__ = (_Bool)0;
    return __result64__;
}

char* sFuncNode_kind(){
void* __result_obj__;
void* right_value105;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
    __result65__ = __result_obj__ = ((char*)(right_value105=__builtin_string("sFuncNode")));
    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value106;
struct CVALUE* come_value_77;
void* right_value107;
char* __dec_obj53;
void* right_value108;
void* right_value109;
struct sType* __dec_obj54;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&come_value_77, 0, sizeof(struct CVALUE*));
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
    come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 381, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_77->c_value;
    come_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value107=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=come_value_77->type;
    come_value_77->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value108=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 384, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_77->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
    add_come_last_code(info,"%s;\n",come_value_77->c_value);
    __result66__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result66__;
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value110;
char* __dec_obj55;
struct sCallerFuncNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
    self->sline=info->sline;
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value110=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result67__ = __result_obj__ = self;
    come_call_finalizer2(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result67__;
    come_call_finalizer2(sCallerFuncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerFuncNode_sline(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = self->sline;
    return __result68__;
}

char* sCallerFuncNode_sname(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value111;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
    __result69__ = __result_obj__ = ((char*)(right_value111=__builtin_string(self->sname)));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

_Bool sCallerFuncNode_terminated(){
void* __result_obj__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = (_Bool)0;
    return __result70__;
}

char* sCallerFuncNode_kind(){
void* __result_obj__;
void* right_value112;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
    __result71__ = __result_obj__ = ((char*)(right_value112=__builtin_string("sCallerFuncNode")));
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value113;
struct CVALUE* come_value_78;
_Bool _if_conditional169;
void* right_value114;
char* __dec_obj56;
void* right_value115;
char* __dec_obj57;
void* right_value116;
void* right_value117;
struct sType* __dec_obj58;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&come_value_78, 0, sizeof(struct CVALUE*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
    come_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value113=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 433, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(info->caller_fun) {
        __dec_obj56=come_value_78->c_value;
        come_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("\"%s\"",info->caller_fun->mName))));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj57=come_value_78->c_value;
        come_value_78->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("\"\""))));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj58=come_value_78->type;
    come_value_78->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value116=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 441, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_78->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
    add_come_last_code(info,"%s;\n",come_value_78->c_value);
    __result72__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result72__;
    come_call_finalizer2(CVALUE_finalize,come_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value118;
char* __dec_obj59;
struct sCallerLineNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
    self->sline=info->sline;
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(info->sname))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result73__ = __result_obj__ = self;
    come_call_finalizer2(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result73__;
    come_call_finalizer2(sCallerLineNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerLineNode_sline(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = self->sline;
    return __result74__;
}

char* sCallerLineNode_sname(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value119;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(right_value119=__builtin_string(self->sname)));
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
}

_Bool sCallerLineNode_terminated(){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = (_Bool)0;
    return __result76__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value120;
struct CVALUE* come_value_79;
void* right_value121;
char* __dec_obj60;
void* right_value122;
void* right_value123;
struct sType* __dec_obj61;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&come_value_79, 0, sizeof(struct CVALUE*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
    come_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 485, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj60=come_value_79->c_value;
    come_value_79->c_value=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("%d",info->caller_line))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj61=come_value_79->type;
    come_value_79->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value122=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 488, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_79->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_79));
    add_come_last_code(info,"%s;\n",come_value_79->c_value);
    __result77__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result77__;
    come_call_finalizer2(CVALUE_finalize,come_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(){
void* __result_obj__;
void* right_value124;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value124=__builtin_string("sCallerLineNode")));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value125;
char* __dec_obj62;
struct sCallerSNameNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    self->sline=info->sline;
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(info->sname))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result79__ = __result_obj__ = self;
    come_call_finalizer2(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(sCallerSNameNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCallerSNameNode_sline(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self->sline;
    return __result80__;
}

char* sCallerSNameNode_sname(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value126=__builtin_string(self->sname)));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

_Bool sCallerSNameNode_terminated(){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = (_Bool)0;
    return __result82__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value127;
struct CVALUE* come_value_80;
void* right_value128;
char* __dec_obj63;
void* right_value129;
void* right_value130;
struct sType* __dec_obj64;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&come_value_80, 0, sizeof(struct CVALUE*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 536, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj63=come_value_80->c_value;
    come_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj64=come_value_80->type;
    come_value_80->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 539, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_80->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
    add_come_last_code(info,"%s;\n",come_value_80->c_value);
    __result83__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(){
void* __result_obj__;
void* right_value131;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value131=__builtin_string("sCallerSNameNode")));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

struct sParentReturnNode* sParentReturnNode_initialize(struct sParentReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj65;
void* right_value132;
char* __dec_obj66;
void* right_value133;
char* __dec_obj67;
struct sParentReturnNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
right_value133 = (void*)0;
    __dec_obj65=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj66=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(value_source))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(info->sname))));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result85__ = __result_obj__ = self;
    come_call_finalizer2(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(sParentReturnNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sParentReturnNode_sline(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
int __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = self->sline;
    return __result86__;
}

char* sParentReturnNode_sname(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value134;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value134=__builtin_string(self->sname)));
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sParentReturnNode_terminated(){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = (_Bool)0;
    return __result88__;
}

char* sParentReturnNode_kind(){
void* __result_obj__;
void* right_value135;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value135=__builtin_string("sParentReturnNode")));
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

_Bool sParentReturnNode_compile(struct sParentReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional179;
_Bool __result90__;
struct sFun* come_fun_81;
void* right_value136;
struct sType* result_type_82;
void* right_value137;
struct sType* result_type2_83;
struct sType* result_type3_84;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool __result91__;
void* right_value138;
struct CVALUE* come_value_85;
_Bool _if_conditional183;
int right_value_id_86;
_Bool _if_conditional184;
void* right_value139;
char* __dec_obj68;
void* right_value140;
char* var_name2_87;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
_Bool _if_conditional185;
struct sFun* come_fun_88;
void* right_value145;
char* var_name2_89;
void* right_value146;
void* right_value147;
void* right_value148;
_Bool _if_conditional186;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_81, 0, sizeof(struct sFun*));
right_value136 = (void*)0;
memset(&result_type_82, 0, sizeof(struct sType*));
right_value137 = (void*)0;
memset(&result_type2_83, 0, sizeof(struct sType*));
memset(&result_type3_84, 0, sizeof(struct sType*));
right_value138 = (void*)0;
memset(&come_value_85, 0, sizeof(struct CVALUE*));
memset(&right_value_id_86, 0, sizeof(int));
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&var_name2_87, 0, sizeof(char*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&come_fun_88, 0, sizeof(struct sFun*));
right_value145 = (void*)0;
memset(&var_name2_89, 0, sizeof(char*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    if(_if_conditional179=info->current_stack_frame_struct==((void*)0),    _if_conditional179) {
        err_msg(info,"not in method block");
        __result90__ = (_Bool)0;
        return __result90__;
    }
    come_fun_81=info->come_fun;
    result_type_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(come_fun_81->mResultType))));
    come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=solve_generics(result_type_82,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_84=result_type2_83->mNoSolvedGenericsType->v1;
    if(result_type2_83->mNoSolvedGenericsType->v1) {
        result_type3_84=result_type2_83->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_84=result_type2_83;
    }
    if(self->value) {
        if(_if_conditional182=!node_compile(self->value,info),        _if_conditional182) {
            __result91__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result91__;
        }
        come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional183=come_value_85->type->mHeap&&come_value_85->var==((void*)0),        _if_conditional183) {
            right_value_id_86=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_85->c_value));
            if(_if_conditional184=right_value_id_86!=-1,            _if_conditional184) {
                remove_object_from_right_values(right_value_id_86,info);
            }
        }
        __dec_obj68=come_value_85->c_value;
        come_value_85->c_value=(char*)come_increment_ref_count(((char*)(right_value139=increment_ref_count_object(come_value_85->type,come_value_85->c_value,info))));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        free_objects_on_return(come_fun_81->mBlock,info,come_value_85->var,(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        var_name2_87=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,((char*)(right_value144=xsprintf("            \%s->__method_block_result_kind__ = 3;\n            \%s->__method_block_return_value__ = \%s;\n",((char*)(right_value141=string_to_string(var_name2_87))),((char*)(right_value142=string_to_string(var_name2_87))),((char*)(right_value143=string_to_string(come_value_85->c_value)))))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional185=string_operator_equals(result_type3_84->mClass->mName,"void")&&result_type3_84->mPointerNum==0,        _if_conditional185) {
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
        var_name2_89=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
        right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,((char*)(right_value148=xsprintf("            \%s->__method_block_result_kind__ = 4;\n            \%s->__method_block_return_value__ = 0;\n",((char*)(right_value146=string_to_string(var_name2_89))),((char*)(right_value147=string_to_string(var_name2_89)))))));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional186=string_operator_equals(result_type3_84->mClass->mName,"void")&&result_type3_84->mPointerNum==0,        _if_conditional186) {
            add_come_code(info,"return;");
        }
        else {
            add_come_code(info,"return (void*)0;");
        }
        var_name2_89 = come_decrement_ref_count2(var_name2_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    info->last_statment_is_return=(_Bool)1;
    __result92__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result92__;
    come_call_finalizer2(sType_finalize,result_type_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParentBreakNode* sParentBreakNode_initialize(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value149;
char* __dec_obj69;
struct sParentBreakNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    self->sline=info->sline;
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(info->sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result93__ = __result_obj__ = self;
    come_call_finalizer2(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result93__;
    come_call_finalizer2(sParentBreakNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParentBreakNode_sline(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = self->sline;
    return __result94__;
}

char* sParentBreakNode_sname(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value150=__builtin_string(self->sname)));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sParentBreakNode_terminated(){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    __result96__ = (_Bool)0;
    return __result96__;
}

char* sParentBreakNode_kind(){
void* __result_obj__;
void* right_value151;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
    __result97__ = __result_obj__ = ((char*)(right_value151=__builtin_string("sParentBreakNode")));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result97__;
}

_Bool sParentBreakNode_compile(struct sParentBreakNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional188;
_Bool __result98__;
struct sFun* come_fun_90;
void* right_value152;
struct sType* result_type_91;
void* right_value153;
struct sType* result_type2_92;
struct sType* result_type3_93;
_Bool _if_conditional189;
void* right_value154;
char* var_name2_94;
void* right_value155;
void* right_value156;
void* right_value157;
_Bool _if_conditional190;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_90, 0, sizeof(struct sFun*));
right_value152 = (void*)0;
memset(&result_type_91, 0, sizeof(struct sType*));
right_value153 = (void*)0;
memset(&result_type2_92, 0, sizeof(struct sType*));
memset(&result_type3_93, 0, sizeof(struct sType*));
right_value154 = (void*)0;
memset(&var_name2_94, 0, sizeof(char*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
    if(_if_conditional188=info->current_stack_frame_struct==((void*)0),    _if_conditional188) {
        err_msg(info,"not in method block");
        __result98__ = (_Bool)0;
        return __result98__;
    }
    come_fun_90=info->come_fun;
    result_type_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(come_fun_90->mResultType))));
    come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=solve_generics(result_type_91,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_93=result_type2_92->mNoSolvedGenericsType->v1;
    if(result_type2_92->mNoSolvedGenericsType->v1) {
        result_type3_93=result_type2_92->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_93=result_type2_92;
    }
    free_objects_on_return(come_fun_90->mBlock,info,((void*)0),(_Bool)0);
    free_right_value_objects(info,(_Bool)0);
    var_name2_94=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,((char*)(right_value157=xsprintf("        \%s->__method_block_result_kind__ = 1;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value155=string_to_string(var_name2_94))),((char*)(right_value156=string_to_string(var_name2_94)))))));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional190=string_operator_equals(result_type3_93->mClass->mName,"void")&&result_type3_93->mPointerNum==0,    _if_conditional190) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result99__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_94 = come_decrement_ref_count2(var_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result99__;
    come_call_finalizer2(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_94 = come_decrement_ref_count2(var_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sParentContinueNode* sParentContinueNode_initialize(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value158;
char* __dec_obj70;
struct sParentContinueNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
    self->sline=info->sline;
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(info->sname))));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result100__ = __result_obj__ = self;
    come_call_finalizer2(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result100__;
    come_call_finalizer2(sParentContinueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParentContinueNode_sline(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
int __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = self->sline;
    return __result101__;
}

char* sParentContinueNode_sname(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value159;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value159=__builtin_string(self->sname)));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

_Bool sParentContinueNode_terminated(){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    __result103__ = (_Bool)0;
    return __result103__;
}

char* sParentContinueNode_kind(){
void* __result_obj__;
void* right_value160;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    __result104__ = __result_obj__ = ((char*)(right_value160=__builtin_string("sParentContinueNode")));
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result104__;
}

_Bool sParentContinueNode_compile(struct sParentContinueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional192;
_Bool __result105__;
struct sFun* come_fun_95;
void* right_value161;
struct sType* result_type_96;
void* right_value162;
struct sType* result_type2_97;
struct sType* result_type3_98;
_Bool _if_conditional193;
void* right_value163;
char* var_name2_99;
void* right_value164;
void* right_value165;
void* right_value166;
_Bool _if_conditional194;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_95, 0, sizeof(struct sFun*));
right_value161 = (void*)0;
memset(&result_type_96, 0, sizeof(struct sType*));
right_value162 = (void*)0;
memset(&result_type2_97, 0, sizeof(struct sType*));
memset(&result_type3_98, 0, sizeof(struct sType*));
right_value163 = (void*)0;
memset(&var_name2_99, 0, sizeof(char*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    if(_if_conditional192=info->current_stack_frame_struct==((void*)0),    _if_conditional192) {
        err_msg(info,"not in method block");
        __result105__ = (_Bool)0;
        return __result105__;
    }
    come_fun_95=info->come_fun;
    result_type_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(come_fun_95->mResultType))));
    come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type2_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=solve_generics(result_type_96,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type3_98=result_type2_97->mNoSolvedGenericsType->v1;
    if(result_type2_97->mNoSolvedGenericsType->v1) {
        result_type3_98=result_type2_97->mNoSolvedGenericsType->v1;
    }
    else {
        result_type3_98=result_type2_97;
    }
    free_objects_on_return(come_fun_95->mBlock,info,((void*)0),(_Bool)0);
    free_right_value_objects(info,(_Bool)0);
    var_name2_99=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("((struct __current_stack%d__*) parent)",info->num_current_stack))));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,((char*)(right_value166=xsprintf("        \%s->__method_block_result_kind__ = 2;\n        \%s->__method_block_return_value__ = 0;\n",((char*)(right_value164=string_to_string(var_name2_99))),((char*)(right_value165=string_to_string(var_name2_99)))))));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional194=string_operator_equals(result_type3_98->mClass->mName,"void")&&result_type3_98->mPointerNum==0,    _if_conditional194) {
        add_come_code(info,"return;");
    }
    else {
        add_come_code(info,"return (void*)0;");
    }
    info->last_statment_is_return=(_Bool)1;
    __result106__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_99 = come_decrement_ref_count2(var_name2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result106__;
    come_call_finalizer2(sType_finalize,result_type_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type2_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name2_99 = come_decrement_ref_count2(var_name2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj71;
void* right_value167;
char* __dec_obj72;
struct sDerefferenceNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    __dec_obj71=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj72=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(info->sname))));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __result107__ = __result_obj__ = self;
    come_call_finalizer2(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result107__;
    come_call_finalizer2(sDerefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDerefferenceNode_sline(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    __result108__ = self->sline;
    return __result108__;
}

char* sDerefferenceNode_sname(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value168;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
    __result109__ = __result_obj__ = ((char*)(right_value168=__builtin_string(self->sname)));
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

_Bool sDerefferenceNode_terminated(){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = (_Bool)0;
    return __result110__;
}

char* sDerefferenceNode_kind(){
void* __result_obj__;
void* right_value169;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value169=__builtin_string("sDerefferenceNode")));
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_100;
_Bool _if_conditional197;
_Bool __result112__;
void* right_value170;
struct CVALUE* left_value_101;
struct sType* type_102;
char* fun_name_103;
_Bool calling_fun_104;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value171;
struct CVALUE* come_value_105;
void* right_value172;
char* __dec_obj73;
void* right_value173;
struct sType* __dec_obj74;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_100, 0, sizeof(struct sNode*));
right_value170 = (void*)0;
memset(&left_value_101, 0, sizeof(struct CVALUE*));
memset(&type_102, 0, sizeof(struct sType*));
memset(&fun_name_103, 0, sizeof(char*));
memset(&calling_fun_104, 0, sizeof(_Bool));
right_value171 = (void*)0;
memset(&come_value_105, 0, sizeof(struct CVALUE*));
right_value172 = (void*)0;
right_value173 = (void*)0;
    value_100=self->value;
    if(_if_conditional197=!node_compile(value_100,info),    _if_conditional197) {
        __result112__ = (_Bool)0;
        return __result112__;
    }
    left_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_102=(struct sType*)come_increment_ref_count(left_value_101->type);
    fun_name_103="operator_derefference";
    if(self->mQuote) {
        calling_fun_104=(_Bool)0;
    }
    else {
        calling_fun_104=operator_overload_fun_self(type_102,fun_name_103,left_value_101,info);
    }
    if(_if_conditional199=!calling_fun_104,    _if_conditional199) {
        come_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 890, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj73=come_value_105->c_value;
        come_value_105->c_value=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("*%s",left_value_101->c_value))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj74=come_value_105->type;
        come_value_105->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(left_value_101->type))));
        come_call_finalizer2(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_105->type->mPointerNum--;
        come_value_105->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_105->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_105));
        come_call_finalizer2(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result113__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result113__;
    come_call_finalizer2(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj75;
void* right_value174;
char* __dec_obj76;
struct sRefferenceNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
    __dec_obj75=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result114__ = __result_obj__ = self;
    come_call_finalizer2(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result114__;
    come_call_finalizer2(sRefferenceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sRefferenceNode_sline(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = self->sline;
    return __result115__;
}

char* sRefferenceNode_sname(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value175;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
    __result116__ = __result_obj__ = ((char*)(right_value175=__builtin_string(self->sname)));
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result116__;
}

_Bool sRefferenceNode_terminated(){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = (_Bool)0;
    return __result117__;
}

char* sRefferenceNode_kind(){
void* __result_obj__;
void* right_value176;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
    __result118__ = __result_obj__ = ((char*)(right_value176=__builtin_string("sRefferenceNode")));
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result118__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_106;
_Bool _if_conditional202;
_Bool __result119__;
void* right_value177;
struct CVALUE* left_value_107;
void* right_value178;
struct CVALUE* come_value_108;
void* right_value179;
char* __dec_obj77;
void* right_value180;
struct sType* __dec_obj78;
_Bool __result120__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_106, 0, sizeof(struct sNode*));
right_value177 = (void*)0;
memset(&left_value_107, 0, sizeof(struct CVALUE*));
right_value178 = (void*)0;
memset(&come_value_108, 0, sizeof(struct CVALUE*));
right_value179 = (void*)0;
right_value180 = (void*)0;
    value_106=self->value;
    if(_if_conditional202=!node_compile(value_106,info),    _if_conditional202) {
        __result119__ = (_Bool)0;
        return __result119__;
    }
    left_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 953, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=come_value_108->c_value;
    come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("&%s",left_value_107->c_value))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj78=come_value_108->type;
    come_value_108->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(left_value_107->type))));
    come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_108->type->mPointerNum++;
    come_value_108->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_108->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
    __result120__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result120__;
    __result121__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result121__;
    come_call_finalizer2(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj79;
void* right_value181;
char* __dec_obj80;
struct sReverseNode* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
    __dec_obj79=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj80=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(info->sname))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result122__ = __result_obj__ = self;
    come_call_finalizer2(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result122__;
    come_call_finalizer2(sReverseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sReverseNode_sline(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
    __result123__ = self->sline;
    return __result123__;
}

char* sReverseNode_sname(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value182;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
    __result124__ = __result_obj__ = ((char*)(right_value182=__builtin_string(self->sname)));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result124__;
}

_Bool sReverseNode_terminated(){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = (_Bool)0;
    return __result125__;
}

char* sReverseNode_kind(){
void* __result_obj__;
void* right_value183;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    __result126__ = __result_obj__ = ((char*)(right_value183=__builtin_string("sReverseNode")));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_109;
_Bool _if_conditional205;
_Bool __result127__;
void* right_value184;
struct CVALUE* left_value_110;
void* right_value185;
struct CVALUE* come_value_111;
void* right_value186;
char* __dec_obj81;
void* right_value187;
struct sType* __dec_obj82;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_109, 0, sizeof(struct sNode*));
right_value184 = (void*)0;
memset(&left_value_110, 0, sizeof(struct CVALUE*));
right_value185 = (void*)0;
memset(&come_value_111, 0, sizeof(struct CVALUE*));
right_value186 = (void*)0;
right_value187 = (void*)0;
    value_109=self->value;
    if(_if_conditional205=!node_compile(value_109,info),    _if_conditional205) {
        __result127__ = (_Bool)0;
        return __result127__;
    }
    left_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1016, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=come_value_111->c_value;
    come_value_111->c_value=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("!%s",left_value_110->c_value))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj82=come_value_111->type;
    come_value_111->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(left_value_110->type))));
    come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_111->type->mPointerNum--;
    come_value_111->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_111->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_111));
    __result128__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__;
struct sNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    stackframe();
    exit(3);
    __result129__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result129__;
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__;
void* right_value188;
char* __dec_obj83;
void* right_value198;
struct list$1tuple2$2charphsNodephph* __dec_obj89;
void* right_value199;
char* __dec_obj90;
struct sFunCallNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
    __dec_obj83=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(fun_name))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj89=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value198=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj90=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string(info->sname))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result136__ = __result_obj__ = self;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result136__;
    come_call_finalizer2(sFunCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional206;
struct list$1tuple2$2charphsNodephph* __result130__;
void* right_value189;
void* right_value190;
struct list$1tuple2$2charphsNodephph* result_114;
struct list_item$1tuple2$2charphsNodephph* it_115;
_Bool _while_condtional11;
void* right_value197;
struct list$1tuple2$2charphsNodephph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&result_114, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_115, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value197 = (void*)0;
        if(_if_conditional206=self==((void*)0),        _if_conditional206) {
            __result130__ = __result_obj__ = ((void*)0);
            return __result130__;
        }
        result_114=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value190=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value189=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_115=self->head;
        while(_while_condtional11=it_115!=((void*)0),        _while_condtional11) {
            list$1tuple2$2charphsNodephph_add(result_114,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value197=tuple2$2charphsNodephp_clone(it_115->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_115=it_115->next;
        }
        __result135__ = __result_obj__ = result_114;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_114, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result135__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result131__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result131__;
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
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional207=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional207) {
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional208;
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional208=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional208) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional209=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional209) {
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional210;
void* right_value191;
struct list_item$1tuple2$2charphsNodephph* litem_116;
struct tuple2$2charphsNodeph* __dec_obj84;
_Bool _if_conditional213;
void* right_value192;
struct list_item$1tuple2$2charphsNodephph* litem_117;
struct tuple2$2charphsNodeph* __dec_obj85;
void* right_value193;
struct list_item$1tuple2$2charphsNodephph* litem_118;
struct tuple2$2charphsNodeph* __dec_obj86;
struct list$1tuple2$2charphsNodephph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
memset(&litem_116, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value192 = (void*)0;
memset(&litem_117, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value193 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional210=self->len==0,                _if_conditional210) {
                    litem_116=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value191=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_116->prev=((void*)0);
                    litem_116->next=((void*)0);
                    __dec_obj84=litem_116->item;
                    litem_116->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_116;
                    self->head=litem_116;
                }
                else {
                    if(_if_conditional213=self->len==1,                    _if_conditional213) {
                        litem_117=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value192=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_117->prev=self->head;
                        litem_117->next=((void*)0);
                        __dec_obj85=litem_117->item;
                        litem_117->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_117;
                        self->head->next=litem_117;
                    }
                    else {
                        litem_118=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value193=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_118->prev=self->tail;
                        litem_118->next=((void*)0);
                        __dec_obj86=litem_118->item;
                        litem_118->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_118;
                        self->tail=litem_118;
                    }
                }
                self->len++;
                __result132__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result132__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional211;
_Bool _if_conditional212;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional211=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional211) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional212=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional212) {
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional214;
struct tuple2$2charphsNodeph* __result133__;
void* right_value194;
struct tuple2$2charphsNodeph* result_119;
_Bool _if_conditional215;
void* right_value195;
char* __dec_obj87;
_Bool _if_conditional216;
void* right_value196;
struct sNode* __dec_obj88;
struct tuple2$2charphsNodeph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
memset(&result_119, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value195 = (void*)0;
right_value196 = (void*)0;
                if(_if_conditional214=self==(void*)0,                _if_conditional214) {
                    __result133__ = __result_obj__ = (void*)0;
                    return __result133__;
                }
                result_119=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value194=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional215=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional215) {
                    __dec_obj87=result_119->v1;
                    result_119->v1=(char*)come_increment_ref_count(((char*)(right_value195=string_clone(self->v1))));
                    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional216=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional216) {
                    __dec_obj88=result_119->v2;
                    result_119->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=sNode_clone(self->v2))));
                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result134__ = __result_obj__ = result_119;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_119, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result134__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sFunCallNode_sline(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    __result137__ = self->sline;
    return __result137__;
}

char* sFunCallNode_sname(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value200;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
    __result138__ = __result_obj__ = ((char*)(right_value200=__builtin_string(self->sname)));
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

_Bool sFunCallNode_terminated(){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = (_Bool)0;
    return __result139__;
}

char* sFunCallNode_kind(){
void* __result_obj__;
void* right_value201;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    __result140__ = __result_obj__ = ((char*)(right_value201=__builtin_string("sFunCallNode")));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_120;
struct list$1tuple2$2charphsNodephph* params_121;
struct sVar* var__122;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct sType* lambda_type_123;
void* right_value202;
struct sType* result_type_124;
void* right_value203;
void* right_value204;
struct list$1CVALUEph* come_params_127;
_Bool _if_conditional222;
_Bool __result143__;
int i_128;
struct list$1tuple2$2charphsNodephph* o2_saved_129;
struct tuple2$2charphsNodeph* it_132;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_135;
struct sNode* node_136;
_Bool _if_conditional227;
_Bool __result151__;
void* right_value205;
struct CVALUE* come_value_137;
_Bool _if_conditional228;
void* right_value206;
void* right_value207;
void* right_value208;
_Bool _if_conditional229;
void* right_value209;
void* right_value210;
struct buffer* buf_138;
int j_139;
struct list$1CVALUEph* o2_saved_140;
struct CVALUE* it_143;
_Bool _if_conditional234;
void* right_value211;
struct CVALUE* come_value_146;
void* right_value212;
char* __dec_obj91;
_Bool _if_conditional235;
void* right_value213;
char* __dec_obj92;
void* right_value214;
struct sType* __dec_obj93;
_Bool _if_conditional236;
void* right_value215;
void* right_value216;
struct list$1CVALUEph* come_params_147;
struct list$1tuple2$2charphsNodephph* o2_saved_148;
struct tuple2$2charphsNodeph* it_149;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_150;
struct sNode* node_151;
_Bool _if_conditional237;
_Bool __result160__;
void* right_value217;
struct CVALUE* come_value_152;
void* right_value218;
void* right_value219;
struct buffer* buf_153;
int j_154;
struct list$1CVALUEph* o2_saved_155;
struct CVALUE* it_156;
_Bool _if_conditional238;
void* right_value220;
struct CVALUE* come_value_157;
void* right_value221;
char* __dec_obj94;
_Bool _if_conditional239;
void* right_value222;
void* right_value223;
struct sType* __dec_obj95;
_Bool _if_conditional240;
void* right_value224;
void* right_value225;
struct sType* __dec_obj96;
_Bool _if_conditional241;
void* right_value226;
void* right_value227;
struct sType* __dec_obj97;
_Bool _if_conditional242;
void* right_value228;
void* right_value229;
struct sType* __dec_obj98;
_Bool __result161__;
_Bool _if_conditional243;
void* right_value230;
char* __dec_obj99;
_Bool _if_conditional244;
void* right_value231;
char* __dec_obj100;
_Bool _if_conditional245;
char* p_158;
int version_159;
_Bool _while_condtional13;
_Bool _if_conditional246;
char* p2_160;
_Bool _while_condtional14;
int i_162;
void* right_value232;
char* new_fun_name_163;
_Bool _if_conditional247;
void* right_value233;
char* __dec_obj101;
_Bool _if_conditional248;
void* right_value234;
char* new_fun_name_164;
_Bool _if_conditional249;
void* right_value235;
char* __dec_obj102;
_Bool _if_conditional250;
_Bool __result162__;
int i_165;
void* right_value236;
char* new_fun_name_166;
_Bool _if_conditional251;
void* right_value237;
char* __dec_obj103;
struct sFun* fun_169;
_Bool _if_conditional256;
_Bool __result167__;
void* right_value238;
struct sType* result_type_170;
void* right_value239;
void* right_value240;
struct list$1sTypeph* param_types_171;
struct list$1sTypeph* o2_saved_172;
struct sType* it_175;
void* right_value241;
void* right_value242;
struct sType* it2_178;
void* right_value246;
void* right_value247;
struct sType* __dec_obj107;
void* right_value248;
void* right_value249;
struct list$1CVALUEph* come_params_182;
void* right_value250;
void* right_value256;
struct map$2charphCVALUEph* label_params_188;
int i_189;
struct list$1tuple2$2charphsNodephph* o2_saved_190;
struct tuple2$2charphsNodeph* it_191;
struct tuple2$2charphsNodeph* multiple_assign_var7;
char* label_192;
struct sNode* node_193;
_Bool _if_conditional267;
_Bool __result178__;
void* right_value257;
struct CVALUE* come_value_194;
_Bool _if_conditional268;
_Bool _if_conditional269;
int n_195;
struct list$1charph* o2_saved_196;
char* it_199;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value258;
void* right_value259;
void* right_value260;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value261;
void* right_value262;
void* right_value263;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value270;
_Bool _if_conditional327;
void* right_value271;
char* default_param_249;
char* param_name_250;
struct CVALUE* come_value_254;
_Bool _if_conditional334;
struct buffer* source_255;
char* p_256;
char* head_257;
int sline_258;
void* right_value272;
struct buffer* __dec_obj109;
void* right_value273;
struct sNode* node_259;
_Bool _if_conditional335;
_Bool __result216__;
struct buffer* __dec_obj110;
void* right_value274;
struct CVALUE* come_value_260;
void* right_value275;
void* right_value276;
void* right_value277;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool __result217__;
_Bool _if_conditional338;
char* param_name_261;
struct CVALUE* come_value_262;
_Bool _if_conditional339;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value284;
_Bool _if_conditional347;
_Bool __result224__;
void* right_value285;
void* right_value286;
struct buffer* buf_266;
int j_267;
struct list$1CVALUEph* o2_saved_268;
struct CVALUE* it_269;
_Bool _if_conditional348;
void* right_value287;
struct CVALUE* come_value_270;
void* right_value288;
char* __dec_obj114;
void* right_value289;
struct sType* __dec_obj115;
_Bool _if_conditional349;
void* right_value290;
char* __dec_obj116;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value291;
char* __dec_obj117;
_Bool __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_120, 0, sizeof(char*));
memset(&params_121, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__122, 0, sizeof(struct sVar*));
memset(&lambda_type_123, 0, sizeof(struct sType*));
right_value202 = (void*)0;
memset(&result_type_124, 0, sizeof(struct sType*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&come_params_127, 0, sizeof(struct list$1CVALUEph*));
memset(&i_128, 0, sizeof(int));
memset(&o2_saved_129, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_132, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_135, 0, sizeof(char*));
memset(&node_136, 0, sizeof(struct sNode*));
memset(&label_135, 0, sizeof(char*));
memset(&node_136, 0, sizeof(struct sNode*));
right_value205 = (void*)0;
memset(&come_value_137, 0, sizeof(struct CVALUE*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&buf_138, 0, sizeof(struct buffer*));
memset(&j_139, 0, sizeof(int));
memset(&o2_saved_140, 0, sizeof(struct list$1CVALUEph*));
memset(&it_143, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&come_params_147, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_148, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_149, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_150, 0, sizeof(char*));
memset(&node_151, 0, sizeof(struct sNode*));
memset(&label_150, 0, sizeof(char*));
memset(&node_151, 0, sizeof(struct sNode*));
right_value217 = (void*)0;
memset(&come_value_152, 0, sizeof(struct CVALUE*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&buf_153, 0, sizeof(struct buffer*));
memset(&j_154, 0, sizeof(int));
memset(&o2_saved_155, 0, sizeof(struct list$1CVALUEph*));
memset(&it_156, 0, sizeof(struct CVALUE*));
right_value220 = (void*)0;
memset(&come_value_157, 0, sizeof(struct CVALUE*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&p_158, 0, sizeof(char*));
memset(&version_159, 0, sizeof(int));
memset(&p2_160, 0, sizeof(char*));
memset(&i_162, 0, sizeof(int));
right_value232 = (void*)0;
memset(&new_fun_name_163, 0, sizeof(char*));
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&new_fun_name_164, 0, sizeof(char*));
right_value235 = (void*)0;
memset(&i_165, 0, sizeof(int));
right_value236 = (void*)0;
memset(&new_fun_name_166, 0, sizeof(char*));
right_value237 = (void*)0;
memset(&fun_169, 0, sizeof(struct sFun*));
right_value238 = (void*)0;
memset(&result_type_170, 0, sizeof(struct sType*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&param_types_171, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_172, 0, sizeof(struct list$1sTypeph*));
memset(&it_175, 0, sizeof(struct sType*));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&it2_178, 0, sizeof(struct sType*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&come_params_182, 0, sizeof(struct list$1CVALUEph*));
right_value250 = (void*)0;
right_value256 = (void*)0;
memset(&label_params_188, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_189, 0, sizeof(int));
memset(&o2_saved_190, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_191, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_192, 0, sizeof(char*));
memset(&node_193, 0, sizeof(struct sNode*));
memset(&label_192, 0, sizeof(char*));
memset(&node_193, 0, sizeof(struct sNode*));
right_value257 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
memset(&n_195, 0, sizeof(int));
memset(&o2_saved_196, 0, sizeof(struct list$1charph*));
memset(&it_199, 0, sizeof(char*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&default_param_249, 0, sizeof(char*));
memset(&param_name_250, 0, sizeof(char*));
memset(&come_value_254, 0, sizeof(struct CVALUE*));
memset(&source_255, 0, sizeof(struct buffer*));
memset(&p_256, 0, sizeof(char*));
memset(&head_257, 0, sizeof(char*));
memset(&sline_258, 0, sizeof(int));
right_value272 = (void*)0;
right_value273 = (void*)0;
memset(&node_259, 0, sizeof(struct sNode*));
right_value274 = (void*)0;
memset(&come_value_260, 0, sizeof(struct CVALUE*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&param_name_261, 0, sizeof(char*));
memset(&come_value_262, 0, sizeof(struct CVALUE*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&buf_266, 0, sizeof(struct buffer*));
memset(&j_267, 0, sizeof(int));
memset(&o2_saved_268, 0, sizeof(struct list$1CVALUEph*));
memset(&it_269, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
memset(&come_value_270, 0, sizeof(struct CVALUE*));
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
    fun_name_120=(char*)come_increment_ref_count(self->fun_name);
    params_121=self->params;
    var__122=get_variable_from_table(info->lv_table,fun_name_120);
    if(_if_conditional220=var__122==((void*)0),    _if_conditional220) {
        var__122=get_variable_from_table(info->gv_table,fun_name_120);
    }
    if(var__122) {
        lambda_type_123=var__122->mType;
        result_type_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(lambda_type_123->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_124->mStatic=(_Bool)0;
        come_params_127=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value204=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value203=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1096, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional222=list$1sTypeph_length(lambda_type_123->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_121)&&!lambda_type_123->mVarArgs,        _if_conditional222) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_120,list$1sTypeph_length(lambda_type_123->mParamTypes),list$1tuple2$2charphsNodephph_length(params_121));
            __result143__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result143__;
        }
        i_128=0;
        for(        o2_saved_129=(params_121),it_132=list$1tuple2$2charphsNodephph_begin((o2_saved_129));        !list$1tuple2$2charphsNodephph_end((o2_saved_129));        it_132=list$1tuple2$2charphsNodephph_next((o2_saved_129))        ){
            multiple_assign_var5=it_132;
            label_135=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_136=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            if(_if_conditional227=!node_compile(node_136,info),            _if_conditional227) {
                __result151__ = (_Bool)0;
                label_135 = come_decrement_ref_count2(label_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_136) { node_136 = come_decrement_ref_count2(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result151__;
            }
            come_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value205=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional228=lambda_type_123->mVarArgs&&list$1sTypephp_operator_load_element(lambda_type_123->mParamTypes,i_128)==((void*)0),            _if_conditional228) {
            }
            else {
                check_assign_type(((char*)(right_value208=xsprintf("\%s calling param #\%s",((char*)(right_value206=string_to_string(fun_name_120))),((char*)(right_value207=int_to_string(i_128)))))),list$1sTypephp_operator_load_element(lambda_type_123->mParamTypes,i_128),come_value_137->type,come_value_137,(_Bool)0,(_Bool)1,info);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional229=list$1sTypephp_operator_load_element(lambda_type_123->mParamTypes,i_128)->mHeap&&come_value_137->type->mHeap,                _if_conditional229) {
                    std_move(list$1sTypephp_operator_load_element(lambda_type_123->mParamTypes,i_128),come_value_137->type,come_value_137,info);
                }
            }
            list$1CVALUEph_push_back(come_params_127,(struct CVALUE*)come_increment_ref_count(come_value_137));
            dec_stack_ptr(1,info);
            i_128++;
            label_135 = come_decrement_ref_count2(label_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_136) { node_136 = come_decrement_ref_count2(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buf_138=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value210=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value209=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1127, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_138,var__122->mCValueName);
        buffer_append_str(buf_138,"(");
        j_139=0;
        for(        o2_saved_140=(struct list$1CVALUEph*)come_increment_ref_count((come_params_127)),it_143=list$1CVALUEph_begin((o2_saved_140));        !list$1CVALUEph_end((o2_saved_140));        it_143=list$1CVALUEph_next((o2_saved_140))        ){
            buffer_append_str(buf_138,it_143->c_value);
            if(_if_conditional234=j_139!=list$1CVALUEph_length(come_params_127)-1,            _if_conditional234) {
                buffer_append_str(buf_138,",");
            }
            j_139++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_138,")");
        come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1144, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj91=come_value_146->c_value;
        come_value_146->c_value=(char*)come_increment_ref_count(((char*)(right_value212=buffer_to_string(buf_138))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(lambda_type_123->mResultType->v1->mHeap) {
            __dec_obj92=come_value_146->c_value;
            come_value_146->c_value=(char*)come_increment_ref_count(((char*)(right_value213=append_object_to_right_values(come_value_146->c_value,(struct sType*)come_increment_ref_count(lambda_type_123->mResultType->v1),info))));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj93=come_value_146->type;
        come_value_146->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(result_type_124))));
        come_call_finalizer2(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
        if(_if_conditional236=string_operator_equals(fun_name_120,"__builtin_memmove")||string_operator_equals(fun_name_120,"__builtin_memset")||string_operator_equals(fun_name_120,"__builtin_ffs")||string_operator_equals(fun_name_120,"__builtin_ffsl")||string_operator_equals(fun_name_120,"__builtin_ffsll"),        _if_conditional236) {
            come_params_147=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value216=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value215=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1162, "list$1CVALUEph"))))))));
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1CVALUEphp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_148=(params_121),it_149=list$1tuple2$2charphsNodephph_begin((o2_saved_148));            !list$1tuple2$2charphsNodephph_end((o2_saved_148));            it_149=list$1tuple2$2charphsNodephph_next((o2_saved_148))            ){
                multiple_assign_var6=it_149;
                label_150=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_151=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional237=!node_compile(node_151,info),                _if_conditional237) {
                    __result160__ = (_Bool)0;
                    label_150 = come_decrement_ref_count2(label_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result160__;
                }
                come_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_147,(struct CVALUE*)come_increment_ref_count(come_value_152));
                label_150 = come_decrement_ref_count2(label_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            buf_153=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value219=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value218=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1176, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_153,fun_name_120);
            buffer_append_str(buf_153,"(");
            j_154=0;
            for(            o2_saved_155=(struct list$1CVALUEph*)come_increment_ref_count((come_params_147)),it_156=list$1CVALUEph_begin((o2_saved_155));            !list$1CVALUEph_end((o2_saved_155));            it_156=list$1CVALUEph_next((o2_saved_155))            ){
                buffer_append_str(buf_153,it_156->c_value);
                if(_if_conditional238=j_154!=list$1CVALUEph_length(come_params_147)-1,                _if_conditional238) {
                    buffer_append_str(buf_153,",");
                }
                j_154++;
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_153,")");
            come_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1193, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj94=come_value_157->c_value;
            come_value_157->c_value=(char*)come_increment_ref_count(((char*)(right_value221=buffer_to_string(buf_153))));
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional239=string_operator_equals(fun_name_120,"__builtin_memmove")||string_operator_equals(fun_name_120,"__builtin_memset"),            _if_conditional239) {
                __dec_obj95=come_value_157->type;
                come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value222=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1197, "sType")))),"void",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional240=string_operator_equals(fun_name_120,"__builtin_ffs"),                _if_conditional240) {
                    __dec_obj96=come_value_157->type;
                    come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value224=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1200, "sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional241=string_operator_equals(fun_name_120,"__builtin_ffsl"),                    _if_conditional241) {
                        __dec_obj97=come_value_157->type;
                        come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1203, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        if(_if_conditional242=string_operator_equals(fun_name_120,"__builtin_ffsll"),                        _if_conditional242) {
                            __dec_obj98=come_value_157->type;
                            come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value228=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1206, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
            }
            come_value_157->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_157->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_157));
            __result161__ = (_Bool)1;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result161__;
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional243=string_operator_equals(fun_name_120,"string"),            _if_conditional243) {
                __dec_obj99=fun_name_120;
                fun_name_120=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string("__builtin_string"))));
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional244=string_operator_equals(fun_name_120,"wstring"),                _if_conditional244) {
                    __dec_obj100=fun_name_120;
                    fun_name_120=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("__builtin_wstring"))));
                    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional245=string_operator_equals(fun_name_120,"inherit"),                    _if_conditional245) {
                        p_158=info->come_fun->mName;
                        version_159=0;
                        while(_while_condtional13=*p_158,                        _while_condtional13) {
                            if(_if_conditional246=*p_158==95&&*(p_158+1)==118&&xisdigit(*(p_158+2)),                            _if_conditional246) {
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
                            new_fun_name_163=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("%s_v%d",real_fun_name_161,i_162))));
                            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional247=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_163),                            _if_conditional247) {
                                __dec_obj101=fun_name_120;
                                fun_name_120=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(new_fun_name_163))));
                                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional248=i_162==0,                        _if_conditional248) {
                            new_fun_name_164=(char*)come_increment_ref_count(((char*)(right_value234=xsprintf("%s",real_fun_name_161))));
                            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional249=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_164),                            _if_conditional249) {
                                __dec_obj102=fun_name_120;
                                fun_name_120=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(new_fun_name_164))));
                                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional250=string_operator_equals(fun_name_120,info->come_fun->mName),                            _if_conditional250) {
                                err_msg(info,"invalid inherit");
                                __result162__ = (_Bool)0;
                                new_fun_name_164 = come_decrement_ref_count2(new_fun_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result162__;
                            }
                            new_fun_name_164 = come_decrement_ref_count2(new_fun_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_165=128;                        i_165>=1;                        i_165--                        ){
                            new_fun_name_166=(char*)come_increment_ref_count(((char*)(right_value236=xsprintf("%s_v%d",fun_name_120,i_165))));
                            right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional251=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_166),                            _if_conditional251) {
                                __dec_obj103=fun_name_120;
                                fun_name_120=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(new_fun_name_166))));
                                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_166 = come_decrement_ref_count2(new_fun_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_166 = come_decrement_ref_count2(new_fun_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        fun_169=map$2charphsFunph_at(info->funcs,fun_name_120,((void*)0));
        if(_if_conditional256=fun_169==((void*)0),        _if_conditional256) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_120);
            __result167__ = (_Bool)1;
            fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result167__;
        }
        result_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(fun_169->mResultType))));
        come_call_finalizer2(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_170->mStatic=(_Bool)0;
        param_types_171=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value240=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value239=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1290, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_172=(struct list$1sTypeph*)come_increment_ref_count((fun_169->mParamTypes)),it_175=list$1sTypeph_begin((o2_saved_172));        !list$1sTypeph_end((o2_saved_172));        it_175=list$1sTypeph_next((o2_saved_172))        ){
            it2_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=solve_generics(((struct sType*)(right_value241=sType_clone(it_175))),info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(param_types_171,(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(it2_178)))));
            come_call_finalizer2(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,it2_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj107=result_type_170;
        result_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=solve_generics(result_type_170,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_params_182=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value249=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value248=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05function.c", 1298, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        label_params_188=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value256=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value250=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "05function.c", 1300, "map$2charphCVALUEph"))))))));
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_189=0;
        for(        o2_saved_190=(params_121),it_191=list$1tuple2$2charphsNodephph_begin((o2_saved_190));        !list$1tuple2$2charphsNodephph_end((o2_saved_190));        it_191=list$1tuple2$2charphsNodephph_next((o2_saved_190))        ){
            multiple_assign_var7=it_191;
            label_192=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_193=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(_if_conditional267=!node_compile(node_193,info),            _if_conditional267) {
                __result178__ = (_Bool)0;
                label_192 = come_decrement_ref_count2(label_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_193) { node_193 = come_decrement_ref_count2(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result178__;
            }
            come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional268=fun_169->mVarArgs&&list$1sTypephp_operator_load_element(fun_169->mParamTypes,i_189)==((void*)0),            _if_conditional268) {
            }
            else {
                if(_if_conditional269=label_192!=((void*)0),                _if_conditional269) {
                    n_195=0;
                    for(                    o2_saved_196=(struct list$1charph*)come_increment_ref_count((fun_169->mParamNames)),it_199=list$1charph_begin((o2_saved_196));                    !list$1charph_end((o2_saved_196));                    it_199=list$1charph_next((o2_saved_196))                    ){
                        if(_if_conditional274=string_operator_equals(label_192,it_199),                        _if_conditional274) {
                            break;
                        }
                        n_195++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional275=n_195<list$1sTypeph_length(fun_169->mParamTypes),                    _if_conditional275) {
                        check_assign_type(((char*)(right_value260=xsprintf("\%s calling param(1) #\%s",((char*)(right_value258=string_to_string(fun_name_120))),((char*)(right_value259=int_to_string(n_195)))))),list$1sTypephp_operator_load_element(param_types_171,n_195),come_value_194->type,come_value_194,(_Bool)0,(_Bool)1,info);
                        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional276=n_195<list$1sTypeph_length(fun_169->mParamTypes)&&list$1sTypephp_operator_load_element(param_types_171,n_195)->mHeap&&come_value_194->type->mHeap,                    _if_conditional276) {
                        std_move(list$1sTypephp_operator_load_element(param_types_171,n_195),come_value_194->type,come_value_194,info);
                    }
                }
                else {
                    if(_if_conditional277=i_189<list$1sTypeph_length(fun_169->mParamTypes),                    _if_conditional277) {
                        check_assign_type(((char*)(right_value263=xsprintf("\%s calling param(2) #\%s",((char*)(right_value261=string_to_string(fun_name_120))),((char*)(right_value262=int_to_string(i_189)))))),list$1sTypephp_operator_load_element(param_types_171,i_189),come_value_194->type,come_value_194,(_Bool)0,(_Bool)1,info);
                        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional278=i_189<list$1sTypeph_length(fun_169->mParamTypes)&&list$1sTypephp_operator_load_element(param_types_171,i_189)->mHeap&&come_value_194->type->mHeap,                    _if_conditional278) {
                        std_move(list$1sTypephp_operator_load_element(param_types_171,i_189),come_value_194->type,come_value_194,info);
                    }
                }
            }
            if(_if_conditional279=label_192==((void*)0),            _if_conditional279) {
                list$1CVALUEph_push_back(come_params_182,(struct CVALUE*)come_increment_ref_count(come_value_194));
                i_189++;
            }
            else {
                map$2charphCVALUEph_insert(label_params_188,(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(label_192)))),(struct CVALUE*)come_increment_ref_count(come_value_194));
                right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            dec_stack_ptr(1,info);
            label_192 = come_decrement_ref_count2(label_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_193) { node_193 = come_decrement_ref_count2(node_193, ((struct sNode*)node_193)->finalize, ((struct sNode*)node_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional327=list$1tuple2$2charphsNodephph_length(params_121)<list$1sTypeph_length(fun_169->mParamTypes),        _if_conditional327) {
            for(            ;            i_189<list$1sTypeph_length(fun_169->mParamTypes);            i_189++            ){
                default_param_249=(char*)come_increment_ref_count(((char*)(right_value271=string_clone(list$1charphp_operator_load_element(fun_169->mParamDefaultParametors,i_189)))));
                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_250=list$1charphp_operator_load_element(fun_169->mParamNames,i_189);
                come_value_254=map$2charphCVALUEphp_operator_load_element(label_params_188,param_name_250);
                if(_if_conditional334=default_param_249&&string_operator_not_equals(default_param_249,""),                _if_conditional334) {
                    source_255=(struct buffer*)come_increment_ref_count(info->source);
                    p_256=info->p;
                    head_257=info->head;
                    sline_258=info->sline;
                    __dec_obj109=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value272=string_to_buffer(default_param_249))));
                    come_call_finalizer2(buffer_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value273=expression_v13(info))));
                    if(right_value273) { right_value273 = come_decrement_ref_count2(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional335=!node_compile(node_259,info),                    _if_conditional335) {
                        __result216__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_249 = come_decrement_ref_count2(default_param_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result216__;
                    }
                    __dec_obj110=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_255);
                    come_call_finalizer2(buffer_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    info->p=p_256;
                    info->head=head_257;
                    info->sline=sline_258;
                    come_value_260=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    check_assign_type(((char*)(right_value277=xsprintf("\%s calling param(3) #\%s",((char*)(right_value275=string_to_string(fun_name_120))),((char*)(right_value276=int_to_string(i_189)))))),list$1sTypephp_operator_load_element(param_types_171,i_189),come_value_260->type,come_value_260,(_Bool)0,(_Bool)1,info);
                    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional336=list$1sTypephp_operator_load_element(param_types_171,i_189)->mHeap&&come_value_260->type->mHeap,                    _if_conditional336) {
                        std_move(list$1sTypephp_operator_load_element(param_types_171,i_189),come_value_260->type,come_value_260,info);
                    }
                    list$1CVALUEph_push_back(come_params_182,(struct CVALUE*)come_increment_ref_count(come_value_260));
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional337=come_value_254==((void*)0),                    _if_conditional337) {
                        err_msg(info,"require parametor(%s)",fun_169->mName);
                        __result217__ = (_Bool)0;
                        default_param_249 = come_decrement_ref_count2(default_param_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result217__;
                    }
                    else {
                        list$1CVALUEph_push_back(come_params_182,((void*)0));
                    }
                }
                default_param_249 = come_decrement_ref_count2(default_param_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional338=map$2charphCVALUEph_length(label_params_188)>0,        _if_conditional338) {
            for(            i_189=0;            i_189<list$1charph_length(fun_169->mParamNames);            i_189++            ){
                param_name_261=list$1charphp_operator_load_element(fun_169->mParamNames,i_189);
                come_value_262=map$2charphCVALUEphp_operator_load_element(label_params_188,param_name_261);
                if(come_value_262) {
                    check_assign_type(((char*)(right_value280=xsprintf("\%s calling param(4) \%s",((char*)(right_value278=string_to_string(fun_name_120))),((char*)(right_value279=int_to_string(i_189)))))),list$1sTypephp_operator_load_element(param_types_171,i_189),come_value_262->type,come_value_262,(_Bool)0,(_Bool)1,info);
                    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_replace(come_params_182,i_189,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value284=CVALUE_clone(come_value_262)))));
                    come_call_finalizer2(CVALUE_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        if(_if_conditional347=list$1sTypeph_length(fun_169->mParamTypes)!=list$1CVALUEph_length(come_params_182)&&!fun_169->mVarArgs&&string_operator_not_equals(fun_name_120,"__builtin_va_start")&&string_operator_not_equals(fun_name_120,"__builtin_va_end"),        _if_conditional347) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_120,list$1sTypeph_length(fun_169->mParamTypes),list$1tuple2$2charphsNodephph_length(params_121));
            __result224__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,come_params_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result224__;
        }
        buf_266=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value286=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value285=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1421, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_266,fun_name_120);
        buffer_append_str(buf_266,"(");
        j_267=0;
        for(        o2_saved_268=(struct list$1CVALUEph*)come_increment_ref_count((come_params_182)),it_269=list$1CVALUEph_begin((o2_saved_268));        !list$1CVALUEph_end((o2_saved_268));        it_269=list$1CVALUEph_next((o2_saved_268))        ){
            buffer_append_str(buf_266,it_269->c_value);
            if(_if_conditional348=j_267!=list$1CVALUEph_length(come_params_182)-1,            _if_conditional348) {
                buffer_append_str(buf_266,",");
            }
            j_267++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_266,")");
        come_value_270=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value287=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1438, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj114=come_value_270->c_value;
        come_value_270->c_value=(char*)come_increment_ref_count(((char*)(right_value288=buffer_to_string(buf_266))));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj115=come_value_270->type;
        come_value_270->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(result_type_170))));
        come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_270->type->mStatic=(_Bool)0;
        come_value_270->var=((void*)0);
        if(fun_169->mResultType->mHeap) {
            __dec_obj116=come_value_270->c_value;
            come_value_270->c_value=(char*)come_increment_ref_count(((char*)(right_value290=append_object_to_right_values(come_value_270->c_value,(struct sType*)come_increment_ref_count(result_type_170),info))));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional350=string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free"),        _if_conditional350) {
            if(_if_conditional351=string_operator_not_equals(fun_name_120,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_120,"null_check")&&string_operator_not_equals(fun_name_120,"come_push_stackframe")&&string_operator_not_equals(fun_name_120,"come_pop_stackframe"),            _if_conditional351) {
                __dec_obj117=come_value_270->c_value;
                come_value_270->c_value=(char*)come_increment_ref_count(((char*)(right_value291=append_stackframe(come_value_270->c_value,come_value_270->type,info))));
                __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
    __result225__ = (_Bool)1;
    fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result225__;
    fun_name_120 = come_decrement_ref_count2(fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result141__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result141__;
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
int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
            __result142__ = self->len;
            return __result142__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional223;
struct tuple2$2charphsNodeph* result_130;
struct tuple2$2charphsNodeph* __result144__;
_Bool _if_conditional224;
struct tuple2$2charphsNodeph* __result145__;
struct tuple2$2charphsNodeph* result_131;
struct tuple2$2charphsNodeph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_130, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_131, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional223=self==((void*)0),            _if_conditional223) {
                memset(&result_130,0,sizeof(struct tuple2$2charphsNodeph*));
                __result144__ = __result_obj__ = result_130;
                return __result144__;
            }
            self->it=self->head;
            if(self->it) {
                __result145__ = __result_obj__ = self->it->item;
                return __result145__;
            }
            memset(&result_131,0,sizeof(struct tuple2$2charphsNodeph*));
            __result146__ = __result_obj__ = result_131;
            return __result146__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
            __result147__ = self==((void*)0)||self->it==((void*)0);
            return __result147__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional225;
struct tuple2$2charphsNodeph* result_133;
struct tuple2$2charphsNodeph* __result148__;
_Bool _if_conditional226;
struct tuple2$2charphsNodeph* __result149__;
struct tuple2$2charphsNodeph* result_134;
struct tuple2$2charphsNodeph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_134, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional225=self==((void*)0)||self->it==((void*)0),            _if_conditional225) {
                memset(&result_133,0,sizeof(struct tuple2$2charphsNodeph*));
                __result148__ = __result_obj__ = result_133;
                return __result148__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result149__ = __result_obj__ = self->it->item;
                return __result149__;
            }
            memset(&result_134,0,sizeof(struct tuple2$2charphsNodeph*));
            __result150__ = __result_obj__ = result_134;
            return __result150__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional230;
struct CVALUE* result_141;
struct CVALUE* __result152__;
_Bool _if_conditional231;
struct CVALUE* __result153__;
struct CVALUE* result_142;
struct CVALUE* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_141, 0, sizeof(struct CVALUE*));
memset(&result_142, 0, sizeof(struct CVALUE*));
            if(_if_conditional230=self==((void*)0),            _if_conditional230) {
                memset(&result_141,0,sizeof(struct CVALUE*));
                __result152__ = __result_obj__ = result_141;
                return __result152__;
            }
            self->it=self->head;
            if(self->it) {
                __result153__ = __result_obj__ = self->it->item;
                return __result153__;
            }
            memset(&result_142,0,sizeof(struct CVALUE*));
            __result154__ = __result_obj__ = result_142;
            return __result154__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
            __result155__ = self==((void*)0)||self->it==((void*)0);
            return __result155__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional232;
struct CVALUE* result_144;
struct CVALUE* __result156__;
_Bool _if_conditional233;
struct CVALUE* __result157__;
struct CVALUE* result_145;
struct CVALUE* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct CVALUE*));
memset(&result_145, 0, sizeof(struct CVALUE*));
            if(_if_conditional232=self==((void*)0)||self->it==((void*)0),            _if_conditional232) {
                memset(&result_144,0,sizeof(struct CVALUE*));
                __result156__ = __result_obj__ = result_144;
                return __result156__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result157__ = __result_obj__ = self->it->item;
                return __result157__;
            }
            memset(&result_145,0,sizeof(struct CVALUE*));
            __result158__ = __result_obj__ = result_145;
            return __result158__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
                __result159__ = self->len;
                return __result159__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_167;
unsigned int it_168;
_Bool _while_condtional15;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct sFun* __result163__;
_Bool _if_conditional254;
_Bool _if_conditional255;
struct sFun* __result164__;
struct sFun* __result165__;
struct sFun* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_167, 0, sizeof(unsigned int));
memset(&it_168, 0, sizeof(unsigned int));
            hash_167=string_get_hash_key(((char*)key))%self->size;
            it_168=hash_167;
            while(_while_condtional15=(_Bool)1,            _while_condtional15) {
                if(_if_conditional252=self->item_existance[it_168],                _if_conditional252) {
                    if(_if_conditional253=string_equals(self->keys[it_168],key),                    _if_conditional253) {
                        __result163__ = __result_obj__ = self->items[it_168];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result163__;
                    }
                    it_168++;
                    if(_if_conditional254=it_168>=self->size,                    _if_conditional254) {
                        it_168=0;
                    }
                    else {
                        if(_if_conditional255=it_168==hash_167,                        _if_conditional255) {
                            __result164__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result164__;
                        }
                    }
                }
                else {
                    __result165__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result165__;
                }
            }
            __result166__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result166__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional257;
struct sType* result_173;
struct sType* __result168__;
_Bool _if_conditional258;
struct sType* __result169__;
struct sType* result_174;
struct sType* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_173, 0, sizeof(struct sType*));
memset(&result_174, 0, sizeof(struct sType*));
            if(_if_conditional257=self==((void*)0),            _if_conditional257) {
                memset(&result_173,0,sizeof(struct sType*));
                __result168__ = __result_obj__ = result_173;
                return __result168__;
            }
            self->it=self->head;
            if(self->it) {
                __result169__ = __result_obj__ = self->it->item;
                return __result169__;
            }
            memset(&result_174,0,sizeof(struct sType*));
            __result170__ = __result_obj__ = result_174;
            return __result170__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
            __result171__ = self==((void*)0)||self->it==((void*)0);
            return __result171__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional259;
struct sType* result_176;
struct sType* __result172__;
_Bool _if_conditional260;
struct sType* __result173__;
struct sType* result_177;
struct sType* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(struct sType*));
memset(&result_177, 0, sizeof(struct sType*));
            if(_if_conditional259=self==((void*)0)||self->it==((void*)0),            _if_conditional259) {
                memset(&result_176,0,sizeof(struct sType*));
                __result172__ = __result_obj__ = result_176;
                return __result172__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result173__ = __result_obj__ = self->it->item;
                return __result173__;
            }
            memset(&result_177,0,sizeof(struct sType*));
            __result174__ = __result_obj__ = result_177;
            return __result174__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional261;
void* right_value243;
struct list_item$1sTypeph* litem_179;
struct sType* __dec_obj104;
_Bool _if_conditional262;
void* right_value244;
struct list_item$1sTypeph* litem_180;
struct sType* __dec_obj105;
void* right_value245;
struct list_item$1sTypeph* litem_181;
struct sType* __dec_obj106;
struct list$1sTypeph* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
memset(&litem_179, 0, sizeof(struct list_item$1sTypeph*));
right_value244 = (void*)0;
memset(&litem_180, 0, sizeof(struct list_item$1sTypeph*));
right_value245 = (void*)0;
memset(&litem_181, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional261=self->len==0,                _if_conditional261) {
                    litem_179=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value243=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_179->prev=((void*)0);
                    litem_179->next=((void*)0);
                    __dec_obj104=litem_179->item;
                    litem_179->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_179;
                    self->head=litem_179;
                }
                else {
                    if(_if_conditional262=self->len==1,                    _if_conditional262) {
                        litem_180=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value244=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_180->prev=self->head;
                        litem_180->next=((void*)0);
                        __dec_obj105=litem_180->item;
                        litem_180->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_180;
                        self->head->next=litem_180;
                    }
                    else {
                        litem_181=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value245=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_181->prev=self->tail;
                        litem_181->next=((void*)0);
                        __dec_obj106=litem_181->item;
                        litem_181->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_181;
                        self->tail=litem_181;
                    }
                }
                self->len++;
                __result175__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result175__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
void* right_value251;
void* right_value252;
void* right_value253;
int i_183;
void* right_value254;
void* right_value255;
struct list$1charp* __dec_obj108;
struct map$2charphCVALUEph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&i_183, 0, sizeof(int));
right_value254 = (void*)0;
right_value255 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value251=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
            right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value252=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1085, "CVALUE*%"))));
            come_call_finalizer2(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value253=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
            right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_183=0;            i_183<1024;            i_183++            ){
                self->item_existance[i_183]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj108=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value255=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value254=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result177__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result177__;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result176__ = __result_obj__ = self;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result176__;
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
_Bool _if_conditional263;
_Bool _if_conditional264;
int i_187;
_Bool _if_conditional265;
_Bool _if_conditional266;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_186, 0, sizeof(int));
memset(&i_187, 0, sizeof(int));
                for(                i_186=0;                i_186<self->size;                i_186++                ){
                    if(_if_conditional263=self->item_existance[i_186],                    _if_conditional263) {
                        if(_if_conditional264=1,                        _if_conditional264) {
                            come_call_finalizer2(CVALUE_finalize,self->items[i_186], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_187=0;                i_187<self->size;                i_187++                ){
                    if(_if_conditional265=self->item_existance[i_187],                    _if_conditional265) {
                        if(_if_conditional266=1,                        _if_conditional266) {
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
_Bool _if_conditional270;
char* result_197;
char* __result179__;
_Bool _if_conditional271;
char* __result180__;
char* result_198;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_197, 0, sizeof(char*));
memset(&result_198, 0, sizeof(char*));
                        if(_if_conditional270=self==((void*)0),                        _if_conditional270) {
                            memset(&result_197,0,sizeof(char*));
                            __result179__ = __result_obj__ = result_197;
                            return __result179__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result180__ = __result_obj__ = self->it->item;
                            return __result180__;
                        }
                        memset(&result_198,0,sizeof(char*));
                        __result181__ = __result_obj__ = result_198;
                        return __result181__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result182__ = self==((void*)0)||self->it==((void*)0);
                        return __result182__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional272;
char* result_200;
char* __result183__;
_Bool _if_conditional273;
char* __result184__;
char* result_201;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_200, 0, sizeof(char*));
memset(&result_201, 0, sizeof(char*));
                        if(_if_conditional272=self==((void*)0)||self->it==((void*)0),                        _if_conditional272) {
                            memset(&result_200,0,sizeof(char*));
                            __result183__ = __result_obj__ = result_200;
                            return __result183__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result184__ = __result_obj__ = self->it->item;
                            return __result184__;
                        }
                        memset(&result_201,0,sizeof(char*));
                        __result185__ = __result_obj__ = result_201;
                        return __result185__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional280;
unsigned int hash_219;
unsigned int it_220;
_Bool _while_condtional19;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool same_key_exist_237;
char* it2_240;
_Bool _if_conditional323;
_Bool _if_conditional324;
struct map$2charphCVALUEph* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_219, 0, sizeof(unsigned int));
memset(&it_220, 0, sizeof(unsigned int));
memset(&same_key_exist_237, 0, sizeof(_Bool));
memset(&it2_240, 0, sizeof(char*));
                    if(_if_conditional280=self->len*10>=self->size,                    _if_conditional280) {
                        map$2charphCVALUEph_rehash(self);
                    }
                    hash_219=string_get_hash_key(key)%self->size;
                    it_220=hash_219;
                    while(_while_condtional19=(_Bool)1,                    _while_condtional19) {
                        if(_if_conditional292=self->item_existance[it_220],                        _if_conditional292) {
                            if(_if_conditional293=string_equals(self->keys[it_220],key),                            _if_conditional293) {
                                if(_if_conditional294=1,                                _if_conditional294) {
                                    list$1charp_remove(self->key_list,self->keys[it_220]);
                                    self->keys[it_220] = come_decrement_ref_count2(self->keys[it_220], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    self->keys[it_220]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    list$1charp_remove(self->key_list,self->keys[it_220]);
                                    self->keys[it_220]=key;
                                }
                                if(_if_conditional314=1,                                _if_conditional314) {
                                    come_call_finalizer2(CVALUE_finalize,self->items[it_220], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->items[it_220]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_220]=item;
                                }
                                break;
                            }
                            it_220++;
                            if(_if_conditional315=it_220>=self->size,                            _if_conditional315) {
                                it_220=0;
                            }
                            else {
                                if(_if_conditional316=it_220==hash_219,                                _if_conditional316) {
                                    printf("unexpected error in map.insert\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            self->item_existance[it_220]=(_Bool)1;
                            if(_if_conditional317=1,                            _if_conditional317) {
                                self->keys[it_220]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                self->keys[it_220]=key;
                            }
                            if(_if_conditional318=1,                            _if_conditional318) {
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
                        if(_if_conditional323=string_equals(it2_240,key),                        _if_conditional323) {
                            puts("SAME KEY");
                            same_key_exist_237=(_Bool)1;
                        }
                    }
                    if(_if_conditional324=!same_key_exist_237,                    _if_conditional324) {
                        list$1charp_push_back(self->key_list,key);
                    }
                    __result209__ = __result_obj__ = self;
                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result209__;
                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
int size_202;
void* right_value264;
char** keys_203;
void* right_value265;
struct CVALUE** items_204;
void* right_value266;
_Bool* item_existance_205;
int len_206;
char* it_209;
struct CVALUE* default_value_212;
struct CVALUE* it2_215;
unsigned int hash_216;
int n_217;
_Bool _while_condtional18;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
struct CVALUE* default_value_218;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_202, 0, sizeof(int));
right_value264 = (void*)0;
memset(&keys_203, 0, sizeof(char**));
right_value265 = (void*)0;
memset(&items_204, 0, sizeof(struct CVALUE**));
right_value266 = (void*)0;
memset(&item_existance_205, 0, sizeof(_Bool*));
memset(&len_206, 0, sizeof(int));
memset(&it_209, 0, sizeof(char*));
memset(&default_value_212, 0, sizeof(struct CVALUE*));
memset(&it2_215, 0, sizeof(struct CVALUE*));
memset(&hash_216, 0, sizeof(unsigned int));
memset(&n_217, 0, sizeof(int));
memset(&default_value_218, 0, sizeof(struct CVALUE*));
                            size_202=self->size*10;
                            keys_203=(char**)come_increment_ref_count(((char**)(right_value264=(char**)come_calloc(1, sizeof(char*)*(1*(size_202)), "./comelang2.h", 1335, "char*%"))));
                            right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            items_204=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value265=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_202)), "./comelang2.h", 1336, "CVALUE*%"))));
                            come_call_finalizer2(CVALUE_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            item_existance_205=(_Bool*)come_increment_ref_count(((_Bool*)(right_value266=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_202)), "./comelang2.h", 1337, "bool"))));
                            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            len_206=0;
                            for(                            it_209=map$2charphCVALUEph_begin(self);                            !map$2charphCVALUEph_end(self);                            it_209=map$2charphCVALUEph_next(self)                            ){
                                memset(&default_value_212,0,sizeof(struct CVALUE*));
                                it2_215=map$2charphCVALUEph_at(self,it_209,default_value_212);
                                hash_216=string_get_hash_key(it_209)%size_202;
                                n_217=hash_216;
                                while(_while_condtional18=(_Bool)1,                                _while_condtional18) {
                                    if(_if_conditional289=item_existance_205[n_217],                                    _if_conditional289) {
                                        n_217++;
                                        if(_if_conditional290=n_217>=size_202,                                        _if_conditional290) {
                                            n_217=0;
                                        }
                                        else {
                                            if(_if_conditional291=n_217==hash_216,                                            _if_conditional291) {
                                                printf("unexpected error in map.rehash(1)\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        item_existance_205[n_217]=(_Bool)1;
                                        keys_203[n_217]=it_209;
                                        items_204[n_217]=map$2charphCVALUEph_at(self,it_209,default_value_218);
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
_Bool _if_conditional281;
char* result_207;
char* __result186__;
_Bool _if_conditional282;
char* __result187__;
char* result_208;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(char*));
memset(&result_208, 0, sizeof(char*));
                                if(_if_conditional281=self==((void*)0),                                _if_conditional281) {
                                    memset(&result_207,0,sizeof(char*));
                                    __result186__ = __result_obj__ = result_207;
                                    return __result186__;
                                }
                                self->key_list->it=self->key_list->head;
                                if(self->key_list->it) {
                                    __result187__ = __result_obj__ = self->key_list->it->item;
                                    return __result187__;
                                }
                                memset(&result_208,0,sizeof(char*));
                                __result188__ = __result_obj__ = result_208;
                                return __result188__;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result189__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                return __result189__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional283;
char* result_210;
char* __result190__;
_Bool _if_conditional284;
char* __result191__;
char* result_211;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_210, 0, sizeof(char*));
memset(&result_211, 0, sizeof(char*));
                                if(_if_conditional283=self==((void*)0)||self->key_list->it==((void*)0),                                _if_conditional283) {
                                    memset(&result_210,0,sizeof(char*));
                                    __result190__ = __result_obj__ = result_210;
                                    return __result190__;
                                }
                                self->key_list->it=self->key_list->it->next;
                                if(self->key_list->it) {
                                    __result191__ = __result_obj__ = self->key_list->it->item;
                                    return __result191__;
                                }
                                memset(&result_211,0,sizeof(char*));
                                __result192__ = __result_obj__ = result_211;
                                return __result192__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
unsigned int hash_213;
unsigned int it_214;
_Bool _while_condtional17;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct CVALUE* __result193__;
_Bool _if_conditional287;
_Bool _if_conditional288;
struct CVALUE* __result194__;
struct CVALUE* __result195__;
struct CVALUE* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_213, 0, sizeof(unsigned int));
memset(&it_214, 0, sizeof(unsigned int));
                                    hash_213=string_get_hash_key(((char*)key))%self->size;
                                    it_214=hash_213;
                                    while(_while_condtional17=(_Bool)1,                                    _while_condtional17) {
                                        if(_if_conditional285=self->item_existance[it_214],                                        _if_conditional285) {
                                            if(_if_conditional286=string_equals(self->keys[it_214],key),                                            _if_conditional286) {
                                                __result193__ = __result_obj__ = self->items[it_214];
                                                come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result193__;
                                            }
                                            it_214++;
                                            if(_if_conditional287=it_214>=self->size,                                            _if_conditional287) {
                                                it_214=0;
                                            }
                                            else {
                                                if(_if_conditional288=it_214==hash_213,                                                _if_conditional288) {
                                                    __result194__ = __result_obj__ = default_value;
                                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result194__;
                                                }
                                            }
                                        }
                                        else {
                                            __result195__ = __result_obj__ = default_value;
                                            come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result195__;
                                        }
                                    }
                                    __result196__ = __result_obj__ = default_value;
                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result196__;
                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_221;
struct list_item$1charp* it_222;
_Bool _while_condtional20;
_Bool _if_conditional295;
struct list$1charp* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_221, 0, sizeof(int));
memset(&it_222, 0, sizeof(struct list_item$1charp*));
                                        it2_221=0;
                                        it_222=self->head;
                                        while(_while_condtional20=it_222!=((void*)0),                                        _while_condtional20) {
                                            if(_if_conditional295=string_equals(it_222->item,item),                                            _if_conditional295) {
                                                list$1charp_delete(self,it2_221,it2_221+1);
                                                break;
                                            }
                                            it2_221++;
                                            it_222=it_222->next;
                                        }
                                        __result200__ = __result_obj__ = self;
                                        return __result200__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
int tmp_223;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
struct list$1charp* __result197__;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct list_item$1charp* it_226;
int i_227;
_Bool _while_condtional22;
_Bool _if_conditional304;
struct list_item$1charp* prev_it_228;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct list_item$1charp* it_229;
int i_230;
_Bool _while_condtional23;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct list_item$1charp* prev_it_231;
struct list_item$1charp* it_232;
struct list_item$1charp* head_prev_it_233;
struct list_item$1charp* tail_it_234;
int i_235;
_Bool _while_condtional24;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list_item$1charp* prev_it_236;
_Bool _if_conditional312;
_Bool _if_conditional313;
struct list$1charp* __result199__;
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
                                                    if(_if_conditional296=head<0,                                                    _if_conditional296) {
                                                        head+=self->len;
                                                    }
                                                    if(_if_conditional297=tail<0,                                                    _if_conditional297) {
                                                        tail+=self->len+1;
                                                    }
                                                    if(_if_conditional298=head>tail,                                                    _if_conditional298) {
                                                        tmp_223=tail;
                                                        tail=head;
                                                        head=tmp_223;
                                                    }
                                                    if(_if_conditional299=head<0,                                                    _if_conditional299) {
                                                        head=0;
                                                    }
                                                    if(_if_conditional300=tail>self->len,                                                    _if_conditional300) {
                                                        tail=self->len;
                                                    }
                                                    if(_if_conditional301=head==tail,                                                    _if_conditional301) {
                                                        __result197__ = __result_obj__ = self;
                                                        return __result197__;
                                                    }
                                                    if(_if_conditional302=head==0&&tail==self->len,                                                    _if_conditional302) {
                                                        list$1charp_reset(self);
                                                    }
                                                    else {
                                                        if(_if_conditional303=head==0,                                                        _if_conditional303) {
                                                            it_226=self->head;
                                                            i_227=0;
                                                            while(_while_condtional22=it_226!=((void*)0),                                                            _while_condtional22) {
                                                                if(_if_conditional304=i_227<tail,                                                                _if_conditional304) {
                                                                    prev_it_228=it_226;
                                                                    it_226=it_226->next;
                                                                    i_227++;
                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    self->len--;
                                                                }
                                                                else {
                                                                    if(_if_conditional305=i_227==tail,                                                                    _if_conditional305) {
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
                                                            if(_if_conditional306=tail==self->len,                                                            _if_conditional306) {
                                                                it_229=self->head;
                                                                i_230=0;
                                                                while(_while_condtional23=it_229!=((void*)0),                                                                _while_condtional23) {
                                                                    if(_if_conditional307=i_230==head,                                                                    _if_conditional307) {
                                                                        self->tail=it_229->prev;
                                                                        self->tail->next=((void*)0);
                                                                    }
                                                                    if(_if_conditional308=i_230>=head,                                                                    _if_conditional308) {
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
                                                                    if(_if_conditional309=i_235==head,                                                                    _if_conditional309) {
                                                                        head_prev_it_233=it_232->prev;
                                                                    }
                                                                    if(_if_conditional310=i_235==tail,                                                                    _if_conditional310) {
                                                                        tail_it_234=it_232;
                                                                    }
                                                                    if(_if_conditional311=i_235>=head&&i_235<tail,                                                                    _if_conditional311) {
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
                                                                if(_if_conditional312=head_prev_it_233!=((void*)0),                                                                _if_conditional312) {
                                                                    head_prev_it_233->next=tail_it_234;
                                                                }
                                                                if(_if_conditional313=tail_it_234!=((void*)0),                                                                _if_conditional313) {
                                                                    tail_it_234->prev=head_prev_it_233;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    __result199__ = __result_obj__ = self;
                                                    return __result199__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_224;
_Bool _while_condtional21;
struct list_item$1charp* prev_it_225;
struct list$1charp* __result198__;
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
                                                            __result198__ = __result_obj__ = self;
                                                            return __result198__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional319;
char* result_238;
char* __result201__;
_Bool _if_conditional320;
char* __result202__;
char* result_239;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_238, 0, sizeof(char*));
memset(&result_239, 0, sizeof(char*));
                        if(_if_conditional319=self==((void*)0),                        _if_conditional319) {
                            memset(&result_238,0,sizeof(char*));
                            __result201__ = __result_obj__ = result_238;
                            return __result201__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result202__ = __result_obj__ = self->it->item;
                            return __result202__;
                        }
                        memset(&result_239,0,sizeof(char*));
                        __result203__ = __result_obj__ = result_239;
                        return __result203__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result204__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result204__ = self==((void*)0)||self->it==((void*)0);
                        return __result204__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional321;
char* result_241;
char* __result205__;
_Bool _if_conditional322;
char* __result206__;
char* result_242;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_241, 0, sizeof(char*));
memset(&result_242, 0, sizeof(char*));
                        if(_if_conditional321=self==((void*)0)||self->it==((void*)0),                        _if_conditional321) {
                            memset(&result_241,0,sizeof(char*));
                            __result205__ = __result_obj__ = result_241;
                            return __result205__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result206__ = __result_obj__ = self->it->item;
                            return __result206__;
                        }
                        memset(&result_242,0,sizeof(char*));
                        __result207__ = __result_obj__ = result_242;
                        return __result207__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional325;
void* right_value267;
struct list_item$1charp* litem_243;
_Bool _if_conditional326;
void* right_value268;
struct list_item$1charp* litem_244;
void* right_value269;
struct list_item$1charp* litem_245;
struct list$1charp* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
memset(&litem_243, 0, sizeof(struct list_item$1charp*));
right_value268 = (void*)0;
memset(&litem_244, 0, sizeof(struct list_item$1charp*));
right_value269 = (void*)0;
memset(&litem_245, 0, sizeof(struct list_item$1charp*));
                            if(_if_conditional325=self->len==0,                            _if_conditional325) {
                                litem_243=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value267=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 226, "list_item$1charp"))));
                                come_call_finalizer2(list_item$1charpp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_243->prev=((void*)0);
                                litem_243->next=((void*)0);
                                litem_243->item=item;
                                self->tail=litem_243;
                                self->head=litem_243;
                            }
                            else {
                                if(_if_conditional326=self->len==1,                                _if_conditional326) {
                                    litem_244=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value268=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 236, "list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_244->prev=self->head;
                                    litem_244->next=((void*)0);
                                    litem_244->item=item;
                                    self->tail=litem_244;
                                    self->head->next=litem_244;
                                }
                                else {
                                    litem_245=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value269=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 246, "list_item$1charp"))));
                                    come_call_finalizer2(list_item$1charpp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_245->prev=self->tail;
                                    litem_245->next=((void*)0);
                                    litem_245->item=item;
                                    self->tail->next=litem_245;
                                    self->tail=litem_245;
                                }
                            }
                            self->len++;
                            __result208__ = __result_obj__ = self;
                            return __result208__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional328;
struct list_item$1charph* it_246;
int i_247;
_Bool _while_condtional25;
_Bool _if_conditional329;
char* __result210__;
char* default_value_248;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_246, 0, sizeof(struct list_item$1charph*));
memset(&i_247, 0, sizeof(int));
memset(&default_value_248, 0, sizeof(char*));
                    if(_if_conditional328=position<0,                    _if_conditional328) {
                        position+=self->len;
                    }
                    it_246=self->head;
                    i_247=0;
                    while(_while_condtional25=it_246!=((void*)0),                    _while_condtional25) {
                        if(_if_conditional329=position==i_247,                        _if_conditional329) {
                            __result210__ = __result_obj__ = it_246->item;
                            return __result210__;
                        }
                        it_246=it_246->next;
                        i_247++;
                    }
                    memset(&default_value_248,0,sizeof(char*));
                    __result211__ = __result_obj__ = default_value_248;
                    default_value_248 = come_decrement_ref_count2(default_value_248, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result211__;
                    default_value_248 = come_decrement_ref_count2(default_value_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
struct CVALUE* default_value_251;
unsigned int hash_252;
unsigned int it_253;
_Bool _while_condtional26;
_Bool _if_conditional330;
_Bool _if_conditional331;
struct CVALUE* __result212__;
_Bool _if_conditional332;
_Bool _if_conditional333;
struct CVALUE* __result213__;
struct CVALUE* __result214__;
struct CVALUE* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_251, 0, sizeof(struct CVALUE*));
memset(&hash_252, 0, sizeof(unsigned int));
memset(&it_253, 0, sizeof(unsigned int));
                    memset(&default_value_251,0,sizeof(struct CVALUE*));
                    hash_252=string_get_hash_key(((char*)key))%self->size;
                    it_253=hash_252;
                    while(_while_condtional26=(_Bool)1,                    _while_condtional26) {
                        if(_if_conditional330=self->item_existance[it_253],                        _if_conditional330) {
                            if(_if_conditional331=string_equals(self->keys[it_253],key),                            _if_conditional331) {
                                __result212__ = __result_obj__ = self->items[it_253];
                                come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result212__;
                            }
                            it_253++;
                            if(_if_conditional332=it_253>=self->size,                            _if_conditional332) {
                                it_253=0;
                            }
                            else {
                                if(_if_conditional333=it_253==hash_252,                                _if_conditional333) {
                                    __result213__ = __result_obj__ = default_value_251;
                                    come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result213__;
                                }
                            }
                        }
                        else {
                            __result214__ = __result_obj__ = default_value_251;
                            come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result214__;
                        }
                    }
                    __result215__ = __result_obj__ = default_value_251;
                    come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result215__;
                    come_call_finalizer2(CVALUE_finalize,default_value_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
int __result218__;
memset(&__result_obj__, 0, sizeof(void*));
            __result218__ = self->len;
            return __result218__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result219__;
memset(&__result_obj__, 0, sizeof(void*));
                __result219__ = self->len;
                return __result219__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional340;
_Bool _if_conditional341;
struct list$1CVALUEph* __result220__;
struct list_item$1CVALUEph* it_263;
int i_264;
_Bool _while_condtional27;
_Bool _if_conditional342;
struct CVALUE* __dec_obj111;
struct list$1CVALUEph* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_263, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_264, 0, sizeof(int));
                        if(_if_conditional340=position<0,                        _if_conditional340) {
                            position+=self->len;
                        }
                        if(_if_conditional341=position>=self->len,                        _if_conditional341) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result220__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result220__;
                        }
                        it_263=self->head;
                        i_264=0;
                        while(_while_condtional27=it_263!=((void*)0),                        _while_condtional27) {
                            if(_if_conditional342=position==i_264,                            _if_conditional342) {
                                __dec_obj111=it_263->item;
                                it_263->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_263=it_263->next;
                            i_264++;
                        }
                        __result221__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result221__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional343;
struct CVALUE* __result222__;
void* right_value281;
struct CVALUE* result_265;
_Bool _if_conditional344;
void* right_value282;
char* __dec_obj112;
_Bool _if_conditional345;
void* right_value283;
struct sType* __dec_obj113;
_Bool _if_conditional346;
struct CVALUE* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value281 = (void*)0;
memset(&result_265, 0, sizeof(struct CVALUE*));
right_value282 = (void*)0;
right_value283 = (void*)0;
                        if(_if_conditional343=self==(void*)0,                        _if_conditional343) {
                            __result222__ = __result_obj__ = (void*)0;
                            return __result222__;
                        }
                        result_265=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional344=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional344) {
                            __dec_obj112=result_265->c_value;
                            result_265->c_value=(char*)come_increment_ref_count(((char*)(right_value282=string_clone(self->c_value))));
                            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional345=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional345) {
                            __dec_obj113=result_265->type;
                            result_265->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(self->type))));
                            come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional346=self!=((void*)0),                        _if_conditional346) {
                            result_265->var=self->var;
                        }
                        __result223__ = __result_obj__ = result_265;
                        come_call_finalizer2(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result223__;
                        come_call_finalizer2(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value292;
struct sType* __dec_obj118;
void* right_value293;
struct sNode* __dec_obj119;
void* right_value294;
char* __dec_obj120;
struct sCastNode* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
    __dec_obj118=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value292=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj119=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=sNode_clone(left))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj120=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string(info->sname))));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result226__ = __result_obj__ = self;
    come_call_finalizer2(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result226__;
    come_call_finalizer2(sCastNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCastNode_sline(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
int __result227__;
memset(&__result_obj__, 0, sizeof(void*));
    __result227__ = self->sline;
    return __result227__;
}

char* sCastNode_sname(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value295;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
    __result228__ = __result_obj__ = ((char*)(right_value295=__builtin_string(self->sname)));
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
}

_Bool sCastNode_terminated(){
void* __result_obj__;
_Bool __result229__;
memset(&__result_obj__, 0, sizeof(void*));
    __result229__ = (_Bool)0;
    return __result229__;
}

char* sCastNode_kind(){
void* __result_obj__;
void* right_value296;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
    __result230__ = __result_obj__ = ((char*)(right_value296=__builtin_string("sCastNode")));
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result230__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_271;
struct sNode* left_272;
_Bool _if_conditional355;
_Bool __result231__;
void* right_value297;
struct CVALUE* left_value_273;
void* right_value298;
void* right_value299;
struct sType* type2_274;
void* right_value300;
struct CVALUE* come_value_275;
void* right_value301;
void* right_value302;
char* __dec_obj121;
void* right_value303;
struct sType* __dec_obj122;
_Bool __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_271, 0, sizeof(struct sType*));
memset(&left_272, 0, sizeof(struct sNode*));
right_value297 = (void*)0;
memset(&left_value_273, 0, sizeof(struct CVALUE*));
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&type2_274, 0, sizeof(struct sType*));
right_value300 = (void*)0;
memset(&come_value_275, 0, sizeof(struct CVALUE*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
    type_271=self->mType;
    left_272=self->mLeft;
    if(_if_conditional355=!node_compile(left_272,info),    _if_conditional355) {
        __result231__ = (_Bool)0;
        return __result231__;
    }
    left_value_273=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value297=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type2_274=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=solve_generics(((struct sType*)(right_value298=sType_clone(type_271))),info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_275=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1514, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    cast_type(type2_274,left_value_273->type,left_value_273,info);
    __dec_obj121=come_value_275->c_value;
    come_value_275->c_value=(char*)come_increment_ref_count(((char*)(right_value302=xsprintf("(%s)%s",((char*)(right_value301=make_type_name_string(type2_274,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_273->c_value))));
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj122=come_value_275->type;
    come_value_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(type2_274))));
    come_call_finalizer2(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_275->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_275->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_275));
    __result232__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result232__;
    come_call_finalizer2(CVALUE_finalize,left_value_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value304;
struct sNode* __dec_obj123;
void* right_value305;
char* __dec_obj124;
struct sParenNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
right_value305 = (void*)0;
    __dec_obj123=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj124=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string(info->sname))));
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result233__ = __result_obj__ = self;
    come_call_finalizer2(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result233__;
    come_call_finalizer2(sParenNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sParenNode_sline(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
int __result234__;
memset(&__result_obj__, 0, sizeof(void*));
    __result234__ = self->sline;
    return __result234__;
}

char* sParenNode_sname(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value306;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
    __result235__ = __result_obj__ = ((char*)(right_value306=__builtin_string(self->sname)));
    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result235__;
}

_Bool sParenNode_terminated(){
void* __result_obj__;
_Bool __result236__;
memset(&__result_obj__, 0, sizeof(void*));
    __result236__ = (_Bool)0;
    return __result236__;
}

char* sParenNode_kind(){
void* __result_obj__;
void* right_value307;
char* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
    __result237__ = __result_obj__ = ((char*)(right_value307=__builtin_string("sParenNode")));
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result237__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_276;
_Bool _if_conditional358;
_Bool __result238__;
void* right_value308;
struct CVALUE* left_value_277;
void* right_value309;
struct CVALUE* come_value_278;
void* right_value310;
char* __dec_obj125;
void* right_value311;
struct sType* __dec_obj126;
_Bool __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_276, 0, sizeof(struct sNode*));
right_value308 = (void*)0;
memset(&left_value_277, 0, sizeof(struct CVALUE*));
right_value309 = (void*)0;
memset(&come_value_278, 0, sizeof(struct CVALUE*));
right_value310 = (void*)0;
right_value311 = (void*)0;
    left_276=self->mLeft;
    if(_if_conditional358=!node_compile(left_276,info),    _if_conditional358) {
        __result238__ = (_Bool)0;
        return __result238__;
    }
    left_value_277=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value308=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_278=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value309=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1575, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj125=come_value_278->c_value;
    come_value_278->c_value=(char*)come_increment_ref_count(((char*)(right_value310=xsprintf("(%s)",left_value_277->c_value))));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj126=come_value_278->type;
    come_value_278->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(left_value_277->type))));
    come_call_finalizer2(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_278->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_278->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_278));
    __result239__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result239__;
    come_call_finalizer2(CVALUE_finalize,left_value_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value312;
void* right_value313;
struct list$1tuple2$2charphsNodephph* params_279;
_Bool _while_condtional28;
_Bool _if_conditional359;
char* p_280;
int sline_281;
_Bool err_flag_282;
void* right_value314;
char* label_283;
_Bool _if_conditional360;
void* right_value315;
char* __dec_obj127;
_Bool _if_conditional361;
char* __dec_obj128;
_Bool no_comma_284;
void* right_value316;
struct sNode* node_285;
void* right_value317;
struct sNode* __dec_obj129;
void* right_value321;
void* right_value322;
_Bool _if_conditional364;
_Bool _if_conditional365;
void* right_value323;
void* right_value324;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value329;
struct sNode* node_290;
struct sNode* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&params_279, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_280, 0, sizeof(char*));
memset(&sline_281, 0, sizeof(int));
memset(&err_flag_282, 0, sizeof(_Bool));
right_value314 = (void*)0;
memset(&label_283, 0, sizeof(char*));
right_value315 = (void*)0;
memset(&no_comma_284, 0, sizeof(_Bool));
right_value316 = (void*)0;
memset(&node_285, 0, sizeof(struct sNode*));
right_value317 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value329 = (void*)0;
memset(&node_290, 0, sizeof(struct sNode*));
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_279=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value313=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value312=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05function.c", 1594, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        if(_if_conditional359=*info->p==41,        _if_conditional359) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_280=info->p;
        sline_281=info->sline;
        err_flag_282=(_Bool)0;
        label_283=(char*)come_increment_ref_count(((char*)(right_value314=__builtin_string(""))));
        right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional360=xisalpha(*info->p)||*info->p==95,        _if_conditional360) {
            __dec_obj127=label_283;
            label_283=(char*)come_increment_ref_count(((char*)(right_value315=parse_word(info))));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            err_flag_282=(_Bool)1;
        }
        if(_if_conditional361=err_flag_282==(_Bool)1&&*info->p==58,        _if_conditional361) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj128=label_283;
            label_283=((void*)0);
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_280;
            info->sline=sline_281;
        }
        no_comma_284=info->no_comma;
        info->no_comma=(_Bool)1;
        node_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=expression_v13(info))));
        if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj129=node_285;
        node_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_285),info))));
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_284;
        list$1tuple2$2charphsNodephph_push_back(params_279,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value322=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value321=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05function.c", 1633, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_283),(struct sNode*)come_increment_ref_count(node_285))))));
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional364=*info->p==44,        _if_conditional364) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional365=*info->p==41,            _if_conditional365) {
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
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1651, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value324=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value323=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05function.c", 1651, "sFunCallNode")))),fun_name,params_279,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sFunCallNode_sline;
    _inf_value1->sname=(void*)sFunCallNode_sname;
    _inf_value1->terminated=(void*)sFunCallNode_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=_inf_value1)));
    come_call_finalizer2(sFunCallNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunCallNode_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value329) { right_value329 = come_decrement_ref_count2(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result244__ = __result_obj__ = node_290;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result244__;
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional362;
void* right_value318;
struct list_item$1tuple2$2charphsNodephph* litem_286;
struct tuple2$2charphsNodeph* __dec_obj130;
_Bool _if_conditional363;
void* right_value319;
struct list_item$1tuple2$2charphsNodephph* litem_287;
struct tuple2$2charphsNodeph* __dec_obj131;
void* right_value320;
struct list_item$1tuple2$2charphsNodephph* litem_288;
struct tuple2$2charphsNodeph* __dec_obj132;
struct list$1tuple2$2charphsNodephph* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
right_value318 = (void*)0;
memset(&litem_286, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value319 = (void*)0;
memset(&litem_287, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value320 = (void*)0;
memset(&litem_288, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            if(_if_conditional362=self->len==0,            _if_conditional362) {
                litem_286=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value318=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_286->prev=((void*)0);
                litem_286->next=((void*)0);
                __dec_obj130=litem_286->item;
                litem_286->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_286;
                self->head=litem_286;
            }
            else {
                if(_if_conditional363=self->len==1,                _if_conditional363) {
                    litem_287=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value319=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_287->prev=self->head;
                    litem_287->next=((void*)0);
                    __dec_obj131=litem_287->item;
                    litem_287->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_287;
                    self->head->next=litem_287;
                }
                else {
                    litem_288=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value320=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_288->prev=self->tail;
                    litem_288->next=((void*)0);
                    __dec_obj132=litem_288->item;
                    litem_288->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_288;
                    self->tail=litem_288;
                }
            }
            self->len++;
            __result240__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result240__;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj133;
struct sNode* __dec_obj134;
struct tuple2$2charphsNodeph* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj133=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj134=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
            __result241__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result241__;
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional366=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional366) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional367=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional367) {
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional368=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional368) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional369;
struct sFunCallNode* __result242__;
void* right_value325;
struct sFunCallNode* result_289;
_Bool _if_conditional370;
void* right_value326;
char* __dec_obj135;
_Bool _if_conditional371;
void* right_value327;
struct list$1tuple2$2charphsNodephph* __dec_obj136;
_Bool _if_conditional372;
_Bool _if_conditional373;
void* right_value328;
char* __dec_obj137;
struct sFunCallNode* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
memset(&result_289, 0, sizeof(struct sFunCallNode*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
        if(_if_conditional369=self==(void*)0,        _if_conditional369) {
            __result242__ = __result_obj__ = (void*)0;
            return __result242__;
        }
        result_289=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value325=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        come_call_finalizer2(sFunCallNode_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional370=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional370) {
            __dec_obj135=result_289->fun_name;
            result_289->fun_name=(char*)come_increment_ref_count(((char*)(right_value326=string_clone(self->fun_name))));
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional371=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional371) {
            __dec_obj136=result_289->params;
            result_289->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value327=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional372=self!=((void*)0),        _if_conditional372) {
            result_289->sline=self->sline;
        }
        if(_if_conditional373=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional373) {
            __dec_obj137=result_289->sname;
            result_289->sname=(char*)come_increment_ref_count(((char*)(right_value328=string_clone(self->sname))));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result243__ = __result_obj__ = result_289;
        come_call_finalizer2(sFunCallNode_finalize,result_289, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result243__;
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
struct sNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
    __result245__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result245__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj138;
void* right_value330;
char* __dec_obj139;
struct sLogicalDenial* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
    __dec_obj138=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj139=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(info->sname))));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result246__ = __result_obj__ = self;
    come_call_finalizer2(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result246__;
    come_call_finalizer2(sLogicalDenial_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLogicalDenial_terminated(){
void* __result_obj__;
_Bool __result247__;
memset(&__result_obj__, 0, sizeof(void*));
    __result247__ = (_Bool)0;
    return __result247__;
}

char* sLogicalDenial_kind(){
void* __result_obj__;
void* right_value331;
char* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
    __result248__ = __result_obj__ = ((char*)(right_value331=__builtin_string("sLogicalDenial")));
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result248__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional376;
_Bool __result249__;
void* right_value332;
struct CVALUE* come_value_291;
void* right_value333;
struct CVALUE* come_value2_292;
void* right_value334;
char* __dec_obj140;
void* right_value335;
struct sType* __dec_obj141;
_Bool __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value332 = (void*)0;
memset(&come_value_291, 0, sizeof(struct CVALUE*));
right_value333 = (void*)0;
memset(&come_value2_292, 0, sizeof(struct CVALUE*));
right_value334 = (void*)0;
right_value335 = (void*)0;
    if(_if_conditional376=!node_compile(self->value,info),    _if_conditional376) {
        __result249__ = (_Bool)0;
        return __result249__;
    }
    come_value_291=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_292=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value333=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1704, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj140=come_value2_292->c_value;
    come_value2_292->c_value=(char*)come_increment_ref_count(((char*)(right_value334=xsprintf("!%s",come_value_291->c_value))));
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj141=come_value2_292->type;
    come_value2_292->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(come_value_291->type))));
    come_call_finalizer2(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_292->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_292));
    add_come_last_code(info,"%s;\n",come_value2_292->c_value);
    __result250__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result250__;
    come_call_finalizer2(CVALUE_finalize,come_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLogicalDenial_sline(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
int __result251__;
memset(&__result_obj__, 0, sizeof(void*));
    __result251__ = self->sline;
    return __result251__;
}

char* sLogicalDenial_sname(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
void* right_value336;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value336 = (void*)0;
    __result252__ = __result_obj__ = ((char*)(right_value336=__builtin_string(self->sname)));
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj142;
void* right_value337;
char* __dec_obj143;
struct sMinusNode2* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
right_value337 = (void*)0;
    __dec_obj142=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj143=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value337=__builtin_string(info->sname))));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result253__ = __result_obj__ = self;
    come_call_finalizer2(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result253__;
    come_call_finalizer2(sMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusNode2_terminated(){
void* __result_obj__;
_Bool __result254__;
memset(&__result_obj__, 0, sizeof(void*));
    __result254__ = (_Bool)0;
    return __result254__;
}

char* sMinusNode2_kind(){
void* __result_obj__;
void* right_value338;
char* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value338 = (void*)0;
    __result255__ = __result_obj__ = ((char*)(right_value338=__builtin_string("sMinusNode2")));
    right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result255__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional379;
_Bool __result256__;
void* right_value339;
struct CVALUE* come_value_293;
void* right_value340;
struct CVALUE* come_value2_294;
void* right_value341;
char* __dec_obj144;
void* right_value342;
struct sType* __dec_obj145;
_Bool __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value339 = (void*)0;
memset(&come_value_293, 0, sizeof(struct CVALUE*));
right_value340 = (void*)0;
memset(&come_value2_294, 0, sizeof(struct CVALUE*));
right_value341 = (void*)0;
right_value342 = (void*)0;
    if(_if_conditional379=!node_compile(self->value,info),    _if_conditional379) {
        __result256__ = (_Bool)0;
        return __result256__;
    }
    come_value_293=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value339=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_294=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value340=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1763, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj144=come_value2_294->c_value;
    come_value2_294->c_value=(char*)come_increment_ref_count(((char*)(right_value341=xsprintf("-%s",come_value_293->c_value))));
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj145=come_value2_294->type;
    come_value2_294->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(come_value_293->type))));
    come_call_finalizer2(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_294->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_294));
    add_come_last_code(info,"%s;\n",come_value2_294->c_value);
    __result257__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result257__;
    come_call_finalizer2(CVALUE_finalize,come_value_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusNode2_sline(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result258__;
memset(&__result_obj__, 0, sizeof(void*));
    __result258__ = self->sline;
    return __result258__;
}

char* sMinusNode2_sname(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value343;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
right_value343 = (void*)0;
    __result259__ = __result_obj__ = ((char*)(right_value343=__builtin_string(self->sname)));
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result259__;
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj146;
void* right_value344;
char* __dec_obj147;
struct sPlusPlusNode2* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
    __dec_obj146=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj147=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(info->sname))));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result260__ = __result_obj__ = self;
    come_call_finalizer2(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result260__;
    come_call_finalizer2(sPlusPlusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusPlusNode2_terminated(){
void* __result_obj__;
_Bool __result261__;
memset(&__result_obj__, 0, sizeof(void*));
    __result261__ = (_Bool)0;
    return __result261__;
}

char* sPlusPlusNode2_kind(){
void* __result_obj__;
void* right_value345;
char* __result262__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
    __result262__ = __result_obj__ = ((char*)(right_value345=__builtin_string("sPlusPlusNode2")));
    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result262__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional382;
_Bool __result263__;
void* right_value346;
struct CVALUE* come_value_295;
void* right_value347;
struct CVALUE* come_value2_296;
void* right_value348;
char* __dec_obj148;
void* right_value349;
struct sType* __dec_obj149;
_Bool __result264__;
memset(&__result_obj__, 0, sizeof(void*));
right_value346 = (void*)0;
memset(&come_value_295, 0, sizeof(struct CVALUE*));
right_value347 = (void*)0;
memset(&come_value2_296, 0, sizeof(struct CVALUE*));
right_value348 = (void*)0;
right_value349 = (void*)0;
    if(_if_conditional382=!node_compile(self->value,info),    _if_conditional382) {
        __result263__ = (_Bool)0;
        return __result263__;
    }
    come_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value346=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_296=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value347=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1822, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj148=come_value2_296->c_value;
    come_value2_296->c_value=(char*)come_increment_ref_count(((char*)(right_value348=xsprintf("++%s",come_value_295->c_value))));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj149=come_value2_296->type;
    come_value2_296->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_clone(come_value_295->type))));
    come_call_finalizer2(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_296->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_296));
    add_come_last_code(info,"%s;\n",come_value2_296->c_value);
    __result264__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result264__;
    come_call_finalizer2(CVALUE_finalize,come_value_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sPlusPlusNode2_sline(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result265__;
memset(&__result_obj__, 0, sizeof(void*));
    __result265__ = self->sline;
    return __result265__;
}

char* sPlusPlusNode2_sname(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value350;
char* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
right_value350 = (void*)0;
    __result266__ = __result_obj__ = ((char*)(right_value350=__builtin_string(self->sname)));
    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result266__;
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj150;
void* right_value351;
char* __dec_obj151;
struct sMinusMinusNode2* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
    __dec_obj150=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj151=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value351=__builtin_string(info->sname))));
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result267__ = __result_obj__ = self;
    come_call_finalizer2(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result267__;
    come_call_finalizer2(sMinusMinusNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode2_terminated(){
void* __result_obj__;
_Bool __result268__;
memset(&__result_obj__, 0, sizeof(void*));
    __result268__ = (_Bool)0;
    return __result268__;
}

char* sMinusMinusNode2_kind(){
void* __result_obj__;
void* right_value352;
char* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
    __result269__ = __result_obj__ = ((char*)(right_value352=__builtin_string("sMinusMinusNode2")));
    right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result269__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional385;
_Bool __result270__;
void* right_value353;
struct CVALUE* come_value_297;
void* right_value354;
struct CVALUE* come_value2_298;
void* right_value355;
char* __dec_obj152;
void* right_value356;
struct sType* __dec_obj153;
_Bool __result271__;
memset(&__result_obj__, 0, sizeof(void*));
right_value353 = (void*)0;
memset(&come_value_297, 0, sizeof(struct CVALUE*));
right_value354 = (void*)0;
memset(&come_value2_298, 0, sizeof(struct CVALUE*));
right_value355 = (void*)0;
right_value356 = (void*)0;
    if(_if_conditional385=!node_compile(self->value,info),    _if_conditional385) {
        __result270__ = (_Bool)0;
        return __result270__;
    }
    come_value_297=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value353=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_298=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value354=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1881, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj152=come_value2_298->c_value;
    come_value2_298->c_value=(char*)come_increment_ref_count(((char*)(right_value355=xsprintf("--%s",come_value_297->c_value))));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj153=come_value2_298->type;
    come_value2_298->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value356=sType_clone(come_value_297->type))));
    come_call_finalizer2(sType_finalize,__dec_obj153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_298->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_298));
    add_come_last_code(info,"%s;\n",come_value2_298->c_value);
    __result271__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result271__;
    come_call_finalizer2(CVALUE_finalize,come_value_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusMinusNode2_sline(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
int __result272__;
memset(&__result_obj__, 0, sizeof(void*));
    __result272__ = self->sline;
    return __result272__;
}

char* sMinusMinusNode2_sname(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value357;
char* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
right_value357 = (void*)0;
    __result273__ = __result_obj__ = ((char*)(right_value357=__builtin_string(self->sname)));
    right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result273__;
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj154;
void* right_value358;
char* __dec_obj155;
struct sComplement* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
right_value358 = (void*)0;
    __dec_obj154=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
    self->sline=info->sline;
    __dec_obj155=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value358=__builtin_string(info->sname))));
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result274__ = __result_obj__ = self;
    come_call_finalizer2(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result274__;
    come_call_finalizer2(sComplement_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sComplement_terminated(){
void* __result_obj__;
_Bool __result275__;
memset(&__result_obj__, 0, sizeof(void*));
    __result275__ = (_Bool)0;
    return __result275__;
}

char* sComplement_kind(){
void* __result_obj__;
void* right_value359;
char* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
right_value359 = (void*)0;
    __result276__ = __result_obj__ = ((char*)(right_value359=__builtin_string("sComplement")));
    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result276__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional388;
_Bool __result277__;
void* right_value360;
struct CVALUE* come_value_299;
void* right_value361;
struct CVALUE* come_value2_300;
void* right_value362;
char* __dec_obj156;
void* right_value363;
struct sType* __dec_obj157;
_Bool __result278__;
memset(&__result_obj__, 0, sizeof(void*));
right_value360 = (void*)0;
memset(&come_value_299, 0, sizeof(struct CVALUE*));
right_value361 = (void*)0;
memset(&come_value2_300, 0, sizeof(struct CVALUE*));
right_value362 = (void*)0;
right_value363 = (void*)0;
    if(_if_conditional388=!node_compile(self->value,info),    _if_conditional388) {
        __result277__ = (_Bool)0;
        return __result277__;
    }
    come_value_299=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value360=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_300=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value361=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 1940, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj156=come_value2_300->c_value;
    come_value2_300->c_value=(char*)come_increment_ref_count(((char*)(right_value362=xsprintf("~%s",come_value_299->c_value))));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj157=come_value2_300->type;
    come_value2_300->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value363=sType_clone(come_value_299->type))));
    come_call_finalizer2(sType_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_300->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_300));
    add_come_last_code(info,"%s;\n",come_value2_300->c_value);
    __result278__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result278__;
    come_call_finalizer2(CVALUE_finalize,come_value_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sComplement_sline(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
int __result279__;
memset(&__result_obj__, 0, sizeof(void*));
    __result279__ = self->sline;
    return __result279__;
}

char* sComplement_sname(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
void* right_value364;
char* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
right_value364 = (void*)0;
    __result280__ = __result_obj__ = ((char*)(right_value364=__builtin_string(self->sname)));
    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result280__;
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value365;
char* __dec_obj158;
void* right_value383;
struct sBlock* __dec_obj164;
struct sNormalBlock* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
right_value365 = (void*)0;
right_value383 = (void*)0;
    self->sline=info->sline;
    __dec_obj158=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value365=__builtin_string(info->sname))));
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj164=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value383=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result300__ = __result_obj__ = self;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result300__;
    come_call_finalizer2(sNormalBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional389;
struct sBlock* __result281__;
void* right_value366;
struct sBlock* result_301;
_Bool _if_conditional390;
void* right_value367;
struct list$1sNodeph* __dec_obj159;
_Bool _if_conditional391;
void* right_value382;
struct sVarTable* __dec_obj163;
struct sBlock* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
memset(&result_301, 0, sizeof(struct sBlock*));
right_value367 = (void*)0;
right_value382 = (void*)0;
        if(_if_conditional389=self==(void*)0,        _if_conditional389) {
            __result281__ = __result_obj__ = (void*)0;
            return __result281__;
        }
        result_301=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value366=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional390=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional390) {
            __dec_obj159=result_301->mNodes;
            result_301->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value367=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional391=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional391) {
            __dec_obj163=result_301->mVarTable;
            result_301->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value382=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result299__ = __result_obj__ = result_301;
        come_call_finalizer2(sBlock_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result299__;
        come_call_finalizer2(sBlock_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional392;
struct sVarTable* __result282__;
void* right_value368;
struct sVarTable* result_302;
_Bool _if_conditional393;
void* right_value381;
struct map$2charphsVarph* __dec_obj162;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _if_conditional428;
struct sVarTable* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value368 = (void*)0;
memset(&result_302, 0, sizeof(struct sVarTable*));
right_value381 = (void*)0;
                if(_if_conditional392=self==(void*)0,                _if_conditional392) {
                    __result282__ = __result_obj__ = (void*)0;
                    return __result282__;
                }
                result_302=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value368=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional393=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional393) {
                    __dec_obj162=result_302->mVars;
                    result_302->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value381=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional426=self!=((void*)0),                _if_conditional426) {
                    result_302->mGlobal=self->mGlobal;
                }
                if(_if_conditional427=self!=((void*)0),                _if_conditional427) {
                    result_302->mParent=self->mParent;
                }
                if(_if_conditional428=self!=((void*)0),                _if_conditional428) {
                    result_302->mID=self->mID;
                }
                __result298__ = __result_obj__ = result_302;
                come_call_finalizer2(sVarTable_finalize,result_302, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result298__;
                come_call_finalizer2(sVarTable_finalize,result_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional394;
struct map$2charphsVarph* __result283__;
void* right_value369;
void* right_value375;
struct map$2charphsVarph* result_306;
void* right_value376;
void* right_value377;
struct list$1charp* __dec_obj161;
char* it_309;
struct sVar* default_value_312;
struct sVar* it2_315;
struct map$2charphsVarph* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value369 = (void*)0;
right_value375 = (void*)0;
memset(&result_306, 0, sizeof(struct map$2charphsVarph*));
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&it_309, 0, sizeof(char*));
memset(&default_value_312, 0, sizeof(struct sVar*));
memset(&it2_315, 0, sizeof(struct sVar*));
                        if(_if_conditional394=self==((void*)0),                        _if_conditional394) {
                            __result283__ = __result_obj__ = ((void*)0);
                            return __result283__;
                        }
                        result_306=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value375=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value369=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1178, "map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj161=result_306->key_list;
                        result_306->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value377=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value376=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1180, "list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_309=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_309=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_312,0,sizeof(struct sVar*));
                            it2_315=map$2charphsVarph_at(self,it_309,default_value_312);
                            map$2charphsVarph_insert2(result_306,it_309,it2_315);
                        }
                        __result297__ = __result_obj__ = result_306;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_306, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result297__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value370;
void* right_value371;
void* right_value372;
int i_303;
void* right_value373;
void* right_value374;
struct list$1charp* __dec_obj160;
struct map$2charphsVarph* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
memset(&i_303, 0, sizeof(int));
right_value373 = (void*)0;
right_value374 = (void*)0;
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value370=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1084, "char*%"))));
                            right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value371=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1085, "sVar*%"))));
                            come_call_finalizer2(sVar_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value372=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1086, "bool"))));
                            right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_303=0;                            i_303<1024;                            i_303++                            ){
                                self->item_existance[i_303]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj160=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value374=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value373=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1096, "list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result284__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result284__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional395=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional395) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional396=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional396) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional397=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional397) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional398=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional398) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_304;
_Bool _if_conditional399;
_Bool _if_conditional400;
int i_305;
_Bool _if_conditional401;
_Bool _if_conditional402;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_304, 0, sizeof(int));
memset(&i_305, 0, sizeof(int));
                                for(                                i_304=0;                                i_304<self->size;                                i_304++                                ){
                                    if(_if_conditional399=self->item_existance[i_304],                                    _if_conditional399) {
                                        if(_if_conditional400=1,                                        _if_conditional400) {
                                            come_call_finalizer2(sVar_finalize,self->items[i_304], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_305=0;                                i_305<self->size;                                i_305++                                ){
                                    if(_if_conditional401=self->item_existance[i_305],                                    _if_conditional401) {
                                        if(_if_conditional402=1,                                        _if_conditional402) {
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
_Bool _if_conditional403;
char* result_307;
char* __result285__;
_Bool _if_conditional404;
char* __result286__;
char* result_308;
char* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_307, 0, sizeof(char*));
memset(&result_308, 0, sizeof(char*));
                            if(_if_conditional403=self==((void*)0),                            _if_conditional403) {
                                memset(&result_307,0,sizeof(char*));
                                __result285__ = __result_obj__ = result_307;
                                return __result285__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result286__ = __result_obj__ = self->key_list->it->item;
                                return __result286__;
                            }
                            memset(&result_308,0,sizeof(char*));
                            __result287__ = __result_obj__ = result_308;
                            return __result287__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result288__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result288__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result288__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional405;
char* result_310;
char* __result289__;
_Bool _if_conditional406;
char* __result290__;
char* result_311;
char* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_310, 0, sizeof(char*));
memset(&result_311, 0, sizeof(char*));
                            if(_if_conditional405=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional405) {
                                memset(&result_310,0,sizeof(char*));
                                __result289__ = __result_obj__ = result_310;
                                return __result289__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result290__ = __result_obj__ = self->key_list->it->item;
                                return __result290__;
                            }
                            memset(&result_311,0,sizeof(char*));
                            __result291__ = __result_obj__ = result_311;
                            return __result291__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_313;
unsigned int it_314;
_Bool _while_condtional29;
_Bool _if_conditional407;
_Bool _if_conditional408;
struct sVar* __result292__;
_Bool _if_conditional409;
_Bool _if_conditional410;
struct sVar* __result293__;
struct sVar* __result294__;
struct sVar* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_313, 0, sizeof(unsigned int));
memset(&it_314, 0, sizeof(unsigned int));
                                hash_313=string_get_hash_key(((char*)key))%self->size;
                                it_314=hash_313;
                                while(_while_condtional29=(_Bool)1,                                _while_condtional29) {
                                    if(_if_conditional407=self->item_existance[it_314],                                    _if_conditional407) {
                                        if(_if_conditional408=string_equals(self->keys[it_314],key),                                        _if_conditional408) {
                                            __result292__ = __result_obj__ = self->items[it_314];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result292__;
                                        }
                                        it_314++;
                                        if(_if_conditional409=it_314>=self->size,                                        _if_conditional409) {
                                            it_314=0;
                                        }
                                        else {
                                            if(_if_conditional410=it_314==hash_313,                                            _if_conditional410) {
                                                __result293__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result293__;
                                            }
                                        }
                                    }
                                    else {
                                        __result294__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result294__;
                                    }
                                }
                                __result295__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result295__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional411;
unsigned int hash_327;
int it_328;
_Bool _while_condtional31;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool same_key_exist_329;
char* it2_330;
_Bool _if_conditional423;
_Bool _if_conditional424;
struct map$2charphsVarph* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_327, 0, sizeof(unsigned int));
memset(&it_328, 0, sizeof(int));
memset(&same_key_exist_329, 0, sizeof(_Bool));
memset(&it2_330, 0, sizeof(char*));
                                if(_if_conditional411=self->len*2>=self->size,                                _if_conditional411) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_327=string_get_hash_key(key)%self->size;
                                it_328=hash_327;
                                while(_while_condtional31=(_Bool)1,                                _while_condtional31) {
                                    if(_if_conditional415=self->item_existance[it_328],                                    _if_conditional415) {
                                        if(_if_conditional416=string_equals(self->keys[it_328],key),                                        _if_conditional416) {
                                            if(_if_conditional417=1,                                            _if_conditional417) {
                                                self->keys[it_328] = come_decrement_ref_count2(self->keys[it_328], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_328]);
                                                self->keys[it_328]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_328]);
                                                self->keys[it_328]=key;
                                            }
                                            if(_if_conditional418=1,                                            _if_conditional418) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_328], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_328]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_328]=item;
                                            }
                                            break;
                                        }
                                        it_328++;
                                        if(_if_conditional419=it_328>=self->size,                                        _if_conditional419) {
                                            it_328=0;
                                        }
                                        else {
                                            if(_if_conditional420=it_328==hash_327,                                            _if_conditional420) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_328]=(_Bool)1;
                                        if(_if_conditional421=1,                                        _if_conditional421) {
                                            self->keys[it_328]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_328]=key;
                                        }
                                        if(_if_conditional422=1,                                        _if_conditional422) {
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
                                    if(_if_conditional423=string_equals(it2_330,key),                                    _if_conditional423) {
                                        same_key_exist_329=(_Bool)1;
                                    }
                                }
                                if(_if_conditional424=!same_key_exist_329,                                _if_conditional424) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result296__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result296__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_316;
void* right_value378;
char** keys_317;
void* right_value379;
struct sVar** items_318;
void* right_value380;
_Bool* item_existance_319;
int len_320;
char* it_321;
struct sVar* default_value_322;
struct sVar* it2_323;
unsigned int hash_324;
int n_325;
_Bool _while_condtional30;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
struct sVar* default_value_326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_316, 0, sizeof(int));
right_value378 = (void*)0;
memset(&keys_317, 0, sizeof(char**));
right_value379 = (void*)0;
memset(&items_318, 0, sizeof(struct sVar**));
right_value380 = (void*)0;
memset(&item_existance_319, 0, sizeof(_Bool*));
memset(&len_320, 0, sizeof(int));
memset(&it_321, 0, sizeof(char*));
memset(&default_value_322, 0, sizeof(struct sVar*));
memset(&it2_323, 0, sizeof(struct sVar*));
memset(&hash_324, 0, sizeof(unsigned int));
memset(&n_325, 0, sizeof(int));
memset(&default_value_326, 0, sizeof(struct sVar*));
                                        size_316=self->size*10;
                                        keys_317=(char**)come_increment_ref_count(((char**)(right_value378=(char**)come_calloc(1, sizeof(char*)*(1*(size_316)), "./comelang2.h", 1335, "char*%"))));
                                        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_318=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value379=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_316)), "./comelang2.h", 1336, "sVar*%"))));
                                        come_call_finalizer2(sVar_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_319=(_Bool*)come_increment_ref_count(((_Bool*)(right_value380=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_316)), "./comelang2.h", 1337, "bool"))));
                                        right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_320=0;
                                        for(                                        it_321=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_321=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_322,0,sizeof(struct sVar*));
                                            it2_323=map$2charphsVarph_at(self,it_321,default_value_322);
                                            hash_324=string_get_hash_key(it_321)%size_316;
                                            n_325=hash_324;
                                            while(_while_condtional30=(_Bool)1,                                            _while_condtional30) {
                                                if(_if_conditional412=item_existance_319[n_325],                                                _if_conditional412) {
                                                    n_325++;
                                                    if(_if_conditional413=n_325>=size_316,                                                    _if_conditional413) {
                                                        n_325=0;
                                                    }
                                                    else {
                                                        if(_if_conditional414=n_325==hash_324,                                                        _if_conditional414) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_319[n_325]=(_Bool)1;
                                                    keys_317[n_325]=it_321;
                                                    items_318[n_325]=map$2charphsVarph_at(self,it_321,default_value_326);
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

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional425;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional425=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional425) {
                            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

_Bool sNormalBlock_terminated(){
void* __result_obj__;
_Bool __result301__;
memset(&__result_obj__, 0, sizeof(void*));
    __result301__ = (_Bool)1;
    return __result301__;
}

char* sNormalBlock_kind(){
void* __result_obj__;
void* right_value384;
char* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
right_value384 = (void*)0;
    __result302__ = __result_obj__ = ((char*)(right_value384=__builtin_string("sNormalBlock")));
    right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result302__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* block_331;
_Bool __result303__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_331, 0, sizeof(struct sBlock*));
    block_331=self->mBlock;
    add_come_code(info,"{\n");
    transpile_block(block_331,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result303__ = (_Bool)1;
    return __result303__;
}

int sNormalBlock_sline(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
int __result304__;
memset(&__result_obj__, 0, sizeof(void*));
    __result304__ = self->sline;
    return __result304__;
}

char* sNormalBlock_sname(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value385;
char* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
right_value385 = (void*)0;
    __result305__ = __result_obj__ = ((char*)(right_value385=__builtin_string(self->sname)));
    right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result305__;
}

struct sNode* parse_normal_block(struct sInfo* info){
void* __result_obj__;
void* right_value386;
struct sBlock* block_332;
void* right_value387;
void* right_value388;
struct sNode* _inf_value2;
struct sNormalBlock* _inf_obj_value2;
void* right_value392;
struct sNode* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
right_value386 = (void*)0;
memset(&block_332, 0, sizeof(struct sBlock*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value392 = (void*)0;
    block_332=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value386=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2021, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sNormalBlock*)(right_value388=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value387=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05function.c", 2021, "sNormalBlock")))),block_332,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNormalBlock_finalize;
    _inf_value2->clone=(void*)sNormalBlock_clone;
    _inf_value2->compile=(void*)sNormalBlock_compile;
    _inf_value2->sline=(void*)sNormalBlock_sline;
    _inf_value2->sname=(void*)sNormalBlock_sname;
    _inf_value2->terminated=(void*)sNormalBlock_terminated;
    _inf_value2->kind=(void*)sNormalBlock_kind;
    __result308__ = __result_obj__ = ((struct sNode*)(right_value392=_inf_value2));
    come_call_finalizer2(sBlock_finalize,block_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sNormalBlock_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNormalBlock_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result308__;
    come_call_finalizer2(sBlock_finalize,block_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional431;
_Bool _if_conditional432;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional431=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional431) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional432) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional433;
struct sNormalBlock* __result306__;
void* right_value389;
struct sNormalBlock* result_333;
_Bool _if_conditional434;
void* right_value390;
struct sBlock* __dec_obj165;
_Bool _if_conditional435;
_Bool _if_conditional436;
void* right_value391;
char* __dec_obj166;
struct sNormalBlock* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&result_333, 0, sizeof(struct sNormalBlock*));
right_value390 = (void*)0;
right_value391 = (void*)0;
        if(_if_conditional433=self==(void*)0,        _if_conditional433) {
            __result306__ = __result_obj__ = (void*)0;
            return __result306__;
        }
        result_333=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value389=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "sNormalBlock"))));
        come_call_finalizer2(sNormalBlock_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional434=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional434) {
            __dec_obj165=result_333->mBlock;
            result_333->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value390=sBlock_clone(self->mBlock))));
            come_call_finalizer2(sBlock_finalize,__dec_obj165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional435=self!=((void*)0),        _if_conditional435) {
            result_333->sline=self->sline;
        }
        if(_if_conditional436=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional436) {
            __dec_obj166=result_333->sname;
            result_333->sname=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(self->sname))));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result307__ = __result_obj__ = result_333;
        come_call_finalizer2(sNormalBlock_finalize,result_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result307__;
        come_call_finalizer2(sNormalBlock_finalize,result_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void backtrace_parse_type(struct sInfo* info){
void* __result_obj__;
void* right_value393;
memset(&__result_obj__, 0, sizeof(void*));
right_value393 = (void*)0;
    info->no_output_err=(_Bool)1;
    ((struct tuple3$3sTypephcharphbool*)(right_value393=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional437;
_Bool _if_conditional438;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional437=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional437) {
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional438=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional438) {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value394;
void* right_value395;
void* right_value396;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value400;
struct sNode* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value400 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2033, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(right_value396=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value394=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2033, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=sNode_clone(node)))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sLogicalDenial_finalize;
    _inf_value3->clone=(void*)sLogicalDenial_clone;
    _inf_value3->compile=(void*)sLogicalDenial_compile;
    _inf_value3->sline=(void*)sLogicalDenial_sline;
    _inf_value3->sname=(void*)sLogicalDenial_sname;
    _inf_value3->terminated=(void*)sLogicalDenial_terminated;
    _inf_value3->kind=(void*)sLogicalDenial_kind;
    __result311__ = __result_obj__ = ((struct sNode*)(right_value400=_inf_value3));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sLogicalDenial_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result311__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* expression_node_v99(struct sInfo* info){
void* __result_obj__;
_Bool refference_335;
char* p_336;
int sline_337;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _while_condtional32;
_Bool _if_conditional448;
_Bool _if_conditional449;
void* right_value401;
struct sNode* __result312__;
_Bool _if_conditional450;
void* right_value402;
struct sNode* node_338;
void* right_value403;
void* right_value404;
struct sNode* _inf_value4;
struct sLogicalDenial* _inf_obj_value4;
void* right_value408;
struct sNode* __result315__;
_Bool _if_conditional457;
void* right_value409;
struct sNode* node_340;
void* right_value410;
void* right_value411;
struct sNode* _inf_value5;
struct sMinusMinusNode2* _inf_obj_value5;
void* right_value415;
struct sNode* __result318__;
_Bool _if_conditional464;
void* right_value416;
struct sNode* node_342;
void* right_value417;
void* right_value418;
struct sNode* _inf_value6;
struct sMinusNode2* _inf_obj_value6;
void* right_value422;
struct sNode* __result321__;
_Bool _if_conditional471;
void* right_value423;
struct sNode* node_344;
void* right_value424;
void* right_value425;
struct sNode* _inf_value7;
struct sPlusPlusNode2* _inf_obj_value7;
void* right_value429;
struct sNode* __result324__;
_Bool _if_conditional478;
void* right_value430;
struct sNode* node_346;
void* right_value431;
void* right_value432;
struct sNode* _inf_value8;
struct sComplement* _inf_obj_value8;
void* right_value436;
struct sNode* __result327__;
_Bool _if_conditional485;
void* right_value437;
struct sNode* node_348;
void* right_value438;
struct sNode* __dec_obj179;
struct sNode* __result328__;
_Bool _if_conditional486;
void* right_value439;
struct sNode* node_349;
void* right_value440;
struct sNode* __dec_obj180;
struct sNode* __result329__;
_Bool _if_conditional487;
void* right_value441;
struct sNode* node_350;
void* right_value442;
struct sNode* __dec_obj181;
struct sNode* __result330__;
_Bool _if_conditional488;
void* right_value443;
struct sNode* node_351;
void* right_value444;
struct sNode* __dec_obj182;
struct sNode* __result331__;
_Bool _if_conditional489;
_Bool _if_conditional490;
void* right_value445;
void* right_value446;
void* right_value447;
struct sNode* _inf_value9;
struct sReturnNode* _inf_obj_value9;
void* right_value452;
struct sNode* __result334__;
char* head_353;
void* right_value453;
struct sNode* value_354;
char* tail_355;
void* right_value454;
struct sNode* __dec_obj186;
void* right_value455;
struct sNode* __dec_obj187;
void* right_value456;
void* right_value457;
void* right_value458;
struct sNode* _inf_value10;
struct sReturnNode* _inf_obj_value10;
void* right_value463;
struct sNode* __result337__;
_Bool _if_conditional507;
_Bool _if_conditional508;
void* right_value464;
void* right_value465;
void* right_value466;
struct sNode* _inf_value11;
struct sParentReturnNode* _inf_obj_value11;
void* right_value471;
struct sNode* __result340__;
char* head_359;
void* right_value472;
struct sNode* value_360;
char* tail_361;
void* right_value473;
struct sNode* __dec_obj194;
void* right_value474;
struct sNode* __dec_obj195;
void* right_value475;
void* right_value476;
void* right_value477;
struct sNode* _inf_value12;
struct sParentReturnNode* _inf_obj_value12;
void* right_value482;
struct sNode* __result343__;
_Bool _if_conditional525;
void* right_value483;
void* right_value484;
struct sNode* _inf_value13;
struct sParentBreakNode* _inf_obj_value13;
void* right_value487;
struct sNode* __result346__;
_Bool _if_conditional530;
void* right_value488;
void* right_value489;
struct sNode* _inf_value14;
struct sParentContinueNode* _inf_obj_value14;
void* right_value492;
struct sNode* __result349__;
_Bool _if_conditional535;
_Bool quote_366;
_Bool _if_conditional536;
_Bool no_assign_367;
void* right_value493;
struct sNode* value_368;
void* right_value494;
void* right_value495;
struct sNode* _inf_value15;
struct sDerefferenceNode* _inf_obj_value15;
void* right_value499;
struct sNode* __result352__;
_Bool _if_conditional544;
void* right_value500;
struct sNode* value_370;
void* right_value501;
void* right_value502;
struct sNode* _inf_value16;
struct sRefferenceNode* _inf_obj_value16;
void* right_value506;
struct sNode* __result355__;
_Bool _if_conditional551;
void* right_value507;
struct sNode* value_372;
void* right_value508;
void* right_value509;
struct sNode* _inf_value17;
struct sReverseNode* _inf_obj_value17;
void* right_value513;
struct sNode* __result358__;
_Bool _if_conditional558;
char* head_374;
int head_sline_375;
char* buf_376;
char* p_377;
int sline_378;
_Bool _if_conditional559;
void* right_value514;
char* __dec_obj207;
void* right_value515;
char* __dec_obj208;
_Bool is_type_name__379;
_Bool define_function_pointer_flag_380;
_Bool _if_conditional560;
_Bool _if_conditional561;
_Bool _if_conditional562;
_Bool lambda_flag_381;
_Bool _if_conditional563;
_Bool _if_conditional564;
void* right_value516;
char* word2_382;
_Bool _if_conditional565;
_Bool fun_name_with_type_name_383;
_Bool _if_conditional566;
_Bool _if_conditional567;
void* right_value517;
char* word2_384;
_Bool _while_condtional33;
_Bool _if_conditional568;
_Bool _if_conditional569;
void* right_value518;
char* __dec_obj209;
_Bool _if_conditional570;
void* right_value519;
struct sNode* __result359__;
_Bool _if_conditional571;
void* right_value520;
struct sNode* node_385;
void* right_value521;
struct sNode* __dec_obj210;
void* right_value522;
struct sNode* __dec_obj211;
struct sNode* __result360__;
_Bool _if_conditional572;
void* right_value523;
void* right_value524;
struct sNode* _inf_value18;
struct sFuncNode* _inf_obj_value18;
void* right_value529;
struct sNode* __result363__;
_Bool _if_conditional581;
void* right_value530;
void* right_value531;
struct sNode* _inf_value19;
struct sLineNode* _inf_obj_value19;
void* right_value536;
struct sNode* __result366__;
_Bool _if_conditional590;
void* right_value537;
void* right_value538;
struct sNode* _inf_value20;
struct sSNameNode* _inf_obj_value20;
void* right_value543;
struct sNode* __result369__;
_Bool _if_conditional599;
void* right_value544;
void* right_value545;
struct sNode* _inf_value21;
struct sCallerFuncNode* _inf_obj_value21;
void* right_value550;
struct sNode* __result372__;
_Bool _if_conditional608;
void* right_value551;
void* right_value552;
struct sNode* _inf_value22;
struct sCallerLineNode* _inf_obj_value22;
void* right_value557;
struct sNode* __result375__;
_Bool _if_conditional617;
void* right_value558;
void* right_value559;
struct sNode* _inf_value23;
struct sCallerSNameNode* _inf_obj_value23;
void* right_value564;
struct sNode* __result378__;
_Bool _if_conditional626;
void* right_value565;
struct sNode* node_392;
void* right_value566;
struct sNode* __dec_obj230;
struct sNode* __result379__;
_Bool _if_conditional627;
void* right_value567;
void* right_value568;
struct buffer* fun_name_393;
void* right_value569;
void* right_value570;
struct sType* type_397;
_Bool _if_conditional632;
void* right_value571;
struct sClass* klass_403;
_Bool _if_conditional643;
void* right_value572;
void* right_value573;
struct sType* __dec_obj231;
_Bool _while_condtional37;
_Bool _if_conditional644;
void* right_value574;
char* buf2_404;
void* right_value575;
void* right_value576;
struct sNode* node_405;
void* right_value577;
struct sNode* __dec_obj232;
void* right_value578;
struct sNode* __dec_obj233;
struct sNode* __result388__;
_Bool _if_conditional645;
void* right_value579;
void* right_value580;
struct buffer* fun_name_406;
void* right_value581;
char* buf2_407;
void* right_value582;
void* right_value583;
struct sNode* node_408;
void* right_value584;
struct sNode* __dec_obj234;
void* right_value585;
struct sNode* __dec_obj235;
struct sNode* __result389__;
_Bool _if_conditional646;
void* right_value586;
struct sNode* node_409;
void* right_value587;
struct sNode* __dec_obj236;
void* right_value588;
struct sNode* __dec_obj237;
struct sNode* __result390__;
void* right_value589;
struct sNode* node_410;
void* right_value590;
struct sNode* __dec_obj238;
struct sNode* __result391__;
_Bool _if_conditional647;
_Bool cast_expression_flag_411;
char* p_412;
int sline_413;
void* right_value591;
char* word_414;
_Bool _if_conditional648;
void* right_value592;
char* __dec_obj239;
_Bool _if_conditional649;
_Bool tuple_expression_flag_415;
char* p_416;
int sline_417;
_Bool no_comma_418;
_Bool no_output_err_419;
_Bool no_output_come_code_420;
void* right_value593;
struct sNode* node_421;
_Bool _if_conditional650;
_Bool _if_conditional651;
void* right_value594;
struct sNode* node_422;
void* right_value595;
struct sNode* __dec_obj240;
struct sNode* __result392__;
_Bool _if_conditional652;
void* right_value596;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_423;
char* name_424;
_Bool err_425;
_Bool _if_conditional653;
void* right_value597;
struct sNode* node_426;
void* right_value598;
struct sNode* __dec_obj241;
void* right_value599;
void* right_value600;
struct sNode* _inf_value24;
struct sCastNode* _inf_obj_value24;
void* right_value605;
struct sNode* __result395__;
void* right_value606;
struct sNode* node_428;
void* right_value607;
void* right_value608;
struct sNode* _inf_value25;
struct sParenNode* _inf_obj_value25;
void* right_value612;
struct sNode* __dec_obj247;
void* right_value613;
struct sNode* __dec_obj248;
struct sNode* __result398__;
void* right_value614;
struct sNode* node_430;
void* right_value615;
struct sNode* __dec_obj249;
struct sNode* __result399__;
struct sNode* __result400__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&refference_335, 0, sizeof(_Bool));
memset(&p_336, 0, sizeof(char*));
memset(&sline_337, 0, sizeof(int));
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&node_338, 0, sizeof(struct sNode*));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
memset(&node_340, 0, sizeof(struct sNode*));
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&node_342, 0, sizeof(struct sNode*));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&node_344, 0, sizeof(struct sNode*));
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&node_346, 0, sizeof(struct sNode*));
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
memset(&node_348, 0, sizeof(struct sNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
memset(&node_349, 0, sizeof(struct sNode*));
right_value440 = (void*)0;
right_value441 = (void*)0;
memset(&node_350, 0, sizeof(struct sNode*));
right_value442 = (void*)0;
right_value443 = (void*)0;
memset(&node_351, 0, sizeof(struct sNode*));
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value452 = (void*)0;
memset(&head_353, 0, sizeof(char*));
right_value453 = (void*)0;
memset(&value_354, 0, sizeof(struct sNode*));
memset(&tail_355, 0, sizeof(char*));
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
right_value471 = (void*)0;
memset(&head_359, 0, sizeof(char*));
right_value472 = (void*)0;
memset(&value_360, 0, sizeof(struct sNode*));
memset(&tail_361, 0, sizeof(char*));
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value477 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value489 = (void*)0;
right_value492 = (void*)0;
memset(&quote_366, 0, sizeof(_Bool));
memset(&no_assign_367, 0, sizeof(_Bool));
right_value493 = (void*)0;
memset(&value_368, 0, sizeof(struct sNode*));
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
memset(&value_370, 0, sizeof(struct sNode*));
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value506 = (void*)0;
right_value507 = (void*)0;
memset(&value_372, 0, sizeof(struct sNode*));
right_value508 = (void*)0;
right_value509 = (void*)0;
right_value513 = (void*)0;
memset(&head_374, 0, sizeof(char*));
memset(&head_sline_375, 0, sizeof(int));
memset(&buf_376, 0, sizeof(char*));
memset(&p_377, 0, sizeof(char*));
memset(&sline_378, 0, sizeof(int));
right_value514 = (void*)0;
right_value515 = (void*)0;
memset(&is_type_name__379, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_380, 0, sizeof(_Bool));
memset(&lambda_flag_381, 0, sizeof(_Bool));
right_value516 = (void*)0;
memset(&word2_382, 0, sizeof(char*));
memset(&fun_name_with_type_name_383, 0, sizeof(_Bool));
right_value517 = (void*)0;
memset(&word2_384, 0, sizeof(char*));
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
memset(&node_385, 0, sizeof(struct sNode*));
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value531 = (void*)0;
right_value536 = (void*)0;
right_value537 = (void*)0;
right_value538 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value545 = (void*)0;
right_value550 = (void*)0;
right_value551 = (void*)0;
right_value552 = (void*)0;
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value559 = (void*)0;
right_value564 = (void*)0;
right_value565 = (void*)0;
memset(&node_392, 0, sizeof(struct sNode*));
right_value566 = (void*)0;
right_value567 = (void*)0;
right_value568 = (void*)0;
memset(&fun_name_393, 0, sizeof(struct buffer*));
right_value569 = (void*)0;
right_value570 = (void*)0;
memset(&type_397, 0, sizeof(struct sType*));
right_value571 = (void*)0;
memset(&klass_403, 0, sizeof(struct sClass*));
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value574 = (void*)0;
memset(&buf2_404, 0, sizeof(char*));
right_value575 = (void*)0;
right_value576 = (void*)0;
memset(&node_405, 0, sizeof(struct sNode*));
right_value577 = (void*)0;
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
memset(&fun_name_406, 0, sizeof(struct buffer*));
right_value581 = (void*)0;
memset(&buf2_407, 0, sizeof(char*));
right_value582 = (void*)0;
right_value583 = (void*)0;
memset(&node_408, 0, sizeof(struct sNode*));
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value586 = (void*)0;
memset(&node_409, 0, sizeof(struct sNode*));
right_value587 = (void*)0;
right_value588 = (void*)0;
right_value589 = (void*)0;
memset(&node_410, 0, sizeof(struct sNode*));
right_value590 = (void*)0;
memset(&cast_expression_flag_411, 0, sizeof(_Bool));
memset(&p_412, 0, sizeof(char*));
memset(&sline_413, 0, sizeof(int));
right_value591 = (void*)0;
memset(&word_414, 0, sizeof(char*));
right_value592 = (void*)0;
memset(&tuple_expression_flag_415, 0, sizeof(_Bool));
memset(&p_416, 0, sizeof(char*));
memset(&sline_417, 0, sizeof(int));
memset(&no_comma_418, 0, sizeof(_Bool));
memset(&no_output_err_419, 0, sizeof(_Bool));
memset(&no_output_come_code_420, 0, sizeof(_Bool));
right_value593 = (void*)0;
memset(&node_421, 0, sizeof(struct sNode*));
right_value594 = (void*)0;
memset(&node_422, 0, sizeof(struct sNode*));
right_value595 = (void*)0;
right_value596 = (void*)0;
memset(&type_423, 0, sizeof(struct sType*));
memset(&name_424, 0, sizeof(char*));
memset(&err_425, 0, sizeof(_Bool));
memset(&type_423, 0, sizeof(struct sType*));
memset(&name_424, 0, sizeof(char*));
memset(&err_425, 0, sizeof(_Bool));
right_value597 = (void*)0;
memset(&node_426, 0, sizeof(struct sNode*));
right_value598 = (void*)0;
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value605 = (void*)0;
right_value606 = (void*)0;
memset(&node_428, 0, sizeof(struct sNode*));
right_value607 = (void*)0;
right_value608 = (void*)0;
right_value612 = (void*)0;
right_value613 = (void*)0;
right_value614 = (void*)0;
memset(&node_430, 0, sizeof(struct sNode*));
right_value615 = (void*)0;
    skip_spaces_and_lf(info);
    refference_335=(_Bool)0;
    {
        p_336=info->p;
        sline_337=info->sline;
        if(_if_conditional445=*info->p==38,        _if_conditional445) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional446=xisalpha(*info->p)||*info->p==95,            _if_conditional446) {
                refference_335=(_Bool)1;
            }
            else {
                if(_if_conditional447=*info->p==40,                _if_conditional447) {
                    while(_while_condtional32=*info->p==40,                    _while_condtional32) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional448=xisalpha(*info->p)||*info->p==95,                    _if_conditional448) {
                        refference_335=(_Bool)1;
                    }
                }
            }
        }
        info->p=p_336;
        info->sline=sline_337;
    }
    parse_sharp_v5(info);
    if(_if_conditional449=*info->p==123,    _if_conditional449) {
        __result312__ = __result_obj__ = ((struct sNode*)(right_value401=parse_normal_block(info)));
        if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result312__;
    }
    else {
        if(_if_conditional450=*info->p==33,        _if_conditional450) {
            info->p++;
            skip_spaces_and_lf(info);
            node_338=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=expression_node_v99(info))));
            if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2080, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sLogicalDenial*)(right_value404=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value403=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05function.c", 2080, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(node_338),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLogicalDenial_finalize;
            _inf_value4->clone=(void*)sLogicalDenial_clone;
            _inf_value4->compile=(void*)sLogicalDenial_compile;
            _inf_value4->sline=(void*)sLogicalDenial_sline;
            _inf_value4->sname=(void*)sLogicalDenial_sname;
            _inf_value4->terminated=(void*)sLogicalDenial_terminated;
            _inf_value4->kind=(void*)sLogicalDenial_kind;
            __result315__ = __result_obj__ = ((struct sNode*)(right_value408=_inf_value4));
            if(node_338) { node_338 = come_decrement_ref_count2(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sLogicalDenial_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLogicalDenial_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result315__;
            if(node_338) { node_338 = come_decrement_ref_count2(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional457=*info->p==45&&*(info->p+1)==45,            _if_conditional457) {
                info->p+=2;
                skip_spaces_and_lf(info);
                node_340=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=expression_node_v99(info))));
                if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2088, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sMinusMinusNode2*)(right_value411=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value410=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05function.c", 2088, "sMinusMinusNode2")))),(struct sNode*)come_increment_ref_count(node_340),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sMinusMinusNode2_finalize;
                _inf_value5->clone=(void*)sMinusMinusNode2_clone;
                _inf_value5->compile=(void*)sMinusMinusNode2_compile;
                _inf_value5->sline=(void*)sMinusMinusNode2_sline;
                _inf_value5->sname=(void*)sMinusMinusNode2_sname;
                _inf_value5->terminated=(void*)sMinusMinusNode2_terminated;
                _inf_value5->kind=(void*)sMinusMinusNode2_kind;
                __result318__ = __result_obj__ = ((struct sNode*)(right_value415=_inf_value5));
                if(node_340) { node_340 = come_decrement_ref_count2(node_340, ((struct sNode*)node_340)->finalize, ((struct sNode*)node_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sMinusMinusNode2_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result318__;
                if(node_340) { node_340 = come_decrement_ref_count2(node_340, ((struct sNode*)node_340)->finalize, ((struct sNode*)node_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional464=*info->p==45,                _if_conditional464) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_342=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=expression_node_v99(info))));
                    if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2096, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sMinusNode2*)(right_value418=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value417=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05function.c", 2096, "sMinusNode2")))),(struct sNode*)come_increment_ref_count(node_342),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sMinusNode2_finalize;
                    _inf_value6->clone=(void*)sMinusNode2_clone;
                    _inf_value6->compile=(void*)sMinusNode2_compile;
                    _inf_value6->sline=(void*)sMinusNode2_sline;
                    _inf_value6->sname=(void*)sMinusNode2_sname;
                    _inf_value6->terminated=(void*)sMinusNode2_terminated;
                    _inf_value6->kind=(void*)sMinusNode2_kind;
                    __result321__ = __result_obj__ = ((struct sNode*)(right_value422=_inf_value6));
                    if(node_342) { node_342 = come_decrement_ref_count2(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sMinusNode2_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sMinusNode2_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result321__;
                    if(node_342) { node_342 = come_decrement_ref_count2(node_342, ((struct sNode*)node_342)->finalize, ((struct sNode*)node_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional471=*info->p==43&&*(info->p+1)==43,                    _if_conditional471) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        node_344=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=expression_node_v99(info))));
                        if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2104, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sPlusPlusNode2*)(right_value425=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value424=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05function.c", 2104, "sPlusPlusNode2")))),(struct sNode*)come_increment_ref_count(node_344),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sPlusPlusNode2_finalize;
                        _inf_value7->clone=(void*)sPlusPlusNode2_clone;
                        _inf_value7->compile=(void*)sPlusPlusNode2_compile;
                        _inf_value7->sline=(void*)sPlusPlusNode2_sline;
                        _inf_value7->sname=(void*)sPlusPlusNode2_sname;
                        _inf_value7->terminated=(void*)sPlusPlusNode2_terminated;
                        _inf_value7->kind=(void*)sPlusPlusNode2_kind;
                        __result324__ = __result_obj__ = ((struct sNode*)(right_value429=_inf_value7));
                        if(node_344) { node_344 = come_decrement_ref_count2(node_344, ((struct sNode*)node_344)->finalize, ((struct sNode*)node_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sPlusPlusNode2_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value429) { right_value429 = come_decrement_ref_count2(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result324__;
                        if(node_344) { node_344 = come_decrement_ref_count2(node_344, ((struct sNode*)node_344)->finalize, ((struct sNode*)node_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional478=*info->p==126,                        _if_conditional478) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            node_346=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=expression_node_v99(info))));
                            if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2112, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sComplement*)(right_value432=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value431=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05function.c", 2112, "sComplement")))),(struct sNode*)come_increment_ref_count(node_346),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sComplement_finalize;
                            _inf_value8->clone=(void*)sComplement_clone;
                            _inf_value8->compile=(void*)sComplement_compile;
                            _inf_value8->sline=(void*)sComplement_sline;
                            _inf_value8->sname=(void*)sComplement_sname;
                            _inf_value8->terminated=(void*)sComplement_terminated;
                            _inf_value8->kind=(void*)sComplement_kind;
                            __result327__ = __result_obj__ = ((struct sNode*)(right_value436=_inf_value8));
                            if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sComplement_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sComplement_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result327__;
                            if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional485=*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88),                            _if_conditional485) {
                                info->p+=2;
                                node_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=get_hex_number((_Bool)0,info))));
                                if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __dec_obj179=node_348;
                                node_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_348),info))));
                                if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                __result328__ = __result_obj__ = node_348;
                                if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result328__;
                                if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional486=*info->p==48&&xisdigit(*(info->p+1)),                                _if_conditional486) {
                                    info->p++;
                                    node_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=get_oct_number(info))));
                                    if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __dec_obj180=node_349;
                                    node_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_349),info))));
                                    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    __result329__ = __result_obj__ = node_349;
                                    if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    return __result329__;
                                    if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional487=xisdigit(*info->p),                                    _if_conditional487) {
                                        node_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=get_number((_Bool)0,info))));
                                        if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __dec_obj181=node_350;
                                        node_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_350),info))));
                                        if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        __result330__ = __result_obj__ = node_350;
                                        if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        return __result330__;
                                        if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional488=*info->p==45&&xisdigit(*(info->p+1)),                                        _if_conditional488) {
                                            info->p++;
                                            node_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=get_number((_Bool)1,info))));
                                            if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __dec_obj182=node_351;
                                            node_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_351),info))));
                                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            __result331__ = __result_obj__ = node_351;
                                            if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            return __result331__;
                                            if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional489=parsecmp("return",info),                                            _if_conditional489) {
                                                info->p+=strlen("return");
                                                skip_spaces_and_lf(info);
                                                if(_if_conditional490=*info->p==59,                                                _if_conditional490) {
                                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2156, "struct sNode");
                                                    _inf_obj_value9=come_increment_ref_count(((struct sReturnNode*)(right_value447=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value445=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2156, "sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value446=__builtin_string("0")))),info))));
                                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                                    _inf_value9->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value9->clone=(void*)sReturnNode_clone;
                                                    _inf_value9->compile=(void*)sReturnNode_compile;
                                                    _inf_value9->sline=(void*)sReturnNode_sline;
                                                    _inf_value9->sname=(void*)sReturnNode_sname;
                                                    _inf_value9->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value9->kind=(void*)sReturnNode_kind;
                                                    __result334__ = __result_obj__ = ((struct sNode*)(right_value452=_inf_value9));
                                                    come_call_finalizer2(sReturnNode_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result334__;
                                                }
                                                else {
                                                    head_353=info->p;
                                                    value_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value453=expression_v13(info))));
                                                    if(right_value453) { right_value453 = come_decrement_ref_count2(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    tail_355=info->p;
                                                    __dec_obj186=value_354;
                                                    value_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_354),info))));
                                                    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    __dec_obj187=value_354;
                                                    value_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_354),info))));
                                                    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    char buf_356[tail_355-head_353+1];
                                                    memset(&buf_356, 0, sizeof(char)                                                    *(tail_355-head_353+1)                                                    );
                                                    memcpy(buf_356,head_353,tail_355-head_353);
                                                    buf_356[tail_355-head_353]=0;
                                                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2169, "struct sNode");
                                                    _inf_obj_value10=come_increment_ref_count(((struct sReturnNode*)(right_value458=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value456=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05function.c", 2169, "sReturnNode")))),(struct sNode*)come_increment_ref_count(value_354),(char*)come_increment_ref_count(((char*)(right_value457=__builtin_string(buf_356)))),info))));
                                                    _inf_value10->_protocol_obj=_inf_obj_value10;
                                                    _inf_value10->finalize=(void*)sReturnNode_finalize;
                                                    _inf_value10->clone=(void*)sReturnNode_clone;
                                                    _inf_value10->compile=(void*)sReturnNode_compile;
                                                    _inf_value10->sline=(void*)sReturnNode_sline;
                                                    _inf_value10->sname=(void*)sReturnNode_sname;
                                                    _inf_value10->terminated=(void*)sReturnNode_terminated;
                                                    _inf_value10->kind=(void*)sReturnNode_kind;
                                                    __result337__ = __result_obj__ = ((struct sNode*)(right_value463=_inf_value10));
                                                    if(value_354) { value_354 = come_decrement_ref_count2(value_354, ((struct sNode*)value_354)->finalize, ((struct sNode*)value_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sReturnNode_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    right_value457 = come_decrement_ref_count2(right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sReturnNode_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value463) { right_value463 = come_decrement_ref_count2(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result337__;
                                                    if(value_354) { value_354 = come_decrement_ref_count2(value_354, ((struct sNode*)value_354)->finalize, ((struct sNode*)value_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                if(_if_conditional507=parsecmp("return!",info),                                                _if_conditional507) {
                                                    info->p+=strlen("return!");
                                                    skip_spaces_and_lf(info);
                                                    if(_if_conditional508=*info->p==59,                                                    _if_conditional508) {
                                                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2177, "struct sNode");
                                                        _inf_obj_value11=come_increment_ref_count(((struct sParentReturnNode*)(right_value466=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value464=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2177, "sParentReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value465=__builtin_string("0")))),info))));
                                                        _inf_value11->_protocol_obj=_inf_obj_value11;
                                                        _inf_value11->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value11->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value11->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value11->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value11->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value11->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value11->kind=(void*)sParentReturnNode_kind;
                                                        __result340__ = __result_obj__ = ((struct sNode*)(right_value471=_inf_value11));
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value471) { right_value471 = come_decrement_ref_count2(right_value471, ((struct sNode*)right_value471)->finalize, ((struct sNode*)right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result340__;
                                                    }
                                                    else {
                                                        head_359=info->p;
                                                        value_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value472=expression_v13(info))));
                                                        if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        tail_361=info->p;
                                                        __dec_obj194=value_360;
                                                        value_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value473=post_position_operator_v18((struct sNode*)come_increment_ref_count(value_360),info))));
                                                        if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value473) { right_value473 = come_decrement_ref_count2(right_value473, ((struct sNode*)right_value473)->finalize, ((struct sNode*)right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        __dec_obj195=value_360;
                                                        value_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value474=post_position_operator3_v21((struct sNode*)come_increment_ref_count(value_360),info))));
                                                        if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value474) { right_value474 = come_decrement_ref_count2(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        char buf_362[tail_361-head_359+1];
                                                        memset(&buf_362, 0, sizeof(char)                                                        *(tail_361-head_359+1)                                                        );
                                                        memcpy(buf_362,head_359,tail_361-head_359);
                                                        buf_362[tail_361-head_359]=0;
                                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2190, "struct sNode");
                                                        _inf_obj_value12=come_increment_ref_count(((struct sParentReturnNode*)(right_value477=sParentReturnNode_initialize((struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value475=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "05function.c", 2190, "sParentReturnNode")))),(struct sNode*)come_increment_ref_count(value_360),(char*)come_increment_ref_count(((char*)(right_value476=__builtin_string(buf_362)))),info))));
                                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                                        _inf_value12->finalize=(void*)sParentReturnNode_finalize;
                                                        _inf_value12->clone=(void*)sParentReturnNode_clone;
                                                        _inf_value12->compile=(void*)sParentReturnNode_compile;
                                                        _inf_value12->sline=(void*)sParentReturnNode_sline;
                                                        _inf_value12->sname=(void*)sParentReturnNode_sname;
                                                        _inf_value12->terminated=(void*)sParentReturnNode_terminated;
                                                        _inf_value12->kind=(void*)sParentReturnNode_kind;
                                                        __result343__ = __result_obj__ = ((struct sNode*)(right_value482=_inf_value12));
                                                        if(value_360) { value_360 = come_decrement_ref_count2(value_360, ((struct sNode*)value_360)->finalize, ((struct sNode*)value_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        right_value476 = come_decrement_ref_count2(right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentReturnNode_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value482) { right_value482 = come_decrement_ref_count2(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result343__;
                                                        if(value_360) { value_360 = come_decrement_ref_count2(value_360, ((struct sNode*)value_360)->finalize, ((struct sNode*)value_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional525=parsecmp("break!",info),                                                    _if_conditional525) {
                                                        info->p+=strlen("break!");
                                                        skip_spaces_and_lf(info);
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2197, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sParentBreakNode*)(right_value484=sParentBreakNode_initialize((struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value483=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "05function.c", 2197, "sParentBreakNode")))),info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sParentBreakNode_finalize;
                                                        _inf_value13->clone=(void*)sParentBreakNode_clone;
                                                        _inf_value13->compile=(void*)sParentBreakNode_compile;
                                                        _inf_value13->sline=(void*)sParentBreakNode_sline;
                                                        _inf_value13->sname=(void*)sParentBreakNode_sname;
                                                        _inf_value13->terminated=(void*)sParentBreakNode_terminated;
                                                        _inf_value13->kind=(void*)sParentBreakNode_kind;
                                                        __result346__ = __result_obj__ = ((struct sNode*)(right_value487=_inf_value13));
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sParentBreakNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value487) { right_value487 = come_decrement_ref_count2(right_value487, ((struct sNode*)right_value487)->finalize, ((struct sNode*)right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result346__;
                                                    }
                                                    else {
                                                        if(_if_conditional530=parsecmp("continue!",info),                                                        _if_conditional530) {
                                                            info->p+=strlen("continue!");
                                                            skip_spaces_and_lf(info);
                                                            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2203, "struct sNode");
                                                            _inf_obj_value14=come_increment_ref_count(((struct sParentContinueNode*)(right_value489=sParentContinueNode_initialize((struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value488=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "05function.c", 2203, "sParentContinueNode")))),info))));
                                                            _inf_value14->_protocol_obj=_inf_obj_value14;
                                                            _inf_value14->finalize=(void*)sParentContinueNode_finalize;
                                                            _inf_value14->clone=(void*)sParentContinueNode_clone;
                                                            _inf_value14->compile=(void*)sParentContinueNode_compile;
                                                            _inf_value14->sline=(void*)sParentContinueNode_sline;
                                                            _inf_value14->sname=(void*)sParentContinueNode_sname;
                                                            _inf_value14->terminated=(void*)sParentContinueNode_terminated;
                                                            _inf_value14->kind=(void*)sParentContinueNode_kind;
                                                            __result349__ = __result_obj__ = ((struct sNode*)(right_value492=_inf_value14));
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sParentContinueNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value492) { right_value492 = come_decrement_ref_count2(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result349__;
                                                        }
                                                        else {
                                                            if(_if_conditional535=(*info->p==92&&*(info->p+1)==42)||*info->p==42,                                                            _if_conditional535) {
                                                                if(_if_conditional536=*info->p==92,                                                                _if_conditional536) {
                                                                    info->p+=2;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_366=(_Bool)1;
                                                                }
                                                                else {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    quote_366=(_Bool)0;
                                                                }
                                                                no_assign_367=info->no_assign;
                                                                info->no_assign=(_Bool)1;
                                                                value_368=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value493=expression_node_v99(info))));
                                                                if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                info->no_assign=no_assign_367;
                                                                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2224, "struct sNode");
                                                                _inf_obj_value15=come_increment_ref_count(((struct sDerefferenceNode*)(right_value495=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value494=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05function.c", 2223, "sDerefferenceNode")))),(struct sNode*)come_increment_ref_count(value_368),quote_366,info))));
                                                                _inf_value15->_protocol_obj=_inf_obj_value15;
                                                                _inf_value15->finalize=(void*)sDerefferenceNode_finalize;
                                                                _inf_value15->clone=(void*)sDerefferenceNode_clone;
                                                                _inf_value15->compile=(void*)sDerefferenceNode_compile;
                                                                _inf_value15->sline=(void*)sDerefferenceNode_sline;
                                                                _inf_value15->sname=(void*)sDerefferenceNode_sname;
                                                                _inf_value15->terminated=(void*)sDerefferenceNode_terminated;
                                                                _inf_value15->kind=(void*)sDerefferenceNode_kind;
                                                                __result352__ = __result_obj__ = ((struct sNode*)(right_value499=_inf_value15));
                                                                if(value_368) { value_368 = come_decrement_ref_count2(value_368, ((struct sNode*)value_368)->finalize, ((struct sNode*)value_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(sDerefferenceNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(right_value499) { right_value499 = come_decrement_ref_count2(right_value499, ((struct sNode*)right_value499)->finalize, ((struct sNode*)right_value499)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result352__;
                                                                if(value_368) { value_368 = come_decrement_ref_count2(value_368, ((struct sNode*)value_368)->finalize, ((struct sNode*)value_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                if(_if_conditional544=*info->p==38&&refference_335,                                                                _if_conditional544) {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    value_370=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value500=expression_node_v99(info))));
                                                                    if(right_value500) { right_value500 = come_decrement_ref_count2(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2231, "struct sNode");
                                                                    _inf_obj_value16=come_increment_ref_count(((struct sRefferenceNode*)(right_value502=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value501=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05function.c", 2231, "sRefferenceNode")))),(struct sNode*)come_increment_ref_count(value_370),info))));
                                                                    _inf_value16->_protocol_obj=_inf_obj_value16;
                                                                    _inf_value16->finalize=(void*)sRefferenceNode_finalize;
                                                                    _inf_value16->clone=(void*)sRefferenceNode_clone;
                                                                    _inf_value16->compile=(void*)sRefferenceNode_compile;
                                                                    _inf_value16->sline=(void*)sRefferenceNode_sline;
                                                                    _inf_value16->sname=(void*)sRefferenceNode_sname;
                                                                    _inf_value16->terminated=(void*)sRefferenceNode_terminated;
                                                                    _inf_value16->kind=(void*)sRefferenceNode_kind;
                                                                    __result355__ = __result_obj__ = ((struct sNode*)(right_value506=_inf_value16));
                                                                    if(value_370) { value_370 = come_decrement_ref_count2(value_370, ((struct sNode*)value_370)->finalize, ((struct sNode*)value_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sRefferenceNode_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value506) { right_value506 = come_decrement_ref_count2(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    return __result355__;
                                                                    if(value_370) { value_370 = come_decrement_ref_count2(value_370, ((struct sNode*)value_370)->finalize, ((struct sNode*)value_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    if(_if_conditional551=*info->p==33,                                                                    _if_conditional551) {
                                                                        info->p++;
                                                                        skip_spaces_and_lf(info);
                                                                        value_372=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value507=expression_node_v99(info))));
                                                                        if(right_value507) { right_value507 = come_decrement_ref_count2(right_value507, ((struct sNode*)right_value507)->finalize, ((struct sNode*)right_value507)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2239, "struct sNode");
                                                                        _inf_obj_value17=come_increment_ref_count(((struct sReverseNode*)(right_value509=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value508=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05function.c", 2239, "sReverseNode")))),(struct sNode*)come_increment_ref_count(value_372),info))));
                                                                        _inf_value17->_protocol_obj=_inf_obj_value17;
                                                                        _inf_value17->finalize=(void*)sReverseNode_finalize;
                                                                        _inf_value17->clone=(void*)sReverseNode_clone;
                                                                        _inf_value17->compile=(void*)sReverseNode_compile;
                                                                        _inf_value17->sline=(void*)sReverseNode_sline;
                                                                        _inf_value17->sname=(void*)sReverseNode_sname;
                                                                        _inf_value17->terminated=(void*)sReverseNode_terminated;
                                                                        _inf_value17->kind=(void*)sReverseNode_kind;
                                                                        __result358__ = __result_obj__ = ((struct sNode*)(right_value513=_inf_value17));
                                                                        if(value_372) { value_372 = come_decrement_ref_count2(value_372, ((struct sNode*)value_372)->finalize, ((struct sNode*)value_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sReverseNode_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value513) { right_value513 = come_decrement_ref_count2(right_value513, ((struct sNode*)right_value513)->finalize, ((struct sNode*)right_value513)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result358__;
                                                                        if(value_372) { value_372 = come_decrement_ref_count2(value_372, ((struct sNode*)value_372)->finalize, ((struct sNode*)value_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    else {
                                                                        if(_if_conditional558=(xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34),                                                                        _if_conditional558) {
                                                                            head_374=info->p;
                                                                            head_sline_375=info->sline;
                                                                            {
                                                                                p_377=info->p;
                                                                                sline_378=info->sline;
                                                                                if(_if_conditional559=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional559) {
                                                                                    __dec_obj207=buf_376;
                                                                                    buf_376=(char*)come_increment_ref_count(((char*)(right_value514=parse_word(info))));
                                                                                    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value514 = come_decrement_ref_count2(right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    __dec_obj208=buf_376;
                                                                                    buf_376=(char*)come_increment_ref_count(((char*)(right_value515=__builtin_string(""))));
                                                                                    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value515 = come_decrement_ref_count2(right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                info->p=p_377;
                                                                                info->sline=sline_378;
                                                                            }
                                                                            is_type_name__379=is_type_name(buf_376,info);
                                                                            define_function_pointer_flag_380=(_Bool)0;
                                                                            if(_if_conditional560=string_operator_not_equals(buf_376,"if")&&string_operator_not_equals(buf_376,"while")&&string_operator_not_equals(buf_376,"for")&&string_operator_not_equals(buf_376,"switch")&&string_operator_not_equals(buf_376,"return")&&string_operator_not_equals(buf_376,"sizeof")&&string_operator_not_equals(buf_376,"isheap")&&string_operator_not_equals(buf_376,"__typeof__")&&string_operator_not_equals(buf_376,"dynamic_typeof")&&string_operator_not_equals(buf_376,"typeof")&&string_operator_not_equals(buf_376,"gc_inc")&&string_operator_not_equals(buf_376,"gc_dec")&&string_operator_not_equals(buf_376,"case")&&string_operator_not_equals(buf_376,"_Alignof")&&string_operator_not_equals(buf_376,"_Alignas")&&string_operator_not_equals(buf_376,"__alignof__")&&*info->p==40&&*(info->p+1)!=42,                                                                            _if_conditional560) {
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional561=*info->p==40,                                                                                _if_conditional561) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional562=*info->p==42,                                                                                    _if_conditional562) {
                                                                                        info->p++;
                                                                                        skip_spaces_and_lf(info);
                                                                                        define_function_pointer_flag_380=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->p=head_374;
                                                                                info->sline=head_sline_375;
                                                                            }
                                                                            lambda_flag_381=(_Bool)0;
                                                                            if(_if_conditional563=string_operator_not_equals(buf_376,"if")&&string_operator_not_equals(buf_376,"while")&&string_operator_not_equals(buf_376,"for")&&string_operator_not_equals(buf_376,"switch")&&string_operator_not_equals(buf_376,"return")&&string_operator_not_equals(buf_376,"sizeof")&&string_operator_not_equals(buf_376,"_Alignof")&&string_operator_not_equals(buf_376,"__alignof__")&&string_operator_not_equals(buf_376,"_Alignas")&&string_operator_not_equals(buf_376,"isheap")&&string_operator_not_equals(buf_376,"__typeof__")&&string_operator_not_equals(buf_376,"dynamic_typeof")&&string_operator_not_equals(buf_376,"typeof")&&string_operator_not_equals(buf_376,"gc_inc")&&string_operator_not_equals(buf_376,"gc_dec")&&string_operator_not_equals(buf_376,"case")&&is_type_name__379,                                                                            _if_conditional563) {
                                                                                info->p=head_374;
                                                                                info->sline=head_sline_375;
                                                                                backtrace_parse_type(info);
                                                                                if(_if_conditional564=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional564) {
                                                                                    word2_382=(char*)come_increment_ref_count(((char*)(right_value516=parse_word(info))));
                                                                                    right_value516 = come_decrement_ref_count2(right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional565=string_operator_equals(word2_382,"lambda"),                                                                                    _if_conditional565) {
                                                                                        lambda_flag_381=(_Bool)1;
                                                                                    }
                                                                                    word2_382 = come_decrement_ref_count2(word2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                info->p=head_374;
                                                                                info->sline=head_sline_375;
                                                                            }
                                                                            fun_name_with_type_name_383=(_Bool)0;
                                                                            if(_if_conditional566=string_operator_not_equals(buf_376,"if")&&string_operator_not_equals(buf_376,"while")&&string_operator_not_equals(buf_376,"for")&&string_operator_not_equals(buf_376,"switch")&&string_operator_not_equals(buf_376,"return")&&string_operator_not_equals(buf_376,"sizeof")&&string_operator_not_equals(buf_376,"_Alignof")&&string_operator_not_equals(buf_376,"__alignof__")&&string_operator_not_equals(buf_376,"_Alignas")&&string_operator_not_equals(buf_376,"isheap")&&string_operator_not_equals(buf_376,"dynamic_typeof")&&string_operator_not_equals(buf_376,"__typeof__")&&string_operator_not_equals(buf_376,"typeof")&&string_operator_not_equals(buf_376,"gc_inc")&&string_operator_not_equals(buf_376,"gc_dec")&&string_operator_not_equals(buf_376,"case"),                                                                            _if_conditional566) {
                                                                                info->p=head_374;
                                                                                info->sline=head_sline_375;
                                                                                info->no_output_err=(_Bool)1;
                                                                                if(_if_conditional567=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional567) {
                                                                                    word2_384=(char*)come_increment_ref_count(((char*)(right_value517=parse_word(info))));
                                                                                    right_value517 = come_decrement_ref_count2(right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    word2_384 = come_decrement_ref_count2(word2_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                while(_while_condtional33=*info->p==42,                                                                                _while_condtional33) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                }
                                                                                if(_if_conditional568=*info->p==58&&*(info->p+1)==58,                                                                                _if_conditional568) {
                                                                                    info->p+=2;
                                                                                    skip_spaces_and_lf(info);
                                                                                    if(_if_conditional569=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional569) {
                                                                                        fun_name_with_type_name_383=(_Bool)1;
                                                                                    }
                                                                                }
                                                                                info->no_output_err=(_Bool)0;
                                                                                info->p=head_374;
                                                                                info->sline=head_sline_375;
                                                                            }
                                                                            __dec_obj209=buf_376;
                                                                            buf_376=(char*)come_increment_ref_count(((char*)(right_value518=parse_word(info))));
                                                                            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value518 = come_decrement_ref_count2(right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(lambda_flag_381) {
                                                                                info->p=head_374;
                                                                                info->sline=head_sline_375;
                                                                                __result359__ = __result_obj__ = ((struct sNode*)(right_value519=parse_function(info)));
                                                                                buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result359__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional571=(string_operator_equals(buf_376,"string")||string_operator_equals(buf_376,"wstring"))&&*info->p==40,                                                                                _if_conditional571) {
                                                                                    node_385=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value520=parse_function_call(buf_376,info))));
                                                                                    if(right_value520) { right_value520 = come_decrement_ref_count2(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj210=node_385;
                                                                                    node_385=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value521=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_385),info))));
                                                                                    if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value521) { right_value521 = come_decrement_ref_count2(right_value521, ((struct sNode*)right_value521)->finalize, ((struct sNode*)right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj211=node_385;
                                                                                    node_385=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value522=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_385),info))));
                                                                                    if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result360__ = __result_obj__ = node_385;
                                                                                    if(node_385) { node_385 = come_decrement_ref_count2(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    return __result360__;
                                                                                    if(node_385) { node_385 = come_decrement_ref_count2(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional572=string_operator_equals(buf_376,"__func__"),                                                                                    _if_conditional572) {
                                                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2354, "struct sNode");
                                                                                        _inf_obj_value18=come_increment_ref_count(((struct sFuncNode*)(right_value524=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value523=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05function.c", 2354, "sFuncNode")))),info))));
                                                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                                                        _inf_value18->finalize=(void*)sFuncNode_finalize;
                                                                                        _inf_value18->clone=(void*)sFuncNode_clone;
                                                                                        _inf_value18->compile=(void*)sFuncNode_compile;
                                                                                        _inf_value18->sline=(void*)sFuncNode_sline;
                                                                                        _inf_value18->sname=(void*)sFuncNode_sname;
                                                                                        _inf_value18->terminated=(void*)sFuncNode_terminated;
                                                                                        _inf_value18->kind=(void*)sFuncNode_kind;
                                                                                        __result363__ = __result_obj__ = ((struct sNode*)(right_value529=_inf_value18));
                                                                                        buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sFuncNode_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value529) { right_value529 = come_decrement_ref_count2(right_value529, ((struct sNode*)right_value529)->finalize, ((struct sNode*)right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result363__;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional581=string_operator_equals(buf_376,"__line__"),                                                                                        _if_conditional581) {
                                                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2357, "struct sNode");
                                                                                            _inf_obj_value19=come_increment_ref_count(((struct sLineNode*)(right_value531=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value530=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05function.c", 2357, "sLineNode")))),info))));
                                                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                                                            _inf_value19->finalize=(void*)sLineNode_finalize;
                                                                                            _inf_value19->clone=(void*)sLineNode_clone;
                                                                                            _inf_value19->compile=(void*)sLineNode_compile;
                                                                                            _inf_value19->sline=(void*)sLineNode_sline;
                                                                                            _inf_value19->sname=(void*)sLineNode_sname;
                                                                                            _inf_value19->terminated=(void*)sLineNode_terminated;
                                                                                            _inf_value19->kind=(void*)sLineNode_kind;
                                                                                            __result366__ = __result_obj__ = ((struct sNode*)(right_value536=_inf_value19));
                                                                                            buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sLineNode_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value536) { right_value536 = come_decrement_ref_count2(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result366__;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional590=string_operator_equals(buf_376,"__sname__"),                                                                                            _if_conditional590) {
                                                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2360, "struct sNode");
                                                                                                _inf_obj_value20=come_increment_ref_count(((struct sSNameNode*)(right_value538=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value537=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05function.c", 2360, "sSNameNode")))),info))));
                                                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                                                _inf_value20->finalize=(void*)sSNameNode_finalize;
                                                                                                _inf_value20->clone=(void*)sSNameNode_clone;
                                                                                                _inf_value20->compile=(void*)sSNameNode_compile;
                                                                                                _inf_value20->sline=(void*)sSNameNode_sline;
                                                                                                _inf_value20->sname=(void*)sSNameNode_sname;
                                                                                                _inf_value20->terminated=(void*)sSNameNode_terminated;
                                                                                                _inf_value20->kind=(void*)sSNameNode_kind;
                                                                                                __result369__ = __result_obj__ = ((struct sNode*)(right_value543=_inf_value20));
                                                                                                buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                come_call_finalizer2(sSNameNode_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(right_value543) { right_value543 = come_decrement_ref_count2(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                return __result369__;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional599=string_operator_equals(buf_376,"__caller_func__"),                                                                                                _if_conditional599) {
                                                                                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2363, "struct sNode");
                                                                                                    _inf_obj_value21=come_increment_ref_count(((struct sCallerFuncNode*)(right_value545=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value544=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05function.c", 2363, "sCallerFuncNode")))),info))));
                                                                                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                                                    _inf_value21->finalize=(void*)sCallerFuncNode_finalize;
                                                                                                    _inf_value21->clone=(void*)sCallerFuncNode_clone;
                                                                                                    _inf_value21->compile=(void*)sCallerFuncNode_compile;
                                                                                                    _inf_value21->sline=(void*)sCallerFuncNode_sline;
                                                                                                    _inf_value21->sname=(void*)sCallerFuncNode_sname;
                                                                                                    _inf_value21->terminated=(void*)sCallerFuncNode_terminated;
                                                                                                    _inf_value21->kind=(void*)sCallerFuncNode_kind;
                                                                                                    __result372__ = __result_obj__ = ((struct sNode*)(right_value550=_inf_value21));
                                                                                                    buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    come_call_finalizer2(sCallerFuncNode_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(right_value550) { right_value550 = come_decrement_ref_count2(right_value550, ((struct sNode*)right_value550)->finalize, ((struct sNode*)right_value550)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    return __result372__;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional608=string_operator_equals(buf_376,"__caller_line__"),                                                                                                    _if_conditional608) {
                                                                                                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2366, "struct sNode");
                                                                                                        _inf_obj_value22=come_increment_ref_count(((struct sCallerLineNode*)(right_value552=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value551=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05function.c", 2366, "sCallerLineNode")))),info))));
                                                                                                        _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                                        _inf_value22->finalize=(void*)sCallerLineNode_finalize;
                                                                                                        _inf_value22->clone=(void*)sCallerLineNode_clone;
                                                                                                        _inf_value22->compile=(void*)sCallerLineNode_compile;
                                                                                                        _inf_value22->sline=(void*)sCallerLineNode_sline;
                                                                                                        _inf_value22->sname=(void*)sCallerLineNode_sname;
                                                                                                        _inf_value22->terminated=(void*)sCallerLineNode_terminated;
                                                                                                        _inf_value22->kind=(void*)sCallerLineNode_kind;
                                                                                                        __result375__ = __result_obj__ = ((struct sNode*)(right_value557=_inf_value22));
                                                                                                        buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        come_call_finalizer2(sCallerLineNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(right_value557) { right_value557 = come_decrement_ref_count2(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        return __result375__;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(_if_conditional617=string_operator_equals(buf_376,"__caller_sname__"),                                                                                                        _if_conditional617) {
                                                                                                            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2369, "struct sNode");
                                                                                                            _inf_obj_value23=come_increment_ref_count(((struct sCallerSNameNode*)(right_value559=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value558=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05function.c", 2369, "sCallerSNameNode")))),info))));
                                                                                                            _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                                            _inf_value23->finalize=(void*)sCallerSNameNode_finalize;
                                                                                                            _inf_value23->clone=(void*)sCallerSNameNode_clone;
                                                                                                            _inf_value23->compile=(void*)sCallerSNameNode_compile;
                                                                                                            _inf_value23->sline=(void*)sCallerSNameNode_sline;
                                                                                                            _inf_value23->sname=(void*)sCallerSNameNode_sname;
                                                                                                            _inf_value23->terminated=(void*)sCallerSNameNode_terminated;
                                                                                                            _inf_value23->kind=(void*)sCallerSNameNode_kind;
                                                                                                            __result378__ = __result_obj__ = ((struct sNode*)(right_value564=_inf_value23));
                                                                                                            buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            come_call_finalizer2(sCallerSNameNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(right_value564) { right_value564 = come_decrement_ref_count2(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            return __result378__;
                                                                                                        }
                                                                                                        else {
                                                                                                            if(_if_conditional626=(string_operator_equals(buf_376,"sizeof")||string_operator_equals(buf_376,"_Alignof")||string_operator_equals(buf_376,"_Alignas")||string_operator_equals(buf_376,"__alignof__"))&&*info->p==40,                                                                                                            _if_conditional626) {
                                                                                                                node_392=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value565=string_node_v21(buf_376,head_374,head_sline_375,info))));
                                                                                                                if(right_value565) { right_value565 = come_decrement_ref_count2(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __dec_obj230=node_392;
                                                                                                                node_392=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value566=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_392),info))));
                                                                                                                if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value566) { right_value566 = come_decrement_ref_count2(right_value566, ((struct sNode*)right_value566)->finalize, ((struct sNode*)right_value566)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                __result379__ = __result_obj__ = node_392;
                                                                                                                if(node_392) { node_392 = come_decrement_ref_count2(node_392, ((struct sNode*)node_392)->finalize, ((struct sNode*)node_392)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                return __result379__;
                                                                                                                if(node_392) { node_392 = come_decrement_ref_count2(node_392, ((struct sNode*)node_392)->finalize, ((struct sNode*)node_392)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            else {
                                                                                                                if(fun_name_with_type_name_383) {
                                                                                                                    fun_name_393=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value568=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value567=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2379, "buffer"))))))));
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(buffer_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_393,buf_376);
                                                                                                                    type_397=(struct sType*)come_increment_ref_count(((struct sType*)(right_value570=sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(right_value569=buffer_to_string(fun_name_393))))))));
                                                                                                                    right_value569 = come_decrement_ref_count2(right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    come_call_finalizer2(sType_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                    if(_if_conditional632=type_397==((void*)0),                                                                                                                    _if_conditional632) {
                                                                                                                        klass_403=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value571=buffer_to_string(fun_name_393))));
                                                                                                                        right_value571 = come_decrement_ref_count2(right_value571, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        if(klass_403) {
                                                                                                                            __dec_obj231=type_397;
                                                                                                                            type_397=(struct sType*)come_increment_ref_count(((struct sType*)(right_value573=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value572=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2389, "sType")))),buf_376,(_Bool)0,info))));
                                                                                                                            come_call_finalizer2(sType_finalize,__dec_obj231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                            come_call_finalizer2(sType_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            err_msg(info,"null type(%s)",buf_376);
                                                                                                                            exit(2);
                                                                                                                        }
                                                                                                                    }
                                                                                                                    while(_while_condtional37=*info->p==42,                                                                                                                    _while_condtional37) {
                                                                                                                        info->p++;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        if(_if_conditional644=type_397->mClass->mStruct==(_Bool)0,                                                                                                                        _if_conditional644) {
                                                                                                                            buffer_append_str(fun_name_393,"p");
                                                                                                                        }
                                                                                                                    }
                                                                                                                    expected_next_character(58,info);
                                                                                                                    expected_next_character(58,info);
                                                                                                                    buffer_append_str(fun_name_393,"_");
                                                                                                                    buf2_404=(char*)come_increment_ref_count(((char*)(right_value574=parse_word(info))));
                                                                                                                    right_value574 = come_decrement_ref_count2(right_value574, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    buffer_append_str(fun_name_393,buf2_404);
                                                                                                                    node_405=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value576=parse_function_call(((char*)(right_value575=buffer_to_string(fun_name_393))),info))));
                                                                                                                    right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                    if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj232=node_405;
                                                                                                                    node_405=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value577=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_405),info))));
                                                                                                                    if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __dec_obj233=node_405;
                                                                                                                    node_405=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value578=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_405),info))));
                                                                                                                    if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value578) { right_value578 = come_decrement_ref_count2(right_value578, ((struct sNode*)right_value578)->finalize, ((struct sNode*)right_value578)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                    __result388__ = __result_obj__ = node_405;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_393, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_404 = come_decrement_ref_count2(buf2_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_405) { node_405 = come_decrement_ref_count2(node_405, ((struct sNode*)node_405)->finalize, ((struct sNode*)node_405)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                    buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    return __result388__;
                                                                                                                    come_call_finalizer2(buffer_finalize,fun_name_393, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    come_call_finalizer2(sType_finalize,type_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                    buf2_404 = come_decrement_ref_count2(buf2_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                    if(node_405) { node_405 = come_decrement_ref_count2(node_405, ((struct sNode*)node_405)->finalize, ((struct sNode*)node_405)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                else {
                                                                                                                    if(_if_conditional645=*info->p==58&&*(info->p+1)==58,                                                                                                                    _if_conditional645) {
                                                                                                                        info->p+=2;
                                                                                                                        skip_spaces_and_lf(info);
                                                                                                                        fun_name_406=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value580=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value579=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2426, "buffer"))))))));
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        come_call_finalizer2(buffer_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_406,buf_376);
                                                                                                                        buffer_append_str(fun_name_406,"_");
                                                                                                                        buf2_407=(char*)come_increment_ref_count(((char*)(right_value581=parse_word(info))));
                                                                                                                        right_value581 = come_decrement_ref_count2(right_value581, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        buffer_append_str(fun_name_406,buf2_407);
                                                                                                                        node_408=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value583=parse_function_call(((char*)(right_value582=buffer_to_string(fun_name_406))),info))));
                                                                                                                        right_value582 = come_decrement_ref_count2(right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                        if(right_value583) { right_value583 = come_decrement_ref_count2(right_value583, ((struct sNode*)right_value583)->finalize, ((struct sNode*)right_value583)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj234=node_408;
                                                                                                                        node_408=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value584=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_408),info))));
                                                                                                                        if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __dec_obj235=node_408;
                                                                                                                        node_408=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_408),info))));
                                                                                                                        if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                        if(right_value585) { right_value585 = come_decrement_ref_count2(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                        __result389__ = __result_obj__ = node_408;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_407 = come_decrement_ref_count2(buf2_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_408) { node_408 = come_decrement_ref_count2(node_408, ((struct sNode*)node_408)->finalize, ((struct sNode*)node_408)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                        buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        return __result389__;
                                                                                                                        come_call_finalizer2(buffer_finalize,fun_name_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                        buf2_407 = come_decrement_ref_count2(buf2_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                        if(node_408) { node_408 = come_decrement_ref_count2(node_408, ((struct sNode*)node_408)->finalize, ((struct sNode*)node_408)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                    }
                                                                                                                    else {
                                                                                                                        if(_if_conditional646=string_operator_not_equals(buf_376,"if")&&string_operator_not_equals(buf_376,"while")&&string_operator_not_equals(buf_376,"for")&&string_operator_not_equals(buf_376,"switch")&&string_operator_not_equals(buf_376,"return")&&string_operator_not_equals(buf_376,"sizeof")&&string_operator_not_equals(buf_376,"isheap")&&string_operator_not_equals(buf_376,"__typeof__")&&string_operator_not_equals(buf_376,"dynamic_typeof")&&string_operator_not_equals(buf_376,"typeof")&&string_operator_not_equals(buf_376,"gc_inc")&&string_operator_not_equals(buf_376,"gc_dec")&&string_operator_not_equals(buf_376,"case")&&string_operator_not_equals(buf_376,"_Alignof")&&string_operator_not_equals(buf_376,"__alignof__")&&string_operator_not_equals(buf_376,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__379),                                                                                                                        _if_conditional646) {
                                                                                                                            node_409=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value586=parse_function_call(buf_376,info))));
                                                                                                                            if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj236=node_409;
                                                                                                                            node_409=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value587=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_409),info))));
                                                                                                                            if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value587) { right_value587 = come_decrement_ref_count2(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj237=node_409;
                                                                                                                            node_409=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value588=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_409),info))));
                                                                                                                            if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value588) { right_value588 = come_decrement_ref_count2(right_value588, ((struct sNode*)right_value588)->finalize, ((struct sNode*)right_value588)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result390__ = __result_obj__ = node_409;
                                                                                                                            if(node_409) { node_409 = come_decrement_ref_count2(node_409, ((struct sNode*)node_409)->finalize, ((struct sNode*)node_409)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result390__;
                                                                                                                            if(node_409) { node_409 = come_decrement_ref_count2(node_409, ((struct sNode*)node_409)->finalize, ((struct sNode*)node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                        }
                                                                                                                        else {
                                                                                                                            node_410=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value589=string_node_v21(buf_376,head_374,head_sline_375,info))));
                                                                                                                            if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __dec_obj238=node_410;
                                                                                                                            node_410=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value590=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_410),info))));
                                                                                                                            if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                            if(right_value590) { right_value590 = come_decrement_ref_count2(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                            __result391__ = __result_obj__ = node_410;
                                                                                                                            if(node_410) { node_410 = come_decrement_ref_count2(node_410, ((struct sNode*)node_410)->finalize, ((struct sNode*)node_410)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                                                            buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                            return __result391__;
                                                                                                                            if(node_410) { node_410 = come_decrement_ref_count2(node_410, ((struct sNode*)node_410)->finalize, ((struct sNode*)node_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                                                                            buf_376 = come_decrement_ref_count2(buf_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional647=*info->p==40,                                                                            _if_conditional647) {
                                                                                info->p++;
                                                                                skip_spaces_and_lf(info);
                                                                                cast_expression_flag_411=(_Bool)0;
                                                                                {
                                                                                    p_412=info->p;
                                                                                    sline_413=info->sline;
                                                                                    word_414=(char*)come_increment_ref_count(((char*)(right_value591=__builtin_string(""))));
                                                                                    right_value591 = come_decrement_ref_count2(right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional648=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional648) {
                                                                                        __dec_obj239=word_414;
                                                                                        word_414=(char*)come_increment_ref_count(((char*)(right_value592=parse_word(info))));
                                                                                        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value592 = come_decrement_ref_count2(right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    if(_if_conditional649=is_type_name(word_414,info),                                                                                    _if_conditional649) {
                                                                                        cast_expression_flag_411=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_412;
                                                                                    info->sline=sline_413;
                                                                                    word_414 = come_decrement_ref_count2(word_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                tuple_expression_flag_415=(_Bool)0;
                                                                                {
                                                                                    p_416=info->p;
                                                                                    sline_417=info->sline;
                                                                                    no_comma_418=info->no_comma;
                                                                                    info->no_comma=(_Bool)1;
                                                                                    no_output_err_419=info->no_output_err;
                                                                                    info->no_output_err=(_Bool)1;
                                                                                    no_output_come_code_420=info->no_output_come_code;
                                                                                    info->no_output_come_code=(_Bool)1;
                                                                                    node_421=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=expression_v13(info))));
                                                                                    if(right_value593) { right_value593 = come_decrement_ref_count2(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    info->no_comma=no_comma_418;
                                                                                    info->no_output_err=no_output_err_419;
                                                                                    info->no_output_come_code=no_output_come_code_420;
                                                                                    if(_if_conditional650=*info->p==44,                                                                                    _if_conditional650) {
                                                                                        tuple_expression_flag_415=(_Bool)1;
                                                                                    }
                                                                                    info->p=p_416;
                                                                                    info->sline=sline_417;
                                                                                    if(node_421) { node_421 = come_decrement_ref_count2(node_421, ((struct sNode*)node_421)->finalize, ((struct sNode*)node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                if(_if_conditional651=!gComeC&&tuple_expression_flag_415,                                                                                _if_conditional651) {
                                                                                    node_422=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value594=parse_tuple(info))));
                                                                                    if(right_value594) { right_value594 = come_decrement_ref_count2(right_value594, ((struct sNode*)right_value594)->finalize, ((struct sNode*)right_value594)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __dec_obj240=node_422;
                                                                                    node_422=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value595=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_422),info))));
                                                                                    if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value595) { right_value595 = come_decrement_ref_count2(right_value595, ((struct sNode*)right_value595)->finalize, ((struct sNode*)right_value595)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    __result392__ = __result_obj__ = node_422;
                                                                                    if(node_422) { node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                    return __result392__;
                                                                                    if(node_422) { node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                else {
                                                                                    if(cast_expression_flag_411) {
                                                                                        parse_sharp_v5(info);
                                                                                        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value596=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_423=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                        name_424=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                        err_425=multiple_assign_var8->v3;
                                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional653=!err_425,                                                                                        _if_conditional653) {
                                                                                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                                                                            exit(2);
                                                                                        }
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        node_426=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value597=expression_node_v99(info))));
                                                                                        if(right_value597) { right_value597 = come_decrement_ref_count2(right_value597, ((struct sNode*)right_value597)->finalize, ((struct sNode*)right_value597)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj241=node_426;
                                                                                        node_426=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value598=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_426),info))));
                                                                                        if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value598) { right_value598 = come_decrement_ref_count2(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2533, "struct sNode");
                                                                                        _inf_obj_value24=come_increment_ref_count(((struct sCastNode*)(right_value600=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value599=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05function.c", 2533, "sCastNode")))),type_423,node_426,info))));
                                                                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                        _inf_value24->finalize=(void*)sCastNode_finalize;
                                                                                        _inf_value24->clone=(void*)sCastNode_clone;
                                                                                        _inf_value24->compile=(void*)sCastNode_compile;
                                                                                        _inf_value24->sline=(void*)sCastNode_sline;
                                                                                        _inf_value24->sname=(void*)sCastNode_sname;
                                                                                        _inf_value24->terminated=(void*)sCastNode_terminated;
                                                                                        _inf_value24->kind=(void*)sCastNode_kind;
                                                                                        __result395__ = __result_obj__ = ((struct sNode*)(right_value605=_inf_value24));
                                                                                        come_call_finalizer2(sType_finalize,type_423, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_424 = come_decrement_ref_count2(name_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value599, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sCastNode_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value605) { right_value605 = come_decrement_ref_count2(right_value605, ((struct sNode*)right_value605)->finalize, ((struct sNode*)right_value605)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result395__;
                                                                                        come_call_finalizer2(sType_finalize,type_423, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_424 = come_decrement_ref_count2(name_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                    else {
                                                                                        parse_sharp_v5(info);
                                                                                        node_428=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value606=expression_v13(info))));
                                                                                        if(right_value606) { right_value606 = come_decrement_ref_count2(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        parse_sharp_v5(info);
                                                                                        expected_next_character(41,info);
                                                                                        parse_sharp_v5(info);
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2543, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sParenNode*)(right_value608=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value607=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05function.c", 2543, "sParenNode")))),node_428,info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sParenNode_finalize;
                                                                                        _inf_value25->clone=(void*)sParenNode_clone;
                                                                                        _inf_value25->compile=(void*)sParenNode_compile;
                                                                                        _inf_value25->sline=(void*)sParenNode_sline;
                                                                                        _inf_value25->sname=(void*)sParenNode_sname;
                                                                                        _inf_value25->terminated=(void*)sParenNode_terminated;
                                                                                        _inf_value25->kind=(void*)sParenNode_kind;
                                                                                        __dec_obj247=node_428;
                                                                                        node_428=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value612=_inf_value25)));
                                                                                        if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sParenNode_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value612) { right_value612 = come_decrement_ref_count2(right_value612, ((struct sNode*)right_value612)->finalize, ((struct sNode*)right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __dec_obj248=node_428;
                                                                                        node_428=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value613=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_428),info))));
                                                                                        if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value613) { right_value613 = come_decrement_ref_count2(right_value613, ((struct sNode*)right_value613)->finalize, ((struct sNode*)right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        __result398__ = __result_obj__ = node_428;
                                                                                        if(node_428) { node_428 = come_decrement_ref_count2(node_428, ((struct sNode*)node_428)->finalize, ((struct sNode*)node_428)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                        return __result398__;
                                                                                        if(node_428) { node_428 = come_decrement_ref_count2(node_428, ((struct sNode*)node_428)->finalize, ((struct sNode*)node_428)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                node_430=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value614=expression_node_v98(info))));
                                                                                if(right_value614) { right_value614 = come_decrement_ref_count2(right_value614, ((struct sNode*)right_value614)->finalize, ((struct sNode*)right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __dec_obj249=node_430;
                                                                                node_430=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value615=post_position_operator_v18((struct sNode*)come_increment_ref_count(node_430),info))));
                                                                                if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value615) { right_value615 = come_decrement_ref_count2(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                __result399__ = __result_obj__ = node_430;
                                                                                if(node_430) { node_430 = come_decrement_ref_count2(node_430, ((struct sNode*)node_430)->finalize, ((struct sNode*)node_430)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result399__;
                                                                                if(node_430) { node_430 = come_decrement_ref_count2(node_430, ((struct sNode*)node_430)->finalize, ((struct sNode*)node_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result400__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result400__;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional451;
_Bool _if_conditional452;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional451=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional451) {
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional452=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional452) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional453;
struct sLogicalDenial* __result313__;
void* right_value405;
struct sLogicalDenial* result_339;
_Bool _if_conditional454;
void* right_value406;
struct sNode* __dec_obj169;
_Bool _if_conditional455;
_Bool _if_conditional456;
void* right_value407;
char* __dec_obj170;
struct sLogicalDenial* __result314__;
memset(&__result_obj__, 0, sizeof(void*));
right_value405 = (void*)0;
memset(&result_339, 0, sizeof(struct sLogicalDenial*));
right_value406 = (void*)0;
right_value407 = (void*)0;
                if(_if_conditional453=self==(void*)0,                _if_conditional453) {
                    __result313__ = __result_obj__ = (void*)0;
                    return __result313__;
                }
                result_339=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value405=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "sLogicalDenial"))));
                come_call_finalizer2(sLogicalDenial_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional454=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional454) {
                    __dec_obj169=result_339->value;
                    result_339->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=sNode_clone(self->value))));
                    if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional455=self!=((void*)0),                _if_conditional455) {
                    result_339->sline=self->sline;
                }
                if(_if_conditional456=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional456) {
                    __dec_obj170=result_339->sname;
                    result_339->sname=(char*)come_increment_ref_count(((char*)(right_value407=string_clone(self->sname))));
                    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result314__ = __result_obj__ = result_339;
                come_call_finalizer2(sLogicalDenial_finalize,result_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result314__;
                come_call_finalizer2(sLogicalDenial_finalize,result_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional458;
_Bool _if_conditional459;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional458=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional458) {
                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional459=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional459) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional460;
struct sMinusMinusNode2* __result316__;
void* right_value412;
struct sMinusMinusNode2* result_341;
_Bool _if_conditional461;
void* right_value413;
struct sNode* __dec_obj171;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value414;
char* __dec_obj172;
struct sMinusMinusNode2* __result317__;
memset(&__result_obj__, 0, sizeof(void*));
right_value412 = (void*)0;
memset(&result_341, 0, sizeof(struct sMinusMinusNode2*));
right_value413 = (void*)0;
right_value414 = (void*)0;
                    if(_if_conditional460=self==(void*)0,                    _if_conditional460) {
                        __result316__ = __result_obj__ = (void*)0;
                        return __result316__;
                    }
                    result_341=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value412=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "sMinusMinusNode2"))));
                    come_call_finalizer2(sMinusMinusNode2_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional461=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional461) {
                        __dec_obj171=result_341->value;
                        result_341->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=sNode_clone(self->value))));
                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional462=self!=((void*)0),                    _if_conditional462) {
                        result_341->sline=self->sline;
                    }
                    if(_if_conditional463=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional463) {
                        __dec_obj172=result_341->sname;
                        result_341->sname=(char*)come_increment_ref_count(((char*)(right_value414=string_clone(self->sname))));
                        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result317__ = __result_obj__ = result_341;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_341, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result317__;
                    come_call_finalizer2(sMinusMinusNode2_finalize,result_341, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional465;
_Bool _if_conditional466;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional465=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional465) {
                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional466=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional466) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional467;
struct sMinusNode2* __result319__;
void* right_value419;
struct sMinusNode2* result_343;
_Bool _if_conditional468;
void* right_value420;
struct sNode* __dec_obj173;
_Bool _if_conditional469;
_Bool _if_conditional470;
void* right_value421;
char* __dec_obj174;
struct sMinusNode2* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
right_value419 = (void*)0;
memset(&result_343, 0, sizeof(struct sMinusNode2*));
right_value420 = (void*)0;
right_value421 = (void*)0;
                        if(_if_conditional467=self==(void*)0,                        _if_conditional467) {
                            __result319__ = __result_obj__ = (void*)0;
                            return __result319__;
                        }
                        result_343=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value419=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "sMinusNode2"))));
                        come_call_finalizer2(sMinusNode2_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional468=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional468) {
                            __dec_obj173=result_343->value;
                            result_343->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value420=sNode_clone(self->value))));
                            if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional469=self!=((void*)0),                        _if_conditional469) {
                            result_343->sline=self->sline;
                        }
                        if(_if_conditional470=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional470) {
                            __dec_obj174=result_343->sname;
                            result_343->sname=(char*)come_increment_ref_count(((char*)(right_value421=string_clone(self->sname))));
                            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result320__ = __result_obj__ = result_343;
                        come_call_finalizer2(sMinusNode2_finalize,result_343, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result320__;
                        come_call_finalizer2(sMinusNode2_finalize,result_343, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional472;
_Bool _if_conditional473;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional472=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional472) {
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional473=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional473) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional474;
struct sPlusPlusNode2* __result322__;
void* right_value426;
struct sPlusPlusNode2* result_345;
_Bool _if_conditional475;
void* right_value427;
struct sNode* __dec_obj175;
_Bool _if_conditional476;
_Bool _if_conditional477;
void* right_value428;
char* __dec_obj176;
struct sPlusPlusNode2* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
right_value426 = (void*)0;
memset(&result_345, 0, sizeof(struct sPlusPlusNode2*));
right_value427 = (void*)0;
right_value428 = (void*)0;
                            if(_if_conditional474=self==(void*)0,                            _if_conditional474) {
                                __result322__ = __result_obj__ = (void*)0;
                                return __result322__;
                            }
                            result_345=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value426=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "sPlusPlusNode2"))));
                            come_call_finalizer2(sPlusPlusNode2_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional475=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional475) {
                                __dec_obj175=result_345->value;
                                result_345->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=sNode_clone(self->value))));
                                if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional476=self!=((void*)0),                            _if_conditional476) {
                                result_345->sline=self->sline;
                            }
                            if(_if_conditional477=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional477) {
                                __dec_obj176=result_345->sname;
                                result_345->sname=(char*)come_increment_ref_count(((char*)(right_value428=string_clone(self->sname))));
                                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result323__ = __result_obj__ = result_345;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_345, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result323__;
                            come_call_finalizer2(sPlusPlusNode2_finalize,result_345, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sComplement_finalize(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional479;
_Bool _if_conditional480;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional479=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional479) {
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional480=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional480) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional481;
struct sComplement* __result325__;
void* right_value433;
struct sComplement* result_347;
_Bool _if_conditional482;
void* right_value434;
struct sNode* __dec_obj177;
_Bool _if_conditional483;
_Bool _if_conditional484;
void* right_value435;
char* __dec_obj178;
struct sComplement* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value433 = (void*)0;
memset(&result_347, 0, sizeof(struct sComplement*));
right_value434 = (void*)0;
right_value435 = (void*)0;
                                if(_if_conditional481=self==(void*)0,                                _if_conditional481) {
                                    __result325__ = __result_obj__ = (void*)0;
                                    return __result325__;
                                }
                                result_347=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value433=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "sComplement"))));
                                come_call_finalizer2(sComplement_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional482=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional482) {
                                    __dec_obj177=result_347->value;
                                    result_347->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(self->value))));
                                    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional483=self!=((void*)0),                                _if_conditional483) {
                                    result_347->sline=self->sline;
                                }
                                if(_if_conditional484=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional484) {
                                    __dec_obj178=result_347->sname;
                                    result_347->sname=(char*)come_increment_ref_count(((char*)(right_value435=string_clone(self->sname))));
                                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result326__ = __result_obj__ = result_347;
                                come_call_finalizer2(sComplement_finalize,result_347, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result326__;
                                come_call_finalizer2(sComplement_finalize,result_347, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReturnNode_finalize(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional499;
_Bool _if_conditional500;
_Bool _if_conditional501;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional499=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional499) {
                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional500=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional500) {
                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional501=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional501) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional502;
struct sReturnNode* __result335__;
void* right_value459;
struct sReturnNode* result_357;
_Bool _if_conditional503;
void* right_value460;
struct sNode* __dec_obj188;
_Bool _if_conditional504;
void* right_value461;
char* __dec_obj189;
_Bool _if_conditional505;
_Bool _if_conditional506;
void* right_value462;
char* __dec_obj190;
struct sReturnNode* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
right_value459 = (void*)0;
memset(&result_357, 0, sizeof(struct sReturnNode*));
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
                                                        if(_if_conditional502=self==(void*)0,                                                        _if_conditional502) {
                                                            __result335__ = __result_obj__ = (void*)0;
                                                            return __result335__;
                                                        }
                                                        result_357=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value459=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                                                        come_call_finalizer2(sReturnNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional503=self!=((void*)0)&&self->value!=((void*)0),                                                        _if_conditional503) {
                                                            __dec_obj188=result_357->value;
                                                            result_357->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value460=sNode_clone(self->value))));
                                                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value460) { right_value460 = come_decrement_ref_count2(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional504=self!=((void*)0)&&self->value_source!=((void*)0),                                                        _if_conditional504) {
                                                            __dec_obj189=result_357->value_source;
                                                            result_357->value_source=(char*)come_increment_ref_count(((char*)(right_value461=string_clone(self->value_source))));
                                                            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional505=self!=((void*)0),                                                        _if_conditional505) {
                                                            result_357->sline=self->sline;
                                                        }
                                                        if(_if_conditional506=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional506) {
                                                            __dec_obj190=result_357->sname;
                                                            result_357->sname=(char*)come_increment_ref_count(((char*)(right_value462=string_clone(self->sname))));
                                                            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result336__ = __result_obj__ = result_357;
                                                        come_call_finalizer2(sReturnNode_finalize,result_357, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result336__;
                                                        come_call_finalizer2(sReturnNode_finalize,result_357, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentReturnNode_finalize(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional517;
_Bool _if_conditional518;
_Bool _if_conditional519;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional517=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional517) {
                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional518=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional518) {
                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(_if_conditional519=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional519) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentReturnNode* sParentReturnNode_clone(struct sParentReturnNode* self){
void* __result_obj__;
_Bool _if_conditional520;
struct sParentReturnNode* __result341__;
void* right_value478;
struct sParentReturnNode* result_363;
_Bool _if_conditional521;
void* right_value479;
struct sNode* __dec_obj196;
_Bool _if_conditional522;
void* right_value480;
char* __dec_obj197;
_Bool _if_conditional523;
_Bool _if_conditional524;
void* right_value481;
char* __dec_obj198;
struct sParentReturnNode* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
right_value478 = (void*)0;
memset(&result_363, 0, sizeof(struct sParentReturnNode*));
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
                                                            if(_if_conditional520=self==(void*)0,                                                            _if_conditional520) {
                                                                __result341__ = __result_obj__ = (void*)0;
                                                                return __result341__;
                                                            }
                                                            result_363=(struct sParentReturnNode*)come_increment_ref_count(((struct sParentReturnNode*)(right_value478=(struct sParentReturnNode*)come_calloc(1, sizeof(struct sParentReturnNode)*(1), "sParentReturnNode_clone", 3, "sParentReturnNode"))));
                                                            come_call_finalizer2(sParentReturnNode_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional521=self!=((void*)0)&&self->value!=((void*)0),                                                            _if_conditional521) {
                                                                __dec_obj196=result_363->value;
                                                                result_363->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=sNode_clone(self->value))));
                                                                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional522=self!=((void*)0)&&self->value_source!=((void*)0),                                                            _if_conditional522) {
                                                                __dec_obj197=result_363->value_source;
                                                                result_363->value_source=(char*)come_increment_ref_count(((char*)(right_value480=string_clone(self->value_source))));
                                                                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            if(_if_conditional523=self!=((void*)0),                                                            _if_conditional523) {
                                                                result_363->sline=self->sline;
                                                            }
                                                            if(_if_conditional524=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional524) {
                                                                __dec_obj198=result_363->sname;
                                                                result_363->sname=(char*)come_increment_ref_count(((char*)(right_value481=string_clone(self->sname))));
                                                                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result342__ = __result_obj__ = result_363;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_363, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result342__;
                                                            come_call_finalizer2(sParentReturnNode_finalize,result_363, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentBreakNode_finalize(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional526;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional526=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional526) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sParentBreakNode* sParentBreakNode_clone(struct sParentBreakNode* self){
void* __result_obj__;
_Bool _if_conditional527;
struct sParentBreakNode* __result344__;
void* right_value485;
struct sParentBreakNode* result_364;
_Bool _if_conditional528;
_Bool _if_conditional529;
void* right_value486;
char* __dec_obj199;
struct sParentBreakNode* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value485 = (void*)0;
memset(&result_364, 0, sizeof(struct sParentBreakNode*));
right_value486 = (void*)0;
                                                            if(_if_conditional527=self==(void*)0,                                                            _if_conditional527) {
                                                                __result344__ = __result_obj__ = (void*)0;
                                                                return __result344__;
                                                            }
                                                            result_364=(struct sParentBreakNode*)come_increment_ref_count(((struct sParentBreakNode*)(right_value485=(struct sParentBreakNode*)come_calloc(1, sizeof(struct sParentBreakNode)*(1), "sParentBreakNode_clone", 3, "sParentBreakNode"))));
                                                            come_call_finalizer2(sParentBreakNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional528=self!=((void*)0),                                                            _if_conditional528) {
                                                                result_364->sline=self->sline;
                                                            }
                                                            if(_if_conditional529=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional529) {
                                                                __dec_obj199=result_364->sname;
                                                                result_364->sname=(char*)come_increment_ref_count(((char*)(right_value486=string_clone(self->sname))));
                                                                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value486 = come_decrement_ref_count2(right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result345__ = __result_obj__ = result_364;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_364, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result345__;
                                                            come_call_finalizer2(sParentBreakNode_finalize,result_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParentContinueNode_finalize(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional531;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional531=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional531) {
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sParentContinueNode* sParentContinueNode_clone(struct sParentContinueNode* self){
void* __result_obj__;
_Bool _if_conditional532;
struct sParentContinueNode* __result347__;
void* right_value490;
struct sParentContinueNode* result_365;
_Bool _if_conditional533;
_Bool _if_conditional534;
void* right_value491;
char* __dec_obj200;
struct sParentContinueNode* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
right_value490 = (void*)0;
memset(&result_365, 0, sizeof(struct sParentContinueNode*));
right_value491 = (void*)0;
                                                                if(_if_conditional532=self==(void*)0,                                                                _if_conditional532) {
                                                                    __result347__ = __result_obj__ = (void*)0;
                                                                    return __result347__;
                                                                }
                                                                result_365=(struct sParentContinueNode*)come_increment_ref_count(((struct sParentContinueNode*)(right_value490=(struct sParentContinueNode*)come_calloc(1, sizeof(struct sParentContinueNode)*(1), "sParentContinueNode_clone", 3, "sParentContinueNode"))));
                                                                come_call_finalizer2(sParentContinueNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional533=self!=((void*)0),                                                                _if_conditional533) {
                                                                    result_365->sline=self->sline;
                                                                }
                                                                if(_if_conditional534=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional534) {
                                                                    __dec_obj200=result_365->sname;
                                                                    result_365->sname=(char*)come_increment_ref_count(((char*)(right_value491=string_clone(self->sname))));
                                                                    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value491 = come_decrement_ref_count2(right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                __result348__ = __result_obj__ = result_365;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_365, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result348__;
                                                                come_call_finalizer2(sParentContinueNode_finalize,result_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional537;
_Bool _if_conditional538;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    if(_if_conditional537=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional537) {
                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                    if(_if_conditional538=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional538) {
                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional539;
struct sDerefferenceNode* __result350__;
void* right_value496;
struct sDerefferenceNode* result_369;
_Bool _if_conditional540;
void* right_value497;
struct sNode* __dec_obj201;
_Bool _if_conditional541;
_Bool _if_conditional542;
_Bool _if_conditional543;
void* right_value498;
char* __dec_obj202;
struct sDerefferenceNode* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
right_value496 = (void*)0;
memset(&result_369, 0, sizeof(struct sDerefferenceNode*));
right_value497 = (void*)0;
right_value498 = (void*)0;
                                                                    if(_if_conditional539=self==(void*)0,                                                                    _if_conditional539) {
                                                                        __result350__ = __result_obj__ = (void*)0;
                                                                        return __result350__;
                                                                    }
                                                                    result_369=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value496=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "sDerefferenceNode"))));
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional540=self!=((void*)0)&&self->value!=((void*)0),                                                                    _if_conditional540) {
                                                                        __dec_obj201=result_369->value;
                                                                        result_369->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value497=sNode_clone(self->value))));
                                                                        if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); }
                                                                        if(right_value497) { right_value497 = come_decrement_ref_count2(right_value497, ((struct sNode*)right_value497)->finalize, ((struct sNode*)right_value497)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    }
                                                                    if(_if_conditional541=self!=((void*)0),                                                                    _if_conditional541) {
                                                                        result_369->mQuote=self->mQuote;
                                                                    }
                                                                    if(_if_conditional542=self!=((void*)0),                                                                    _if_conditional542) {
                                                                        result_369->sline=self->sline;
                                                                    }
                                                                    if(_if_conditional543=self!=((void*)0)&&self->sname!=((void*)0),                                                                    _if_conditional543) {
                                                                        __dec_obj202=result_369->sname;
                                                                        result_369->sname=(char*)come_increment_ref_count(((char*)(right_value498=string_clone(self->sname))));
                                                                        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value498 = come_decrement_ref_count2(right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    __result351__ = __result_obj__ = result_369;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_369, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result351__;
                                                                    come_call_finalizer2(sDerefferenceNode_finalize,result_369, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional545;
_Bool _if_conditional546;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional545=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional545) {
                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                        if(_if_conditional546=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional546) {
                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional547;
struct sRefferenceNode* __result353__;
void* right_value503;
struct sRefferenceNode* result_371;
_Bool _if_conditional548;
void* right_value504;
struct sNode* __dec_obj203;
_Bool _if_conditional549;
_Bool _if_conditional550;
void* right_value505;
char* __dec_obj204;
struct sRefferenceNode* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
right_value503 = (void*)0;
memset(&result_371, 0, sizeof(struct sRefferenceNode*));
right_value504 = (void*)0;
right_value505 = (void*)0;
                                                                        if(_if_conditional547=self==(void*)0,                                                                        _if_conditional547) {
                                                                            __result353__ = __result_obj__ = (void*)0;
                                                                            return __result353__;
                                                                        }
                                                                        result_371=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value503=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "sRefferenceNode"))));
                                                                        come_call_finalizer2(sRefferenceNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional548=self!=((void*)0)&&self->value!=((void*)0),                                                                        _if_conditional548) {
                                                                            __dec_obj203=result_371->value;
                                                                            result_371->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=sNode_clone(self->value))));
                                                                            if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); }
                                                                            if(right_value504) { right_value504 = come_decrement_ref_count2(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        }
                                                                        if(_if_conditional549=self!=((void*)0),                                                                        _if_conditional549) {
                                                                            result_371->sline=self->sline;
                                                                        }
                                                                        if(_if_conditional550=self!=((void*)0)&&self->sname!=((void*)0),                                                                        _if_conditional550) {
                                                                            __dec_obj204=result_371->sname;
                                                                            result_371->sname=(char*)come_increment_ref_count(((char*)(right_value505=string_clone(self->sname))));
                                                                            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value505 = come_decrement_ref_count2(right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        __result354__ = __result_obj__ = result_371;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_371, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result354__;
                                                                        come_call_finalizer2(sRefferenceNode_finalize,result_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sReverseNode_finalize(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional552;
_Bool _if_conditional553;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional552=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional552) {
                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            if(_if_conditional553=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional553) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional554;
struct sReverseNode* __result356__;
void* right_value510;
struct sReverseNode* result_373;
_Bool _if_conditional555;
void* right_value511;
struct sNode* __dec_obj205;
_Bool _if_conditional556;
_Bool _if_conditional557;
void* right_value512;
char* __dec_obj206;
struct sReverseNode* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
right_value510 = (void*)0;
memset(&result_373, 0, sizeof(struct sReverseNode*));
right_value511 = (void*)0;
right_value512 = (void*)0;
                                                                            if(_if_conditional554=self==(void*)0,                                                                            _if_conditional554) {
                                                                                __result356__ = __result_obj__ = (void*)0;
                                                                                return __result356__;
                                                                            }
                                                                            result_373=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value510=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "sReverseNode"))));
                                                                            come_call_finalizer2(sReverseNode_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional555=self!=((void*)0)&&self->value!=((void*)0),                                                                            _if_conditional555) {
                                                                                __dec_obj205=result_373->value;
                                                                                result_373->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=sNode_clone(self->value))));
                                                                                if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            }
                                                                            if(_if_conditional556=self!=((void*)0),                                                                            _if_conditional556) {
                                                                                result_373->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional557=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional557) {
                                                                                __dec_obj206=result_373->sname;
                                                                                result_373->sname=(char*)come_increment_ref_count(((char*)(right_value512=string_clone(self->sname))));
                                                                                __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value512 = come_decrement_ref_count2(right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result357__ = __result_obj__ = result_373;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_373, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result357__;
                                                                            come_call_finalizer2(sReverseNode_finalize,result_373, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional573;
_Bool _if_conditional574;
_Bool _if_conditional575;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional573=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional573) {
                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional574=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional574) {
                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional575=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional575) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional576;
struct sFuncNode* __result361__;
void* right_value525;
struct sFuncNode* result_386;
_Bool _if_conditional577;
void* right_value526;
struct sNode* __dec_obj212;
_Bool _if_conditional578;
void* right_value527;
char* __dec_obj213;
_Bool _if_conditional579;
_Bool _if_conditional580;
void* right_value528;
char* __dec_obj214;
struct sFuncNode* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
right_value525 = (void*)0;
memset(&result_386, 0, sizeof(struct sFuncNode*));
right_value526 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
                                                                                            if(_if_conditional576=self==(void*)0,                                                                                            _if_conditional576) {
                                                                                                __result361__ = __result_obj__ = (void*)0;
                                                                                                return __result361__;
                                                                                            }
                                                                                            result_386=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value525=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                                                                                            come_call_finalizer2(sFuncNode_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional577=self!=((void*)0)&&self->value!=((void*)0),                                                                                            _if_conditional577) {
                                                                                                __dec_obj212=result_386->value;
                                                                                                result_386->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value526=sNode_clone(self->value))));
                                                                                                if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional578=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                            _if_conditional578) {
                                                                                                __dec_obj213=result_386->value_source;
                                                                                                result_386->value_source=(char*)come_increment_ref_count(((char*)(right_value527=string_clone(self->value_source))));
                                                                                                __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value527 = come_decrement_ref_count2(right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional579=self!=((void*)0),                                                                                            _if_conditional579) {
                                                                                                result_386->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional580=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional580) {
                                                                                                __dec_obj214=result_386->sname;
                                                                                                result_386->sname=(char*)come_increment_ref_count(((char*)(right_value528=string_clone(self->sname))));
                                                                                                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value528 = come_decrement_ref_count2(right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result362__ = __result_obj__ = result_386;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_386, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result362__;
                                                                                            come_call_finalizer2(sFuncNode_finalize,result_386, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional582;
_Bool _if_conditional583;
_Bool _if_conditional584;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional582=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional582) {
                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
                                                                                                if(_if_conditional583=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional583) {
                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                if(_if_conditional584=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional584) {
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional585;
struct sLineNode* __result364__;
void* right_value532;
struct sLineNode* result_387;
_Bool _if_conditional586;
void* right_value533;
struct sNode* __dec_obj215;
_Bool _if_conditional587;
void* right_value534;
char* __dec_obj216;
_Bool _if_conditional588;
_Bool _if_conditional589;
void* right_value535;
char* __dec_obj217;
struct sLineNode* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
right_value532 = (void*)0;
memset(&result_387, 0, sizeof(struct sLineNode*));
right_value533 = (void*)0;
right_value534 = (void*)0;
right_value535 = (void*)0;
                                                                                                if(_if_conditional585=self==(void*)0,                                                                                                _if_conditional585) {
                                                                                                    __result364__ = __result_obj__ = (void*)0;
                                                                                                    return __result364__;
                                                                                                }
                                                                                                result_387=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value532=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                                                                                come_call_finalizer2(sLineNode_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional586=self!=((void*)0)&&self->value!=((void*)0),                                                                                                _if_conditional586) {
                                                                                                    __dec_obj215=result_387->value;
                                                                                                    result_387->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value533=sNode_clone(self->value))));
                                                                                                    if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                if(_if_conditional587=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                _if_conditional587) {
                                                                                                    __dec_obj216=result_387->value_source;
                                                                                                    result_387->value_source=(char*)come_increment_ref_count(((char*)(right_value534=string_clone(self->value_source))));
                                                                                                    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value534 = come_decrement_ref_count2(right_value534, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                if(_if_conditional588=self!=((void*)0),                                                                                                _if_conditional588) {
                                                                                                    result_387->sline=self->sline;
                                                                                                }
                                                                                                if(_if_conditional589=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional589) {
                                                                                                    __dec_obj217=result_387->sname;
                                                                                                    result_387->sname=(char*)come_increment_ref_count(((char*)(right_value535=string_clone(self->sname))));
                                                                                                    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value535 = come_decrement_ref_count2(right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                __result365__ = __result_obj__ = result_387;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_387, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result365__;
                                                                                                come_call_finalizer2(sLineNode_finalize,result_387, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional591;
_Bool _if_conditional592;
_Bool _if_conditional593;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                    if(_if_conditional591=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional591) {
                                                                                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                    }
                                                                                                    if(_if_conditional592=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional592) {
                                                                                                        self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    if(_if_conditional593=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional593) {
                                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional594;
struct sSNameNode* __result367__;
void* right_value539;
struct sSNameNode* result_388;
_Bool _if_conditional595;
void* right_value540;
struct sNode* __dec_obj218;
_Bool _if_conditional596;
void* right_value541;
char* __dec_obj219;
_Bool _if_conditional597;
_Bool _if_conditional598;
void* right_value542;
char* __dec_obj220;
struct sSNameNode* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value539 = (void*)0;
memset(&result_388, 0, sizeof(struct sSNameNode*));
right_value540 = (void*)0;
right_value541 = (void*)0;
right_value542 = (void*)0;
                                                                                                    if(_if_conditional594=self==(void*)0,                                                                                                    _if_conditional594) {
                                                                                                        __result367__ = __result_obj__ = (void*)0;
                                                                                                        return __result367__;
                                                                                                    }
                                                                                                    result_388=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value539=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                                                                                    come_call_finalizer2(sSNameNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(_if_conditional595=self!=((void*)0)&&self->value!=((void*)0),                                                                                                    _if_conditional595) {
                                                                                                        __dec_obj218=result_388->value;
                                                                                                        result_388->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value540=sNode_clone(self->value))));
                                                                                                        if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                        if(right_value540) { right_value540 = come_decrement_ref_count2(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    }
                                                                                                    if(_if_conditional596=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                    _if_conditional596) {
                                                                                                        __dec_obj219=result_388->value_source;
                                                                                                        result_388->value_source=(char*)come_increment_ref_count(((char*)(right_value541=string_clone(self->value_source))));
                                                                                                        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    if(_if_conditional597=self!=((void*)0),                                                                                                    _if_conditional597) {
                                                                                                        result_388->sline=self->sline;
                                                                                                    }
                                                                                                    if(_if_conditional598=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                    _if_conditional598) {
                                                                                                        __dec_obj220=result_388->sname;
                                                                                                        result_388->sname=(char*)come_increment_ref_count(((char*)(right_value542=string_clone(self->sname))));
                                                                                                        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                        right_value542 = come_decrement_ref_count2(right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    }
                                                                                                    __result368__ = __result_obj__ = result_388;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_388, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                    return __result368__;
                                                                                                    come_call_finalizer2(sSNameNode_finalize,result_388, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional600;
_Bool _if_conditional601;
_Bool _if_conditional602;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                        if(_if_conditional600=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional600) {
                                                                                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                        }
                                                                                                        if(_if_conditional601=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional601) {
                                                                                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        if(_if_conditional602=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional602) {
                                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional603;
struct sCallerFuncNode* __result370__;
void* right_value546;
struct sCallerFuncNode* result_389;
_Bool _if_conditional604;
void* right_value547;
struct sNode* __dec_obj221;
_Bool _if_conditional605;
void* right_value548;
char* __dec_obj222;
_Bool _if_conditional606;
_Bool _if_conditional607;
void* right_value549;
char* __dec_obj223;
struct sCallerFuncNode* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
right_value546 = (void*)0;
memset(&result_389, 0, sizeof(struct sCallerFuncNode*));
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
                                                                                                        if(_if_conditional603=self==(void*)0,                                                                                                        _if_conditional603) {
                                                                                                            __result370__ = __result_obj__ = (void*)0;
                                                                                                            return __result370__;
                                                                                                        }
                                                                                                        result_389=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value546=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(_if_conditional604=self!=((void*)0)&&self->value!=((void*)0),                                                                                                        _if_conditional604) {
                                                                                                            __dec_obj221=result_389->value;
                                                                                                            result_389->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value547=sNode_clone(self->value))));
                                                                                                            if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                            if(right_value547) { right_value547 = come_decrement_ref_count2(right_value547, ((struct sNode*)right_value547)->finalize, ((struct sNode*)right_value547)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        }
                                                                                                        if(_if_conditional605=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                        _if_conditional605) {
                                                                                                            __dec_obj222=result_389->value_source;
                                                                                                            result_389->value_source=(char*)come_increment_ref_count(((char*)(right_value548=string_clone(self->value_source))));
                                                                                                            __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value548 = come_decrement_ref_count2(right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        if(_if_conditional606=self!=((void*)0),                                                                                                        _if_conditional606) {
                                                                                                            result_389->sline=self->sline;
                                                                                                        }
                                                                                                        if(_if_conditional607=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                        _if_conditional607) {
                                                                                                            __dec_obj223=result_389->sname;
                                                                                                            result_389->sname=(char*)come_increment_ref_count(((char*)(right_value549=string_clone(self->sname))));
                                                                                                            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                        }
                                                                                                        __result371__ = __result_obj__ = result_389;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_389, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                        return __result371__;
                                                                                                        come_call_finalizer2(sCallerFuncNode_finalize,result_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional609;
_Bool _if_conditional610;
_Bool _if_conditional611;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                            if(_if_conditional609=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional609) {
                                                                                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                            }
                                                                                                            if(_if_conditional610=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional610) {
                                                                                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
                                                                                                            if(_if_conditional611=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional611) {
                                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional612;
struct sCallerLineNode* __result373__;
void* right_value553;
struct sCallerLineNode* result_390;
_Bool _if_conditional613;
void* right_value554;
struct sNode* __dec_obj224;
_Bool _if_conditional614;
void* right_value555;
char* __dec_obj225;
_Bool _if_conditional615;
_Bool _if_conditional616;
void* right_value556;
char* __dec_obj226;
struct sCallerLineNode* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
right_value553 = (void*)0;
memset(&result_390, 0, sizeof(struct sCallerLineNode*));
right_value554 = (void*)0;
right_value555 = (void*)0;
right_value556 = (void*)0;
                                                                                                            if(_if_conditional612=self==(void*)0,                                                                                                            _if_conditional612) {
                                                                                                                __result373__ = __result_obj__ = (void*)0;
                                                                                                                return __result373__;
                                                                                                            }
                                                                                                            result_390=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value553=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                            if(_if_conditional613=self!=((void*)0)&&self->value!=((void*)0),                                                                                                            _if_conditional613) {
                                                                                                                __dec_obj224=result_390->value;
                                                                                                                result_390->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value554=sNode_clone(self->value))));
                                                                                                                if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                if(right_value554) { right_value554 = come_decrement_ref_count2(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                            }
                                                                                                            if(_if_conditional614=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                            _if_conditional614) {
                                                                                                                __dec_obj225=result_390->value_source;
                                                                                                                result_390->value_source=(char*)come_increment_ref_count(((char*)(right_value555=string_clone(self->value_source))));
                                                                                                                __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value555 = come_decrement_ref_count2(right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            if(_if_conditional615=self!=((void*)0),                                                                                                            _if_conditional615) {
                                                                                                                result_390->sline=self->sline;
                                                                                                            }
                                                                                                            if(_if_conditional616=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                            _if_conditional616) {
                                                                                                                __dec_obj226=result_390->sname;
                                                                                                                result_390->sname=(char*)come_increment_ref_count(((char*)(right_value556=string_clone(self->sname))));
                                                                                                                __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            }
                                                                                                            __result374__ = __result_obj__ = result_390;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_390, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                            return __result374__;
                                                                                                            come_call_finalizer2(sCallerLineNode_finalize,result_390, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional618;
_Bool _if_conditional619;
_Bool _if_conditional620;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                if(_if_conditional618=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional618) {
                                                                                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                                }
                                                                                                                if(_if_conditional619=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional619) {
                                                                                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
                                                                                                                if(_if_conditional620=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional620) {
                                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional621;
struct sCallerSNameNode* __result376__;
void* right_value560;
struct sCallerSNameNode* result_391;
_Bool _if_conditional622;
void* right_value561;
struct sNode* __dec_obj227;
_Bool _if_conditional623;
void* right_value562;
char* __dec_obj228;
_Bool _if_conditional624;
_Bool _if_conditional625;
void* right_value563;
char* __dec_obj229;
struct sCallerSNameNode* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
right_value560 = (void*)0;
memset(&result_391, 0, sizeof(struct sCallerSNameNode*));
right_value561 = (void*)0;
right_value562 = (void*)0;
right_value563 = (void*)0;
                                                                                                                if(_if_conditional621=self==(void*)0,                                                                                                                _if_conditional621) {
                                                                                                                    __result376__ = __result_obj__ = (void*)0;
                                                                                                                    return __result376__;
                                                                                                                }
                                                                                                                result_391=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value560=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                                if(_if_conditional622=self!=((void*)0)&&self->value!=((void*)0),                                                                                                                _if_conditional622) {
                                                                                                                    __dec_obj227=result_391->value;
                                                                                                                    result_391->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=sNode_clone(self->value))));
                                                                                                                    if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                                    if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                                }
                                                                                                                if(_if_conditional623=self!=((void*)0)&&self->value_source!=((void*)0),                                                                                                                _if_conditional623) {
                                                                                                                    __dec_obj228=result_391->value_source;
                                                                                                                    result_391->value_source=(char*)come_increment_ref_count(((char*)(right_value562=string_clone(self->value_source))));
                                                                                                                    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                if(_if_conditional624=self!=((void*)0),                                                                                                                _if_conditional624) {
                                                                                                                    result_391->sline=self->sline;
                                                                                                                }
                                                                                                                if(_if_conditional625=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                                _if_conditional625) {
                                                                                                                    __dec_obj229=result_391->sname;
                                                                                                                    result_391->sname=(char*)come_increment_ref_count(((char*)(right_value563=string_clone(self->sname))));
                                                                                                                    __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                    right_value563 = come_decrement_ref_count2(right_value563, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                                }
                                                                                                                __result377__ = __result_obj__ = result_391;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_391, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                return __result377__;
                                                                                                                come_call_finalizer2(sCallerSNameNode_finalize,result_391, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_394;
unsigned int hash_395;
unsigned int it_396;
_Bool _while_condtional34;
_Bool _if_conditional628;
_Bool _if_conditional629;
struct sType* __result380__;
_Bool _if_conditional630;
_Bool _if_conditional631;
struct sType* __result381__;
struct sType* __result382__;
struct sType* __result383__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_394, 0, sizeof(struct sType*));
memset(&hash_395, 0, sizeof(unsigned int));
memset(&it_396, 0, sizeof(unsigned int));
                                                                                                                        memset(&default_value_394,0,sizeof(struct sType*));
                                                                                                                        hash_395=string_get_hash_key(((char*)key))%self->size;
                                                                                                                        it_396=hash_395;
                                                                                                                        while(_while_condtional34=(_Bool)1,                                                                                                                        _while_condtional34) {
                                                                                                                            if(_if_conditional628=self->item_existance[it_396],                                                                                                                            _if_conditional628) {
                                                                                                                                if(_if_conditional629=string_equals(self->keys[it_396],key),                                                                                                                                _if_conditional629) {
                                                                                                                                    __result380__ = __result_obj__ = self->items[it_396];
                                                                                                                                    come_call_finalizer2(sType_finalize,default_value_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                    return __result380__;
                                                                                                                                }
                                                                                                                                it_396++;
                                                                                                                                if(_if_conditional630=it_396>=self->size,                                                                                                                                _if_conditional630) {
                                                                                                                                    it_396=0;
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    if(_if_conditional631=it_396==hash_395,                                                                                                                                    _if_conditional631) {
                                                                                                                                        __result381__ = __result_obj__ = default_value_394;
                                                                                                                                        come_call_finalizer2(sType_finalize,default_value_394, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                        return __result381__;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                            else {
                                                                                                                                __result382__ = __result_obj__ = default_value_394;
                                                                                                                                come_call_finalizer2(sType_finalize,default_value_394, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                return __result382__;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        __result383__ = __result_obj__ = default_value_394;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_394, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                        return __result383__;
                                                                                                                        come_call_finalizer2(sType_finalize,default_value_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_398;
unsigned int hash_399;
unsigned int it_400;
_Bool _while_condtional35;
_Bool _if_conditional633;
_Bool _if_conditional634;
struct sClass* __result384__;
_Bool _if_conditional641;
_Bool _if_conditional642;
struct sClass* __result385__;
struct sClass* __result386__;
struct sClass* __result387__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_398, 0, sizeof(struct sClass*));
memset(&hash_399, 0, sizeof(unsigned int));
memset(&it_400, 0, sizeof(unsigned int));
                                                                                                                            memset(&default_value_398,0,sizeof(struct sClass*));
                                                                                                                            hash_399=string_get_hash_key(((char*)key))%self->size;
                                                                                                                            it_400=hash_399;
                                                                                                                            while(_while_condtional35=(_Bool)1,                                                                                                                            _while_condtional35) {
                                                                                                                                if(_if_conditional633=self->item_existance[it_400],                                                                                                                                _if_conditional633) {
                                                                                                                                    if(_if_conditional634=string_equals(self->keys[it_400],key),                                                                                                                                    _if_conditional634) {
                                                                                                                                        __result384__ = __result_obj__ = self->items[it_400];
                                                                                                                                        come_call_finalizer2(sClass_finalize,default_value_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                        return __result384__;
                                                                                                                                    }
                                                                                                                                    it_400++;
                                                                                                                                    if(_if_conditional641=it_400>=self->size,                                                                                                                                    _if_conditional641) {
                                                                                                                                        it_400=0;
                                                                                                                                    }
                                                                                                                                    else {
                                                                                                                                        if(_if_conditional642=it_400==hash_399,                                                                                                                                        _if_conditional642) {
                                                                                                                                            __result385__ = __result_obj__ = default_value_398;
                                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_398, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                            return __result385__;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                    __result386__ = __result_obj__ = default_value_398;
                                                                                                                                    come_call_finalizer2(sClass_finalize,default_value_398, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                                    return __result386__;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            __result387__ = __result_obj__ = default_value_398;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_398, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                                            return __result387__;
                                                                                                                            come_call_finalizer2(sClass_finalize,default_value_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional635;
_Bool _if_conditional636;
_Bool _if_conditional640;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                            if(_if_conditional635=self!=((void*)0)&&self->mName!=((void*)0),                                                                                                                                            _if_conditional635) {
                                                                                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional636=self!=((void*)0)&&self->mFields!=((void*)0),                                                                                                                                            _if_conditional636) {
                                                                                                                                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                            }
                                                                                                                                            if(_if_conditional640=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                                                                                            _if_conditional640) {
                                                                                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_401;
_Bool _while_condtional36;
struct list_item$1tuple2$2charphsTypephph* prev_it_402;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_401, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_402, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                                                                                    it_401=self->head;
                                                                                                                                                    while(_while_condtional36=it_401!=((void*)0),                                                                                                                                                    _while_condtional36) {
                                                                                                                                                        prev_it_402=it_401;
                                                                                                                                                        it_401=it_401->next;
                                                                                                                                                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional637;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                            if(_if_conditional637=self!=((void*)0)&&self->item!=((void*)0),                                                                                                                                                            _if_conditional637) {
                                                                                                                                                                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional638;
_Bool _if_conditional639;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                                                                                    if(_if_conditional638=self!=((void*)0)&&self->v1!=((void*)0),                                                                                                                                                                    _if_conditional638) {
                                                                                                                                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
                                                                                                                                                                    if(_if_conditional639=self!=((void*)0)&&self->v2!=((void*)0),                                                                                                                                                                    _if_conditional639) {
                                                                                                                                                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                                                                                    }
}

static void sCastNode_finalize(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional654;
_Bool _if_conditional655;
_Bool _if_conditional656;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional654=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional654) {
                                                                                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional655=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional655) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional656=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional656) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional657;
struct sCastNode* __result393__;
void* right_value601;
struct sCastNode* result_427;
_Bool _if_conditional658;
void* right_value602;
struct sType* __dec_obj242;
_Bool _if_conditional659;
void* right_value603;
struct sNode* __dec_obj243;
_Bool _if_conditional660;
_Bool _if_conditional661;
void* right_value604;
char* __dec_obj244;
struct sCastNode* __result394__;
memset(&__result_obj__, 0, sizeof(void*));
right_value601 = (void*)0;
memset(&result_427, 0, sizeof(struct sCastNode*));
right_value602 = (void*)0;
right_value603 = (void*)0;
right_value604 = (void*)0;
                                                                                            if(_if_conditional657=self==(void*)0,                                                                                            _if_conditional657) {
                                                                                                __result393__ = __result_obj__ = (void*)0;
                                                                                                return __result393__;
                                                                                            }
                                                                                            result_427=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value601=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "sCastNode"))));
                                                                                            come_call_finalizer2(sCastNode_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional658=self!=((void*)0)&&self->mType!=((void*)0),                                                                                            _if_conditional658) {
                                                                                                __dec_obj242=result_427->mType;
                                                                                                result_427->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value602=sType_clone(self->mType))));
                                                                                                come_call_finalizer2(sType_finalize,__dec_obj242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sType_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional659=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional659) {
                                                                                                __dec_obj243=result_427->mLeft;
                                                                                                result_427->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value603=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value603) { right_value603 = come_decrement_ref_count2(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional660=self!=((void*)0),                                                                                            _if_conditional660) {
                                                                                                result_427->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional661=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional661) {
                                                                                                __dec_obj244=result_427->sname;
                                                                                                result_427->sname=(char*)come_increment_ref_count(((char*)(right_value604=string_clone(self->sname))));
                                                                                                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value604 = come_decrement_ref_count2(right_value604, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result394__ = __result_obj__ = result_427;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_427, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result394__;
                                                                                            come_call_finalizer2(sCastNode_finalize,result_427, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sParenNode_finalize(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional662;
_Bool _if_conditional663;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional662=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional662) {
                                                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional663=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional663) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional664;
struct sParenNode* __result396__;
void* right_value609;
struct sParenNode* result_429;
_Bool _if_conditional665;
void* right_value610;
struct sNode* __dec_obj245;
_Bool _if_conditional666;
_Bool _if_conditional667;
void* right_value611;
char* __dec_obj246;
struct sParenNode* __result397__;
memset(&__result_obj__, 0, sizeof(void*));
right_value609 = (void*)0;
memset(&result_429, 0, sizeof(struct sParenNode*));
right_value610 = (void*)0;
right_value611 = (void*)0;
                                                                                            if(_if_conditional664=self==(void*)0,                                                                                            _if_conditional664) {
                                                                                                __result396__ = __result_obj__ = (void*)0;
                                                                                                return __result396__;
                                                                                            }
                                                                                            result_429=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value609=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "sParenNode"))));
                                                                                            come_call_finalizer2(sParenNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional665=self!=((void*)0)&&self->mLeft!=((void*)0),                                                                                            _if_conditional665) {
                                                                                                __dec_obj245=result_429->mLeft;
                                                                                                result_429->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value610=sNode_clone(self->mLeft))));
                                                                                                if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value610) { right_value610 = come_decrement_ref_count2(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional666=self!=((void*)0),                                                                                            _if_conditional666) {
                                                                                                result_429->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional667=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional667) {
                                                                                                __dec_obj246=result_429->sname;
                                                                                                result_429->sname=(char*)come_increment_ref_count(((char*)(right_value611=string_clone(self->sname))));
                                                                                                __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value611 = come_decrement_ref_count2(right_value611, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result397__ = __result_obj__ = result_429;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_429, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result397__;
                                                                                            come_call_finalizer2(sParenNode_finalize,result_429, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value616;
struct sNode* __result401__;
memset(&__result_obj__, 0, sizeof(void*));
right_value616 = (void*)0;
    __result401__ = __result_obj__ = ((struct sNode*)(right_value616=expression_node_v99(info)));
    if(right_value616) { right_value616 = come_decrement_ref_count2(right_value616, ((struct sNode*)right_value616)->finalize, ((struct sNode*)right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result401__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional668;
void* right_value617;
void* right_value618;
struct sNode* __dec_obj250;
struct sNode* __result402__;
_Bool _if_conditional669;
void* right_value619;
void* right_value620;
struct sNode* __dec_obj251;
struct sNode* __result403__;
struct sNode* __result404__;
memset(&__result_obj__, 0, sizeof(void*));
right_value617 = (void*)0;
right_value618 = (void*)0;
right_value619 = (void*)0;
right_value620 = (void*)0;
    if(_if_conditional668=strmemcmp(info->p,"or"),    _if_conditional668) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj250=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value618=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value617=sNode_clone(node)))),info))));
        if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value617) { right_value617 = come_decrement_ref_count2(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value618) { right_value618 = come_decrement_ref_count2(right_value618, ((struct sNode*)right_value618)->finalize, ((struct sNode*)right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result402__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result402__;
    }
    else {
        if(_if_conditional669=strmemcmp(info->p,"and"),        _if_conditional669) {
            info->p+=strlen("and");
            skip_spaces_and_lf(info);
            __dec_obj251=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value620=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value619=sNode_clone(node)))),info))));
            if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value619) { right_value619 = come_decrement_ref_count2(right_value619, ((struct sNode*)right_value619)->finalize, ((struct sNode*)right_value619)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value620) { right_value620 = come_decrement_ref_count2(right_value620, ((struct sNode*)right_value620)->finalize, ((struct sNode*)right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result403__ = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result403__;
        }
    }
    __result404__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result404__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__;
void* right_value621;
struct sNode* node_431;
void* right_value622;
struct sNode* __dec_obj252;
struct sNode* __result405__;
memset(&__result_obj__, 0, sizeof(void*));
right_value621 = (void*)0;
memset(&node_431, 0, sizeof(struct sNode*));
right_value622 = (void*)0;
    node_431=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value621=expression_node_v99(info))));
    if(right_value621) { right_value621 = come_decrement_ref_count2(right_value621, ((struct sNode*)right_value621)->finalize, ((struct sNode*)right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj252=node_431;
    node_431=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value622=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_431),info))));
    if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value622) { right_value622 = come_decrement_ref_count2(right_value622, ((struct sNode*)right_value622)->finalize, ((struct sNode*)right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result405__ = __result_obj__ = node_431;
    if(node_431) { node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result405__;
    if(node_431) { node_431 = come_decrement_ref_count2(node_431, ((struct sNode*)node_431)->finalize, ((struct sNode*)node_431)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
void* __result_obj__;
char* __dec_obj253;
void* right_value623;
struct sType* __dec_obj254;
void* right_value624;
char* __dec_obj255;
struct sNode* __dec_obj256;
char* __dec_obj257;
void* right_value634;
struct list$1tuple2$2sTypephcharphph* __dec_obj263;
void* right_value635;
char* __dec_obj264;
struct sGlobalVariable* __result412__;
memset(&__result_obj__, 0, sizeof(void*));
right_value623 = (void*)0;
right_value624 = (void*)0;
right_value634 = (void*)0;
right_value635 = (void*)0;
    self->sline=info->sline;
    __dec_obj253=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj254=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value623=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj255=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value624=__builtin_string(name))));
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value624 = come_decrement_ref_count2(right_value624, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj256=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj257=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj263=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value634=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value634, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj264=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value635=__builtin_string(info->sname))));
    __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value635 = come_decrement_ref_count2(right_value635, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result412__ = __result_obj__ = self;
    come_call_finalizer2(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result412__;
    come_call_finalizer2(sGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional670;
struct list$1tuple2$2sTypephcharphph* __result406__;
void* right_value625;
void* right_value626;
struct list$1tuple2$2sTypephcharphph* result_434;
struct list_item$1tuple2$2sTypephcharphph* it_435;
_Bool _while_condtional39;
void* right_value633;
struct list$1tuple2$2sTypephcharphph* __result411__;
memset(&__result_obj__, 0, sizeof(void*));
right_value625 = (void*)0;
right_value626 = (void*)0;
memset(&result_434, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_435, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value633 = (void*)0;
        if(_if_conditional670=self==((void*)0),        _if_conditional670) {
            __result406__ = __result_obj__ = ((void*)0);
            return __result406__;
        }
        result_434=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value626=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value625=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 142, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value625, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_435=self->head;
        while(_while_condtional39=it_435!=((void*)0),        _while_condtional39) {
            list$1tuple2$2sTypephcharphph_add(result_434,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value633=tuple2$2sTypephcharphp_clone(it_435->item)))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value633, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_435=it_435->next;
        }
        __result411__ = __result_obj__ = result_434;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_434, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result411__;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_434, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list$1tuple2$2sTypephcharphph* __result407__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result407__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result407__;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list_item$1tuple2$2sTypephcharphph* it_432;
_Bool _while_condtional38;
struct list_item$1tuple2$2sTypephcharphph* prev_it_433;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_432, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&prev_it_433, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                it_432=self->head;
                while(_while_condtional38=it_432!=((void*)0),                _while_condtional38) {
                    prev_it_433=it_432;
                    it_432=it_432->next;
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,prev_it_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional671;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional671=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional671) {
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional672;
_Bool _if_conditional673;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional672=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional672) {
                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional673=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional673) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional674;
void* right_value627;
struct list_item$1tuple2$2sTypephcharphph* litem_436;
struct tuple2$2sTypephcharph* __dec_obj258;
_Bool _if_conditional677;
void* right_value628;
struct list_item$1tuple2$2sTypephcharphph* litem_437;
struct tuple2$2sTypephcharph* __dec_obj259;
void* right_value629;
struct list_item$1tuple2$2sTypephcharphph* litem_438;
struct tuple2$2sTypephcharph* __dec_obj260;
struct list$1tuple2$2sTypephcharphph* __result408__;
memset(&__result_obj__, 0, sizeof(void*));
right_value627 = (void*)0;
memset(&litem_436, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value628 = (void*)0;
memset(&litem_437, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value629 = (void*)0;
memset(&litem_438, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                if(_if_conditional674=self->len==0,                _if_conditional674) {
                    litem_436=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value627=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 156, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_436->prev=((void*)0);
                    litem_436->next=((void*)0);
                    __dec_obj258=litem_436->item;
                    litem_436->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_436;
                    self->head=litem_436;
                }
                else {
                    if(_if_conditional677=self->len==1,                    _if_conditional677) {
                        litem_437=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value628=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 166, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_437->prev=self->head;
                        litem_437->next=((void*)0);
                        __dec_obj259=litem_437->item;
                        litem_437->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_437;
                        self->head->next=litem_437;
                    }
                    else {
                        litem_438=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value629=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 176, "list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_438->prev=self->tail;
                        litem_438->next=((void*)0);
                        __dec_obj260=litem_438->item;
                        litem_438->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_438;
                        self->tail=litem_438;
                    }
                }
                self->len++;
                __result408__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result408__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional675;
_Bool _if_conditional676;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional675=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional675) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional676=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional676) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional678;
struct tuple2$2sTypephcharph* __result409__;
void* right_value630;
struct tuple2$2sTypephcharph* result_439;
_Bool _if_conditional679;
void* right_value631;
struct sType* __dec_obj261;
_Bool _if_conditional680;
void* right_value632;
char* __dec_obj262;
struct tuple2$2sTypephcharph* __result410__;
memset(&__result_obj__, 0, sizeof(void*));
right_value630 = (void*)0;
memset(&result_439, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value631 = (void*)0;
right_value632 = (void*)0;
                if(_if_conditional678=self==(void*)0,                _if_conditional678) {
                    __result409__ = __result_obj__ = (void*)0;
                    return __result409__;
                }
                result_439=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value630=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3, "tuple2$2sTypephcharph"))));
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional679=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional679) {
                    __dec_obj261=result_439->v1;
                    result_439->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value631=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional680=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional680) {
                    __dec_obj262=result_439->v2;
                    result_439->v2=(char*)come_increment_ref_count(((char*)(right_value632=string_clone(self->v2))));
                    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result410__ = __result_obj__ = result_439;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_439, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result410__;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_439, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sGlobalVariable_sline(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result413__;
memset(&__result_obj__, 0, sizeof(void*));
    __result413__ = self->sline;
    return __result413__;
}

char* sGlobalVariable_sname(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value636;
char* __result414__;
memset(&__result_obj__, 0, sizeof(void*));
right_value636 = (void*)0;
    __result414__ = __result_obj__ = ((char*)(right_value636=__builtin_string(self->sname)));
    right_value636 = come_decrement_ref_count2(right_value636, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result414__;
}

_Bool sGlobalVariable_terminated(){
void* __result_obj__;
_Bool __result415__;
memset(&__result_obj__, 0, sizeof(void*));
    __result415__ = (_Bool)0;
    return __result415__;
}

char* sGlobalVariable_kind(){
void* __result_obj__;
void* right_value637;
char* __result416__;
memset(&__result_obj__, 0, sizeof(void*));
right_value637 = (void*)0;
    __result416__ = __result_obj__ = ((char*)(right_value637=__builtin_string("sGlobalVariable")));
    right_value637 = come_decrement_ref_count2(right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result416__;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value638;
struct sType* type_440;
void* right_value639;
char* name_441;
struct sNode* right_node_442;
void* right_value640;
char* array_initializer_443;
_Bool _if_conditional688;
struct list$1tuple2$2sTypephcharphph* o2_saved_444;
struct tuple2$2sTypephcharph* it_447;
struct tuple2$2sTypephcharph* multiple_assign_var9;
struct sType* type_450;
char* name_451;
_Bool _if_conditional693;
void* right_value641;
void* right_value642;
_Bool _if_conditional694;
_Bool _if_conditional695;
void* right_value643;
_Bool _if_conditional696;
_Bool _if_conditional697;
_Bool __result424__;
void* right_value644;
struct CVALUE* come_value_452;
_Bool _if_conditional698;
void* right_value645;
_Bool _if_conditional699;
void* right_value646;
_Bool __result425__;
memset(&__result_obj__, 0, sizeof(void*));
right_value638 = (void*)0;
memset(&type_440, 0, sizeof(struct sType*));
right_value639 = (void*)0;
memset(&name_441, 0, sizeof(char*));
memset(&right_node_442, 0, sizeof(struct sNode*));
right_value640 = (void*)0;
memset(&array_initializer_443, 0, sizeof(char*));
memset(&o2_saved_444, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_447, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_450, 0, sizeof(struct sType*));
memset(&name_451, 0, sizeof(char*));
memset(&type_450, 0, sizeof(struct sType*));
memset(&name_451, 0, sizeof(char*));
right_value641 = (void*)0;
right_value642 = (void*)0;
right_value643 = (void*)0;
right_value644 = (void*)0;
memset(&come_value_452, 0, sizeof(struct CVALUE*));
right_value645 = (void*)0;
right_value646 = (void*)0;
    type_440=(struct sType*)come_increment_ref_count(((struct sType*)(right_value638=sType_clone(self->type))));
    come_call_finalizer2(sType_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    name_441=(char*)come_increment_ref_count(((char*)(right_value639=string_clone(self->name))));
    right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_node_442=self->right_node;
    array_initializer_443=(char*)come_increment_ref_count(((char*)(right_value640=string_clone(self->array_initializer))));
    right_value640 = come_decrement_ref_count2(right_value640, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->multiple_declare) {
        for(        o2_saved_444=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_447=list$1tuple2$2sTypephcharphph_begin((o2_saved_444));        !list$1tuple2$2sTypephcharphph_end((o2_saved_444));        it_447=list$1tuple2$2sTypephcharphph_next((o2_saved_444))        ){
            multiple_assign_var9=it_447;
            type_450=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_451=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(_if_conditional693=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional693) {
            }
            else {
                add_come_code_at_source_head(info,"%s;\n",((char*)(right_value641=make_define_var(type_450,name_451,(_Bool)0,info))));
                right_value641 = come_decrement_ref_count2(right_value641, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_450, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_451 = come_decrement_ref_count2(name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_444, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_441,(struct sType*)come_increment_ref_count(((struct sType*)(right_value642=sType_clone(type_440)))),info);
        come_call_finalizer2(sType_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(array_initializer_443) {
            if(_if_conditional695=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional695) {
            }
            else {
                add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value643=make_define_var(type_440,name_441,(_Bool)0,info))),array_initializer_443);
                right_value643 = come_decrement_ref_count2(right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        else {
            if(right_node_442) {
                if(_if_conditional697=!node_compile(right_node_442,info),                _if_conditional697) {
                    __result424__ = (_Bool)0;
                    come_call_finalizer2(sType_finalize,type_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_441 = come_decrement_ref_count2(name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    array_initializer_443 = come_decrement_ref_count2(array_initializer_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result424__;
                }
                come_value_452=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value644=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                if(_if_conditional698=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional698) {
                }
                else {
                    add_come_code_at_source_head(info,"%s=%s;\n",((char*)(right_value645=make_define_var(type_440,name_441,(_Bool)0,info))),come_value_452->c_value);
                    right_value645 = come_decrement_ref_count2(right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_452, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional699=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional699) {
                }
                else {
                    add_come_code_at_source_head(info,"%s;\n",((char*)(right_value646=make_define_var(type_440,name_441,(_Bool)0,info))));
                    right_value646 = come_decrement_ref_count2(right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    __result425__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,type_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_441 = come_decrement_ref_count2(name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_443 = come_decrement_ref_count2(array_initializer_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result425__;
    come_call_finalizer2(sType_finalize,type_440, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_441 = come_decrement_ref_count2(name_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_443 = come_decrement_ref_count2(array_initializer_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional689;
struct tuple2$2sTypephcharph* result_445;
struct tuple2$2sTypephcharph* __result417__;
_Bool _if_conditional690;
struct tuple2$2sTypephcharph* __result418__;
struct tuple2$2sTypephcharph* result_446;
struct tuple2$2sTypephcharph* __result419__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_445, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_446, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional689=self==((void*)0),            _if_conditional689) {
                memset(&result_445,0,sizeof(struct tuple2$2sTypephcharph*));
                __result417__ = __result_obj__ = result_445;
                return __result417__;
            }
            self->it=self->head;
            if(self->it) {
                __result418__ = __result_obj__ = self->it->item;
                return __result418__;
            }
            memset(&result_446,0,sizeof(struct tuple2$2sTypephcharph*));
            __result419__ = __result_obj__ = result_446;
            return __result419__;
}

static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __result420__;
memset(&__result_obj__, 0, sizeof(void*));
            __result420__ = self==((void*)0)||self->it==((void*)0);
            return __result420__;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional691;
struct tuple2$2sTypephcharph* result_448;
struct tuple2$2sTypephcharph* __result421__;
_Bool _if_conditional692;
struct tuple2$2sTypephcharph* __result422__;
struct tuple2$2sTypephcharph* result_449;
struct tuple2$2sTypephcharph* __result423__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_448, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_449, 0, sizeof(struct tuple2$2sTypephcharph*));
            if(_if_conditional691=self==((void*)0)||self->it==((void*)0),            _if_conditional691) {
                memset(&result_448,0,sizeof(struct tuple2$2sTypephcharph*));
                __result421__ = __result_obj__ = result_448;
                return __result421__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result422__ = __result_obj__ = self->it->item;
                return __result422__;
            }
            memset(&result_449,0,sizeof(struct tuple2$2sTypephcharph*));
            __result423__ = __result_obj__ = result_449;
            return __result423__;
}

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value647;
struct sType* __dec_obj265;
void* right_value648;
char* __dec_obj266;
char* __dec_obj267;
void* right_value649;
struct list$1tuple2$2sTypephcharphph* __dec_obj268;
void* right_value650;
char* __dec_obj269;
struct sExternalGlobalVariable* __result426__;
memset(&__result_obj__, 0, sizeof(void*));
right_value647 = (void*)0;
right_value648 = (void*)0;
right_value649 = (void*)0;
right_value650 = (void*)0;
    __dec_obj265=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value647=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj266=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value648=__builtin_string(name))));
    __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value648 = come_decrement_ref_count2(right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj267=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj268=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value649=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value649, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj269=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value650=__builtin_string(info->sname))));
    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value650 = come_decrement_ref_count2(right_value650, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result426__ = __result_obj__ = self;
    come_call_finalizer2(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result426__;
    come_call_finalizer2(sExternalGlobalVariable_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

int sExternalGlobalVariable_sline(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
int __result427__;
memset(&__result_obj__, 0, sizeof(void*));
    __result427__ = self->sline;
    return __result427__;
}

char* sExternalGlobalVariable_sname(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
void* right_value651;
char* __result428__;
memset(&__result_obj__, 0, sizeof(void*));
right_value651 = (void*)0;
    __result428__ = __result_obj__ = ((char*)(right_value651=__builtin_string(self->sname)));
    right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result428__;
}

_Bool sExternalGlobalVariable_terminated(){
void* __result_obj__;
_Bool __result429__;
memset(&__result_obj__, 0, sizeof(void*));
    __result429__ = (_Bool)0;
    return __result429__;
}

char* sExternalGlobalVariable_kind(){
void* __result_obj__;
void* right_value652;
char* __result430__;
memset(&__result_obj__, 0, sizeof(void*));
right_value652 = (void*)0;
    __result430__ = __result_obj__ = ((char*)(right_value652=__builtin_string("sExternalGlobalVariable")));
    right_value652 = come_decrement_ref_count2(right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result430__;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_453;
char* name_454;
_Bool _if_conditional705;
struct list$1tuple2$2sTypephcharphph* o2_saved_455;
struct tuple2$2sTypephcharph* it_456;
struct tuple2$2sTypephcharph* multiple_assign_var10;
struct sType* type_457;
char* name_458;
void* right_value653;
_Bool _if_conditional706;
void* right_value654;
void* right_value655;
_Bool _if_conditional707;
void* right_value656;
_Bool __result431__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_453, 0, sizeof(struct sType*));
memset(&name_454, 0, sizeof(char*));
memset(&o2_saved_455, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_456, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_457, 0, sizeof(struct sType*));
memset(&name_458, 0, sizeof(char*));
memset(&type_457, 0, sizeof(struct sType*));
memset(&name_458, 0, sizeof(char*));
right_value653 = (void*)0;
right_value654 = (void*)0;
right_value655 = (void*)0;
right_value656 = (void*)0;
    type_453=self->type;
    name_454=(char*)come_increment_ref_count(self->name);
    if(self->multiple_declare) {
        for(        o2_saved_455=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_456=list$1tuple2$2sTypephcharphph_begin((o2_saved_455));        !list$1tuple2$2sTypephcharphph_end((o2_saved_455));        it_456=list$1tuple2$2sTypephcharphph_next((o2_saved_455))        ){
            multiple_assign_var10=it_456;
            type_457=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_458=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            add_variable_to_global_table(name_458,(struct sType*)come_increment_ref_count(((struct sType*)(right_value653=sType_clone(type_457)))),info);
            come_call_finalizer2(sType_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional706=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional706) {
            }
            else {
                add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value654=make_define_var(type_457,name_458,(_Bool)0,info))));
                right_value654 = come_decrement_ref_count2(right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_454,(struct sType*)come_increment_ref_count(((struct sType*)(right_value655=sType_clone(type_453)))),info);
        come_call_finalizer2(sType_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional707=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),        _if_conditional707) {
        }
        else {
            add_come_code_at_source_head(info,"extern %s;\n",((char*)(right_value656=make_define_var(type_453,name_454,(_Bool)0,info))));
            right_value656 = come_decrement_ref_count2(right_value656, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __result431__ = (_Bool)1;
    name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result431__;
    name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* struct_name_459;
void* right_value657;
void* right_value658;
struct buffer* buf_460;
_Bool _if_conditional708;
void* right_value659;
char* __dec_obj270;
_Bool _if_conditional709;
int i_461;
_Bool _if_conditional710;
void* right_value660;
char* __dec_obj271;
void* right_value661;
char* __dec_obj272;
int i_462;
void* right_value662;
void* right_value663;
char* __result432__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_459, 0, sizeof(char*));
right_value657 = (void*)0;
right_value658 = (void*)0;
memset(&buf_460, 0, sizeof(struct buffer*));
right_value659 = (void*)0;
memset(&i_461, 0, sizeof(int));
right_value660 = (void*)0;
right_value661 = (void*)0;
memset(&i_462, 0, sizeof(int));
right_value662 = (void*)0;
right_value663 = (void*)0;
    buf_460=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value658=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value657=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2789, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value657, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional708=string_operator_not_equals(obj_type->mOriginalTypeName,""),    _if_conditional708) {
        __dec_obj270=struct_name_459;
        struct_name_459=(char*)come_increment_ref_count(((char*)(right_value659=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value659 = come_decrement_ref_count2(right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional709=!obj_type->mClass->mStruct,        _if_conditional709) {
            for(            i_461=0;            i_461<obj_type->mOriginalTypeNamePointerNum;            i_461++            ){
                buffer_append_str(buf_460,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj271=struct_name_459;
            struct_name_459=(char*)come_increment_ref_count(((char*)(right_value660=__builtin_string(obj_type->mClass->mName))));
            __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value660 = come_decrement_ref_count2(right_value660, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj272=struct_name_459;
            struct_name_459=(char*)come_increment_ref_count(((char*)(right_value661=create_generics_name(obj_type,info))));
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value661 = come_decrement_ref_count2(right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_462=0;            i_462<obj_type->mPointerNum;            i_462++            ){
                buffer_append_str(buf_460,"p");
            }
        }
    }
    __result432__ = __result_obj__ = ((char*)(right_value663=xsprintf("%s%s_%s",struct_name_459,((char*)(right_value662=buffer_to_string(buf_460))),fun_name)));
    struct_name_459 = come_decrement_ref_count2(struct_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_460, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value662 = come_decrement_ref_count2(right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result432__;
    struct_name_459 = come_decrement_ref_count2(struct_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_460, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_global_variable(struct sInfo* info){
void* __result_obj__;
_Bool multiple_declare_463;
char* p_464;
int sline_465;
_Bool _if_conditional711;
void* right_value664;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_466;
char* name_467;
_Bool err_468;
_Bool _if_conditional712;
void* right_value665;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type_469;
char* name_470;
_Bool _if_conditional713;
_Bool _if_conditional714;
void* right_value666;
void* right_value667;
struct list$1tuple2$2sTypephcharphph* multiple_declare_471;
void* right_value668;
struct tuple3$3sTypephcharphbool* multiple_assign_var13;
struct sType* base_type_472;
char* name_473;
_Bool err_474;
_Bool _if_conditional715;
void* right_value669;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_475;
char* var_name_476;
void* right_value673;
void* right_value674;
_Bool _while_condtional40;
void* right_value675;
struct tuple2$2sTypephcharph* multiple_assign_var15;
struct sType* type2_480;
char* var_name_481;
void* right_value676;
void* right_value677;
struct sNode* right_node_482;
char* array_initializer_483;
void* right_value678;
char* var_name2_484;
_Bool _if_conditional718;
_Bool _if_conditional719;
void* right_value679;
void* right_value680;
struct sNode* _inf_value26;
struct sExternalGlobalVariable* _inf_obj_value26;
void* right_value687;
struct sNode* __result437__;
void* right_value688;
void* right_value689;
struct sNode* _inf_value27;
struct sGlobalVariable* _inf_obj_value27;
void* right_value698;
struct sNode* __result440__;
void* right_value699;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* result_type_487;
char* var_name_488;
_Bool err_489;
_Bool _if_conditional748;
struct sNode* right_node_490;
char* array_initializer_491;
_Bool _if_conditional749;
_Bool _if_conditional750;
void* right_value700;
void* right_value701;
struct buffer* buf_492;
_Bool squort_493;
_Bool dquort_494;
int nest_495;
_Bool _while_condtional41;
_Bool _if_conditional751;
_Bool _if_conditional752;
_Bool _if_conditional753;
_Bool _if_conditional754;
_Bool _if_conditional755;
_Bool _if_conditional756;
_Bool _if_conditional757;
_Bool _if_conditional758;
void* right_value702;
char* __dec_obj290;
void* right_value703;
struct sNode* __dec_obj291;
_Bool _if_conditional759;
_Bool _if_conditional760;
void* right_value704;
void* right_value705;
struct sNode* _inf_value28;
struct sExternalGlobalVariable* _inf_obj_value28;
void* right_value712;
struct sNode* __result443__;
void* right_value713;
void* right_value714;
struct sNode* _inf_value29;
struct sGlobalVariable* _inf_obj_value29;
void* right_value723;
struct sNode* __result446__;
struct sNode* __result447__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&multiple_declare_463, 0, sizeof(_Bool));
memset(&p_464, 0, sizeof(char*));
memset(&sline_465, 0, sizeof(int));
right_value664 = (void*)0;
memset(&type_466, 0, sizeof(struct sType*));
memset(&name_467, 0, sizeof(char*));
memset(&err_468, 0, sizeof(_Bool));
memset(&type_466, 0, sizeof(struct sType*));
memset(&name_467, 0, sizeof(char*));
memset(&err_468, 0, sizeof(_Bool));
right_value665 = (void*)0;
memset(&type_469, 0, sizeof(struct sType*));
memset(&name_470, 0, sizeof(char*));
memset(&type_469, 0, sizeof(struct sType*));
memset(&name_470, 0, sizeof(char*));
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&multiple_declare_471, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
right_value668 = (void*)0;
memset(&base_type_472, 0, sizeof(struct sType*));
memset(&name_473, 0, sizeof(char*));
memset(&err_474, 0, sizeof(_Bool));
memset(&base_type_472, 0, sizeof(struct sType*));
memset(&name_473, 0, sizeof(char*));
memset(&err_474, 0, sizeof(_Bool));
right_value669 = (void*)0;
memset(&type2_475, 0, sizeof(struct sType*));
memset(&var_name_476, 0, sizeof(char*));
memset(&type2_475, 0, sizeof(struct sType*));
memset(&var_name_476, 0, sizeof(char*));
right_value673 = (void*)0;
right_value674 = (void*)0;
right_value675 = (void*)0;
memset(&type2_480, 0, sizeof(struct sType*));
memset(&var_name_481, 0, sizeof(char*));
memset(&type2_480, 0, sizeof(struct sType*));
memset(&var_name_481, 0, sizeof(char*));
right_value676 = (void*)0;
right_value677 = (void*)0;
memset(&right_node_482, 0, sizeof(struct sNode*));
memset(&array_initializer_483, 0, sizeof(char*));
right_value678 = (void*)0;
memset(&var_name2_484, 0, sizeof(char*));
right_value679 = (void*)0;
right_value680 = (void*)0;
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value698 = (void*)0;
right_value699 = (void*)0;
memset(&result_type_487, 0, sizeof(struct sType*));
memset(&var_name_488, 0, sizeof(char*));
memset(&err_489, 0, sizeof(_Bool));
memset(&result_type_487, 0, sizeof(struct sType*));
memset(&var_name_488, 0, sizeof(char*));
memset(&err_489, 0, sizeof(_Bool));
memset(&right_node_490, 0, sizeof(struct sNode*));
memset(&array_initializer_491, 0, sizeof(char*));
right_value700 = (void*)0;
right_value701 = (void*)0;
memset(&buf_492, 0, sizeof(struct buffer*));
memset(&squort_493, 0, sizeof(_Bool));
memset(&dquort_494, 0, sizeof(_Bool));
memset(&nest_495, 0, sizeof(int));
right_value702 = (void*)0;
right_value703 = (void*)0;
right_value704 = (void*)0;
right_value705 = (void*)0;
right_value712 = (void*)0;
right_value713 = (void*)0;
right_value714 = (void*)0;
right_value723 = (void*)0;
    multiple_declare_463=(_Bool)0;
    {
        p_464=info->p;
        sline_465=info->sline;
        if(_if_conditional711=xisalpha(*info->p)||*info->p==95,        _if_conditional711) {
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value664=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_466=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_467=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_468=multiple_assign_var11->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(err_468) {
                multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value665=parse_variable_name((struct sType*)come_increment_ref_count(type_466),(_Bool)1,info)));
                type_469=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_470=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional713=!is_type_name(name_470,info)&&*info->p==44,                _if_conditional713) {
                    multiple_declare_463=(_Bool)1;
                }
                come_call_finalizer2(sType_finalize,type_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_470 = come_decrement_ref_count2(name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,type_466, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_467 = come_decrement_ref_count2(name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_464;
        info->sline=sline_465;
    }
    if(multiple_declare_463) {
        multiple_declare_471=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value667=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value666=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "05function.c", 2848, "list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(right_value668=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_472=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
        name_473=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        err_474=multiple_assign_var13->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional715=!err_474,        _if_conditional715) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var14=((struct tuple2$2sTypephcharph*)(right_value669=parse_variable_name((struct sType*)come_increment_ref_count(base_type_472),(_Bool)1,info)));
        type2_475=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
        var_name_476=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        list$1tuple2$2sTypephcharphph_push_back(multiple_declare_471,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value674=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value673=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2861, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_475),(char*)come_increment_ref_count(var_name_476))))));
        come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value674, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional40=*info->p==44,        _while_condtional40) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var15=((struct tuple2$2sTypephcharph*)(right_value675=parse_variable_name((struct sType*)come_increment_ref_count(base_type_472),(_Bool)0,info)));
            type2_480=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            var_name_481=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_471,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value677=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value676=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function.c", 2871, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type2_480),(char*)come_increment_ref_count(var_name_481))))));
            come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,type2_480, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_481 = come_decrement_ref_count2(var_name_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_482=((void*)0);
        array_initializer_483=((void*)0);
        var_name2_484=(char*)come_increment_ref_count(((char*)(right_value678=__builtin_string(""))));
        right_value678 = come_decrement_ref_count2(right_value678, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(base_type_472->mExtern) {
            if(right_node_482) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2883, "struct sNode");
            _inf_obj_value26=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value680=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value679=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 2883, "sExternalGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_471),base_type_472,(char*)come_increment_ref_count(var_name2_484),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value26->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value26->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value26->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value26->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value26->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value26->kind=(void*)sExternalGlobalVariable_kind;
            __result437__ = __result_obj__ = ((struct sNode*)(right_value687=_inf_value26));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_473 = come_decrement_ref_count2(name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_476 = come_decrement_ref_count2(var_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_482) { right_node_482 = come_decrement_ref_count2(right_node_482, ((struct sNode*)right_node_482)->finalize, ((struct sNode*)right_node_482)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_483 = come_decrement_ref_count2(array_initializer_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_484 = come_decrement_ref_count2(var_name2_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value687) { right_value687 = come_decrement_ref_count2(right_value687, ((struct sNode*)right_value687)->finalize, ((struct sNode*)right_value687)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result437__;
        }
        else {
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2886, "struct sNode");
            _inf_obj_value27=come_increment_ref_count(((struct sGlobalVariable*)(right_value689=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value688=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 2886, "sGlobalVariable")))),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_471),base_type_472,(char*)come_increment_ref_count(var_name2_484),(struct sNode*)come_increment_ref_count(right_node_482),(char*)come_increment_ref_count(array_initializer_483),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sGlobalVariable_finalize;
            _inf_value27->clone=(void*)sGlobalVariable_clone;
            _inf_value27->compile=(void*)sGlobalVariable_compile;
            _inf_value27->sline=(void*)sGlobalVariable_sline;
            _inf_value27->sname=(void*)sGlobalVariable_sname;
            _inf_value27->terminated=(void*)sGlobalVariable_terminated;
            _inf_value27->kind=(void*)sGlobalVariable_kind;
            __result440__ = __result_obj__ = ((struct sNode*)(right_value698=_inf_value27));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,base_type_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_473 = come_decrement_ref_count2(name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_476 = come_decrement_ref_count2(var_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_482) { right_node_482 = come_decrement_ref_count2(right_node_482, ((struct sNode*)right_node_482)->finalize, ((struct sNode*)right_node_482)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_483 = come_decrement_ref_count2(array_initializer_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_484 = come_decrement_ref_count2(var_name2_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value698) { right_value698 = come_decrement_ref_count2(right_value698, ((struct sNode*)right_value698)->finalize, ((struct sNode*)right_value698)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result440__;
        }
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_471, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,base_type_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_473 = come_decrement_ref_count2(name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_475, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_476 = come_decrement_ref_count2(var_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_482) { right_node_482 = come_decrement_ref_count2(right_node_482, ((struct sNode*)right_node_482)->finalize, ((struct sNode*)right_node_482)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_483 = come_decrement_ref_count2(array_initializer_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        var_name2_484 = come_decrement_ref_count2(var_name2_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(right_value699=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        result_type_487=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
        var_name_488=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        err_489=multiple_assign_var16->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional748=!err_489,        _if_conditional748) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        right_node_490=((void*)0);
        array_initializer_491=((void*)0);
        if(_if_conditional749=*info->p==61,        _if_conditional749) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional750=*info->p==123,            _if_conditional750) {
                buf_492=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value701=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value700=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2905, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buffer_append_char(buf_492,*info->p);
                info->p++;
                squort_493=(_Bool)0;
                dquort_494=(_Bool)0;
                nest_495=1;
                while(_while_condtional41=1,                _while_condtional41) {
                    if(_if_conditional751=*info->p==0,                    _if_conditional751) {
                        err_msg(info,"unexpected source end in array initiailizer");
                        exit(2);
                    }
                    else {
                        if(_if_conditional752=*info->p==92,                        _if_conditional752) {
                            buffer_append_char(buf_492,*info->p);
                            info->p++;
                            buffer_append_char(buf_492,*info->p);
                            info->p++;
                        }
                        else {
                            if(_if_conditional753=!squort_493&&*info->p==34,                            _if_conditional753) {
                                buffer_append_char(buf_492,*info->p);
                                info->p++;
                                dquort_494=!dquort_494;
                            }
                            else {
                                if(_if_conditional754=!dquort_494&&*info->p==39,                                _if_conditional754) {
                                    buffer_append_char(buf_492,*info->p);
                                    info->p++;
                                    squort_493=!squort_493;
                                }
                                else {
                                    if(_if_conditional755=squort_493||dquort_494,                                    _if_conditional755) {
                                        buffer_append_char(buf_492,*info->p);
                                        info->p++;
                                    }
                                    else {
                                        if(_if_conditional756=*info->p==123,                                        _if_conditional756) {
                                            nest_495++;
                                            buffer_append_char(buf_492,*info->p);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional757=*info->p==125,                                            _if_conditional757) {
                                                nest_495--;
                                                buffer_append_char(buf_492,*info->p);
                                                info->p++;
                                                if(_if_conditional758=nest_495==0,                                                _if_conditional758) {
                                                    skip_spaces_and_lf(info);
                                                    break;
                                                }
                                            }
                                            else {
                                                buffer_append_char(buf_492,*info->p);
                                                info->p++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                __dec_obj290=array_initializer_491;
                array_initializer_491=(char*)come_increment_ref_count(((char*)(right_value702=buffer_to_string(buf_492))));
                __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,buf_492, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                parse_sharp_v5(info);
                __dec_obj291=right_node_490;
                right_node_490=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value703=expression_v13(info))));
                if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value703) { right_value703 = come_decrement_ref_count2(right_value703, ((struct sNode*)right_value703)->finalize, ((struct sNode*)right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                parse_sharp_v5(info);
            }
        }
        if(result_type_487->mExtern) {
            if(right_node_490) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2972, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value705=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value704=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "05function.c", 2972, "sExternalGlobalVariable")))),((void*)0),result_type_487,(char*)come_increment_ref_count(var_name_488),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value28->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value28->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value28->sline=(void*)sExternalGlobalVariable_sline;
            _inf_value28->sname=(void*)sExternalGlobalVariable_sname;
            _inf_value28->terminated=(void*)sExternalGlobalVariable_terminated;
            _inf_value28->kind=(void*)sExternalGlobalVariable_kind;
            __result443__ = __result_obj__ = ((struct sNode*)(right_value712=_inf_value28));
            come_call_finalizer2(sType_finalize,result_type_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_490) { right_node_490 = come_decrement_ref_count2(right_node_490, ((struct sNode*)right_node_490)->finalize, ((struct sNode*)right_node_490)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_491 = come_decrement_ref_count2(array_initializer_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value704, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sExternalGlobalVariable_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value712) { right_value712 = come_decrement_ref_count2(right_value712, ((struct sNode*)right_value712)->finalize, ((struct sNode*)right_value712)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result443__;
        }
        else {
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2975, "struct sNode");
            _inf_obj_value29=come_increment_ref_count(((struct sGlobalVariable*)(right_value714=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value713=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "05function.c", 2975, "sGlobalVariable")))),((void*)0),result_type_487,(char*)come_increment_ref_count(var_name_488),(struct sNode*)come_increment_ref_count(right_node_490),(char*)come_increment_ref_count(array_initializer_491),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sGlobalVariable_finalize;
            _inf_value29->clone=(void*)sGlobalVariable_clone;
            _inf_value29->compile=(void*)sGlobalVariable_compile;
            _inf_value29->sline=(void*)sGlobalVariable_sline;
            _inf_value29->sname=(void*)sGlobalVariable_sname;
            _inf_value29->terminated=(void*)sGlobalVariable_terminated;
            _inf_value29->kind=(void*)sGlobalVariable_kind;
            __result446__ = __result_obj__ = ((struct sNode*)(right_value723=_inf_value29));
            come_call_finalizer2(sType_finalize,result_type_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_490) { right_node_490 = come_decrement_ref_count2(right_node_490, ((struct sNode*)right_node_490)->finalize, ((struct sNode*)right_node_490)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_491 = come_decrement_ref_count2(array_initializer_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGlobalVariable_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGlobalVariable_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value723) { right_value723 = come_decrement_ref_count2(right_value723, ((struct sNode*)right_value723)->finalize, ((struct sNode*)right_value723)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result446__;
        }
        come_call_finalizer2(sType_finalize,result_type_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_490) { right_node_490 = come_decrement_ref_count2(right_node_490, ((struct sNode*)right_node_490)->finalize, ((struct sNode*)right_node_490)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_491 = come_decrement_ref_count2(array_initializer_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result447__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result447__;
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional716;
void* right_value670;
struct list_item$1tuple2$2sTypephcharphph* litem_477;
struct tuple2$2sTypephcharph* __dec_obj273;
_Bool _if_conditional717;
void* right_value671;
struct list_item$1tuple2$2sTypephcharphph* litem_478;
struct tuple2$2sTypephcharph* __dec_obj274;
void* right_value672;
struct list_item$1tuple2$2sTypephcharphph* litem_479;
struct tuple2$2sTypephcharph* __dec_obj275;
struct list$1tuple2$2sTypephcharphph* __result433__;
memset(&__result_obj__, 0, sizeof(void*));
right_value670 = (void*)0;
memset(&litem_477, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value671 = (void*)0;
memset(&litem_478, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value672 = (void*)0;
memset(&litem_479, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
            if(_if_conditional716=self->len==0,            _if_conditional716) {
                litem_477=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value670=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 226, "list_item$1tuple2$2sTypephcharphph"))));
                come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_477->prev=((void*)0);
                litem_477->next=((void*)0);
                __dec_obj273=litem_477->item;
                litem_477->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_477;
                self->head=litem_477;
            }
            else {
                if(_if_conditional717=self->len==1,                _if_conditional717) {
                    litem_478=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value671=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 236, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_478->prev=self->head;
                    litem_478->next=((void*)0);
                    __dec_obj274=litem_478->item;
                    litem_478->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_478;
                    self->head->next=litem_478;
                }
                else {
                    litem_479=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value672=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 246, "list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_479->prev=self->tail;
                    litem_479->next=((void*)0);
                    __dec_obj275=litem_479->item;
                    litem_479->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_479;
                    self->tail=litem_479;
                }
            }
            self->len++;
            __result433__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result433__;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj276;
char* __dec_obj277;
struct tuple2$2sTypephcharph* __result434__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj276=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj277=self->v2;
            self->v2=(char*)come_increment_ref_count(v2);
            __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
            __result434__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result434__;
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional761;
_Bool _if_conditional762;
_Bool _if_conditional763;
_Bool _if_conditional764;
_Bool _if_conditional765;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional761=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional761) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional762=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional762) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional763=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional763) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional764=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional764) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional765=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional765) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional766;
struct sExternalGlobalVariable* __result441__;
void* right_value706;
struct sExternalGlobalVariable* result_496;
_Bool _if_conditional767;
void* right_value707;
struct sType* __dec_obj292;
_Bool _if_conditional768;
void* right_value708;
char* __dec_obj293;
_Bool _if_conditional769;
_Bool _if_conditional770;
void* right_value709;
char* __dec_obj294;
_Bool _if_conditional771;
void* right_value710;
struct list$1tuple2$2sTypephcharphph* __dec_obj295;
_Bool _if_conditional772;
void* right_value711;
char* __dec_obj296;
struct sExternalGlobalVariable* __result442__;
memset(&__result_obj__, 0, sizeof(void*));
right_value706 = (void*)0;
memset(&result_496, 0, sizeof(struct sExternalGlobalVariable*));
right_value707 = (void*)0;
right_value708 = (void*)0;
right_value709 = (void*)0;
right_value710 = (void*)0;
right_value711 = (void*)0;
                if(_if_conditional766=self==(void*)0,                _if_conditional766) {
                    __result441__ = __result_obj__ = (void*)0;
                    return __result441__;
                }
                result_496=(struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(right_value706=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "sExternalGlobalVariable_clone", 3, "sExternalGlobalVariable"))));
                come_call_finalizer2(sExternalGlobalVariable_finalize,right_value706, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional767=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional767) {
                    __dec_obj292=result_496->type;
                    result_496->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value707=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional768=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional768) {
                    __dec_obj293=result_496->name;
                    result_496->name=(char*)come_increment_ref_count(((char*)(right_value708=string_clone(self->name))));
                    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value708 = come_decrement_ref_count2(right_value708, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional769=self!=((void*)0),                _if_conditional769) {
                    result_496->sline=self->sline;
                }
                if(_if_conditional770=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional770) {
                    __dec_obj294=result_496->sname;
                    result_496->sname=(char*)come_increment_ref_count(((char*)(right_value709=string_clone(self->sname))));
                    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value709 = come_decrement_ref_count2(right_value709, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional771=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional771) {
                    __dec_obj295=result_496->multiple_declare;
                    result_496->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value710=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value710, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional772=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional772) {
                    __dec_obj296=result_496->mDeclareSName;
                    result_496->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value711=string_clone(self->mDeclareSName))));
                    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value711 = come_decrement_ref_count2(right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result442__ = __result_obj__ = result_496;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_496, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result442__;
                come_call_finalizer2(sExternalGlobalVariable_finalize,result_496, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional773;
_Bool _if_conditional774;
_Bool _if_conditional775;
_Bool _if_conditional776;
_Bool _if_conditional777;
_Bool _if_conditional778;
_Bool _if_conditional779;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional773=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional773) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional774=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional774) {
                    self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional775=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional775) {
                    if(self->right_node) { self->right_node = come_decrement_ref_count2(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional776=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional776) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional777=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional777) {
                    self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional778=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional778) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional779=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional779) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
void* __result_obj__;
_Bool _if_conditional780;
struct sGlobalVariable* __result444__;
void* right_value715;
struct sGlobalVariable* result_497;
_Bool _if_conditional781;
void* right_value716;
struct sType* __dec_obj297;
_Bool _if_conditional782;
void* right_value717;
char* __dec_obj298;
_Bool _if_conditional783;
void* right_value718;
struct sNode* __dec_obj299;
_Bool _if_conditional784;
_Bool _if_conditional785;
void* right_value719;
char* __dec_obj300;
_Bool _if_conditional786;
void* right_value720;
char* __dec_obj301;
_Bool _if_conditional787;
void* right_value721;
struct list$1tuple2$2sTypephcharphph* __dec_obj302;
_Bool _if_conditional788;
void* right_value722;
char* __dec_obj303;
struct sGlobalVariable* __result445__;
memset(&__result_obj__, 0, sizeof(void*));
right_value715 = (void*)0;
memset(&result_497, 0, sizeof(struct sGlobalVariable*));
right_value716 = (void*)0;
right_value717 = (void*)0;
right_value718 = (void*)0;
right_value719 = (void*)0;
right_value720 = (void*)0;
right_value721 = (void*)0;
right_value722 = (void*)0;
                if(_if_conditional780=self==(void*)0,                _if_conditional780) {
                    __result444__ = __result_obj__ = (void*)0;
                    return __result444__;
                }
                result_497=(struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(right_value715=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "sGlobalVariable_clone", 3, "sGlobalVariable"))));
                come_call_finalizer2(sGlobalVariable_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional781=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional781) {
                    __dec_obj297=result_497->type;
                    result_497->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value716=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value716, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional782=self!=((void*)0)&&self->name!=((void*)0),                _if_conditional782) {
                    __dec_obj298=result_497->name;
                    result_497->name=(char*)come_increment_ref_count(((char*)(right_value717=string_clone(self->name))));
                    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value717 = come_decrement_ref_count2(right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional783=self!=((void*)0)&&self->right_node!=((void*)0),                _if_conditional783) {
                    __dec_obj299=result_497->right_node;
                    result_497->right_node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value718=sNode_clone(self->right_node))));
                    if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value718) { right_value718 = come_decrement_ref_count2(right_value718, ((struct sNode*)right_value718)->finalize, ((struct sNode*)right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional784=self!=((void*)0),                _if_conditional784) {
                    result_497->sline=self->sline;
                }
                if(_if_conditional785=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional785) {
                    __dec_obj300=result_497->sname;
                    result_497->sname=(char*)come_increment_ref_count(((char*)(right_value719=string_clone(self->sname))));
                    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional786=self!=((void*)0)&&self->array_initializer!=((void*)0),                _if_conditional786) {
                    __dec_obj301=result_497->array_initializer;
                    result_497->array_initializer=(char*)come_increment_ref_count(((char*)(right_value720=string_clone(self->array_initializer))));
                    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value720 = come_decrement_ref_count2(right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional787=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional787) {
                    __dec_obj302=result_497->multiple_declare;
                    result_497->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value721=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value721, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional788=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional788) {
                    __dec_obj303=result_497->mDeclareSName;
                    result_497->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value722=string_clone(self->mDeclareSName))));
                    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value722 = come_decrement_ref_count2(right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result445__ = __result_obj__ = result_497;
                come_call_finalizer2(sGlobalVariable_finalize,result_497, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result445__;
                come_call_finalizer2(sGlobalVariable_finalize,result_497, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
struct sNode* __result448__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result448__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result448__;
}

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result449__;
memset(&__result_obj__, 0, sizeof(void*));
    __result449__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result449__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

