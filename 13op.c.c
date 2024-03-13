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
    struct buffer* mHeader;
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
struct sNullNode
{
    int sline;
    char* sname;
};
struct sNilNode
{
    int sline;
    char* sname;
};
struct sAddNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sSubNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMultNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sDivNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sModNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sGtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sGtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sNotEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sNotEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sXOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sCommaNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sConditionalNode
{
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
    int sline;
    char* sname;
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

void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);

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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

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

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

struct sNode* string_node_v5(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v5(struct sNode* node, struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info);

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

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

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
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);

_Bool sNullNode_terminated();

char* sNullNode_kind();

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);

int sNullNode_sline(struct sNullNode* self, struct sInfo* info);

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);

_Bool sNilNode_terminated();

char* sNilNode_kind();

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);

int sNilNode_sline(struct sNilNode* self, struct sInfo* info);

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAddNode_terminated();

char* sAddNode_kind();

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

int sAddNode_sline(struct sAddNode* self, struct sInfo* info);

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sSubNode_terminated();

char* sSubNode_kind();

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

int sSubNode_sline(struct sSubNode* self, struct sInfo* info);

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info);

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultNode_terminated();

char* sMultNode_kind();

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);

int sMultNode_sline(struct sMultNode* self, struct sInfo* info);

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info);

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivNode_terminated();

char* sDivNode_kind();

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);

int sDivNode_sline(struct sDivNode* self, struct sInfo* info);

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info);

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModNode_terminated();

char* sModNode_kind();

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);

int sModNode_sline(struct sModNode* self, struct sInfo* info);

char* sModNode_sname(struct sModNode* self, struct sInfo* info);

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShiftNode_terminated();

char* sLShiftNode_kind();

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info);

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftNode_terminated();

char* sRShiftNode_kind();

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info);

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtEqNode_terminated();

char* sGtEqNode_kind();

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info);

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info);

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtEqNode_terminated();

char* sLtEqNode_kind();

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info);

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info);

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtNode_terminated();

char* sLtNode_kind();

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);

int sLtNode_sline(struct sLtNode* self, struct sInfo* info);

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info);

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtNode_terminated();

char* sGtNode_kind();

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);

int sGtNode_sline(struct sGtNode* self, struct sInfo* info);

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info);

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

int sEqNode_sline(struct sEqNode* self, struct sInfo* info);

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info);

_Bool sEqNode_terminated();

char* sEqNode_kind();

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEqNode_terminated();

char* sNotEqNode_kind();

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info);

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info);

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sEq2Node_terminated();

char* sEq2Node_kind();

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info);

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info);

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info);

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEq2Node_terminated();

char* sNotEq2Node_kind();

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info);

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info);

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndNode_terminated();

char* sAndNode_kind();

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);

int sAndNode_sline(struct sAndNode* self, struct sInfo* info);

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info);

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXOrNode_terminated();

char* sXOrNode_kind();

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info);

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info);

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrNode_terminated();

char* sOrNode_kind();

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);

int sOrNode_sline(struct sOrNode* self, struct sInfo* info);

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info);

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndAndNode_terminated();

char* sAndAndNode_kind();

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info);

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info);

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrOrNode_terminated();

char* sOrOrNode_kind();

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info);

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info);

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sCommaNode_terminated();

char* sCommaNode_kind();

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info);

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info);

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);

_Bool sConditionalNode_terminated();

char* sConditionalNode_kind();

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info);

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info);

struct sNode* mult_exp(struct sInfo* info);

static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);

static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);

static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);

static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);

static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);

static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);

static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);

static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);

static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);

static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);

static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);

static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
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




_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info){
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
char* right_value2_59;
void* right_value66;
void* right_value67;
_Bool _if_conditional142;
void* right_value68;
char* __dec_obj35;
void* right_value69;
char* __dec_obj36;
void* right_value70;
void* right_value71;
void* right_value72;
void* right_value73;
char* __dec_obj37;
void* right_value74;
struct sType* type2_60;
void* right_value75;
struct sType* type3_61;
void* right_value76;
struct sType* __dec_obj38;
_Bool _if_conditional143;
void* right_value77;
char* __dec_obj39;
void* right_value78;
char* __dec_obj40;
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
memset(&right_value2_59, 0, sizeof(char*));
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
memset(&type2_60, 0, sizeof(struct sType*));
right_value75 = (void*)0;
memset(&type3_61, 0, sizeof(struct sType*));
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
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
    if(_if_conditional136=operator_fun_32&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional136) {
        come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value61=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "CVALUE"))));
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
        check_assign_type(((char*)(right_value67=xsprintf("\%s is assigned to",((char*)(right_value66=string_to_string(fun_name2_33)))))),list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional142=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1)->mHeap&&right_value->type->mHeap,        _if_conditional142) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1),right_value->type,right_value,info);
            __dec_obj35=right_value2_59;
            right_value2_59=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("%s",right_value->c_value))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj36=right_value2_59;
            right_value2_59=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(right_value->c_value))));
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj37=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value73=xsprintf("\%s(\%s,\%s)",((char*)(right_value70=string_to_string(fun_name2_33))),((char*)(right_value71=string_to_string(left_value2_55))),((char*)(right_value72=string_to_string(right_value2_59)))))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(operator_fun_32->mResultType))));
        come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type3_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=solve_generics(type2_60,generics_type_29,info))));
        come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj38=come_value_54->type;
        come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_clone(type3_61))));
        come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_54->var=((void*)0);
        if(type3_61->mHeap) {
            __dec_obj39=come_value_54->c_value;
            come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value77=append_object_to_right_values(come_value_54->c_value,(struct sType*)come_increment_ref_count(type3_61),info))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj40=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value78=append_stackframe(come_value_54->c_value,come_value_54->type,info))));
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_54->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
        result_53=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_55 = come_decrement_ref_count2(left_value2_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_59 = come_decrement_ref_count2(right_value2_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type3_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional144;
void* right_value79;
struct list_item$1CVALUEph* litem_62;
struct CVALUE* __dec_obj41;
_Bool _if_conditional146;
void* right_value80;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj42;
void* right_value81;
struct list_item$1CVALUEph* litem_64;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1CVALUEph*));
right_value80 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
right_value81 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional144=self->len==0,            _if_conditional144) {
                litem_62=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value79=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_62->prev=((void*)0);
                litem_62->next=((void*)0);
                __dec_obj41=litem_62->item;
                litem_62->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_62;
                self->head=litem_62;
            }
            else {
                if(_if_conditional146=self->len==1,                _if_conditional146) {
                    litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value80=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_63->prev=self->head;
                    litem_63->next=((void*)0);
                    __dec_obj42=litem_63->item;
                    litem_63->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_63;
                    self->head->next=litem_63;
                }
                else {
                    litem_64=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value81=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_64->prev=self->tail;
                    litem_64->next=((void*)0);
                    __dec_obj43=litem_64->item;
                    litem_64->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_64;
                    self->tail=litem_64;
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
_Bool _if_conditional145;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional145=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional145) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* __dec_obj44;
struct sNullNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result42__ = __result_obj__ = self;
    come_call_finalizer2(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result42__;
    come_call_finalizer2(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNode_terminated(){
void* __result_obj__;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = (_Bool)0;
    return __result43__;
}

char* sNullNode_kind(){
void* __result_obj__;
void* right_value83;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
    __result44__ = __result_obj__ = ((char*)(right_value83=__builtin_string("sNullNode")));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result44__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value84;
struct CVALUE* come_value_65;
void* right_value85;
char* __dec_obj45;
void* right_value86;
void* right_value87;
struct sType* __dec_obj46;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&come_value_65, 0, sizeof(struct CVALUE*));
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 149, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj45=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("((void*)0)"))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj46=come_value_65->type;
    come_value_65->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 152, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_65->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_65->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
    __result45__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result45__;
    come_call_finalizer2(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = self->sline;
    return __result46__;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value88;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
    __result47__ = __result_obj__ = ((char*)(right_value88=__builtin_string(self->sname)));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result47__;
}

struct sNode* create_null_object(struct sInfo* info){
void* __result_obj__;
void* right_value89;
void* right_value90;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value93;
struct sNode* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value93 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 174, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value90=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value89=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 174, "sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result50__ = __result_obj__ = ((struct sNode*)(right_value93=_inf_value1));
    come_call_finalizer2(sNullNode_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNullNode_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value93) { right_value93 = come_decrement_ref_count2(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result50__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value94;
char* __dec_obj48;
struct sNilNode* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result51__ = __result_obj__ = self;
    come_call_finalizer2(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result51__;
    come_call_finalizer2(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNilNode_terminated(){
void* __result_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    __result52__ = (_Bool)0;
    return __result52__;
}

char* sNilNode_kind(){
void* __result_obj__;
void* right_value95;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value95=__builtin_string("sNilNode")));
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value96;
struct CVALUE* come_value_67;
void* right_value97;
char* __dec_obj49;
void* right_value98;
void* right_value99;
struct sType* __dec_obj50;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&come_value_67, 0, sizeof(struct CVALUE*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
    come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value96=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 204, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj49=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value97=xsprintf("((void*)0)"))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj50=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 207, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_67->type->mNullValue=(_Bool)1;
    come_value_67->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_67->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
    __result54__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result54__;
    come_call_finalizer2(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNilNode_sline(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    __result55__ = self->sline;
    return __result55__;
}

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value100;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
    __result56__ = __result_obj__ = ((char*)(right_value100=__builtin_string(self->sname)));
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value106;
char* __dec_obj52;
void* right_value107;
struct sNode* __dec_obj53;
void* right_value108;
struct sNode* __dec_obj54;
struct sAddNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj53=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(left))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj54=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value108=sNode_clone(right))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result60__ = __result_obj__ = self;
    come_call_finalizer2(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result60__;
    come_call_finalizer2(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAddNode_terminated(){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    __result61__ = (_Bool)0;
    return __result61__;
}

char* sAddNode_kind(){
void* __result_obj__;
void* right_value109;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
    __result62__ = __result_obj__ = ((char*)(right_value109=__builtin_string("sAddNode")));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_69;
_Bool _if_conditional160;
_Bool __result63__;
void* right_value110;
struct CVALUE* left_value_70;
struct sNode* right_node_71;
_Bool _if_conditional161;
_Bool __result64__;
void* right_value111;
struct CVALUE* right_value_72;
struct sType* type_73;
char* fun_name_74;
_Bool calling_fun_75;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value112;
struct CVALUE* come_value_76;
void* right_value113;
char* __dec_obj55;
void* right_value114;
struct sType* __dec_obj56;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_69, 0, sizeof(struct sNode*));
right_value110 = (void*)0;
memset(&left_value_70, 0, sizeof(struct CVALUE*));
memset(&right_node_71, 0, sizeof(struct sNode*));
right_value111 = (void*)0;
memset(&right_value_72, 0, sizeof(struct CVALUE*));
memset(&type_73, 0, sizeof(struct sType*));
memset(&fun_name_74, 0, sizeof(char*));
memset(&calling_fun_75, 0, sizeof(_Bool));
right_value112 = (void*)0;
memset(&come_value_76, 0, sizeof(struct CVALUE*));
right_value113 = (void*)0;
right_value114 = (void*)0;
    left_node_69=self->mLeft;
    if(_if_conditional160=!node_compile(left_node_69,info),    _if_conditional160) {
        __result63__ = (_Bool)0;
        return __result63__;
    }
    left_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_71=self->mRight;
    if(_if_conditional161=!node_compile(right_node_71,info),    _if_conditional161) {
        __result64__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result64__;
    }
    right_value_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_73=(struct sType*)come_increment_ref_count(left_value_70->type);
    fun_name_74="operator_add";
    if(self->mQuote) {
        calling_fun_75=(_Bool)0;
    }
    else {
        calling_fun_75=operator_overload_fun(type_73,fun_name_74,left_value_70,right_value_72,info);
    }
    if(_if_conditional163=!calling_fun_75,    _if_conditional163) {
        come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 300, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj55=come_value_76->c_value;
        come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%s+%s",left_value_70->c_value,right_value_72->c_value))));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj56=come_value_76->type;
        come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(left_value_70->type))));
        come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_76->type->mHeap=(_Bool)0;
        come_value_76->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_76->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
        come_call_finalizer2(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result65__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result65__;
    come_call_finalizer2(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = self->sline;
    return __result66__;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value115;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
    __result67__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value116;
char* __dec_obj57;
void* right_value117;
struct sNode* __dec_obj58;
void* right_value118;
struct sNode* __dec_obj59;
struct sSubNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
    self->sline=info->sline;
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj58=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(left))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj59=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(right))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result68__ = __result_obj__ = self;
    come_call_finalizer2(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result68__;
    come_call_finalizer2(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sSubNode_terminated(){
void* __result_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
    __result69__ = (_Bool)0;
    return __result69__;
}

char* sSubNode_kind(){
void* __result_obj__;
void* right_value119;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value119=__builtin_string("sSubNode")));
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_77;
_Bool _if_conditional167;
_Bool __result71__;
void* right_value120;
struct CVALUE* left_value_78;
struct sNode* right_node_79;
_Bool _if_conditional168;
_Bool __result72__;
void* right_value121;
struct CVALUE* right_value_80;
struct sType* type_81;
char* fun_name_82;
_Bool calling_fun_83;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value122;
struct CVALUE* come_value_84;
void* right_value123;
char* __dec_obj60;
void* right_value124;
struct sType* __dec_obj61;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_77, 0, sizeof(struct sNode*));
right_value120 = (void*)0;
memset(&left_value_78, 0, sizeof(struct CVALUE*));
memset(&right_node_79, 0, sizeof(struct sNode*));
right_value121 = (void*)0;
memset(&right_value_80, 0, sizeof(struct CVALUE*));
memset(&type_81, 0, sizeof(struct sType*));
memset(&fun_name_82, 0, sizeof(char*));
memset(&calling_fun_83, 0, sizeof(_Bool));
right_value122 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value123 = (void*)0;
right_value124 = (void*)0;
    left_node_77=self->mLeft;
    if(_if_conditional167=!node_compile(left_node_77,info),    _if_conditional167) {
        __result71__ = (_Bool)0;
        return __result71__;
    }
    left_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_79=self->mRight;
    if(_if_conditional168=!node_compile(right_node_79,info),    _if_conditional168) {
        __result72__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result72__;
    }
    right_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_81=(struct sType*)come_increment_ref_count(left_value_78->type);
    fun_name_82="operator_sub";
    if(self->mQuote) {
        calling_fun_83=(_Bool)0;
    }
    else {
        calling_fun_83=operator_overload_fun(type_81,fun_name_82,left_value_78,right_value_80,info);
    }
    if(_if_conditional170=!calling_fun_83,    _if_conditional170) {
        come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 391, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj60=come_value_84->c_value;
        come_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("%s-%s",left_value_78->c_value,right_value_80->c_value))));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj61=come_value_84->type;
        come_value_84->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(left_value_78->type))));
        come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_84->type->mHeap=(_Bool)0;
        come_value_84->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_84->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
        come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result73__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result73__;
    come_call_finalizer2(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = self->sline;
    return __result74__;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value125;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(right_value125=__builtin_string(self->sname)));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __dec_obj62;
void* right_value127;
struct sNode* __dec_obj63;
void* right_value128;
struct sNode* __dec_obj64;
struct sMultNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
    self->sline=info->sline;
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->sname))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj63=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(left))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj64=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(right))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result76__;
    come_call_finalizer2(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMultNode_terminated(){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = (_Bool)0;
    return __result77__;
}

char* sMultNode_kind(){
void* __result_obj__;
void* right_value129;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sMultNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_85;
_Bool _if_conditional174;
_Bool __result79__;
void* right_value130;
struct CVALUE* left_value_86;
struct sNode* right_node_87;
_Bool _if_conditional175;
_Bool __result80__;
void* right_value131;
struct CVALUE* right_value_88;
struct sType* type_89;
char* fun_name_90;
_Bool calling_fun_91;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value132;
struct CVALUE* come_value_92;
void* right_value133;
char* __dec_obj65;
void* right_value134;
struct sType* __dec_obj66;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_85, 0, sizeof(struct sNode*));
right_value130 = (void*)0;
memset(&left_value_86, 0, sizeof(struct CVALUE*));
memset(&right_node_87, 0, sizeof(struct sNode*));
right_value131 = (void*)0;
memset(&right_value_88, 0, sizeof(struct CVALUE*));
memset(&type_89, 0, sizeof(struct sType*));
memset(&fun_name_90, 0, sizeof(char*));
memset(&calling_fun_91, 0, sizeof(_Bool));
right_value132 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value133 = (void*)0;
right_value134 = (void*)0;
    left_node_85=self->mLeft;
    if(_if_conditional174=!node_compile(left_node_85,info),    _if_conditional174) {
        __result79__ = (_Bool)0;
        return __result79__;
    }
    left_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_87=self->mRight;
    if(_if_conditional175=!node_compile(right_node_87,info),    _if_conditional175) {
        __result80__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result80__;
    }
    right_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_89=(struct sType*)come_increment_ref_count(left_value_86->type);
    fun_name_90="operator_mult";
    if(self->mQuote) {
        calling_fun_91=(_Bool)0;
    }
    else {
        calling_fun_91=operator_overload_fun(type_89,fun_name_90,left_value_86,right_value_88,info);
    }
    if(_if_conditional177=!calling_fun_91,    _if_conditional177) {
        come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value132=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 482, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj65=come_value_92->c_value;
        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s*%s",left_value_86->c_value,right_value_88->c_value))));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj66=come_value_92->type;
        come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(left_value_86->type))));
        come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_92->type->mHeap=(_Bool)0;
        come_value_92->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_92->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
        come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result81__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result81__;
    come_call_finalizer2(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMultNode_sline(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
int __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = self->sline;
    return __result82__;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value135;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    __result83__ = __result_obj__ = ((char*)(right_value135=__builtin_string(self->sname)));
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value136;
char* __dec_obj67;
void* right_value137;
struct sNode* __dec_obj68;
void* right_value138;
struct sNode* __dec_obj69;
struct sDivNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
    self->sline=info->sline;
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(info->sname))));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj68=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value137=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value137) { right_value137 = come_decrement_ref_count2(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj69=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=sNode_clone(right))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value138) { right_value138 = come_decrement_ref_count2(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result84__ = __result_obj__ = self;
    come_call_finalizer2(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result84__;
    come_call_finalizer2(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDivNode_terminated(){
void* __result_obj__;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    __result85__ = (_Bool)0;
    return __result85__;
}

char* sDivNode_kind(){
void* __result_obj__;
void* right_value139;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
    __result86__ = __result_obj__ = ((char*)(right_value139=__builtin_string("sDivNode")));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_93;
_Bool _if_conditional181;
_Bool __result87__;
void* right_value140;
struct CVALUE* left_value_94;
struct sNode* right_node_95;
_Bool _if_conditional182;
_Bool __result88__;
void* right_value141;
struct CVALUE* right_value_96;
struct sType* type_97;
char* fun_name_98;
_Bool calling_fun_99;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value142;
struct CVALUE* come_value_100;
void* right_value143;
char* __dec_obj70;
void* right_value144;
struct sType* __dec_obj71;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_93, 0, sizeof(struct sNode*));
right_value140 = (void*)0;
memset(&left_value_94, 0, sizeof(struct CVALUE*));
memset(&right_node_95, 0, sizeof(struct sNode*));
right_value141 = (void*)0;
memset(&right_value_96, 0, sizeof(struct CVALUE*));
memset(&type_97, 0, sizeof(struct sType*));
memset(&fun_name_98, 0, sizeof(char*));
memset(&calling_fun_99, 0, sizeof(_Bool));
right_value142 = (void*)0;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
right_value144 = (void*)0;
    left_node_93=self->mLeft;
    if(_if_conditional181=!node_compile(left_node_93,info),    _if_conditional181) {
        __result87__ = (_Bool)0;
        return __result87__;
    }
    left_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_95=self->mRight;
    if(_if_conditional182=!node_compile(right_node_95,info),    _if_conditional182) {
        __result88__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    right_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_97=(struct sType*)come_increment_ref_count(left_value_94->type);
    fun_name_98="operator_div";
    if(self->mQuote) {
        calling_fun_99=(_Bool)0;
    }
    else {
        calling_fun_99=operator_overload_fun(type_97,fun_name_98,left_value_94,right_value_96,info);
    }
    if(_if_conditional184=!calling_fun_99,    _if_conditional184) {
        come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 573, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj70=come_value_100->c_value;
        come_value_100->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("%s/%s",left_value_94->c_value,right_value_96->c_value))));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj71=come_value_100->type;
        come_value_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(left_value_94->type))));
        come_call_finalizer2(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_100->type->mHeap=(_Bool)0;
        come_value_100->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_100->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_100));
        come_call_finalizer2(CVALUE_finalize,come_value_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result89__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result89__;
    come_call_finalizer2(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sDivNode_sline(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = self->sline;
    return __result90__;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value145;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value145=__builtin_string(self->sname)));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value146;
char* __dec_obj72;
void* right_value147;
struct sNode* __dec_obj73;
void* right_value148;
struct sNode* __dec_obj74;
struct sModNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    self->sline=info->sline;
    __dec_obj72=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(info->sname))));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj73=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(left))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj74=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value148=sNode_clone(right))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value148) { right_value148 = come_decrement_ref_count2(right_value148, ((struct sNode*)right_value148)->finalize, ((struct sNode*)right_value148)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result92__ = __result_obj__ = self;
    come_call_finalizer2(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result92__;
    come_call_finalizer2(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sModNode_terminated(){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = (_Bool)0;
    return __result93__;
}

char* sModNode_kind(){
void* __result_obj__;
void* right_value149;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sModNode")));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_101;
_Bool _if_conditional188;
_Bool __result95__;
void* right_value150;
struct CVALUE* left_value_102;
struct sNode* right_node_103;
_Bool _if_conditional189;
_Bool __result96__;
void* right_value151;
struct CVALUE* right_value_104;
struct sType* type_105;
char* fun_name_106;
_Bool calling_fun_107;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value152;
struct CVALUE* come_value_108;
void* right_value153;
char* __dec_obj75;
void* right_value154;
struct sType* __dec_obj76;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_101, 0, sizeof(struct sNode*));
right_value150 = (void*)0;
memset(&left_value_102, 0, sizeof(struct CVALUE*));
memset(&right_node_103, 0, sizeof(struct sNode*));
right_value151 = (void*)0;
memset(&right_value_104, 0, sizeof(struct CVALUE*));
memset(&type_105, 0, sizeof(struct sType*));
memset(&fun_name_106, 0, sizeof(char*));
memset(&calling_fun_107, 0, sizeof(_Bool));
right_value152 = (void*)0;
memset(&come_value_108, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
right_value154 = (void*)0;
    left_node_101=self->mLeft;
    if(_if_conditional188=!node_compile(left_node_101,info),    _if_conditional188) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    left_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_103=self->mRight;
    if(_if_conditional189=!node_compile(right_node_103,info),    _if_conditional189) {
        __result96__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result96__;
    }
    right_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value151=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_105=(struct sType*)come_increment_ref_count(left_value_102->type);
    fun_name_106="operator_mod";
    if(self->mQuote) {
        calling_fun_107=(_Bool)0;
    }
    else {
        calling_fun_107=operator_overload_fun(type_105,fun_name_106,left_value_102,right_value_104,info);
    }
    if(_if_conditional191=!calling_fun_107,    _if_conditional191) {
        come_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 664, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj75=come_value_108->c_value;
        come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s%%%s",left_value_102->c_value,right_value_104->c_value))));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj76=come_value_108->type;
        come_value_108->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(left_value_102->type))));
        come_call_finalizer2(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_108->type->mHeap=(_Bool)0;
        come_value_108->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_108->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
        come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result97__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sModNode_sline(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = self->sline;
    return __result98__;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value155;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value155=__builtin_string(self->sname)));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value156;
char* __dec_obj77;
void* right_value157;
struct sNode* __dec_obj78;
void* right_value158;
struct sNode* __dec_obj79;
struct sLShiftNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
    self->sline=info->sline;
    __dec_obj77=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(info->sname))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj78=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=sNode_clone(left))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj79=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=sNode_clone(right))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result100__ = __result_obj__ = self;
    come_call_finalizer2(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result100__;
    come_call_finalizer2(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLShiftNode_terminated(){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = (_Bool)0;
    return __result101__;
}

char* sLShiftNode_kind(){
void* __result_obj__;
void* right_value159;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value159=__builtin_string("sLShiftNode")));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_109;
_Bool _if_conditional195;
_Bool __result103__;
void* right_value160;
struct CVALUE* left_value_110;
struct sNode* right_node_111;
_Bool _if_conditional196;
_Bool __result104__;
void* right_value161;
struct CVALUE* right_value_112;
struct sType* type_113;
char* fun_name_114;
_Bool calling_fun_115;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value162;
struct CVALUE* come_value_116;
void* right_value163;
char* __dec_obj80;
void* right_value164;
struct sType* __dec_obj81;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_109, 0, sizeof(struct sNode*));
right_value160 = (void*)0;
memset(&left_value_110, 0, sizeof(struct CVALUE*));
memset(&right_node_111, 0, sizeof(struct sNode*));
right_value161 = (void*)0;
memset(&right_value_112, 0, sizeof(struct CVALUE*));
memset(&type_113, 0, sizeof(struct sType*));
memset(&fun_name_114, 0, sizeof(char*));
memset(&calling_fun_115, 0, sizeof(_Bool));
right_value162 = (void*)0;
memset(&come_value_116, 0, sizeof(struct CVALUE*));
right_value163 = (void*)0;
right_value164 = (void*)0;
    left_node_109=self->mLeft;
    if(_if_conditional195=!node_compile(left_node_109,info),    _if_conditional195) {
        __result103__ = (_Bool)0;
        return __result103__;
    }
    left_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_111=self->mRight;
    if(_if_conditional196=!node_compile(right_node_111,info),    _if_conditional196) {
        __result104__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result104__;
    }
    right_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_113=(struct sType*)come_increment_ref_count(left_value_110->type);
    fun_name_114="operator_lshift";
    if(self->mQuote) {
        calling_fun_115=(_Bool)0;
    }
    else {
        calling_fun_115=operator_overload_fun(type_113,fun_name_114,left_value_110,right_value_112,info);
    }
    if(_if_conditional198=!calling_fun_115,    _if_conditional198) {
        come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 755, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj80=come_value_116->c_value;
        come_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("%s<<%s",left_value_110->c_value,right_value_112->c_value))));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj81=come_value_116->type;
        come_value_116->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(left_value_110->type))));
        come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_116->type->mHeap=(_Bool)0;
        come_value_116->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_116->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
        come_call_finalizer2(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result105__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result105__;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = self->sline;
    return __result106__;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value165;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value165=__builtin_string(self->sname)));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value166;
char* __dec_obj82;
void* right_value167;
struct sNode* __dec_obj83;
void* right_value168;
struct sNode* __dec_obj84;
struct sRShiftNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
    self->sline=info->sline;
    __dec_obj82=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(info->sname))));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj84=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=sNode_clone(right))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value168) { right_value168 = come_decrement_ref_count2(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result108__ = __result_obj__ = self;
    come_call_finalizer2(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result108__;
    come_call_finalizer2(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRShiftNode_terminated(){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    __result109__ = (_Bool)0;
    return __result109__;
}

char* sRShiftNode_kind(){
void* __result_obj__;
void* right_value169;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
    __result110__ = __result_obj__ = ((char*)(right_value169=__builtin_string("sRShiftNode")));
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_117;
_Bool _if_conditional202;
_Bool __result111__;
void* right_value170;
struct CVALUE* left_value_118;
struct sNode* right_node_119;
_Bool _if_conditional203;
_Bool __result112__;
void* right_value171;
struct CVALUE* right_value_120;
struct sType* type_121;
char* fun_name_122;
_Bool calling_fun_123;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value172;
struct CVALUE* come_value_124;
void* right_value173;
char* __dec_obj85;
void* right_value174;
struct sType* __dec_obj86;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_117, 0, sizeof(struct sNode*));
right_value170 = (void*)0;
memset(&left_value_118, 0, sizeof(struct CVALUE*));
memset(&right_node_119, 0, sizeof(struct sNode*));
right_value171 = (void*)0;
memset(&right_value_120, 0, sizeof(struct CVALUE*));
memset(&type_121, 0, sizeof(struct sType*));
memset(&fun_name_122, 0, sizeof(char*));
memset(&calling_fun_123, 0, sizeof(_Bool));
right_value172 = (void*)0;
memset(&come_value_124, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
right_value174 = (void*)0;
    left_node_117=self->mLeft;
    if(_if_conditional202=!node_compile(left_node_117,info),    _if_conditional202) {
        __result111__ = (_Bool)0;
        return __result111__;
    }
    left_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_119=self->mRight;
    if(_if_conditional203=!node_compile(right_node_119,info),    _if_conditional203) {
        __result112__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result112__;
    }
    right_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_121=(struct sType*)come_increment_ref_count(left_value_118->type);
    fun_name_122="operator_rshift";
    if(self->mQuote) {
        calling_fun_123=(_Bool)0;
    }
    else {
        calling_fun_123=operator_overload_fun(type_121,fun_name_122,left_value_118,right_value_120,info);
    }
    if(_if_conditional205=!calling_fun_123,    _if_conditional205) {
        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 846, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj85=come_value_124->c_value;
        come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s>>%s",left_value_118->c_value,right_value_120->c_value))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj86=come_value_124->type;
        come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_clone(left_value_118->type))));
        come_call_finalizer2(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_124->type->mHeap=(_Bool)0;
        come_value_124->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_124->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        come_call_finalizer2(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result113__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result113__;
    come_call_finalizer2(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = self->sline;
    return __result114__;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value175;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
    __result115__ = __result_obj__ = ((char*)(right_value175=__builtin_string(self->sname)));
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result115__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value176;
char* __dec_obj87;
void* right_value177;
struct sNode* __dec_obj88;
void* right_value178;
struct sNode* __dec_obj89;
struct sGtEqNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj89=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(right))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result116__ = __result_obj__ = self;
    come_call_finalizer2(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result116__;
    come_call_finalizer2(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtEqNode_terminated(){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = (_Bool)0;
    return __result117__;
}

char* sGtEqNode_kind(){
void* __result_obj__;
void* right_value179;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result118__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sGtEqNode")));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result118__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_125;
_Bool _if_conditional209;
_Bool __result119__;
void* right_value180;
struct CVALUE* left_value_126;
struct sNode* right_node_127;
_Bool _if_conditional210;
_Bool __result120__;
void* right_value181;
struct CVALUE* right_value_128;
struct sType* type_129;
char* fun_name_130;
_Bool calling_fun_131;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value182;
struct CVALUE* come_value_132;
void* right_value183;
char* __dec_obj90;
void* right_value184;
struct sType* __dec_obj91;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_125, 0, sizeof(struct sNode*));
right_value180 = (void*)0;
memset(&left_value_126, 0, sizeof(struct CVALUE*));
memset(&right_node_127, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&right_value_128, 0, sizeof(struct CVALUE*));
memset(&type_129, 0, sizeof(struct sType*));
memset(&fun_name_130, 0, sizeof(char*));
memset(&calling_fun_131, 0, sizeof(_Bool));
right_value182 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
right_value184 = (void*)0;
    left_node_125=self->mLeft;
    if(_if_conditional209=!node_compile(left_node_125,info),    _if_conditional209) {
        __result119__ = (_Bool)0;
        return __result119__;
    }
    left_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_127=self->mRight;
    if(_if_conditional210=!node_compile(right_node_127,info),    _if_conditional210) {
        __result120__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result120__;
    }
    right_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_129=(struct sType*)come_increment_ref_count(left_value_126->type);
    fun_name_130="operator_gteq";
    if(self->mQuote) {
        calling_fun_131=(_Bool)0;
    }
    else {
        calling_fun_131=operator_overload_fun(type_129,fun_name_130,left_value_126,right_value_128,info);
    }
    if(_if_conditional212=!calling_fun_131,    _if_conditional212) {
        come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 937, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj90=come_value_132->c_value;
        come_value_132->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s>=%s",left_value_126->c_value,right_value_128->c_value))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj91=come_value_132->type;
        come_value_132->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(left_value_126->type))));
        come_call_finalizer2(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_132->type->mHeap=(_Bool)0;
        come_value_132->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_132->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
        come_call_finalizer2(CVALUE_finalize,come_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result121__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result121__;
    come_call_finalizer2(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = self->sline;
    return __result122__;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value185;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
    __result123__ = __result_obj__ = ((char*)(right_value185=__builtin_string(self->sname)));
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value186;
char* __dec_obj92;
void* right_value187;
struct sNode* __dec_obj93;
void* right_value188;
struct sNode* __dec_obj94;
struct sLtEqNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string(info->sname))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj93=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=sNode_clone(left))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj94=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=sNode_clone(right))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value188) { right_value188 = come_decrement_ref_count2(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result124__ = __result_obj__ = self;
    come_call_finalizer2(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result124__;
    come_call_finalizer2(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtEqNode_terminated(){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = (_Bool)0;
    return __result125__;
}

char* sLtEqNode_kind(){
void* __result_obj__;
void* right_value189;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
    __result126__ = __result_obj__ = ((char*)(right_value189=__builtin_string("sLtEqNode")));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_133;
_Bool _if_conditional216;
_Bool __result127__;
void* right_value190;
struct CVALUE* left_value_134;
struct sNode* right_node_135;
_Bool _if_conditional217;
_Bool __result128__;
void* right_value191;
struct CVALUE* right_value_136;
struct sType* type_137;
char* fun_name_138;
_Bool calling_fun_139;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value192;
struct CVALUE* come_value_140;
void* right_value193;
char* __dec_obj95;
void* right_value194;
struct sType* __dec_obj96;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_133, 0, sizeof(struct sNode*));
right_value190 = (void*)0;
memset(&left_value_134, 0, sizeof(struct CVALUE*));
memset(&right_node_135, 0, sizeof(struct sNode*));
right_value191 = (void*)0;
memset(&right_value_136, 0, sizeof(struct CVALUE*));
memset(&type_137, 0, sizeof(struct sType*));
memset(&fun_name_138, 0, sizeof(char*));
memset(&calling_fun_139, 0, sizeof(_Bool));
right_value192 = (void*)0;
memset(&come_value_140, 0, sizeof(struct CVALUE*));
right_value193 = (void*)0;
right_value194 = (void*)0;
    left_node_133=self->mLeft;
    if(_if_conditional216=!node_compile(left_node_133,info),    _if_conditional216) {
        __result127__ = (_Bool)0;
        return __result127__;
    }
    left_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_135=self->mRight;
    if(_if_conditional217=!node_compile(right_node_135,info),    _if_conditional217) {
        __result128__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result128__;
    }
    right_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_137=(struct sType*)come_increment_ref_count(left_value_134->type);
    fun_name_138="operator_lteq";
    if(self->mQuote) {
        calling_fun_139=(_Bool)0;
    }
    else {
        calling_fun_139=operator_overload_fun(type_137,fun_name_138,left_value_134,right_value_136,info);
    }
    if(_if_conditional219=!calling_fun_139,    _if_conditional219) {
        come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1028, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj95=come_value_140->c_value;
        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s<=%s",left_value_134->c_value,right_value_136->c_value))));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj96=come_value_140->type;
        come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(left_value_134->type))));
        come_call_finalizer2(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_140->type->mHeap=(_Bool)0;
        come_value_140->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_140->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
        come_call_finalizer2(CVALUE_finalize,come_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result129__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result129__;
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = self->sline;
    return __result130__;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value195;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    __result131__ = __result_obj__ = ((char*)(right_value195=__builtin_string(self->sname)));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result131__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value196;
char* __dec_obj97;
void* right_value197;
struct sNode* __dec_obj98;
void* right_value198;
struct sNode* __dec_obj99;
struct sLtNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj98=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=sNode_clone(left))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value197) { right_value197 = come_decrement_ref_count2(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj99=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=sNode_clone(right))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value198) { right_value198 = come_decrement_ref_count2(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result132__ = __result_obj__ = self;
    come_call_finalizer2(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result132__;
    come_call_finalizer2(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtNode_terminated(){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = (_Bool)0;
    return __result133__;
}

char* sLtNode_kind(){
void* __result_obj__;
void* right_value199;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
    __result134__ = __result_obj__ = ((char*)(right_value199=__builtin_string("sLtNode")));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_141;
_Bool _if_conditional223;
_Bool __result135__;
void* right_value200;
struct CVALUE* left_value_142;
struct sNode* right_node_143;
_Bool _if_conditional224;
_Bool __result136__;
void* right_value201;
struct CVALUE* right_value_144;
struct sType* type_145;
char* fun_name_146;
_Bool calling_fun_147;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value202;
struct CVALUE* come_value_148;
void* right_value203;
char* __dec_obj100;
void* right_value204;
struct sType* __dec_obj101;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_141, 0, sizeof(struct sNode*));
right_value200 = (void*)0;
memset(&left_value_142, 0, sizeof(struct CVALUE*));
memset(&right_node_143, 0, sizeof(struct sNode*));
right_value201 = (void*)0;
memset(&right_value_144, 0, sizeof(struct CVALUE*));
memset(&type_145, 0, sizeof(struct sType*));
memset(&fun_name_146, 0, sizeof(char*));
memset(&calling_fun_147, 0, sizeof(_Bool));
right_value202 = (void*)0;
memset(&come_value_148, 0, sizeof(struct CVALUE*));
right_value203 = (void*)0;
right_value204 = (void*)0;
    left_node_141=self->mLeft;
    if(_if_conditional223=!node_compile(left_node_141,info),    _if_conditional223) {
        __result135__ = (_Bool)0;
        return __result135__;
    }
    left_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_143=self->mRight;
    if(_if_conditional224=!node_compile(right_node_143,info),    _if_conditional224) {
        __result136__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result136__;
    }
    right_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_145=(struct sType*)come_increment_ref_count(left_value_142->type);
    fun_name_146="operator_lt";
    if(self->mQuote) {
        calling_fun_147=(_Bool)0;
    }
    else {
        calling_fun_147=operator_overload_fun(type_145,fun_name_146,left_value_142,right_value_144,info);
    }
    if(_if_conditional226=!calling_fun_147,    _if_conditional226) {
        come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1119, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj100=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("%s<%s",left_value_142->c_value,right_value_144->c_value))));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj101=come_value_148->type;
        come_value_148->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(left_value_142->type))));
        come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_148->type->mHeap=(_Bool)0;
        come_value_148->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_148->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
        come_call_finalizer2(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result137__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result137__;
    come_call_finalizer2(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLtNode_sline(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    __result138__ = self->sline;
    return __result138__;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value205;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    __result139__ = __result_obj__ = ((char*)(right_value205=__builtin_string(self->sname)));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result139__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value206;
char* __dec_obj102;
void* right_value207;
struct sNode* __dec_obj103;
void* right_value208;
struct sNode* __dec_obj104;
struct sGtNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
    self->sline=info->sline;
    __dec_obj102=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(info->sname))));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj103=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value207=sNode_clone(left))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value207) { right_value207 = come_decrement_ref_count2(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj104=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(right))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result140__ = __result_obj__ = self;
    come_call_finalizer2(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result140__;
    come_call_finalizer2(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtNode_terminated(){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    __result141__ = (_Bool)0;
    return __result141__;
}

char* sGtNode_kind(){
void* __result_obj__;
void* right_value209;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    __result142__ = __result_obj__ = ((char*)(right_value209=__builtin_string("sGtNode")));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_149;
_Bool _if_conditional230;
_Bool __result143__;
void* right_value210;
struct CVALUE* left_value_150;
struct sNode* right_node_151;
_Bool _if_conditional231;
_Bool __result144__;
void* right_value211;
struct CVALUE* right_value_152;
struct sType* type_153;
char* fun_name_154;
_Bool calling_fun_155;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value212;
struct CVALUE* come_value_156;
void* right_value213;
char* __dec_obj105;
void* right_value214;
struct sType* __dec_obj106;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_149, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
memset(&left_value_150, 0, sizeof(struct CVALUE*));
memset(&right_node_151, 0, sizeof(struct sNode*));
right_value211 = (void*)0;
memset(&right_value_152, 0, sizeof(struct CVALUE*));
memset(&type_153, 0, sizeof(struct sType*));
memset(&fun_name_154, 0, sizeof(char*));
memset(&calling_fun_155, 0, sizeof(_Bool));
right_value212 = (void*)0;
memset(&come_value_156, 0, sizeof(struct CVALUE*));
right_value213 = (void*)0;
right_value214 = (void*)0;
    left_node_149=self->mLeft;
    if(_if_conditional230=!node_compile(left_node_149,info),    _if_conditional230) {
        __result143__ = (_Bool)0;
        return __result143__;
    }
    left_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_151=self->mRight;
    if(_if_conditional231=!node_compile(right_node_151,info),    _if_conditional231) {
        __result144__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result144__;
    }
    right_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_153=(struct sType*)come_increment_ref_count(left_value_150->type);
    fun_name_154="operator_gt";
    if(self->mQuote) {
        calling_fun_155=(_Bool)0;
    }
    else {
        calling_fun_155=operator_overload_fun(type_153,fun_name_154,left_value_150,right_value_152,info);
    }
    if(_if_conditional233=!calling_fun_155,    _if_conditional233) {
        come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1210, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj105=come_value_156->c_value;
        come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("%s>%s",left_value_150->c_value,right_value_152->c_value))));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj106=come_value_156->type;
        come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(left_value_150->type))));
        come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_156->type->mHeap=(_Bool)0;
        come_value_156->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_156->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
        come_call_finalizer2(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result145__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result145__;
    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sGtNode_sline(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    __result146__ = self->sline;
    return __result146__;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value215;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
    __result147__ = __result_obj__ = ((char*)(right_value215=__builtin_string(self->sname)));
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result147__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value216;
char* __dec_obj107;
void* right_value217;
struct sNode* __dec_obj108;
void* right_value218;
struct sNode* __dec_obj109;
struct sEqNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    self->sline=info->sline;
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(info->sname))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj108=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(left))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj109=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(right))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result148__ = __result_obj__ = self;
    come_call_finalizer2(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result148__;
    come_call_finalizer2(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sEqNode_sline(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = self->sline;
    return __result149__;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value219;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
    __result150__ = __result_obj__ = ((char*)(right_value219=__builtin_string(self->sname)));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sEqNode_terminated(){
void* __result_obj__;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    __result151__ = (_Bool)0;
    return __result151__;
}

char* sEqNode_kind(){
void* __result_obj__;
void* right_value220;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
    __result152__ = __result_obj__ = ((char*)(right_value220=__builtin_string("sEqNode")));
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result152__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_157;
_Bool _if_conditional237;
_Bool __result153__;
void* right_value221;
struct CVALUE* left_value_158;
struct sNode* right_node_159;
_Bool _if_conditional238;
_Bool __result154__;
void* right_value222;
struct CVALUE* right_value_160;
void* right_value223;
struct CVALUE* come_value_161;
void* right_value224;
char* __dec_obj110;
void* right_value225;
struct sType* __dec_obj111;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_157, 0, sizeof(struct sNode*));
right_value221 = (void*)0;
memset(&left_value_158, 0, sizeof(struct CVALUE*));
memset(&right_node_159, 0, sizeof(struct sNode*));
right_value222 = (void*)0;
memset(&right_value_160, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
right_value225 = (void*)0;
    left_node_157=self->mLeft;
    if(_if_conditional237=!node_compile(left_node_157,info),    _if_conditional237) {
        __result153__ = (_Bool)0;
        return __result153__;
    }
    left_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_159=self->mRight;
    if(_if_conditional238=!node_compile(right_node_159,info),    _if_conditional238) {
        __result154__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result154__;
    }
    right_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1299, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj110=come_value_161->c_value;
    come_value_161->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("%s==%s",left_value_158->c_value,right_value_160->c_value))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj111=come_value_161->type;
    come_value_161->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_value_158->type))));
    come_call_finalizer2(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_161->type->mHeap=(_Bool)0;
    come_value_161->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_161->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_161));
    __result155__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result155__;
    come_call_finalizer2(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value226;
char* __dec_obj112;
void* right_value227;
struct sNode* __dec_obj113;
void* right_value228;
struct sNode* __dec_obj114;
struct sNotEqNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
    self->sline=info->sline;
    __dec_obj112=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(info->sname))));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj113=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(left))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value227) { right_value227 = come_decrement_ref_count2(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj114=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=sNode_clone(right))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result156__ = __result_obj__ = self;
    come_call_finalizer2(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result156__;
    come_call_finalizer2(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEqNode_terminated(){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = (_Bool)0;
    return __result157__;
}

char* sNotEqNode_kind(){
void* __result_obj__;
void* right_value229;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
    __result158__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sNotEqNode")));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_162;
_Bool _if_conditional242;
_Bool __result159__;
void* right_value230;
struct CVALUE* left_value_163;
struct sNode* right_node_164;
_Bool _if_conditional243;
_Bool __result160__;
void* right_value231;
struct CVALUE* right_value_165;
void* right_value232;
struct CVALUE* come_value_166;
void* right_value233;
char* __dec_obj115;
void* right_value234;
struct sType* __dec_obj116;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_162, 0, sizeof(struct sNode*));
right_value230 = (void*)0;
memset(&left_value_163, 0, sizeof(struct CVALUE*));
memset(&right_node_164, 0, sizeof(struct sNode*));
right_value231 = (void*)0;
memset(&right_value_165, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
memset(&come_value_166, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    left_node_162=self->mLeft;
    if(_if_conditional242=!node_compile(left_node_162,info),    _if_conditional242) {
        __result159__ = (_Bool)0;
        return __result159__;
    }
    left_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_164=self->mRight;
    if(_if_conditional243=!node_compile(right_node_164,info),    _if_conditional243) {
        __result160__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result160__;
    }
    right_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1367, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj115=come_value_166->c_value;
    come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("%s!=%s",left_value_163->c_value,right_value_165->c_value))));
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj116=come_value_166->type;
    come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(left_value_163->type))));
    come_call_finalizer2(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_166->type->mHeap=(_Bool)0;
    come_value_166->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_166->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
    __result161__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result161__;
    come_call_finalizer2(CVALUE_finalize,left_value_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = self->sline;
    return __result162__;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value235;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
    __result163__ = __result_obj__ = ((char*)(right_value235=__builtin_string(self->sname)));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value236;
char* __dec_obj117;
void* right_value237;
struct sNode* __dec_obj118;
void* right_value238;
struct sNode* __dec_obj119;
struct sEq2Node* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
    self->sline=info->sline;
    __dec_obj117=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(info->sname))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=sNode_clone(left))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj119=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=sNode_clone(right))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result164__ = __result_obj__ = self;
    come_call_finalizer2(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result164__;
    come_call_finalizer2(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sEq2Node_terminated(){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    __result165__ = (_Bool)0;
    return __result165__;
}

char* sEq2Node_kind(){
void* __result_obj__;
void* right_value239;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value239 = (void*)0;
    __result166__ = __result_obj__ = ((char*)(right_value239=__builtin_string("sEq2Node")));
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result166__;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_167;
_Bool _if_conditional247;
_Bool __result167__;
void* right_value240;
struct CVALUE* left_value_168;
struct sNode* right_node_169;
_Bool _if_conditional248;
_Bool __result168__;
void* right_value241;
struct CVALUE* right_value_170;
struct sType* type_171;
char* fun_name_172;
_Bool calling_fun_173;
_Bool _if_conditional249;
_Bool _if_conditional250;
void* right_value242;
struct CVALUE* come_value_174;
void* right_value243;
char* __dec_obj120;
void* right_value244;
struct sType* __dec_obj121;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_167, 0, sizeof(struct sNode*));
right_value240 = (void*)0;
memset(&left_value_168, 0, sizeof(struct CVALUE*));
memset(&right_node_169, 0, sizeof(struct sNode*));
right_value241 = (void*)0;
memset(&right_value_170, 0, sizeof(struct CVALUE*));
memset(&type_171, 0, sizeof(struct sType*));
memset(&fun_name_172, 0, sizeof(char*));
memset(&calling_fun_173, 0, sizeof(_Bool));
right_value242 = (void*)0;
memset(&come_value_174, 0, sizeof(struct CVALUE*));
right_value243 = (void*)0;
right_value244 = (void*)0;
    left_node_167=self->mLeft;
    if(_if_conditional247=!node_compile(left_node_167,info),    _if_conditional247) {
        __result167__ = (_Bool)0;
        return __result167__;
    }
    left_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_169=self->mRight;
    if(_if_conditional248=!node_compile(right_node_169,info),    _if_conditional248) {
        __result168__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result168__;
    }
    right_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_171=(struct sType*)come_increment_ref_count(left_value_168->type);
    fun_name_172="operator_equals";
    if(self->mQuote) {
        calling_fun_173=(_Bool)0;
    }
    else {
        calling_fun_173=operator_overload_fun(type_171,fun_name_172,left_value_168,right_value_170,info);
    }
    if(_if_conditional250=!calling_fun_173,    _if_conditional250) {
        come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1458, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj120=come_value_174->c_value;
        come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value243=xsprintf("%s==%s",left_value_168->c_value,right_value_170->c_value))));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj121=come_value_174->type;
        come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(left_value_168->type))));
        come_call_finalizer2(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_174->type->mHeap=(_Bool)0;
        come_value_174->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_174->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
        come_call_finalizer2(CVALUE_finalize,come_value_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result169__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result169__;
    come_call_finalizer2(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    __result170__ = self->sline;
    return __result170__;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
void* right_value245;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
    __result171__ = __result_obj__ = ((char*)(right_value245=__builtin_string(self->sname)));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result171__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value246;
char* __dec_obj122;
void* right_value247;
struct sNode* __dec_obj123;
void* right_value248;
struct sNode* __dec_obj124;
struct sNotEq2Node* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
    self->sline=info->sline;
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(info->sname))));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj123=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj124=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNode_clone(right))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result172__ = __result_obj__ = self;
    come_call_finalizer2(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result172__;
    come_call_finalizer2(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEq2Node_terminated(){
void* __result_obj__;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    __result173__ = (_Bool)0;
    return __result173__;
}

char* sNotEq2Node_kind(){
void* __result_obj__;
void* right_value249;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value249 = (void*)0;
    __result174__ = __result_obj__ = ((char*)(right_value249=__builtin_string("sNotEq2Node")));
    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result174__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_175;
_Bool _if_conditional254;
_Bool __result175__;
void* right_value250;
struct CVALUE* left_value_176;
struct sNode* right_node_177;
_Bool _if_conditional255;
_Bool __result176__;
void* right_value251;
struct CVALUE* right_value_178;
struct sType* type_179;
char* fun_name_180;
_Bool calling_fun_181;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value252;
struct CVALUE* come_value_182;
void* right_value253;
char* __dec_obj125;
void* right_value254;
struct sType* __dec_obj126;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_175, 0, sizeof(struct sNode*));
right_value250 = (void*)0;
memset(&left_value_176, 0, sizeof(struct CVALUE*));
memset(&right_node_177, 0, sizeof(struct sNode*));
right_value251 = (void*)0;
memset(&right_value_178, 0, sizeof(struct CVALUE*));
memset(&type_179, 0, sizeof(struct sType*));
memset(&fun_name_180, 0, sizeof(char*));
memset(&calling_fun_181, 0, sizeof(_Bool));
right_value252 = (void*)0;
memset(&come_value_182, 0, sizeof(struct CVALUE*));
right_value253 = (void*)0;
right_value254 = (void*)0;
    left_node_175=self->mLeft;
    if(_if_conditional254=!node_compile(left_node_175,info),    _if_conditional254) {
        __result175__ = (_Bool)0;
        return __result175__;
    }
    left_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_177=self->mRight;
    if(_if_conditional255=!node_compile(right_node_177,info),    _if_conditional255) {
        __result176__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result176__;
    }
    right_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_179=(struct sType*)come_increment_ref_count(left_value_176->type);
    fun_name_180="operator_not_equals";
    if(self->mQuote) {
        calling_fun_181=(_Bool)0;
    }
    else {
        calling_fun_181=operator_overload_fun(type_179,fun_name_180,left_value_176,right_value_178,info);
    }
    if(_if_conditional257=!calling_fun_181,    _if_conditional257) {
        come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1549, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj125=come_value_182->c_value;
        come_value_182->c_value=(char*)come_increment_ref_count(((char*)(right_value253=xsprintf("%s!=%s",left_value_176->c_value,right_value_178->c_value))));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj126=come_value_182->type;
        come_value_182->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(left_value_176->type))));
        come_call_finalizer2(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_182->type->mHeap=(_Bool)0;
        come_value_182->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_182->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
        come_call_finalizer2(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result177__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result177__;
    come_call_finalizer2(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
int __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    __result178__ = self->sline;
    return __result178__;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
void* right_value255;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result179__ = __result_obj__ = ((char*)(right_value255=__builtin_string(self->sname)));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result179__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value256;
char* __dec_obj127;
void* right_value257;
struct sNode* __dec_obj128;
void* right_value258;
struct sNode* __dec_obj129;
struct sAndNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
    self->sline=info->sline;
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(info->sname))));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj128=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=sNode_clone(left))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj129=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNode_clone(right))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value258) { right_value258 = come_decrement_ref_count2(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result180__ = __result_obj__ = self;
    come_call_finalizer2(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result180__;
    come_call_finalizer2(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndNode_terminated(){
void* __result_obj__;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
    __result181__ = (_Bool)0;
    return __result181__;
}

char* sAndNode_kind(){
void* __result_obj__;
void* right_value259;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
    __result182__ = __result_obj__ = ((char*)(right_value259=__builtin_string("sAndNode")));
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result182__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_183;
_Bool _if_conditional261;
_Bool __result183__;
void* right_value260;
struct CVALUE* left_value_184;
struct sNode* right_node_185;
_Bool _if_conditional262;
_Bool __result184__;
void* right_value261;
struct CVALUE* right_value_186;
struct sType* type_187;
char* fun_name_188;
_Bool calling_fun_189;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value262;
struct CVALUE* come_value_190;
void* right_value263;
char* __dec_obj130;
void* right_value264;
struct sType* __dec_obj131;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_183, 0, sizeof(struct sNode*));
right_value260 = (void*)0;
memset(&left_value_184, 0, sizeof(struct CVALUE*));
memset(&right_node_185, 0, sizeof(struct sNode*));
right_value261 = (void*)0;
memset(&right_value_186, 0, sizeof(struct CVALUE*));
memset(&type_187, 0, sizeof(struct sType*));
memset(&fun_name_188, 0, sizeof(char*));
memset(&calling_fun_189, 0, sizeof(_Bool));
right_value262 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
right_value263 = (void*)0;
right_value264 = (void*)0;
    left_node_183=self->mLeft;
    if(_if_conditional261=!node_compile(left_node_183,info),    _if_conditional261) {
        __result183__ = (_Bool)0;
        return __result183__;
    }
    left_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_185=self->mRight;
    if(_if_conditional262=!node_compile(right_node_185,info),    _if_conditional262) {
        __result184__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result184__;
    }
    right_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_187=(struct sType*)come_increment_ref_count(left_value_184->type);
    fun_name_188="operator_and";
    if(self->mQuote) {
        calling_fun_189=(_Bool)0;
    }
    else {
        calling_fun_189=operator_overload_fun(type_187,fun_name_188,left_value_184,right_value_186,info);
    }
    if(_if_conditional264=!calling_fun_189,    _if_conditional264) {
        come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1641, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj130=come_value_190->c_value;
        come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("%s&%s",left_value_184->c_value,right_value_186->c_value))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj131=come_value_190->type;
        come_value_190->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(left_value_184->type))));
        come_call_finalizer2(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_190->type->mHeap=(_Bool)0;
        come_value_190->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_190->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
        come_call_finalizer2(CVALUE_finalize,come_value_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result185__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result185__;
    come_call_finalizer2(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndNode_sline(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    __result186__ = self->sline;
    return __result186__;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value265;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
    __result187__ = __result_obj__ = ((char*)(right_value265=__builtin_string(self->sname)));
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result187__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value266;
char* __dec_obj132;
void* right_value267;
struct sNode* __dec_obj133;
void* right_value268;
struct sNode* __dec_obj134;
struct sXOrNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
    self->sline=info->sline;
    __dec_obj132=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string(info->sname))));
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj133=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=sNode_clone(left))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value267) { right_value267 = come_decrement_ref_count2(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj134=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=sNode_clone(right))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value268) { right_value268 = come_decrement_ref_count2(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result188__ = __result_obj__ = self;
    come_call_finalizer2(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result188__;
    come_call_finalizer2(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sXOrNode_terminated(){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    __result189__ = (_Bool)0;
    return __result189__;
}

char* sXOrNode_kind(){
void* __result_obj__;
void* right_value269;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
    __result190__ = __result_obj__ = ((char*)(right_value269=__builtin_string("sXOrNode")));
    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result190__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_191;
_Bool _if_conditional268;
_Bool __result191__;
void* right_value270;
struct CVALUE* left_value_192;
struct sNode* right_node_193;
_Bool _if_conditional269;
_Bool __result192__;
void* right_value271;
struct CVALUE* right_value_194;
struct sType* type_195;
char* fun_name_196;
_Bool calling_fun_197;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value272;
struct CVALUE* come_value_198;
void* right_value273;
char* __dec_obj135;
void* right_value274;
struct sType* __dec_obj136;
_Bool __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_191, 0, sizeof(struct sNode*));
right_value270 = (void*)0;
memset(&left_value_192, 0, sizeof(struct CVALUE*));
memset(&right_node_193, 0, sizeof(struct sNode*));
right_value271 = (void*)0;
memset(&right_value_194, 0, sizeof(struct CVALUE*));
memset(&type_195, 0, sizeof(struct sType*));
memset(&fun_name_196, 0, sizeof(char*));
memset(&calling_fun_197, 0, sizeof(_Bool));
right_value272 = (void*)0;
memset(&come_value_198, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
right_value274 = (void*)0;
    left_node_191=self->mLeft;
    if(_if_conditional268=!node_compile(left_node_191,info),    _if_conditional268) {
        __result191__ = (_Bool)0;
        return __result191__;
    }
    left_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_193=self->mRight;
    if(_if_conditional269=!node_compile(right_node_193,info),    _if_conditional269) {
        __result192__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result192__;
    }
    right_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_195=(struct sType*)come_increment_ref_count(left_value_192->type);
    fun_name_196="operator_xor";
    if(self->mQuote) {
        calling_fun_197=(_Bool)0;
    }
    else {
        calling_fun_197=operator_overload_fun(type_195,fun_name_196,left_value_192,right_value_194,info);
    }
    if(_if_conditional271=!calling_fun_197,    _if_conditional271) {
        come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1732, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj135=come_value_198->c_value;
        come_value_198->c_value=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("%s^%s",left_value_192->c_value,right_value_194->c_value))));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj136=come_value_198->type;
        come_value_198->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_clone(left_value_192->type))));
        come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_198->type->mHeap=(_Bool)0;
        come_value_198->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_198->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_198));
        come_call_finalizer2(CVALUE_finalize,come_value_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result193__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result193__;
    come_call_finalizer2(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
int __result194__;
memset(&__result_obj__, 0, sizeof(void*));
    __result194__ = self->sline;
    return __result194__;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value275;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
    __result195__ = __result_obj__ = ((char*)(right_value275=__builtin_string(self->sname)));
    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result195__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value276;
char* __dec_obj137;
void* right_value277;
struct sNode* __dec_obj138;
void* right_value278;
struct sNode* __dec_obj139;
struct sOrNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
    self->sline=info->sline;
    __dec_obj137=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(info->sname))));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj138=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=sNode_clone(left))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj139=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(right))));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result196__ = __result_obj__ = self;
    come_call_finalizer2(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result196__;
    come_call_finalizer2(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrNode_terminated(){
void* __result_obj__;
_Bool __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    __result197__ = (_Bool)0;
    return __result197__;
}

char* sOrNode_kind(){
void* __result_obj__;
void* right_value279;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
    __result198__ = __result_obj__ = ((char*)(right_value279=__builtin_string("sOrNode")));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result198__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_199;
_Bool _if_conditional275;
_Bool __result199__;
void* right_value280;
struct CVALUE* left_value_200;
struct sNode* right_node_201;
_Bool _if_conditional276;
_Bool __result200__;
void* right_value281;
struct CVALUE* right_value_202;
struct sType* type_203;
char* fun_name_204;
_Bool calling_fun_205;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value282;
struct CVALUE* come_value_206;
void* right_value283;
char* __dec_obj140;
void* right_value284;
struct sType* __dec_obj141;
_Bool __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_199, 0, sizeof(struct sNode*));
right_value280 = (void*)0;
memset(&left_value_200, 0, sizeof(struct CVALUE*));
memset(&right_node_201, 0, sizeof(struct sNode*));
right_value281 = (void*)0;
memset(&right_value_202, 0, sizeof(struct CVALUE*));
memset(&type_203, 0, sizeof(struct sType*));
memset(&fun_name_204, 0, sizeof(char*));
memset(&calling_fun_205, 0, sizeof(_Bool));
right_value282 = (void*)0;
memset(&come_value_206, 0, sizeof(struct CVALUE*));
right_value283 = (void*)0;
right_value284 = (void*)0;
    left_node_199=self->mLeft;
    if(_if_conditional275=!node_compile(left_node_199,info),    _if_conditional275) {
        __result199__ = (_Bool)0;
        return __result199__;
    }
    left_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_201=self->mRight;
    if(_if_conditional276=!node_compile(right_node_201,info),    _if_conditional276) {
        __result200__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result200__;
    }
    right_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_203=(struct sType*)come_increment_ref_count(left_value_200->type);
    fun_name_204="operator_or";
    if(self->mQuote) {
        calling_fun_205=(_Bool)0;
    }
    else {
        calling_fun_205=operator_overload_fun(type_203,fun_name_204,left_value_200,right_value_202,info);
    }
    if(_if_conditional278=!calling_fun_205,    _if_conditional278) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1823, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj140=come_value_206->c_value;
        come_value_206->c_value=(char*)come_increment_ref_count(((char*)(right_value283=xsprintf("%s|%s",left_value_200->c_value,right_value_202->c_value))));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj141=come_value_206->type;
        come_value_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_clone(left_value_200->type))));
        come_call_finalizer2(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_206->type->mHeap=(_Bool)0;
        come_value_206->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_206->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        come_call_finalizer2(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result201__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result201__;
    come_call_finalizer2(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrNode_sline(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
int __result202__;
memset(&__result_obj__, 0, sizeof(void*));
    __result202__ = self->sline;
    return __result202__;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value285;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value285 = (void*)0;
    __result203__ = __result_obj__ = ((char*)(right_value285=__builtin_string(self->sname)));
    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result203__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value286;
char* __dec_obj142;
void* right_value287;
struct sNode* __dec_obj143;
void* right_value288;
struct sNode* __dec_obj144;
struct sAndAndNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
    self->sline=info->sline;
    __dec_obj142=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(info->sname))));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj143=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=sNode_clone(left))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj144=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value288=sNode_clone(right))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value288) { right_value288 = come_decrement_ref_count2(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result204__ = __result_obj__ = self;
    come_call_finalizer2(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result204__;
    come_call_finalizer2(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndAndNode_terminated(){
void* __result_obj__;
_Bool __result205__;
memset(&__result_obj__, 0, sizeof(void*));
    __result205__ = (_Bool)0;
    return __result205__;
}

char* sAndAndNode_kind(){
void* __result_obj__;
void* right_value289;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value289 = (void*)0;
    __result206__ = __result_obj__ = ((char*)(right_value289=__builtin_string("sAndAndNode")));
    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result206__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_207;
_Bool _if_conditional282;
_Bool __result207__;
void* right_value290;
struct CVALUE* left_value_208;
struct sNode* right_node_209;
_Bool _if_conditional283;
_Bool __result208__;
void* right_value291;
struct CVALUE* right_value_210;
struct sType* type_211;
char* fun_name_212;
_Bool calling_fun_213;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value292;
struct CVALUE* come_value_214;
void* right_value293;
char* __dec_obj145;
void* right_value294;
struct sType* __dec_obj146;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_207, 0, sizeof(struct sNode*));
right_value290 = (void*)0;
memset(&left_value_208, 0, sizeof(struct CVALUE*));
memset(&right_node_209, 0, sizeof(struct sNode*));
right_value291 = (void*)0;
memset(&right_value_210, 0, sizeof(struct CVALUE*));
memset(&type_211, 0, sizeof(struct sType*));
memset(&fun_name_212, 0, sizeof(char*));
memset(&calling_fun_213, 0, sizeof(_Bool));
right_value292 = (void*)0;
memset(&come_value_214, 0, sizeof(struct CVALUE*));
right_value293 = (void*)0;
right_value294 = (void*)0;
    left_node_207=self->mLeft;
    if(_if_conditional282=!node_compile(left_node_207,info),    _if_conditional282) {
        __result207__ = (_Bool)0;
        return __result207__;
    }
    left_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_209=self->mRight;
    if(_if_conditional283=!node_compile(right_node_209,info),    _if_conditional283) {
        __result208__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result208__;
    }
    right_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_211=(struct sType*)come_increment_ref_count(left_value_208->type);
    fun_name_212="operator_andand";
    if(self->mQuote) {
        calling_fun_213=(_Bool)0;
    }
    else {
        calling_fun_213=operator_overload_fun(type_211,fun_name_212,left_value_208,right_value_210,info);
    }
    if(_if_conditional285=!calling_fun_213,    _if_conditional285) {
        come_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1914, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj145=come_value_214->c_value;
        come_value_214->c_value=(char*)come_increment_ref_count(((char*)(right_value293=xsprintf("%s&&%s",left_value_208->c_value,right_value_210->c_value))));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj146=come_value_214->type;
        come_value_214->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(left_value_208->type))));
        come_call_finalizer2(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_214->type->mHeap=(_Bool)0;
        come_value_214->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_214->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_214));
        come_call_finalizer2(CVALUE_finalize,come_value_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result209__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result209__;
    come_call_finalizer2(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
int __result210__;
memset(&__result_obj__, 0, sizeof(void*));
    __result210__ = self->sline;
    return __result210__;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value295;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
    __result211__ = __result_obj__ = ((char*)(right_value295=__builtin_string(self->sname)));
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result211__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value296;
char* __dec_obj147;
void* right_value297;
struct sNode* __dec_obj148;
void* right_value298;
struct sNode* __dec_obj149;
struct sOrOrNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
    self->sline=info->sline;
    __dec_obj147=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(info->sname))));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj148=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=sNode_clone(left))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj149=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNode_clone(right))));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result212__ = __result_obj__ = self;
    come_call_finalizer2(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result212__;
    come_call_finalizer2(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrOrNode_terminated(){
void* __result_obj__;
_Bool __result213__;
memset(&__result_obj__, 0, sizeof(void*));
    __result213__ = (_Bool)0;
    return __result213__;
}

char* sOrOrNode_kind(){
void* __result_obj__;
void* right_value299;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value299 = (void*)0;
    __result214__ = __result_obj__ = ((char*)(right_value299=__builtin_string("sOrOrNode")));
    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result214__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_215;
_Bool _if_conditional289;
_Bool __result215__;
void* right_value300;
struct CVALUE* left_value_216;
struct sNode* right_node_217;
_Bool _if_conditional290;
_Bool __result216__;
void* right_value301;
struct CVALUE* right_value_218;
struct sType* type_219;
char* fun_name_220;
_Bool calling_fun_221;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value302;
struct CVALUE* come_value_222;
void* right_value303;
char* __dec_obj150;
void* right_value304;
struct sType* __dec_obj151;
_Bool __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_215, 0, sizeof(struct sNode*));
right_value300 = (void*)0;
memset(&left_value_216, 0, sizeof(struct CVALUE*));
memset(&right_node_217, 0, sizeof(struct sNode*));
right_value301 = (void*)0;
memset(&right_value_218, 0, sizeof(struct CVALUE*));
memset(&type_219, 0, sizeof(struct sType*));
memset(&fun_name_220, 0, sizeof(char*));
memset(&calling_fun_221, 0, sizeof(_Bool));
right_value302 = (void*)0;
memset(&come_value_222, 0, sizeof(struct CVALUE*));
right_value303 = (void*)0;
right_value304 = (void*)0;
    left_node_215=self->mLeft;
    if(_if_conditional289=!node_compile(left_node_215,info),    _if_conditional289) {
        __result215__ = (_Bool)0;
        return __result215__;
    }
    left_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_217=self->mRight;
    if(_if_conditional290=!node_compile(right_node_217,info),    _if_conditional290) {
        __result216__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result216__;
    }
    right_value_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value301=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_219=(struct sType*)come_increment_ref_count(left_value_216->type);
    fun_name_220="operator_oror";
    if(self->mQuote) {
        calling_fun_221=(_Bool)0;
    }
    else {
        calling_fun_221=operator_overload_fun(type_219,fun_name_220,left_value_216,right_value_218,info);
    }
    if(_if_conditional292=!calling_fun_221,    _if_conditional292) {
        come_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2004, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj150=come_value_222->c_value;
        come_value_222->c_value=(char*)come_increment_ref_count(((char*)(right_value303=xsprintf("%s||%s",left_value_216->c_value,right_value_218->c_value))));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj151=come_value_222->type;
        come_value_222->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_value_216->type))));
        come_call_finalizer2(sType_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_222->type->mHeap=(_Bool)0;
        come_value_222->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_222->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_222));
        come_call_finalizer2(CVALUE_finalize,come_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result217__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result217__;
    come_call_finalizer2(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
int __result218__;
memset(&__result_obj__, 0, sizeof(void*));
    __result218__ = self->sline;
    return __result218__;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value305;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value305 = (void*)0;
    __result219__ = __result_obj__ = ((char*)(right_value305=__builtin_string(self->sname)));
    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result219__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
void* right_value306;
char* __dec_obj152;
void* right_value307;
struct sNode* __dec_obj153;
void* right_value308;
struct sNode* __dec_obj154;
struct sCommaNode* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
    self->sline=info->sline;
    __dec_obj152=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string(info->sname))));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj153=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(left))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj154=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(right))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result220__ = __result_obj__ = self;
    come_call_finalizer2(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result220__;
    come_call_finalizer2(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sCommaNode_terminated(){
void* __result_obj__;
_Bool __result221__;
memset(&__result_obj__, 0, sizeof(void*));
    __result221__ = (_Bool)0;
    return __result221__;
}

char* sCommaNode_kind(){
void* __result_obj__;
void* right_value309;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
    __result222__ = __result_obj__ = ((char*)(right_value309=__builtin_string("sCommaNode")));
    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result222__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_223;
_Bool _if_conditional296;
_Bool __result223__;
void* right_value310;
struct CVALUE* left_value_224;
struct sNode* right_node_225;
_Bool _if_conditional297;
_Bool __result224__;
void* right_value311;
struct CVALUE* right_value_226;
void* right_value312;
struct CVALUE* come_value_227;
void* right_value313;
char* __dec_obj155;
void* right_value314;
struct sType* __dec_obj156;
_Bool __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_223, 0, sizeof(struct sNode*));
right_value310 = (void*)0;
memset(&left_value_224, 0, sizeof(struct CVALUE*));
memset(&right_node_225, 0, sizeof(struct sNode*));
right_value311 = (void*)0;
memset(&right_value_226, 0, sizeof(struct CVALUE*));
right_value312 = (void*)0;
memset(&come_value_227, 0, sizeof(struct CVALUE*));
right_value313 = (void*)0;
right_value314 = (void*)0;
    left_node_223=self->mLeft;
    if(_if_conditional296=!node_compile(left_node_223,info),    _if_conditional296) {
        __result223__ = (_Bool)0;
        return __result223__;
    }
    left_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_225=self->mRight;
    if(_if_conditional297=!node_compile(right_node_225,info),    _if_conditional297) {
        __result224__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result224__;
    }
    right_value_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2081, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj155=come_value_227->c_value;
    come_value_227->c_value=(char*)come_increment_ref_count(((char*)(right_value313=xsprintf("%s,%s",left_value_224->c_value,right_value_226->c_value))));
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj156=come_value_227->type;
    come_value_227->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(left_value_224->type))));
    come_call_finalizer2(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_227->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_227->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_227));
    __result225__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result225__;
    come_call_finalizer2(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
int __result226__;
memset(&__result_obj__, 0, sizeof(void*));
    __result226__ = self->sline;
    return __result226__;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value315;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value315 = (void*)0;
    __result227__ = __result_obj__ = ((char*)(right_value315=__builtin_string(self->sname)));
    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result227__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
void* right_value316;
char* __dec_obj157;
void* right_value317;
struct sNode* __dec_obj158;
void* right_value318;
struct sNode* __dec_obj159;
void* right_value319;
struct sNode* __dec_obj160;
struct sConditionalNode* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
    self->sline=info->sline;
    __dec_obj157=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(info->sname))));
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj158=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=sNode_clone(value1))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj159=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNode_clone(value2))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj160=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=sNode_clone(value3))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result228__ = __result_obj__ = self;
    come_call_finalizer2(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result228__;
    come_call_finalizer2(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sConditionalNode_terminated(){
void* __result_obj__;
_Bool __result229__;
memset(&__result_obj__, 0, sizeof(void*));
    __result229__ = (_Bool)0;
    return __result229__;
}

char* sConditionalNode_kind(){
void* __result_obj__;
void* right_value320;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
    __result230__ = __result_obj__ = ((char*)(right_value320=__builtin_string("sConditionalNode")));
    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result230__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value1_228;
_Bool _if_conditional302;
_Bool __result231__;
void* right_value321;
struct CVALUE* value1_value_229;
struct sNode* value2_230;
_Bool _if_conditional303;
_Bool __result232__;
void* right_value322;
struct CVALUE* value2_value_231;
struct sNode* value3_232;
_Bool _if_conditional304;
_Bool __result233__;
void* right_value323;
struct CVALUE* value3_value_233;
void* right_value324;
struct CVALUE* come_value_234;
void* right_value325;
char* __dec_obj161;
void* right_value326;
struct sType* __dec_obj162;
_Bool __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value1_228, 0, sizeof(struct sNode*));
right_value321 = (void*)0;
memset(&value1_value_229, 0, sizeof(struct CVALUE*));
memset(&value2_230, 0, sizeof(struct sNode*));
right_value322 = (void*)0;
memset(&value2_value_231, 0, sizeof(struct CVALUE*));
memset(&value3_232, 0, sizeof(struct sNode*));
right_value323 = (void*)0;
memset(&value3_value_233, 0, sizeof(struct CVALUE*));
right_value324 = (void*)0;
memset(&come_value_234, 0, sizeof(struct CVALUE*));
right_value325 = (void*)0;
right_value326 = (void*)0;
    value1_228=self->mValue1;
    if(_if_conditional302=!node_compile(value1_228,info),    _if_conditional302) {
        __result231__ = (_Bool)0;
        return __result231__;
    }
    value1_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value2_230=self->mValue2;
    if(_if_conditional303=!node_compile(value2_230,info),    _if_conditional303) {
        __result232__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result232__;
    }
    value2_value_231=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value322=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value3_232=self->mValue3;
    if(_if_conditional304=!node_compile(value3_232,info),    _if_conditional304) {
        __result233__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,value2_value_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result233__;
    }
    value3_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value323=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value324=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2167, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj161=come_value_234->c_value;
    come_value_234->c_value=(char*)come_increment_ref_count(((char*)(right_value325=xsprintf("%s?%s:%s",value1_value_229->c_value,value2_value_231->c_value,value3_value_233->c_value))));
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj162=come_value_234->type;
    come_value_234->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(value1_value_229->type))));
    come_call_finalizer2(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_234->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_234->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_234));
    __result234__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value2_value_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value3_value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result234__;
    come_call_finalizer2(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value2_value_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value3_value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
int __result235__;
memset(&__result_obj__, 0, sizeof(void*));
    __result235__ = self->sline;
    return __result235__;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value327;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
    __result236__ = __result_obj__ = ((char*)(right_value327=__builtin_string(self->sname)));
    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result236__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
void* right_value328;
struct sNode* node_235;
_Bool _while_condtional10;
_Bool _if_conditional305;
void* right_value329;
struct sNode* right_236;
void* right_value330;
void* right_value331;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value336;
struct sNode* __result239__;
_Bool _if_conditional315;
void* right_value337;
struct sNode* right_238;
void* right_value338;
void* right_value339;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value344;
struct sNode* __result242__;
_Bool _if_conditional325;
void* right_value345;
struct sNode* right_240;
void* right_value346;
void* right_value347;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value352;
struct sNode* __result245__;
_Bool _if_conditional335;
void* right_value353;
struct sNode* right_242;
void* right_value354;
void* right_value355;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value360;
struct sNode* __result248__;
_Bool _if_conditional345;
void* right_value361;
struct sNode* right_244;
void* right_value362;
void* right_value363;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value368;
struct sNode* __result251__;
_Bool _if_conditional355;
void* right_value369;
struct sNode* right_246;
void* right_value370;
void* right_value371;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value376;
struct sNode* __result254__;
struct sNode* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
memset(&node_235, 0, sizeof(struct sNode*));
right_value329 = (void*)0;
memset(&right_236, 0, sizeof(struct sNode*));
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&right_238, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&right_240, 0, sizeof(struct sNode*));
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&right_242, 0, sizeof(struct sNode*));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&right_244, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&right_246, 0, sizeof(struct sNode*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value376 = (void*)0;
    node_235=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=expression_node_v99(info))));
    if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional10=*info->p,    _while_condtional10) {
        if(_if_conditional305=!node_235->terminated(node_235->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional305) {
            info->p++;
            skip_spaces_and_lf(info);
            right_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=mult_exp(info))));
            if(right_value329) { right_value329 = come_decrement_ref_count2(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2203, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value331=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value330=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2203, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_236),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sMultNode_sline;
            _inf_value3->sname=(void*)sMultNode_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result239__ = __result_obj__ = ((struct sNode*)(right_value336=_inf_value3));
            if(right_236) { right_236 = come_decrement_ref_count2(right_236, ((struct sNode*)right_236)->finalize, ((struct sNode*)right_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sMultNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sMultNode_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result239__;
            if(right_236) { right_236 = come_decrement_ref_count2(right_236, ((struct sNode*)right_236)->finalize, ((struct sNode*)right_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional315=*info->p==47&&*(info->p+1)!=61,            _if_conditional315) {
                info->p++;
                skip_spaces_and_lf(info);
                right_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=mult_exp(info))));
                if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2211, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value339=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value338=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2211, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_238),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sDivNode_sline;
                _inf_value4->sname=(void*)sDivNode_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result242__ = __result_obj__ = ((struct sNode*)(right_value344=_inf_value4));
                if(right_238) { right_238 = come_decrement_ref_count2(right_238, ((struct sNode*)right_238)->finalize, ((struct sNode*)right_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sDivNode_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sDivNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result242__;
                if(right_238) { right_238 = come_decrement_ref_count2(right_238, ((struct sNode*)right_238)->finalize, ((struct sNode*)right_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional325=*info->p==37&&*(info->p+1)!=61,                _if_conditional325) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=expression_node_v99(info))));
                    if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2219, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value347=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value346=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2219, "sModNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_240),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sModNode_sline;
                    _inf_value5->sname=(void*)sModNode_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result245__ = __result_obj__ = ((struct sNode*)(right_value352=_inf_value5));
                    if(right_240) { right_240 = come_decrement_ref_count2(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sModNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sModNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result245__;
                    if(right_240) { right_240 = come_decrement_ref_count2(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional335=!node_235->terminated(node_235->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional335) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=mult_exp(info))));
                        if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2227, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value355=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value354=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2227, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_242),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sMultNode_sline;
                        _inf_value6->sname=(void*)sMultNode_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result248__ = __result_obj__ = ((struct sNode*)(right_value360=_inf_value6));
                        if(right_242) { right_242 = come_decrement_ref_count2(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sMultNode_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sMultNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result248__;
                        if(right_242) { right_242 = come_decrement_ref_count2(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional345=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional345) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=mult_exp(info))));
                            if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2235, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value363=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value362=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2235, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_244),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sDivNode_sline;
                            _inf_value7->sname=(void*)sDivNode_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result251__ = __result_obj__ = ((struct sNode*)(right_value368=_inf_value7));
                            if(right_244) { right_244 = come_decrement_ref_count2(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sDivNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sDivNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result251__;
                            if(right_244) { right_244 = come_decrement_ref_count2(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional355=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional355) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=expression_node_v99(info))));
                                if(right_value369) { right_value369 = come_decrement_ref_count2(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2243, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value371=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value370=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2243, "sModNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_246),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sModNode_sline;
                                _inf_value8->sname=(void*)sModNode_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result254__ = __result_obj__ = ((struct sNode*)(right_value376=_inf_value8));
                                if(right_246) { right_246 = come_decrement_ref_count2(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sModNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result254__;
                                if(right_246) { right_246 = come_decrement_ref_count2(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result255__ = __result_obj__ = node_235;
    if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result255__;
    if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional336=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional336) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional337=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional337) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional338=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional338) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional339;
struct sMultNode* __result246__;
void* right_value356;
struct sMultNode* result_243;
_Bool _if_conditional340;
void* right_value357;
struct sNode* __dec_obj172;
_Bool _if_conditional341;
void* right_value358;
struct sNode* __dec_obj173;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value359;
char* __dec_obj174;
struct sMultNode* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value356 = (void*)0;
memset(&result_243, 0, sizeof(struct sMultNode*));
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
                            if(_if_conditional339=self==(void*)0,                            _if_conditional339) {
                                __result246__ = __result_obj__ = (void*)0;
                                return __result246__;
                            }
                            result_243=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value356=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"))));
                            come_call_finalizer2(sMultNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional340=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional340) {
                                __dec_obj172=result_243->mLeft;
                                result_243->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=sNode_clone(self->mLeft))));
                                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional341=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional341) {
                                __dec_obj173=result_243->mRight;
                                result_243->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=sNode_clone(self->mRight))));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional342=self!=((void*)0),                            _if_conditional342) {
                                result_243->mQuote=self->mQuote;
                            }
                            if(_if_conditional343=self!=((void*)0),                            _if_conditional343) {
                                result_243->sline=self->sline;
                            }
                            if(_if_conditional344=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional344) {
                                __dec_obj174=result_243->sname;
                                result_243->sname=(char*)come_increment_ref_count(((char*)(right_value359=string_clone(self->sname))));
                                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result247__ = __result_obj__ = result_243;
                            come_call_finalizer2(sMultNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result247__;
                            come_call_finalizer2(sMultNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional346=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional346) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional347=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional347) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional348=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional348) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional349;
struct sDivNode* __result249__;
void* right_value364;
struct sDivNode* result_245;
_Bool _if_conditional350;
void* right_value365;
struct sNode* __dec_obj175;
_Bool _if_conditional351;
void* right_value366;
struct sNode* __dec_obj176;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value367;
char* __dec_obj177;
struct sDivNode* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value364 = (void*)0;
memset(&result_245, 0, sizeof(struct sDivNode*));
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
                                if(_if_conditional349=self==(void*)0,                                _if_conditional349) {
                                    __result249__ = __result_obj__ = (void*)0;
                                    return __result249__;
                                }
                                result_245=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value364=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"))));
                                come_call_finalizer2(sDivNode_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional350=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional350) {
                                    __dec_obj175=result_245->mLeft;
                                    result_245->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=sNode_clone(self->mLeft))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional351=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional351) {
                                    __dec_obj176=result_245->mRight;
                                    result_245->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=sNode_clone(self->mRight))));
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional352=self!=((void*)0),                                _if_conditional352) {
                                    result_245->mQuote=self->mQuote;
                                }
                                if(_if_conditional353=self!=((void*)0),                                _if_conditional353) {
                                    result_245->sline=self->sline;
                                }
                                if(_if_conditional354=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional354) {
                                    __dec_obj177=result_245->sname;
                                    result_245->sname=(char*)come_increment_ref_count(((char*)(right_value367=string_clone(self->sname))));
                                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result250__ = __result_obj__ = result_245;
                                come_call_finalizer2(sDivNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result250__;
                                come_call_finalizer2(sDivNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional356=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional356) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional357=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional357) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional358=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional358) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional359;
struct sModNode* __result252__;
void* right_value372;
struct sModNode* result_247;
_Bool _if_conditional360;
void* right_value373;
struct sNode* __dec_obj178;
_Bool _if_conditional361;
void* right_value374;
struct sNode* __dec_obj179;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
void* right_value375;
char* __dec_obj180;
struct sModNode* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
right_value372 = (void*)0;
memset(&result_247, 0, sizeof(struct sModNode*));
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
                                    if(_if_conditional359=self==(void*)0,                                    _if_conditional359) {
                                        __result252__ = __result_obj__ = (void*)0;
                                        return __result252__;
                                    }
                                    result_247=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value372=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"))));
                                    come_call_finalizer2(sModNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional360=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional360) {
                                        __dec_obj178=result_247->mLeft;
                                        result_247->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=sNode_clone(self->mLeft))));
                                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional361=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional361) {
                                        __dec_obj179=result_247->mRight;
                                        result_247->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=sNode_clone(self->mRight))));
                                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional362=self!=((void*)0),                                    _if_conditional362) {
                                        result_247->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional363=self!=((void*)0),                                    _if_conditional363) {
                                        result_247->sline=self->sline;
                                    }
                                    if(_if_conditional364=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional364) {
                                        __dec_obj180=result_247->sname;
                                        result_247->sname=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->sname))));
                                        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result253__ = __result_obj__ = result_247;
                                    come_call_finalizer2(sModNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result253__;
                                    come_call_finalizer2(sModNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
void* right_value377;
struct sNode* node_248;
_Bool _while_condtional11;
_Bool _if_conditional365;
void* right_value378;
struct sNode* right_249;
void* right_value379;
void* right_value380;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value385;
struct sNode* __result258__;
_Bool _if_conditional375;
void* right_value386;
struct sNode* right_251;
void* right_value387;
void* right_value388;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value393;
struct sNode* __result261__;
_Bool _if_conditional385;
void* right_value394;
struct sNode* right_253;
void* right_value395;
void* right_value396;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value401;
struct sNode* __result264__;
_Bool _if_conditional395;
void* right_value402;
struct sNode* right_255;
void* right_value403;
void* right_value404;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value409;
struct sNode* __result267__;
struct sNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
memset(&node_248, 0, sizeof(struct sNode*));
right_value378 = (void*)0;
memset(&right_249, 0, sizeof(struct sNode*));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&right_251, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&right_253, 0, sizeof(struct sNode*));
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&right_255, 0, sizeof(struct sNode*));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value409 = (void*)0;
    node_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=mult_exp(info))));
    if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional11=*info->p,    _while_condtional11) {
        if(_if_conditional365=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional365) {
            info->p++;
            skip_spaces_and_lf(info);
            right_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=add_exp(info))));
            if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2269, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value380=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value379=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2269, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_249),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sAddNode_sline;
            _inf_value9->sname=(void*)sAddNode_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result258__ = __result_obj__ = ((struct sNode*)(right_value385=_inf_value9));
            if(right_249) { right_249 = come_decrement_ref_count2(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAddNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAddNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result258__;
            if(right_249) { right_249 = come_decrement_ref_count2(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional375=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional375) {
                info->p++;
                skip_spaces_and_lf(info);
                right_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=add_exp(info))));
                if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2278, "struct sNode");
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value388=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value387=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2278, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_251),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sSubNode_sline;
                _inf_value10->sname=(void*)sSubNode_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result261__ = __result_obj__ = ((struct sNode*)(right_value393=_inf_value10));
                if(right_251) { right_251 = come_decrement_ref_count2(right_251, ((struct sNode*)right_251)->finalize, ((struct sNode*)right_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sSubNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sSubNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result261__;
                if(right_251) { right_251 = come_decrement_ref_count2(right_251, ((struct sNode*)right_251)->finalize, ((struct sNode*)right_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional385=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional385) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=add_exp(info))));
                    if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2287, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value396=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value395=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2287, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_253),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sAddNode_sline;
                    _inf_value11->sname=(void*)sAddNode_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result264__ = __result_obj__ = ((struct sNode*)(right_value401=_inf_value11));
                    if(right_253) { right_253 = come_decrement_ref_count2(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sAddNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sAddNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result264__;
                    if(right_253) { right_253 = come_decrement_ref_count2(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional395=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional395) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=add_exp(info))));
                        if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2296, "struct sNode");
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value404=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value403=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2296, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_255),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sSubNode_sline;
                        _inf_value12->sname=(void*)sSubNode_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result267__ = __result_obj__ = ((struct sNode*)(right_value409=_inf_value12));
                        if(right_255) { right_255 = come_decrement_ref_count2(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sSubNode_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sSubNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result267__;
                        if(right_255) { right_255 = come_decrement_ref_count2(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result268__ = __result_obj__ = node_248;
    if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result268__;
    if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional386=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional386) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional387=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional387) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional388) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional389;
struct sAddNode* __result262__;
void* right_value397;
struct sAddNode* result_254;
_Bool _if_conditional390;
void* right_value398;
struct sNode* __dec_obj187;
_Bool _if_conditional391;
void* right_value399;
struct sNode* __dec_obj188;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value400;
char* __dec_obj189;
struct sAddNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value397 = (void*)0;
memset(&result_254, 0, sizeof(struct sAddNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
                        if(_if_conditional389=self==(void*)0,                        _if_conditional389) {
                            __result262__ = __result_obj__ = (void*)0;
                            return __result262__;
                        }
                        result_254=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value397=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"))));
                        come_call_finalizer2(sAddNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional390=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional390) {
                            __dec_obj187=result_254->mLeft;
                            result_254->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(self->mLeft))));
                            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional391=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional391) {
                            __dec_obj188=result_254->mRight;
                            result_254->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=sNode_clone(self->mRight))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional392=self!=((void*)0),                        _if_conditional392) {
                            result_254->mQuote=self->mQuote;
                        }
                        if(_if_conditional393=self!=((void*)0),                        _if_conditional393) {
                            result_254->sline=self->sline;
                        }
                        if(_if_conditional394=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional394) {
                            __dec_obj189=result_254->sname;
                            result_254->sname=(char*)come_increment_ref_count(((char*)(right_value400=string_clone(self->sname))));
                            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result263__ = __result_obj__ = result_254;
                        come_call_finalizer2(sAddNode_finalize,result_254, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result263__;
                        come_call_finalizer2(sAddNode_finalize,result_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional396=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional396) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional397=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional397) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional398=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional398) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional399;
struct sSubNode* __result265__;
void* right_value405;
struct sSubNode* result_256;
_Bool _if_conditional400;
void* right_value406;
struct sNode* __dec_obj190;
_Bool _if_conditional401;
void* right_value407;
struct sNode* __dec_obj191;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
void* right_value408;
char* __dec_obj192;
struct sSubNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
right_value405 = (void*)0;
memset(&result_256, 0, sizeof(struct sSubNode*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
                            if(_if_conditional399=self==(void*)0,                            _if_conditional399) {
                                __result265__ = __result_obj__ = (void*)0;
                                return __result265__;
                            }
                            result_256=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value405=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"))));
                            come_call_finalizer2(sSubNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional400=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional400) {
                                __dec_obj190=result_256->mLeft;
                                result_256->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=sNode_clone(self->mLeft))));
                                if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional401=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional401) {
                                __dec_obj191=result_256->mRight;
                                result_256->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(self->mRight))));
                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional402=self!=((void*)0),                            _if_conditional402) {
                                result_256->mQuote=self->mQuote;
                            }
                            if(_if_conditional403=self!=((void*)0),                            _if_conditional403) {
                                result_256->sline=self->sline;
                            }
                            if(_if_conditional404=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional404) {
                                __dec_obj192=result_256->sname;
                                result_256->sname=(char*)come_increment_ref_count(((char*)(right_value408=string_clone(self->sname))));
                                __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result266__ = __result_obj__ = result_256;
                            come_call_finalizer2(sSubNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result266__;
                            come_call_finalizer2(sSubNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
void* right_value410;
struct sNode* node_257;
_Bool _while_condtional12;
_Bool _if_conditional405;
void* right_value411;
struct sNode* right_258;
void* right_value412;
void* right_value413;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value418;
struct sNode* __result271__;
_Bool _if_conditional415;
void* right_value419;
struct sNode* right_260;
void* right_value420;
void* right_value421;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value426;
struct sNode* __result274__;
_Bool _if_conditional425;
void* right_value427;
struct sNode* right_262;
void* right_value428;
void* right_value429;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value434;
struct sNode* __result277__;
_Bool _if_conditional435;
void* right_value435;
struct sNode* right_264;
void* right_value436;
void* right_value437;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value442;
struct sNode* __result280__;
struct sNode* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
right_value410 = (void*)0;
memset(&node_257, 0, sizeof(struct sNode*));
right_value411 = (void*)0;
memset(&right_258, 0, sizeof(struct sNode*));
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
memset(&right_260, 0, sizeof(struct sNode*));
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
memset(&right_262, 0, sizeof(struct sNode*));
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
memset(&right_264, 0, sizeof(struct sNode*));
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value442 = (void*)0;
    parse_sharp_v5(info);
    node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=add_exp(info))));
    if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional12=*info->p,    _while_condtional12) {
        if(_if_conditional405=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional405) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=shift_exp(info))));
            if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2323, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value413=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value412=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2323, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_258),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sLShiftNode_sline;
            _inf_value13->sname=(void*)sLShiftNode_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result271__ = __result_obj__ = ((struct sNode*)(right_value418=_inf_value13));
            if(right_258) { right_258 = come_decrement_ref_count2(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sLShiftNode_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLShiftNode_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value418) { right_value418 = come_decrement_ref_count2(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result271__;
            if(right_258) { right_258 = come_decrement_ref_count2(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional415=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional415) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=shift_exp(info))));
                if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2331, "struct sNode");
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value421=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value420=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2331, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_260),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sRShiftNode_sline;
                _inf_value14->sname=(void*)sRShiftNode_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result274__ = __result_obj__ = ((struct sNode*)(right_value426=_inf_value14));
                if(right_260) { right_260 = come_decrement_ref_count2(right_260, ((struct sNode*)right_260)->finalize, ((struct sNode*)right_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sRShiftNode_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sRShiftNode_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result274__;
                if(right_260) { right_260 = come_decrement_ref_count2(right_260, ((struct sNode*)right_260)->finalize, ((struct sNode*)right_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional425=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional425) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=shift_exp(info))));
                    if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2339, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value429=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value428=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2339, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_262),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sLShiftNode_sline;
                    _inf_value15->sname=(void*)sLShiftNode_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result277__ = __result_obj__ = ((struct sNode*)(right_value434=_inf_value15));
                    if(right_262) { right_262 = come_decrement_ref_count2(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sLShiftNode_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLShiftNode_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result277__;
                    if(right_262) { right_262 = come_decrement_ref_count2(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional435=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional435) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=shift_exp(info))));
                        if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2347, "struct sNode");
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value437=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value436=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2347, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_264),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sRShiftNode_sline;
                        _inf_value16->sname=(void*)sRShiftNode_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result280__ = __result_obj__ = ((struct sNode*)(right_value442=_inf_value16));
                        if(right_264) { right_264 = come_decrement_ref_count2(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sRShiftNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sRShiftNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result280__;
                        if(right_264) { right_264 = come_decrement_ref_count2(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result281__ = __result_obj__ = node_257;
    if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result281__;
    if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _if_conditional428;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional426=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional426) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional427=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional427) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional428=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional428) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional429;
struct sLShiftNode* __result275__;
void* right_value430;
struct sLShiftNode* result_263;
_Bool _if_conditional430;
void* right_value431;
struct sNode* __dec_obj199;
_Bool _if_conditional431;
void* right_value432;
struct sNode* __dec_obj200;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value433;
char* __dec_obj201;
struct sLShiftNode* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
right_value430 = (void*)0;
memset(&result_263, 0, sizeof(struct sLShiftNode*));
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
                        if(_if_conditional429=self==(void*)0,                        _if_conditional429) {
                            __result275__ = __result_obj__ = (void*)0;
                            return __result275__;
                        }
                        result_263=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value430=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"))));
                        come_call_finalizer2(sLShiftNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional430=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional430) {
                            __dec_obj199=result_263->mLeft;
                            result_263->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=sNode_clone(self->mLeft))));
                            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional431=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional431) {
                            __dec_obj200=result_263->mRight;
                            result_263->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value432=sNode_clone(self->mRight))));
                            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value432) { right_value432 = come_decrement_ref_count2(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional432=self!=((void*)0),                        _if_conditional432) {
                            result_263->mQuote=self->mQuote;
                        }
                        if(_if_conditional433=self!=((void*)0),                        _if_conditional433) {
                            result_263->sline=self->sline;
                        }
                        if(_if_conditional434=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional434) {
                            __dec_obj201=result_263->sname;
                            result_263->sname=(char*)come_increment_ref_count(((char*)(right_value433=string_clone(self->sname))));
                            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result276__ = __result_obj__ = result_263;
                        come_call_finalizer2(sLShiftNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result276__;
                        come_call_finalizer2(sLShiftNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional436=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional436) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional437=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional437) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional438) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional439;
struct sRShiftNode* __result278__;
void* right_value438;
struct sRShiftNode* result_265;
_Bool _if_conditional440;
void* right_value439;
struct sNode* __dec_obj202;
_Bool _if_conditional441;
void* right_value440;
struct sNode* __dec_obj203;
_Bool _if_conditional442;
_Bool _if_conditional443;
_Bool _if_conditional444;
void* right_value441;
char* __dec_obj204;
struct sRShiftNode* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
right_value438 = (void*)0;
memset(&result_265, 0, sizeof(struct sRShiftNode*));
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
                            if(_if_conditional439=self==(void*)0,                            _if_conditional439) {
                                __result278__ = __result_obj__ = (void*)0;
                                return __result278__;
                            }
                            result_265=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value438=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"))));
                            come_call_finalizer2(sRShiftNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional440=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional440) {
                                __dec_obj202=result_265->mLeft;
                                result_265->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=sNode_clone(self->mLeft))));
                                if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional441=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional441) {
                                __dec_obj203=result_265->mRight;
                                result_265->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=sNode_clone(self->mRight))));
                                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional442=self!=((void*)0),                            _if_conditional442) {
                                result_265->mQuote=self->mQuote;
                            }
                            if(_if_conditional443=self!=((void*)0),                            _if_conditional443) {
                                result_265->sline=self->sline;
                            }
                            if(_if_conditional444=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional444) {
                                __dec_obj204=result_265->sname;
                                result_265->sname=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(self->sname))));
                                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result279__ = __result_obj__ = result_265;
                            come_call_finalizer2(sRShiftNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result279__;
                            come_call_finalizer2(sRShiftNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
void* right_value443;
struct sNode* node_266;
_Bool _while_condtional13;
_Bool _if_conditional445;
void* right_value444;
struct sNode* right_267;
void* right_value445;
void* right_value446;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value451;
struct sNode* __result284__;
_Bool _if_conditional455;
void* right_value452;
struct sNode* right_269;
void* right_value453;
void* right_value454;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value459;
struct sNode* __result287__;
_Bool _if_conditional465;
void* right_value460;
struct sNode* right_271;
void* right_value461;
void* right_value462;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value467;
struct sNode* __result290__;
_Bool _if_conditional475;
void* right_value468;
struct sNode* right_273;
void* right_value469;
void* right_value470;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value475;
struct sNode* __result293__;
_Bool _if_conditional485;
void* right_value476;
struct sNode* right_275;
void* right_value477;
void* right_value478;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value483;
struct sNode* __result296__;
_Bool _if_conditional495;
void* right_value484;
struct sNode* right_277;
void* right_value485;
void* right_value486;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value491;
struct sNode* __result299__;
_Bool _if_conditional505;
void* right_value492;
struct sNode* right_279;
void* right_value493;
void* right_value494;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value499;
struct sNode* __result302__;
_Bool _if_conditional515;
void* right_value500;
struct sNode* right_281;
void* right_value501;
void* right_value502;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value507;
struct sNode* __result305__;
struct sNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value443 = (void*)0;
memset(&node_266, 0, sizeof(struct sNode*));
right_value444 = (void*)0;
memset(&right_267, 0, sizeof(struct sNode*));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
memset(&right_269, 0, sizeof(struct sNode*));
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
memset(&right_271, 0, sizeof(struct sNode*));
right_value461 = (void*)0;
right_value462 = (void*)0;
right_value467 = (void*)0;
right_value468 = (void*)0;
memset(&right_273, 0, sizeof(struct sNode*));
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
memset(&right_275, 0, sizeof(struct sNode*));
right_value477 = (void*)0;
right_value478 = (void*)0;
right_value483 = (void*)0;
right_value484 = (void*)0;
memset(&right_277, 0, sizeof(struct sNode*));
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value491 = (void*)0;
right_value492 = (void*)0;
memset(&right_279, 0, sizeof(struct sNode*));
right_value493 = (void*)0;
right_value494 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
memset(&right_281, 0, sizeof(struct sNode*));
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value507 = (void*)0;
    parse_sharp_v5(info);
    node_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=shift_exp(info))));
    if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional13=*info->p,    _while_condtional13) {
        if(_if_conditional445=*info->p==62&&*(info->p+1)==61,        _if_conditional445) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=shift_exp(info))));
            if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2374, "struct sNode");
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value446=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value445=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2374, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_267),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sGtEqNode_sline;
            _inf_value17->sname=(void*)sGtEqNode_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result284__ = __result_obj__ = ((struct sNode*)(right_value451=_inf_value17));
            if(right_267) { right_267 = come_decrement_ref_count2(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sGtEqNode_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGtEqNode_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result284__;
            if(right_267) { right_267 = come_decrement_ref_count2(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional455=*info->p==60&&*(info->p+1)==61,            _if_conditional455) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value452=shift_exp(info))));
                if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2382, "struct sNode");
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value454=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value453=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2382, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_269),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sLtEqNode_sline;
                _inf_value18->sname=(void*)sLtEqNode_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result287__ = __result_obj__ = ((struct sNode*)(right_value459=_inf_value18));
                if(right_269) { right_269 = come_decrement_ref_count2(right_269, ((struct sNode*)right_269)->finalize, ((struct sNode*)right_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sLtEqNode_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sLtEqNode_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value459) { right_value459 = come_decrement_ref_count2(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result287__;
                if(right_269) { right_269 = come_decrement_ref_count2(right_269, ((struct sNode*)right_269)->finalize, ((struct sNode*)right_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional465=*info->p==62&&*(info->p+1)!=62,                _if_conditional465) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value460=shift_exp(info))));
                    if(right_value460) { right_value460 = come_decrement_ref_count2(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2390, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value462=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value461=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2390, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_271),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sGtNode_sline;
                    _inf_value19->sname=(void*)sGtNode_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result290__ = __result_obj__ = ((struct sNode*)(right_value467=_inf_value19));
                    if(right_271) { right_271 = come_decrement_ref_count2(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sGtNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sGtNode_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value467) { right_value467 = come_decrement_ref_count2(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result290__;
                    if(right_271) { right_271 = come_decrement_ref_count2(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional475=*info->p==60&&*(info->p+1)!=60,                    _if_conditional475) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value468=shift_exp(info))));
                        if(right_value468) { right_value468 = come_decrement_ref_count2(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2398, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value470=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value469=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2398, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_273),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sLtNode_sline;
                        _inf_value20->sname=(void*)sLtNode_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result293__ = __result_obj__ = ((struct sNode*)(right_value475=_inf_value20));
                        if(right_273) { right_273 = come_decrement_ref_count2(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sLtNode_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLtNode_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value475) { right_value475 = come_decrement_ref_count2(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result293__;
                        if(right_273) { right_273 = come_decrement_ref_count2(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional485=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional485) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=shift_exp(info))));
                            if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2406, "struct sNode");
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value478=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value477=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2406, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_275),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sGtEqNode_sline;
                            _inf_value21->sname=(void*)sGtEqNode_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result296__ = __result_obj__ = ((struct sNode*)(right_value483=_inf_value21));
                            if(right_275) { right_275 = come_decrement_ref_count2(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sGtEqNode_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sGtEqNode_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value483) { right_value483 = come_decrement_ref_count2(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result296__;
                            if(right_275) { right_275 = come_decrement_ref_count2(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional495=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional495) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value484=shift_exp(info))));
                                if(right_value484) { right_value484 = come_decrement_ref_count2(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2414, "struct sNode");
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value486=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value485=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2414, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_277),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sLtEqNode_sline;
                                _inf_value22->sname=(void*)sLtEqNode_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result299__ = __result_obj__ = ((struct sNode*)(right_value491=_inf_value22));
                                if(right_277) { right_277 = come_decrement_ref_count2(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sLtEqNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sLtEqNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value491) { right_value491 = come_decrement_ref_count2(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result299__;
                                if(right_277) { right_277 = come_decrement_ref_count2(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional505=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional505) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value492=shift_exp(info))));
                                    if(right_value492) { right_value492 = come_decrement_ref_count2(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2422, "struct sNode");
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value494=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value493=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2422, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_279),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sGtNode_sline;
                                    _inf_value23->sname=(void*)sGtNode_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result302__ = __result_obj__ = ((struct sNode*)(right_value499=_inf_value23));
                                    if(right_279) { right_279 = come_decrement_ref_count2(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sGtNode_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sGtNode_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value499) { right_value499 = come_decrement_ref_count2(right_value499, ((struct sNode*)right_value499)->finalize, ((struct sNode*)right_value499)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result302__;
                                    if(right_279) { right_279 = come_decrement_ref_count2(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional515=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional515) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value500=shift_exp(info))));
                                        if(right_value500) { right_value500 = come_decrement_ref_count2(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2430, "struct sNode");
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value502=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value501=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2430, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_281),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sLtNode_sline;
                                        _inf_value24->sname=(void*)sLtNode_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result305__ = __result_obj__ = ((struct sNode*)(right_value507=_inf_value24));
                                        if(right_281) { right_281 = come_decrement_ref_count2(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sLtNode_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sLtNode_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value507) { right_value507 = come_decrement_ref_count2(right_value507, ((struct sNode*)right_value507)->finalize, ((struct sNode*)right_value507)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result305__;
                                        if(right_281) { right_281 = come_decrement_ref_count2(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result306__ = __result_obj__ = node_266;
    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result306__;
    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional486;
_Bool _if_conditional487;
_Bool _if_conditional488;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional486=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional486) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional487=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional487) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional488=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional488) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional489;
struct sGtEqNode* __result294__;
void* right_value479;
struct sGtEqNode* result_276;
_Bool _if_conditional490;
void* right_value480;
struct sNode* __dec_obj217;
_Bool _if_conditional491;
void* right_value481;
struct sNode* __dec_obj218;
_Bool _if_conditional492;
_Bool _if_conditional493;
_Bool _if_conditional494;
void* right_value482;
char* __dec_obj219;
struct sGtEqNode* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
right_value479 = (void*)0;
memset(&result_276, 0, sizeof(struct sGtEqNode*));
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
                                if(_if_conditional489=self==(void*)0,                                _if_conditional489) {
                                    __result294__ = __result_obj__ = (void*)0;
                                    return __result294__;
                                }
                                result_276=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value479=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"))));
                                come_call_finalizer2(sGtEqNode_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional490=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional490) {
                                    __dec_obj217=result_276->mLeft;
                                    result_276->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value480=sNode_clone(self->mLeft))));
                                    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional491=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional491) {
                                    __dec_obj218=result_276->mRight;
                                    result_276->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value481=sNode_clone(self->mRight))));
                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value481) { right_value481 = come_decrement_ref_count2(right_value481, ((struct sNode*)right_value481)->finalize, ((struct sNode*)right_value481)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional492=self!=((void*)0),                                _if_conditional492) {
                                    result_276->mQuote=self->mQuote;
                                }
                                if(_if_conditional493=self!=((void*)0),                                _if_conditional493) {
                                    result_276->sline=self->sline;
                                }
                                if(_if_conditional494=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional494) {
                                    __dec_obj219=result_276->sname;
                                    result_276->sname=(char*)come_increment_ref_count(((char*)(right_value482=string_clone(self->sname))));
                                    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result295__ = __result_obj__ = result_276;
                                come_call_finalizer2(sGtEqNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result295__;
                                come_call_finalizer2(sGtEqNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional496=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional496) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional497=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional497) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional498=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional498) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional499;
struct sLtEqNode* __result297__;
void* right_value487;
struct sLtEqNode* result_278;
_Bool _if_conditional500;
void* right_value488;
struct sNode* __dec_obj220;
_Bool _if_conditional501;
void* right_value489;
struct sNode* __dec_obj221;
_Bool _if_conditional502;
_Bool _if_conditional503;
_Bool _if_conditional504;
void* right_value490;
char* __dec_obj222;
struct sLtEqNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value487 = (void*)0;
memset(&result_278, 0, sizeof(struct sLtEqNode*));
right_value488 = (void*)0;
right_value489 = (void*)0;
right_value490 = (void*)0;
                                    if(_if_conditional499=self==(void*)0,                                    _if_conditional499) {
                                        __result297__ = __result_obj__ = (void*)0;
                                        return __result297__;
                                    }
                                    result_278=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value487=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"))));
                                    come_call_finalizer2(sLtEqNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional500=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional500) {
                                        __dec_obj220=result_278->mLeft;
                                        result_278->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value488=sNode_clone(self->mLeft))));
                                        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value488) { right_value488 = come_decrement_ref_count2(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional501=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional501) {
                                        __dec_obj221=result_278->mRight;
                                        result_278->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value489=sNode_clone(self->mRight))));
                                        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value489) { right_value489 = come_decrement_ref_count2(right_value489, ((struct sNode*)right_value489)->finalize, ((struct sNode*)right_value489)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional502=self!=((void*)0),                                    _if_conditional502) {
                                        result_278->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional503=self!=((void*)0),                                    _if_conditional503) {
                                        result_278->sline=self->sline;
                                    }
                                    if(_if_conditional504=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional504) {
                                        __dec_obj222=result_278->sname;
                                        result_278->sname=(char*)come_increment_ref_count(((char*)(right_value490=string_clone(self->sname))));
                                        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value490 = come_decrement_ref_count2(right_value490, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result298__ = __result_obj__ = result_278;
                                    come_call_finalizer2(sLtEqNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result298__;
                                    come_call_finalizer2(sLtEqNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional506;
_Bool _if_conditional507;
_Bool _if_conditional508;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional506=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional506) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional507=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional507) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional508=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional508) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional509;
struct sGtNode* __result300__;
void* right_value495;
struct sGtNode* result_280;
_Bool _if_conditional510;
void* right_value496;
struct sNode* __dec_obj223;
_Bool _if_conditional511;
void* right_value497;
struct sNode* __dec_obj224;
_Bool _if_conditional512;
_Bool _if_conditional513;
_Bool _if_conditional514;
void* right_value498;
char* __dec_obj225;
struct sGtNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value495 = (void*)0;
memset(&result_280, 0, sizeof(struct sGtNode*));
right_value496 = (void*)0;
right_value497 = (void*)0;
right_value498 = (void*)0;
                                        if(_if_conditional509=self==(void*)0,                                        _if_conditional509) {
                                            __result300__ = __result_obj__ = (void*)0;
                                            return __result300__;
                                        }
                                        result_280=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value495=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"))));
                                        come_call_finalizer2(sGtNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional510=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional510) {
                                            __dec_obj223=result_280->mLeft;
                                            result_280->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value496=sNode_clone(self->mLeft))));
                                            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value496) { right_value496 = come_decrement_ref_count2(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional511=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional511) {
                                            __dec_obj224=result_280->mRight;
                                            result_280->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value497=sNode_clone(self->mRight))));
                                            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value497) { right_value497 = come_decrement_ref_count2(right_value497, ((struct sNode*)right_value497)->finalize, ((struct sNode*)right_value497)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional512=self!=((void*)0),                                        _if_conditional512) {
                                            result_280->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional513=self!=((void*)0),                                        _if_conditional513) {
                                            result_280->sline=self->sline;
                                        }
                                        if(_if_conditional514=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional514) {
                                            __dec_obj225=result_280->sname;
                                            result_280->sname=(char*)come_increment_ref_count(((char*)(right_value498=string_clone(self->sname))));
                                            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value498 = come_decrement_ref_count2(right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result301__ = __result_obj__ = result_280;
                                        come_call_finalizer2(sGtNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result301__;
                                        come_call_finalizer2(sGtNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional516;
_Bool _if_conditional517;
_Bool _if_conditional518;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional516=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional516) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional517=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional517) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional518=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional518) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional519;
struct sLtNode* __result303__;
void* right_value503;
struct sLtNode* result_282;
_Bool _if_conditional520;
void* right_value504;
struct sNode* __dec_obj226;
_Bool _if_conditional521;
void* right_value505;
struct sNode* __dec_obj227;
_Bool _if_conditional522;
_Bool _if_conditional523;
_Bool _if_conditional524;
void* right_value506;
char* __dec_obj228;
struct sLtNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value503 = (void*)0;
memset(&result_282, 0, sizeof(struct sLtNode*));
right_value504 = (void*)0;
right_value505 = (void*)0;
right_value506 = (void*)0;
                                            if(_if_conditional519=self==(void*)0,                                            _if_conditional519) {
                                                __result303__ = __result_obj__ = (void*)0;
                                                return __result303__;
                                            }
                                            result_282=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value503=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"))));
                                            come_call_finalizer2(sLtNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional520=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional520) {
                                                __dec_obj226=result_282->mLeft;
                                                result_282->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=sNode_clone(self->mLeft))));
                                                if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value504) { right_value504 = come_decrement_ref_count2(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional521=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional521) {
                                                __dec_obj227=result_282->mRight;
                                                result_282->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value505=sNode_clone(self->mRight))));
                                                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value505) { right_value505 = come_decrement_ref_count2(right_value505, ((struct sNode*)right_value505)->finalize, ((struct sNode*)right_value505)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional522=self!=((void*)0),                                            _if_conditional522) {
                                                result_282->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional523=self!=((void*)0),                                            _if_conditional523) {
                                                result_282->sline=self->sline;
                                            }
                                            if(_if_conditional524=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional524) {
                                                __dec_obj228=result_282->sname;
                                                result_282->sname=(char*)come_increment_ref_count(((char*)(right_value506=string_clone(self->sname))));
                                                __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value506 = come_decrement_ref_count2(right_value506, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result304__ = __result_obj__ = result_282;
                                            come_call_finalizer2(sLtNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result304__;
                                            come_call_finalizer2(sLtNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
void* right_value508;
struct sNode* node_283;
_Bool _while_condtional14;
_Bool _if_conditional525;
void* right_value509;
struct sNode* right_284;
void* right_value510;
void* right_value511;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value516;
struct sNode* __result309__;
_Bool _if_conditional535;
void* right_value517;
struct sNode* right_286;
void* right_value518;
void* right_value519;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value524;
struct sNode* __result312__;
_Bool _if_conditional545;
void* right_value525;
struct sNode* right_288;
void* right_value526;
void* right_value527;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value532;
struct sNode* __result315__;
_Bool _if_conditional555;
void* right_value533;
struct sNode* right_290;
void* right_value534;
void* right_value535;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value540;
struct sNode* __result318__;
_Bool _if_conditional565;
void* right_value541;
struct sNode* right_292;
void* right_value542;
void* right_value543;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value548;
struct sNode* __result321__;
_Bool _if_conditional575;
void* right_value549;
struct sNode* right_294;
void* right_value550;
void* right_value551;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value556;
struct sNode* __result324__;
_Bool _if_conditional585;
void* right_value557;
struct sNode* right_296;
void* right_value558;
void* right_value559;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value564;
struct sNode* __result327__;
_Bool _if_conditional595;
void* right_value565;
struct sNode* right_298;
void* right_value566;
void* right_value567;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value572;
struct sNode* __result330__;
struct sNode* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
right_value508 = (void*)0;
memset(&node_283, 0, sizeof(struct sNode*));
right_value509 = (void*)0;
memset(&right_284, 0, sizeof(struct sNode*));
right_value510 = (void*)0;
right_value511 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
memset(&right_286, 0, sizeof(struct sNode*));
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value524 = (void*)0;
right_value525 = (void*)0;
memset(&right_288, 0, sizeof(struct sNode*));
right_value526 = (void*)0;
right_value527 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
memset(&right_290, 0, sizeof(struct sNode*));
right_value534 = (void*)0;
right_value535 = (void*)0;
right_value540 = (void*)0;
right_value541 = (void*)0;
memset(&right_292, 0, sizeof(struct sNode*));
right_value542 = (void*)0;
right_value543 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
memset(&right_294, 0, sizeof(struct sNode*));
right_value550 = (void*)0;
right_value551 = (void*)0;
right_value556 = (void*)0;
right_value557 = (void*)0;
memset(&right_296, 0, sizeof(struct sNode*));
right_value558 = (void*)0;
right_value559 = (void*)0;
right_value564 = (void*)0;
right_value565 = (void*)0;
memset(&right_298, 0, sizeof(struct sNode*));
right_value566 = (void*)0;
right_value567 = (void*)0;
right_value572 = (void*)0;
    parse_sharp_v5(info);
    node_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=comparison_exp(info))));
    if(right_value508) { right_value508 = come_decrement_ref_count2(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional14=*info->p,    _while_condtional14) {
        if(_if_conditional525=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional525) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=eq_exp(info))));
            if(right_value509) { right_value509 = come_decrement_ref_count2(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2457, "struct sNode");
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value511=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value510=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2457, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_284),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sEq2Node_sline;
            _inf_value25->sname=(void*)sEq2Node_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result309__ = __result_obj__ = ((struct sNode*)(right_value516=_inf_value25));
            if(right_284) { right_284 = come_decrement_ref_count2(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sEq2Node_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sEq2Node_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value516) { right_value516 = come_decrement_ref_count2(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result309__;
            if(right_284) { right_284 = come_decrement_ref_count2(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional535=*info->p==61&&*(info->p+1)==61,            _if_conditional535) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value517=eq_exp(info))));
                if(right_value517) { right_value517 = come_decrement_ref_count2(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2465, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value519=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value518=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2465, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_286),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sEqNode_sline;
                _inf_value26->sname=(void*)sEqNode_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result312__ = __result_obj__ = ((struct sNode*)(right_value524=_inf_value26));
                if(right_286) { right_286 = come_decrement_ref_count2(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sEqNode_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sEqNode_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result312__;
                if(right_286) { right_286 = come_decrement_ref_count2(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional545=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional545) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value525=eq_exp(info))));
                    if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2473, "struct sNode");
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value527=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value526=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2473, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_288),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNotEq2Node_sline;
                    _inf_value27->sname=(void*)sNotEq2Node_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result315__ = __result_obj__ = ((struct sNode*)(right_value532=_inf_value27));
                    if(right_288) { right_288 = come_decrement_ref_count2(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sNotEq2Node_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sNotEq2Node_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value532) { right_value532 = come_decrement_ref_count2(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result315__;
                    if(right_288) { right_288 = come_decrement_ref_count2(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional555=*info->p==33&&*(info->p+1)==61,                    _if_conditional555) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value533=eq_exp(info))));
                        if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2481, "struct sNode");
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value535=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value534=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2481, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_290),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNotEqNode_sline;
                        _inf_value28->sname=(void*)sNotEqNode_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result318__ = __result_obj__ = ((struct sNode*)(right_value540=_inf_value28));
                        if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sNotEqNode_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNotEqNode_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value540) { right_value540 = come_decrement_ref_count2(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result318__;
                        if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional565=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional565) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value541=eq_exp(info))));
                            if(right_value541) { right_value541 = come_decrement_ref_count2(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2489, "struct sNode");
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value543=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value542=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2489, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_292),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sEq2Node_sline;
                            _inf_value29->sname=(void*)sEq2Node_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result321__ = __result_obj__ = ((struct sNode*)(right_value548=_inf_value29));
                            if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sEq2Node_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sEq2Node_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value548) { right_value548 = come_decrement_ref_count2(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result321__;
                            if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional575=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional575) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value549=eq_exp(info))));
                                if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2497, "struct sNode");
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value551=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value550=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2497, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_294),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sEqNode_sline;
                                _inf_value30->sname=(void*)sEqNode_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result324__ = __result_obj__ = ((struct sNode*)(right_value556=_inf_value30));
                                if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sEqNode_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sEqNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value556) { right_value556 = come_decrement_ref_count2(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result324__;
                                if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional585=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional585) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value557=eq_exp(info))));
                                    if(right_value557) { right_value557 = come_decrement_ref_count2(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2505, "struct sNode");
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value559=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value558=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2505, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_296),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNotEq2Node_sline;
                                    _inf_value31->sname=(void*)sNotEq2Node_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result327__ = __result_obj__ = ((struct sNode*)(right_value564=_inf_value31));
                                    if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sNotEq2Node_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sNotEq2Node_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value564) { right_value564 = come_decrement_ref_count2(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result327__;
                                    if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional595=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional595) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value565=eq_exp(info))));
                                        if(right_value565) { right_value565 = come_decrement_ref_count2(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2513, "struct sNode");
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value567=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value566=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2513, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_298),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNotEqNode_sline;
                                        _inf_value32->sname=(void*)sNotEqNode_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result330__ = __result_obj__ = ((struct sNode*)(right_value572=_inf_value32));
                                        if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sNotEqNode_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sNotEqNode_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value572) { right_value572 = come_decrement_ref_count2(right_value572, ((struct sNode*)right_value572)->finalize, ((struct sNode*)right_value572)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result330__;
                                        if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result331__ = __result_obj__ = node_283;
    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result331__;
    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional566;
_Bool _if_conditional567;
_Bool _if_conditional568;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional566=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional566) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional567=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional567) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional568=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional568) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional569;
struct sEq2Node* __result319__;
void* right_value544;
struct sEq2Node* result_293;
_Bool _if_conditional570;
void* right_value545;
struct sNode* __dec_obj241;
_Bool _if_conditional571;
void* right_value546;
struct sNode* __dec_obj242;
_Bool _if_conditional572;
_Bool _if_conditional573;
_Bool _if_conditional574;
void* right_value547;
char* __dec_obj243;
struct sEq2Node* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
right_value544 = (void*)0;
memset(&result_293, 0, sizeof(struct sEq2Node*));
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
                                if(_if_conditional569=self==(void*)0,                                _if_conditional569) {
                                    __result319__ = __result_obj__ = (void*)0;
                                    return __result319__;
                                }
                                result_293=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value544=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"))));
                                come_call_finalizer2(sEq2Node_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional570=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional570) {
                                    __dec_obj241=result_293->mLeft;
                                    result_293->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value545=sNode_clone(self->mLeft))));
                                    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value545) { right_value545 = come_decrement_ref_count2(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional571=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional571) {
                                    __dec_obj242=result_293->mRight;
                                    result_293->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=sNode_clone(self->mRight))));
                                    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value546) { right_value546 = come_decrement_ref_count2(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional572=self!=((void*)0),                                _if_conditional572) {
                                    result_293->mQuote=self->mQuote;
                                }
                                if(_if_conditional573=self!=((void*)0),                                _if_conditional573) {
                                    result_293->sline=self->sline;
                                }
                                if(_if_conditional574=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional574) {
                                    __dec_obj243=result_293->sname;
                                    result_293->sname=(char*)come_increment_ref_count(((char*)(right_value547=string_clone(self->sname))));
                                    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result320__ = __result_obj__ = result_293;
                                come_call_finalizer2(sEq2Node_finalize,result_293, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result320__;
                                come_call_finalizer2(sEq2Node_finalize,result_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional576;
_Bool _if_conditional577;
_Bool _if_conditional578;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional576=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional576) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional577=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional577) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional578=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional578) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional579;
struct sEqNode* __result322__;
void* right_value552;
struct sEqNode* result_295;
_Bool _if_conditional580;
void* right_value553;
struct sNode* __dec_obj244;
_Bool _if_conditional581;
void* right_value554;
struct sNode* __dec_obj245;
_Bool _if_conditional582;
_Bool _if_conditional583;
_Bool _if_conditional584;
void* right_value555;
char* __dec_obj246;
struct sEqNode* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
right_value552 = (void*)0;
memset(&result_295, 0, sizeof(struct sEqNode*));
right_value553 = (void*)0;
right_value554 = (void*)0;
right_value555 = (void*)0;
                                    if(_if_conditional579=self==(void*)0,                                    _if_conditional579) {
                                        __result322__ = __result_obj__ = (void*)0;
                                        return __result322__;
                                    }
                                    result_295=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value552=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"))));
                                    come_call_finalizer2(sEqNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional580=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional580) {
                                        __dec_obj244=result_295->mLeft;
                                        result_295->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value553=sNode_clone(self->mLeft))));
                                        if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value553) { right_value553 = come_decrement_ref_count2(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional581=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional581) {
                                        __dec_obj245=result_295->mRight;
                                        result_295->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value554=sNode_clone(self->mRight))));
                                        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value554) { right_value554 = come_decrement_ref_count2(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional582=self!=((void*)0),                                    _if_conditional582) {
                                        result_295->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional583=self!=((void*)0),                                    _if_conditional583) {
                                        result_295->sline=self->sline;
                                    }
                                    if(_if_conditional584=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional584) {
                                        __dec_obj246=result_295->sname;
                                        result_295->sname=(char*)come_increment_ref_count(((char*)(right_value555=string_clone(self->sname))));
                                        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value555 = come_decrement_ref_count2(right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result323__ = __result_obj__ = result_295;
                                    come_call_finalizer2(sEqNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result323__;
                                    come_call_finalizer2(sEqNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional586;
_Bool _if_conditional587;
_Bool _if_conditional588;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional586=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional586) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional587=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional587) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional588=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional588) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional589;
struct sNotEq2Node* __result325__;
void* right_value560;
struct sNotEq2Node* result_297;
_Bool _if_conditional590;
void* right_value561;
struct sNode* __dec_obj247;
_Bool _if_conditional591;
void* right_value562;
struct sNode* __dec_obj248;
_Bool _if_conditional592;
_Bool _if_conditional593;
_Bool _if_conditional594;
void* right_value563;
char* __dec_obj249;
struct sNotEq2Node* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value560 = (void*)0;
memset(&result_297, 0, sizeof(struct sNotEq2Node*));
right_value561 = (void*)0;
right_value562 = (void*)0;
right_value563 = (void*)0;
                                        if(_if_conditional589=self==(void*)0,                                        _if_conditional589) {
                                            __result325__ = __result_obj__ = (void*)0;
                                            return __result325__;
                                        }
                                        result_297=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value560=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"))));
                                        come_call_finalizer2(sNotEq2Node_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional590=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional590) {
                                            __dec_obj247=result_297->mLeft;
                                            result_297->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=sNode_clone(self->mLeft))));
                                            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional591=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional591) {
                                            __dec_obj248=result_297->mRight;
                                            result_297->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value562=sNode_clone(self->mRight))));
                                            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value562) { right_value562 = come_decrement_ref_count2(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional592=self!=((void*)0),                                        _if_conditional592) {
                                            result_297->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional593=self!=((void*)0),                                        _if_conditional593) {
                                            result_297->sline=self->sline;
                                        }
                                        if(_if_conditional594=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional594) {
                                            __dec_obj249=result_297->sname;
                                            result_297->sname=(char*)come_increment_ref_count(((char*)(right_value563=string_clone(self->sname))));
                                            __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value563 = come_decrement_ref_count2(right_value563, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result326__ = __result_obj__ = result_297;
                                        come_call_finalizer2(sNotEq2Node_finalize,result_297, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result326__;
                                        come_call_finalizer2(sNotEq2Node_finalize,result_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional596;
_Bool _if_conditional597;
_Bool _if_conditional598;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional596=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional596) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional597=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional597) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional598=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional598) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional599;
struct sNotEqNode* __result328__;
void* right_value568;
struct sNotEqNode* result_299;
_Bool _if_conditional600;
void* right_value569;
struct sNode* __dec_obj250;
_Bool _if_conditional601;
void* right_value570;
struct sNode* __dec_obj251;
_Bool _if_conditional602;
_Bool _if_conditional603;
_Bool _if_conditional604;
void* right_value571;
char* __dec_obj252;
struct sNotEqNode* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
right_value568 = (void*)0;
memset(&result_299, 0, sizeof(struct sNotEqNode*));
right_value569 = (void*)0;
right_value570 = (void*)0;
right_value571 = (void*)0;
                                            if(_if_conditional599=self==(void*)0,                                            _if_conditional599) {
                                                __result328__ = __result_obj__ = (void*)0;
                                                return __result328__;
                                            }
                                            result_299=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value568=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"))));
                                            come_call_finalizer2(sNotEqNode_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional600=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional600) {
                                                __dec_obj250=result_299->mLeft;
                                                result_299->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value569=sNode_clone(self->mLeft))));
                                                if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional601=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional601) {
                                                __dec_obj251=result_299->mRight;
                                                result_299->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value570=sNode_clone(self->mRight))));
                                                if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value570) { right_value570 = come_decrement_ref_count2(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional602=self!=((void*)0),                                            _if_conditional602) {
                                                result_299->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional603=self!=((void*)0),                                            _if_conditional603) {
                                                result_299->sline=self->sline;
                                            }
                                            if(_if_conditional604=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional604) {
                                                __dec_obj252=result_299->sname;
                                                result_299->sname=(char*)come_increment_ref_count(((char*)(right_value571=string_clone(self->sname))));
                                                __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value571 = come_decrement_ref_count2(right_value571, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result329__ = __result_obj__ = result_299;
                                            come_call_finalizer2(sNotEqNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result329__;
                                            come_call_finalizer2(sNotEqNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
void* right_value573;
struct sNode* node_300;
_Bool _while_condtional15;
_Bool _if_conditional605;
void* right_value574;
struct sNode* right_301;
void* right_value575;
void* right_value576;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value581;
struct sNode* __result334__;
_Bool _if_conditional615;
void* right_value582;
struct sNode* right_303;
void* right_value583;
void* right_value584;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value589;
struct sNode* __result337__;
struct sNode* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value573 = (void*)0;
memset(&node_300, 0, sizeof(struct sNode*));
right_value574 = (void*)0;
memset(&right_301, 0, sizeof(struct sNode*));
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value581 = (void*)0;
right_value582 = (void*)0;
memset(&right_303, 0, sizeof(struct sNode*));
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value589 = (void*)0;
    parse_sharp_v5(info);
    node_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value573=eq_exp(info))));
    if(right_value573) { right_value573 = come_decrement_ref_count2(right_value573, ((struct sNode*)right_value573)->finalize, ((struct sNode*)right_value573)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional15=*info->p,    _while_condtional15) {
        if(_if_conditional605=*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional605) {
            info->p++;
            skip_spaces_and_lf(info);
            right_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value574=and_exp(info))));
            if(right_value574) { right_value574 = come_decrement_ref_count2(right_value574, ((struct sNode*)right_value574)->finalize, ((struct sNode*)right_value574)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2540, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value576=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value575=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2540, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_301),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sAndNode_sline;
            _inf_value33->sname=(void*)sAndNode_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result334__ = __result_obj__ = ((struct sNode*)(right_value581=_inf_value33));
            if(right_301) { right_301 = come_decrement_ref_count2(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAndNode_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAndNode_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value581) { right_value581 = come_decrement_ref_count2(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result334__;
            if(right_301) { right_301 = come_decrement_ref_count2(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional615=*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional615) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value582=and_exp(info))));
                if(right_value582) { right_value582 = come_decrement_ref_count2(right_value582, ((struct sNode*)right_value582)->finalize, ((struct sNode*)right_value582)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2548, "struct sNode");
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value584=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value583=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2548, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_303),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sAndNode_sline;
                _inf_value34->sname=(void*)sAndNode_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result337__ = __result_obj__ = ((struct sNode*)(right_value589=_inf_value34));
                if(right_303) { right_303 = come_decrement_ref_count2(right_303, ((struct sNode*)right_303)->finalize, ((struct sNode*)right_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sAndNode_finalize,right_value583, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sAndNode_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result337__;
                if(right_303) { right_303 = come_decrement_ref_count2(right_303, ((struct sNode*)right_303)->finalize, ((struct sNode*)right_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result338__ = __result_obj__ = node_300;
    if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result338__;
    if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional616;
_Bool _if_conditional617;
_Bool _if_conditional618;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional616=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional616) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional617=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional617) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional618=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional618) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional619;
struct sAndNode* __result335__;
void* right_value585;
struct sAndNode* result_304;
_Bool _if_conditional620;
void* right_value586;
struct sNode* __dec_obj256;
_Bool _if_conditional621;
void* right_value587;
struct sNode* __dec_obj257;
_Bool _if_conditional622;
_Bool _if_conditional623;
_Bool _if_conditional624;
void* right_value588;
char* __dec_obj258;
struct sAndNode* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
right_value585 = (void*)0;
memset(&result_304, 0, sizeof(struct sAndNode*));
right_value586 = (void*)0;
right_value587 = (void*)0;
right_value588 = (void*)0;
                    if(_if_conditional619=self==(void*)0,                    _if_conditional619) {
                        __result335__ = __result_obj__ = (void*)0;
                        return __result335__;
                    }
                    result_304=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value585=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"))));
                    come_call_finalizer2(sAndNode_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional620=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional620) {
                        __dec_obj256=result_304->mLeft;
                        result_304->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value586=sNode_clone(self->mLeft))));
                        if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional621=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional621) {
                        __dec_obj257=result_304->mRight;
                        result_304->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value587=sNode_clone(self->mRight))));
                        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value587) { right_value587 = come_decrement_ref_count2(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional622=self!=((void*)0),                    _if_conditional622) {
                        result_304->mQuote=self->mQuote;
                    }
                    if(_if_conditional623=self!=((void*)0),                    _if_conditional623) {
                        result_304->sline=self->sline;
                    }
                    if(_if_conditional624=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional624) {
                        __dec_obj258=result_304->sname;
                        result_304->sname=(char*)come_increment_ref_count(((char*)(right_value588=string_clone(self->sname))));
                        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result336__ = __result_obj__ = result_304;
                    come_call_finalizer2(sAndNode_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result336__;
                    come_call_finalizer2(sAndNode_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
void* right_value590;
struct sNode* node_305;
_Bool _while_condtional16;
_Bool _if_conditional625;
void* right_value591;
struct sNode* right_306;
void* right_value592;
void* right_value593;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value598;
struct sNode* __result341__;
_Bool _if_conditional635;
void* right_value599;
struct sNode* right_308;
void* right_value600;
void* right_value601;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value606;
struct sNode* __result344__;
struct sNode* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value590 = (void*)0;
memset(&node_305, 0, sizeof(struct sNode*));
right_value591 = (void*)0;
memset(&right_306, 0, sizeof(struct sNode*));
right_value592 = (void*)0;
right_value593 = (void*)0;
right_value598 = (void*)0;
right_value599 = (void*)0;
memset(&right_308, 0, sizeof(struct sNode*));
right_value600 = (void*)0;
right_value601 = (void*)0;
right_value606 = (void*)0;
    parse_sharp_v5(info);
    node_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value590=and_exp(info))));
    if(right_value590) { right_value590 = come_decrement_ref_count2(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional16=*info->p,    _while_condtional16) {
        if(_if_conditional625=*info->p==94&&*(info->p+1)!=61,        _if_conditional625) {
            info->p++;
            skip_spaces_and_lf(info);
            right_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value591=xor_exp(info))));
            if(right_value591) { right_value591 = come_decrement_ref_count2(right_value591, ((struct sNode*)right_value591)->finalize, ((struct sNode*)right_value591)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2575, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value593=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value592=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2575, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_306),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sXOrNode_sline;
            _inf_value35->sname=(void*)sXOrNode_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result341__ = __result_obj__ = ((struct sNode*)(right_value598=_inf_value35));
            if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sXOrNode_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sXOrNode_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value598) { right_value598 = come_decrement_ref_count2(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result341__;
            if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional635=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional635) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value599=xor_exp(info))));
                if(right_value599) { right_value599 = come_decrement_ref_count2(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2583, "struct sNode");
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value601=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value600=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2583, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_308),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sXOrNode_sline;
                _inf_value36->sname=(void*)sXOrNode_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result344__ = __result_obj__ = ((struct sNode*)(right_value606=_inf_value36));
                if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sXOrNode_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sXOrNode_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value606) { right_value606 = come_decrement_ref_count2(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result344__;
                if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result345__ = __result_obj__ = node_305;
    if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result345__;
    if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional636;
_Bool _if_conditional637;
_Bool _if_conditional638;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional636=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional636) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional637=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional637) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional638=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional638) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional639;
struct sXOrNode* __result342__;
void* right_value602;
struct sXOrNode* result_309;
_Bool _if_conditional640;
void* right_value603;
struct sNode* __dec_obj262;
_Bool _if_conditional641;
void* right_value604;
struct sNode* __dec_obj263;
_Bool _if_conditional642;
_Bool _if_conditional643;
_Bool _if_conditional644;
void* right_value605;
char* __dec_obj264;
struct sXOrNode* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
right_value602 = (void*)0;
memset(&result_309, 0, sizeof(struct sXOrNode*));
right_value603 = (void*)0;
right_value604 = (void*)0;
right_value605 = (void*)0;
                    if(_if_conditional639=self==(void*)0,                    _if_conditional639) {
                        __result342__ = __result_obj__ = (void*)0;
                        return __result342__;
                    }
                    result_309=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value602=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"))));
                    come_call_finalizer2(sXOrNode_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional640=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional640) {
                        __dec_obj262=result_309->mLeft;
                        result_309->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value603=sNode_clone(self->mLeft))));
                        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value603) { right_value603 = come_decrement_ref_count2(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional641=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional641) {
                        __dec_obj263=result_309->mRight;
                        result_309->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value604=sNode_clone(self->mRight))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value604) { right_value604 = come_decrement_ref_count2(right_value604, ((struct sNode*)right_value604)->finalize, ((struct sNode*)right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional642=self!=((void*)0),                    _if_conditional642) {
                        result_309->mQuote=self->mQuote;
                    }
                    if(_if_conditional643=self!=((void*)0),                    _if_conditional643) {
                        result_309->sline=self->sline;
                    }
                    if(_if_conditional644=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional644) {
                        __dec_obj264=result_309->sname;
                        result_309->sname=(char*)come_increment_ref_count(((char*)(right_value605=string_clone(self->sname))));
                        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value605 = come_decrement_ref_count2(right_value605, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result343__ = __result_obj__ = result_309;
                    come_call_finalizer2(sXOrNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result343__;
                    come_call_finalizer2(sXOrNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
void* right_value607;
struct sNode* node_310;
_Bool _while_condtional17;
_Bool _if_conditional645;
void* right_value608;
struct sNode* right_311;
void* right_value609;
void* right_value610;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value615;
struct sNode* __result348__;
_Bool _if_conditional655;
void* right_value616;
struct sNode* right_313;
void* right_value617;
void* right_value618;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value623;
struct sNode* __result351__;
struct sNode* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
right_value607 = (void*)0;
memset(&node_310, 0, sizeof(struct sNode*));
right_value608 = (void*)0;
memset(&right_311, 0, sizeof(struct sNode*));
right_value609 = (void*)0;
right_value610 = (void*)0;
right_value615 = (void*)0;
right_value616 = (void*)0;
memset(&right_313, 0, sizeof(struct sNode*));
right_value617 = (void*)0;
right_value618 = (void*)0;
right_value623 = (void*)0;
    parse_sharp_v5(info);
    node_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value607=xor_exp(info))));
    if(right_value607) { right_value607 = come_decrement_ref_count2(right_value607, ((struct sNode*)right_value607)->finalize, ((struct sNode*)right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional17=*info->p,    _while_condtional17) {
        if(_if_conditional645=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional645) {
            info->p++;
            skip_spaces_and_lf(info);
            right_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value608=or_exp(info))));
            if(right_value608) { right_value608 = come_decrement_ref_count2(right_value608, ((struct sNode*)right_value608)->finalize, ((struct sNode*)right_value608)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2610, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value610=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value609=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2610, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_310),(struct sNode*)come_increment_ref_count(right_311),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sOrNode_sline;
            _inf_value37->sname=(void*)sOrNode_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result348__ = __result_obj__ = ((struct sNode*)(right_value615=_inf_value37));
            if(right_311) { right_311 = come_decrement_ref_count2(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sOrNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sOrNode_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value615) { right_value615 = come_decrement_ref_count2(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result348__;
            if(right_311) { right_311 = come_decrement_ref_count2(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional655=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional655) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value616=or_exp(info))));
                if(right_value616) { right_value616 = come_decrement_ref_count2(right_value616, ((struct sNode*)right_value616)->finalize, ((struct sNode*)right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2618, "struct sNode");
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value618=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value617=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2618, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_310),(struct sNode*)come_increment_ref_count(right_313),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sOrNode_sline;
                _inf_value38->sname=(void*)sOrNode_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result351__ = __result_obj__ = ((struct sNode*)(right_value623=_inf_value38));
                if(right_313) { right_313 = come_decrement_ref_count2(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sOrNode_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sOrNode_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value623) { right_value623 = come_decrement_ref_count2(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result351__;
                if(right_313) { right_313 = come_decrement_ref_count2(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result352__ = __result_obj__ = node_310;
    if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result352__;
    if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional656;
_Bool _if_conditional657;
_Bool _if_conditional658;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional656=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional656) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional657=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional657) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional658=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional658) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional659;
struct sOrNode* __result349__;
void* right_value619;
struct sOrNode* result_314;
_Bool _if_conditional660;
void* right_value620;
struct sNode* __dec_obj268;
_Bool _if_conditional661;
void* right_value621;
struct sNode* __dec_obj269;
_Bool _if_conditional662;
_Bool _if_conditional663;
_Bool _if_conditional664;
void* right_value622;
char* __dec_obj270;
struct sOrNode* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value619 = (void*)0;
memset(&result_314, 0, sizeof(struct sOrNode*));
right_value620 = (void*)0;
right_value621 = (void*)0;
right_value622 = (void*)0;
                    if(_if_conditional659=self==(void*)0,                    _if_conditional659) {
                        __result349__ = __result_obj__ = (void*)0;
                        return __result349__;
                    }
                    result_314=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value619=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"))));
                    come_call_finalizer2(sOrNode_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional660=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional660) {
                        __dec_obj268=result_314->mLeft;
                        result_314->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value620=sNode_clone(self->mLeft))));
                        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value620) { right_value620 = come_decrement_ref_count2(right_value620, ((struct sNode*)right_value620)->finalize, ((struct sNode*)right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional661=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional661) {
                        __dec_obj269=result_314->mRight;
                        result_314->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value621=sNode_clone(self->mRight))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value621) { right_value621 = come_decrement_ref_count2(right_value621, ((struct sNode*)right_value621)->finalize, ((struct sNode*)right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional662=self!=((void*)0),                    _if_conditional662) {
                        result_314->mQuote=self->mQuote;
                    }
                    if(_if_conditional663=self!=((void*)0),                    _if_conditional663) {
                        result_314->sline=self->sline;
                    }
                    if(_if_conditional664=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional664) {
                        __dec_obj270=result_314->sname;
                        result_314->sname=(char*)come_increment_ref_count(((char*)(right_value622=string_clone(self->sname))));
                        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value622 = come_decrement_ref_count2(right_value622, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result350__ = __result_obj__ = result_314;
                    come_call_finalizer2(sOrNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result350__;
                    come_call_finalizer2(sOrNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
void* right_value624;
struct sNode* node_315;
_Bool _while_condtional18;
_Bool _if_conditional665;
void* right_value625;
struct sNode* right_316;
void* right_value626;
void* right_value627;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value632;
struct sNode* __result355__;
_Bool _if_conditional675;
void* right_value633;
struct sNode* right_318;
void* right_value634;
void* right_value635;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value640;
struct sNode* __result358__;
struct sNode* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
right_value624 = (void*)0;
memset(&node_315, 0, sizeof(struct sNode*));
right_value625 = (void*)0;
memset(&right_316, 0, sizeof(struct sNode*));
right_value626 = (void*)0;
right_value627 = (void*)0;
right_value632 = (void*)0;
right_value633 = (void*)0;
memset(&right_318, 0, sizeof(struct sNode*));
right_value634 = (void*)0;
right_value635 = (void*)0;
right_value640 = (void*)0;
    parse_sharp_v5(info);
    node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value624=or_exp(info))));
    if(right_value624) { right_value624 = come_decrement_ref_count2(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional18=*info->p,    _while_condtional18) {
        if(_if_conditional665=*info->p==38&&*(info->p+1)==38,        _if_conditional665) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value625=andand_exp(info))));
            if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2645, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value627=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value626=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2645, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_316),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sAndAndNode_sline;
            _inf_value39->sname=(void*)sAndAndNode_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result355__ = __result_obj__ = ((struct sNode*)(right_value632=_inf_value39));
            if(right_316) { right_316 = come_decrement_ref_count2(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAndAndNode_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAndAndNode_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value632) { right_value632 = come_decrement_ref_count2(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result355__;
            if(right_316) { right_316 = come_decrement_ref_count2(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional675=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional675) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value633=andand_exp(info))));
                if(right_value633) { right_value633 = come_decrement_ref_count2(right_value633, ((struct sNode*)right_value633)->finalize, ((struct sNode*)right_value633)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2653, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value635=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value634=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2653, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_318),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sAndAndNode_sline;
                _inf_value40->sname=(void*)sAndAndNode_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result358__ = __result_obj__ = ((struct sNode*)(right_value640=_inf_value40));
                if(right_318) { right_318 = come_decrement_ref_count2(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sAndAndNode_finalize,right_value634, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sAndAndNode_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value640) { right_value640 = come_decrement_ref_count2(right_value640, ((struct sNode*)right_value640)->finalize, ((struct sNode*)right_value640)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result358__;
                if(right_318) { right_318 = come_decrement_ref_count2(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result359__ = __result_obj__ = node_315;
    if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result359__;
    if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional676;
_Bool _if_conditional677;
_Bool _if_conditional678;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional676=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional676) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional677=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional677) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional678=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional678) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional679;
struct sAndAndNode* __result356__;
void* right_value636;
struct sAndAndNode* result_319;
_Bool _if_conditional680;
void* right_value637;
struct sNode* __dec_obj274;
_Bool _if_conditional681;
void* right_value638;
struct sNode* __dec_obj275;
_Bool _if_conditional682;
_Bool _if_conditional683;
_Bool _if_conditional684;
void* right_value639;
char* __dec_obj276;
struct sAndAndNode* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
right_value636 = (void*)0;
memset(&result_319, 0, sizeof(struct sAndAndNode*));
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
                    if(_if_conditional679=self==(void*)0,                    _if_conditional679) {
                        __result356__ = __result_obj__ = (void*)0;
                        return __result356__;
                    }
                    result_319=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value636=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"))));
                    come_call_finalizer2(sAndAndNode_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional680=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional680) {
                        __dec_obj274=result_319->mLeft;
                        result_319->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value637=sNode_clone(self->mLeft))));
                        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value637) { right_value637 = come_decrement_ref_count2(right_value637, ((struct sNode*)right_value637)->finalize, ((struct sNode*)right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional681=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional681) {
                        __dec_obj275=result_319->mRight;
                        result_319->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value638=sNode_clone(self->mRight))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value638) { right_value638 = come_decrement_ref_count2(right_value638, ((struct sNode*)right_value638)->finalize, ((struct sNode*)right_value638)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional682=self!=((void*)0),                    _if_conditional682) {
                        result_319->mQuote=self->mQuote;
                    }
                    if(_if_conditional683=self!=((void*)0),                    _if_conditional683) {
                        result_319->sline=self->sline;
                    }
                    if(_if_conditional684=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional684) {
                        __dec_obj276=result_319->sname;
                        result_319->sname=(char*)come_increment_ref_count(((char*)(right_value639=string_clone(self->sname))));
                        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result357__ = __result_obj__ = result_319;
                    come_call_finalizer2(sAndAndNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result357__;
                    come_call_finalizer2(sAndAndNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
void* right_value641;
struct sNode* node_320;
_Bool _while_condtional19;
_Bool _if_conditional685;
void* right_value642;
struct sNode* right_321;
void* right_value643;
void* right_value644;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value649;
struct sNode* __result362__;
_Bool _if_conditional695;
void* right_value650;
struct sNode* right_323;
void* right_value651;
void* right_value652;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value657;
struct sNode* __result365__;
struct sNode* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
right_value641 = (void*)0;
memset(&node_320, 0, sizeof(struct sNode*));
right_value642 = (void*)0;
memset(&right_321, 0, sizeof(struct sNode*));
right_value643 = (void*)0;
right_value644 = (void*)0;
right_value649 = (void*)0;
right_value650 = (void*)0;
memset(&right_323, 0, sizeof(struct sNode*));
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value657 = (void*)0;
    parse_sharp_v5(info);
    node_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value641=andand_exp(info))));
    if(right_value641) { right_value641 = come_decrement_ref_count2(right_value641, ((struct sNode*)right_value641)->finalize, ((struct sNode*)right_value641)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional19=*info->p,    _while_condtional19) {
        if(_if_conditional685=*info->p==124&&*(info->p+1)==124,        _if_conditional685) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value642=oror_exp(info))));
            if(right_value642) { right_value642 = come_decrement_ref_count2(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2680, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value644=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value643=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2680, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_320),(struct sNode*)come_increment_ref_count(right_321),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sOrOrNode_sline;
            _inf_value41->sname=(void*)sOrOrNode_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result362__ = __result_obj__ = ((struct sNode*)(right_value649=_inf_value41));
            if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sOrOrNode_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sOrOrNode_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value649) { right_value649 = come_decrement_ref_count2(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result362__;
            if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional695=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional695) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value650=oror_exp(info))));
                if(right_value650) { right_value650 = come_decrement_ref_count2(right_value650, ((struct sNode*)right_value650)->finalize, ((struct sNode*)right_value650)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2688, "struct sNode");
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value652=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value651=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2688, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_320),(struct sNode*)come_increment_ref_count(right_323),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sOrOrNode_sline;
                _inf_value42->sname=(void*)sOrOrNode_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result365__ = __result_obj__ = ((struct sNode*)(right_value657=_inf_value42));
                if(right_323) { right_323 = come_decrement_ref_count2(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sOrOrNode_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sOrOrNode_finalize,right_value652, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result365__;
                if(right_323) { right_323 = come_decrement_ref_count2(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result366__ = __result_obj__ = node_320;
    if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result366__;
    if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional696;
_Bool _if_conditional697;
_Bool _if_conditional698;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional696=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional696) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional697=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional697) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional698=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional698) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional699;
struct sOrOrNode* __result363__;
void* right_value653;
struct sOrOrNode* result_324;
_Bool _if_conditional700;
void* right_value654;
struct sNode* __dec_obj280;
_Bool _if_conditional701;
void* right_value655;
struct sNode* __dec_obj281;
_Bool _if_conditional702;
_Bool _if_conditional703;
_Bool _if_conditional704;
void* right_value656;
char* __dec_obj282;
struct sOrOrNode* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
right_value653 = (void*)0;
memset(&result_324, 0, sizeof(struct sOrOrNode*));
right_value654 = (void*)0;
right_value655 = (void*)0;
right_value656 = (void*)0;
                    if(_if_conditional699=self==(void*)0,                    _if_conditional699) {
                        __result363__ = __result_obj__ = (void*)0;
                        return __result363__;
                    }
                    result_324=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value653=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"))));
                    come_call_finalizer2(sOrOrNode_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional700=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional700) {
                        __dec_obj280=result_324->mLeft;
                        result_324->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value654=sNode_clone(self->mLeft))));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value654) { right_value654 = come_decrement_ref_count2(right_value654, ((struct sNode*)right_value654)->finalize, ((struct sNode*)right_value654)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional701=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional701) {
                        __dec_obj281=result_324->mRight;
                        result_324->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=sNode_clone(self->mRight))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional702=self!=((void*)0),                    _if_conditional702) {
                        result_324->mQuote=self->mQuote;
                    }
                    if(_if_conditional703=self!=((void*)0),                    _if_conditional703) {
                        result_324->sline=self->sline;
                    }
                    if(_if_conditional704=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional704) {
                        __dec_obj282=result_324->sname;
                        result_324->sname=(char*)come_increment_ref_count(((char*)(right_value656=string_clone(self->sname))));
                        __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value656 = come_decrement_ref_count2(right_value656, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result364__ = __result_obj__ = result_324;
                    come_call_finalizer2(sOrOrNode_finalize,result_324, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result364__;
                    come_call_finalizer2(sOrOrNode_finalize,result_324, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
void* right_value658;
struct sNode* node_325;
_Bool _while_condtional20;
_Bool _if_conditional705;
void* right_value659;
struct sNode* node2_326;
void* right_value660;
void* right_value661;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value666;
struct sNode* __result369__;
struct sNode* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value658 = (void*)0;
memset(&node_325, 0, sizeof(struct sNode*));
right_value659 = (void*)0;
memset(&node2_326, 0, sizeof(struct sNode*));
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value666 = (void*)0;
    parse_sharp_v5(info);
    node_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=oror_exp(info))));
    if(right_value658) { right_value658 = come_decrement_ref_count2(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional20=*info->p,    _while_condtional20) {
        if(_if_conditional705=!info->no_comma&&*info->p==44,        _if_conditional705) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value659=oror_exp(info))));
            if(right_value659) { right_value659 = come_decrement_ref_count2(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2715, "struct sNode");
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value661=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value660=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2715, "sCommaNode")))),(struct sNode*)come_increment_ref_count(node_325),(struct sNode*)come_increment_ref_count(node2_326),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sCommaNode_sline;
            _inf_value43->sname=(void*)sCommaNode_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result369__ = __result_obj__ = ((struct sNode*)(right_value666=_inf_value43));
            if(node2_326) { node2_326 = come_decrement_ref_count2(node2_326, ((struct sNode*)node2_326)->finalize, ((struct sNode*)node2_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sCommaNode_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sCommaNode_finalize,right_value661, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value666) { right_value666 = come_decrement_ref_count2(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result369__;
            if(node2_326) { node2_326 = come_decrement_ref_count2(node2_326, ((struct sNode*)node2_326)->finalize, ((struct sNode*)node2_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result370__ = __result_obj__ = node_325;
    if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result370__;
    if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional706;
_Bool _if_conditional707;
_Bool _if_conditional708;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional706=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional706) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional707=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional707) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional708=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional708) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional709;
struct sCommaNode* __result367__;
void* right_value662;
struct sCommaNode* result_327;
_Bool _if_conditional710;
void* right_value663;
struct sNode* __dec_obj283;
_Bool _if_conditional711;
void* right_value664;
struct sNode* __dec_obj284;
_Bool _if_conditional712;
_Bool _if_conditional713;
void* right_value665;
char* __dec_obj285;
struct sCommaNode* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value662 = (void*)0;
memset(&result_327, 0, sizeof(struct sCommaNode*));
right_value663 = (void*)0;
right_value664 = (void*)0;
right_value665 = (void*)0;
                if(_if_conditional709=self==(void*)0,                _if_conditional709) {
                    __result367__ = __result_obj__ = (void*)0;
                    return __result367__;
                }
                result_327=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value662=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"))));
                come_call_finalizer2(sCommaNode_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional710=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional710) {
                    __dec_obj283=result_327->mLeft;
                    result_327->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value663=sNode_clone(self->mLeft))));
                    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value663) { right_value663 = come_decrement_ref_count2(right_value663, ((struct sNode*)right_value663)->finalize, ((struct sNode*)right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional711=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional711) {
                    __dec_obj284=result_327->mRight;
                    result_327->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value664=sNode_clone(self->mRight))));
                    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value664) { right_value664 = come_decrement_ref_count2(right_value664, ((struct sNode*)right_value664)->finalize, ((struct sNode*)right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional712=self!=((void*)0),                _if_conditional712) {
                    result_327->sline=self->sline;
                }
                if(_if_conditional713=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional713) {
                    __dec_obj285=result_327->sname;
                    result_327->sname=(char*)come_increment_ref_count(((char*)(right_value665=string_clone(self->sname))));
                    __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value665 = come_decrement_ref_count2(right_value665, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result368__ = __result_obj__ = result_327;
                come_call_finalizer2(sCommaNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result368__;
                come_call_finalizer2(sCommaNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
void* right_value667;
struct sNode* node_328;
_Bool _while_condtional21;
_Bool _if_conditional714;
struct sNode* value1_329;
_Bool _if_conditional715;
void* right_value668;
void* right_value669;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value672;
struct sNode* __dec_obj287;
void* right_value673;
struct sNode* __dec_obj288;
void* right_value674;
struct sNode* value2_331;
void* right_value675;
void* right_value676;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value682;
struct sNode* __result375__;
struct sNode* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
right_value667 = (void*)0;
memset(&node_328, 0, sizeof(struct sNode*));
memset(&value1_329, 0, sizeof(struct sNode*));
right_value668 = (void*)0;
right_value669 = (void*)0;
right_value672 = (void*)0;
right_value673 = (void*)0;
right_value674 = (void*)0;
memset(&value2_331, 0, sizeof(struct sNode*));
right_value675 = (void*)0;
right_value676 = (void*)0;
right_value682 = (void*)0;
    parse_sharp_v5(info);
    node_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value667=comma_exp(info))));
    if(right_value667) { right_value667 = come_decrement_ref_count2(right_value667, ((struct sNode*)right_value667)->finalize, ((struct sNode*)right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional21=*info->p,    _while_condtional21) {
        if(_if_conditional714=*info->p==63,        _if_conditional714) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional715=*info->p==58,            _if_conditional715) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2744, "struct sNode");
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value669=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value668=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2744, "sNullNode")))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNullNode_sline;
                _inf_value44->sname=(void*)sNullNode_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj287=value1_329;
                value1_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value672=_inf_value44)));
                if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); }
                come_call_finalizer2(sNullNode_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sNullNode_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value672) { right_value672 = come_decrement_ref_count2(right_value672, ((struct sNode*)right_value672)->finalize, ((struct sNode*)right_value672)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            else {
                __dec_obj288=value1_329;
                value1_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value673=comma_exp(info))));
                if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value673) { right_value673 = come_decrement_ref_count2(right_value673, ((struct sNode*)right_value673)->finalize, ((struct sNode*)right_value673)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value674=comma_exp(info))));
            if(right_value674) { right_value674 = come_decrement_ref_count2(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2758, "struct sNode");
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value676=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value675=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2758, "sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_328),(struct sNode*)come_increment_ref_count(value1_329),(struct sNode*)come_increment_ref_count(value2_331),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sConditionalNode_sline;
            _inf_value45->sname=(void*)sConditionalNode_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result375__ = __result_obj__ = ((struct sNode*)(right_value682=_inf_value45));
            if(value1_329) { value1_329 = come_decrement_ref_count2(value1_329, ((struct sNode*)value1_329)->finalize, ((struct sNode*)value1_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_331) { value2_331 = come_decrement_ref_count2(value2_331, ((struct sNode*)value2_331)->finalize, ((struct sNode*)value2_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sConditionalNode_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sConditionalNode_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value682) { right_value682 = come_decrement_ref_count2(right_value682, ((struct sNode*)right_value682)->finalize, ((struct sNode*)right_value682)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result375__;
            if(value1_329) { value1_329 = come_decrement_ref_count2(value1_329, ((struct sNode*)value1_329)->finalize, ((struct sNode*)value1_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_331) { value2_331 = come_decrement_ref_count2(value2_331, ((struct sNode*)value2_331)->finalize, ((struct sNode*)value2_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result376__ = __result_obj__ = node_328;
    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result376__;
    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional720;
_Bool _if_conditional721;
_Bool _if_conditional722;
_Bool _if_conditional723;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional720=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional720) {
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional721=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional721) {
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional722=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional722) {
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional723=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional723) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional724;
struct sConditionalNode* __result373__;
void* right_value677;
struct sConditionalNode* result_332;
_Bool _if_conditional725;
void* right_value678;
struct sNode* __dec_obj289;
_Bool _if_conditional726;
void* right_value679;
struct sNode* __dec_obj290;
_Bool _if_conditional727;
void* right_value680;
struct sNode* __dec_obj291;
_Bool _if_conditional728;
_Bool _if_conditional729;
void* right_value681;
char* __dec_obj292;
struct sConditionalNode* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
right_value677 = (void*)0;
memset(&result_332, 0, sizeof(struct sConditionalNode*));
right_value678 = (void*)0;
right_value679 = (void*)0;
right_value680 = (void*)0;
right_value681 = (void*)0;
                if(_if_conditional724=self==(void*)0,                _if_conditional724) {
                    __result373__ = __result_obj__ = (void*)0;
                    return __result373__;
                }
                result_332=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value677=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"))));
                come_call_finalizer2(sConditionalNode_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional725=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional725) {
                    __dec_obj289=result_332->mValue1;
                    result_332->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value678=sNode_clone(self->mValue1))));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value678) { right_value678 = come_decrement_ref_count2(right_value678, ((struct sNode*)right_value678)->finalize, ((struct sNode*)right_value678)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional726=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional726) {
                    __dec_obj290=result_332->mValue2;
                    result_332->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value679=sNode_clone(self->mValue2))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value679) { right_value679 = come_decrement_ref_count2(right_value679, ((struct sNode*)right_value679)->finalize, ((struct sNode*)right_value679)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional727=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional727) {
                    __dec_obj291=result_332->mValue3;
                    result_332->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value680=sNode_clone(self->mValue3))));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value680) { right_value680 = come_decrement_ref_count2(right_value680, ((struct sNode*)right_value680)->finalize, ((struct sNode*)right_value680)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional728=self!=((void*)0),                _if_conditional728) {
                    result_332->sline=self->sline;
                }
                if(_if_conditional729=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional729) {
                    __dec_obj292=result_332->sname;
                    result_332->sname=(char*)come_increment_ref_count(((char*)(right_value681=string_clone(self->sname))));
                    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value681 = come_decrement_ref_count2(right_value681, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result374__ = __result_obj__ = result_332;
                come_call_finalizer2(sConditionalNode_finalize,result_332, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result374__;
                come_call_finalizer2(sConditionalNode_finalize,result_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
void* right_value683;
struct sNode* node_333;
struct sNode* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
right_value683 = (void*)0;
memset(&node_333, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_333=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value683=conditional_exp(info))));
    if(right_value683) { right_value683 = come_decrement_ref_count2(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result377__ = __result_obj__ = node_333;
    if(node_333) { node_333 = come_decrement_ref_count2(node_333, ((struct sNode*)node_333)->finalize, ((struct sNode*)node_333)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result377__;
    if(node_333) { node_333 = come_decrement_ref_count2(node_333, ((struct sNode*)node_333)->finalize, ((struct sNode*)node_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional730;
void* right_value684;
void* right_value685;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value688;
struct sNode* __result380__;
_Bool _if_conditional735;
void* right_value689;
void* right_value690;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value693;
struct sNode* __result383__;
void* right_value694;
struct sNode* __result384__;
memset(&__result_obj__, 0, sizeof(void*));
right_value684 = (void*)0;
right_value685 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
right_value693 = (void*)0;
right_value694 = (void*)0;
    if(_if_conditional730=charp_operator_equals(buf,"null"),    _if_conditional730) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2782, "struct sNode");
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value685=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value684=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2782, "sNullNode")))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNullNode_sline;
        _inf_value46->sname=(void*)sNullNode_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result380__ = __result_obj__ = ((struct sNode*)(right_value688=_inf_value46));
        come_call_finalizer2(sNullNode_finalize,right_value684, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sNullNode_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value688) { right_value688 = come_decrement_ref_count2(right_value688, ((struct sNode*)right_value688)->finalize, ((struct sNode*)right_value688)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result380__;
    }
    else {
        if(_if_conditional735=charp_operator_equals(buf,"nil"),        _if_conditional735) {
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2785, "struct sNode");
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value690=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value689=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2785, "sNilNode")))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNilNode_sline;
            _inf_value47->sname=(void*)sNilNode_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result383__ = __result_obj__ = ((struct sNode*)(right_value693=_inf_value47));
            come_call_finalizer2(sNilNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sNilNode_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value693) { right_value693 = come_decrement_ref_count2(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result383__;
        }
    }
    __result384__ = __result_obj__ = ((struct sNode*)(right_value694=string_node_v12(buf,head,head_sline,info)));
    if(right_value694) { right_value694 = come_decrement_ref_count2(right_value694, ((struct sNode*)right_value694)->finalize, ((struct sNode*)right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result384__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional731;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional731=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional731) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional732;
struct sNullNode* __result378__;
void* right_value686;
struct sNullNode* result_334;
_Bool _if_conditional733;
_Bool _if_conditional734;
void* right_value687;
char* __dec_obj293;
struct sNullNode* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
right_value686 = (void*)0;
memset(&result_334, 0, sizeof(struct sNullNode*));
right_value687 = (void*)0;
            if(_if_conditional732=self==(void*)0,            _if_conditional732) {
                __result378__ = __result_obj__ = (void*)0;
                return __result378__;
            }
            result_334=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value686=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"))));
            come_call_finalizer2(sNullNode_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional733=self!=((void*)0),            _if_conditional733) {
                result_334->sline=self->sline;
            }
            if(_if_conditional734=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional734) {
                __dec_obj293=result_334->sname;
                result_334->sname=(char*)come_increment_ref_count(((char*)(right_value687=string_clone(self->sname))));
                __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result379__ = __result_obj__ = result_334;
            come_call_finalizer2(sNullNode_finalize,result_334, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result379__;
            come_call_finalizer2(sNullNode_finalize,result_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional736;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional736=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional736) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional737;
struct sNilNode* __result381__;
void* right_value691;
struct sNilNode* result_335;
_Bool _if_conditional738;
_Bool _if_conditional739;
void* right_value692;
char* __dec_obj294;
struct sNilNode* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
right_value691 = (void*)0;
memset(&result_335, 0, sizeof(struct sNilNode*));
right_value692 = (void*)0;
                if(_if_conditional737=self==(void*)0,                _if_conditional737) {
                    __result381__ = __result_obj__ = (void*)0;
                    return __result381__;
                }
                result_335=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value691=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"))));
                come_call_finalizer2(sNilNode_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional738=self!=((void*)0),                _if_conditional738) {
                    result_335->sline=self->sline;
                }
                if(_if_conditional739=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional739) {
                    __dec_obj294=result_335->sname;
                    result_335->sname=(char*)come_increment_ref_count(((char*)(right_value692=string_clone(self->sname))));
                    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result382__ = __result_obj__ = result_335;
                come_call_finalizer2(sNilNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result382__;
                come_call_finalizer2(sNilNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

