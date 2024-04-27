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
struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};
struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
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
    _Bool mNobodyStruct;
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
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
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
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sNullableNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sRangeCheckNode
{
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    _Bool mBreakGuard;
    int sline;
    char* sname;
};
struct sLoadRangeArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
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
static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size);
static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size);
static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size);
static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size);
static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

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

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

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

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);

_Bool sNullableNode_terminated();

char* sNullableNode_kind();

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
int sNullableNode_sline(struct sNullableNode* self, struct sInfo* info);

char* sNullableNode_sname(struct sNullableNode* self, struct sInfo* info);

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated();

char* sRangeCheckNode_kind();

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info);

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

char* sLoadFieldNode_kind();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

char* sStoreArrayNode_kind();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

char* sLoadArrayNode_kind();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated();

char* sLoadRangeArrayNode_kind();

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info);

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
// inline function
static inline _Bool die(char* msg){
void* __result_obj__;
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    # 50 "./comelang2.h"
    perror(msg);
    # 51 "./comelang2.h"
    stackframe();
    # 52 "./comelang2.h"
    exit(4);
    # 54 "./comelang2.h"
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    # 1943 "./comelang2.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1943, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1944 "./comelang2.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1945 "./comelang2.h"
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer2(buffer_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer2(buffer_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    # 1950 "./comelang2.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1951 "./comelang2.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1952 "./comelang2.h"
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer2(buffer_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer2(buffer_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    # 1957 "./comelang2.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1958 "./comelang2.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1959 "./comelang2.h"
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer2(buffer_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer2(buffer_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    # 1964 "./comelang2.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1965 "./comelang2.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1966 "./comelang2.h"
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer2(buffer_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer2(buffer_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    # 1971 "./comelang2.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1972 "./comelang2.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1973 "./comelang2.h"
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer2(buffer_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer2(buffer_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    # 1978 "./comelang2.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1979 "./comelang2.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1980 "./comelang2.h"
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer2(buffer_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer2(buffer_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    # 1993 "./comelang2.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1993, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1995 "./comelang2.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1996 "./comelang2.h"
    result_6->p=result_6->memory->buf;
    # 1998 "./comelang2.h"
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    # 2003 "./comelang2.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2003, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2005 "./comelang2.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2006 "./comelang2.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2008 "./comelang2.h"
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    # 2013 "./comelang2.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2013, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2015 "./comelang2.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2016 "./comelang2.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2018 "./comelang2.h"
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    # 2023 "./comelang2.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2023, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2025 "./comelang2.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2026 "./comelang2.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2028 "./comelang2.h"
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    # 2033 "./comelang2.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2033, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2035 "./comelang2.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2036 "./comelang2.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2038 "./comelang2.h"
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_10, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    # 2201 "./comelang2.h"
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2201, "smart_pointer$1char")))),self,sizeof(char)*len)));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    # 2206 "./comelang2.h"
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2206, "smart_pointer$1short")))),self,sizeof(short short)*len)));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    # 2211 "./comelang2.h"
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2211, "smart_pointer$1int")))),self,sizeof(int)*len)));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    # 2216 "./comelang2.h"
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2216, "smart_pointer$1long")))),self,sizeof(long)*len)));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    # 2221 "./comelang2.h"
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2221, "smart_pointer$1float")))),self,sizeof(float)*len)));
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    # 2226 "./comelang2.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2226, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2255 "./comelang2.h"
    __result25__ = len;
    return __result25__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2260 "./comelang2.h"
    __result26__ = len;
    return __result26__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2265 "./comelang2.h"
    __result27__ = len;
    return __result27__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2270 "./comelang2.h"
    __result28__ = len;
    return __result28__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2275 "./comelang2.h"
    __result29__ = len;
    return __result29__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2280 "./comelang2.h"
    __result30__ = len;
    return __result30__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value46;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
    # 2341 "./comelang2.h"
    __result31__ = __result_obj__ = ((char*)(right_value46=xsprintf(msg,self)));
    right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result31__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value47;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
    # 2346 "./comelang2.h"
    __result32__ = __result_obj__ = ((char*)(right_value47=xsprintf(msg,self)));
    right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value48;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
    # 2351 "./comelang2.h"
    __result33__ = __result_obj__ = ((char*)(right_value48=xsprintf(msg,self)));
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        # 2045 "./comelang2.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2049 "./comelang2.h"
        self->p=(char*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result13__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        # 2045 "./comelang2.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2049 "./comelang2.h"
        self->p=(short short*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result15__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        # 2045 "./comelang2.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2049 "./comelang2.h"
        self->p=(int*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result17__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        # 2045 "./comelang2.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2049 "./comelang2.h"
        self->p=(long*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result19__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        # 2045 "./comelang2.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2049 "./comelang2.h"
        self->p=(float*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        # 2045 "./comelang2.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2049 "./comelang2.h"
        self->p=(double*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value84;
struct sType* generics_type_35;
_Bool _if_conditional97;
struct sType* __dec_obj35;
struct sClass* klass_36;
char* class_name_37;
char* fun_name2_38;
struct sFun* operator_fun_39;
_Bool _if_conditional98;
_Bool _if_conditional100;
void* right_value85;
char* none_generics_name_40;
void* right_value86;
struct sType* obj_type_41;
void* right_value87;
char* __dec_obj36;
void* right_value88;
char* fun_name3_42;
struct sGenericsFun* generics_fun_45;
_Bool _if_conditional115;
void* right_value89;
_Bool _if_conditional116;
_Bool __result58__;
void* right_value90;
char* __dec_obj37;
int i_49;
void* right_value91;
char* new_fun_name_50;
_Bool _if_conditional136;
void* right_value92;
char* __dec_obj38;
_Bool _if_conditional137;
_Bool result_51;
_Bool _if_conditional138;
void* right_value93;
struct CVALUE* come_value_52;
char* left_value2_53;
void* right_value94;
void* right_value95;
_Bool _if_conditional143;
void* right_value96;
char* __dec_obj39;
void* right_value97;
char* __dec_obj40;
char* middle_value2_57;
void* right_value98;
void* right_value99;
_Bool _if_conditional144;
void* right_value100;
char* __dec_obj41;
void* right_value101;
char* __dec_obj42;
char* right_value2_58;
void* right_value102;
void* right_value103;
_Bool _if_conditional145;
void* right_value104;
char* __dec_obj43;
void* right_value105;
char* __dec_obj44;
void* right_value106;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
char* __dec_obj45;
void* right_value111;
struct sType* result_type1_59;
void* right_value112;
struct sType* result_type2_60;
void* right_value113;
struct sType* __dec_obj46;
_Bool _if_conditional146;
void* right_value114;
char* __dec_obj47;
_Bool _if_conditional147;
void* right_value115;
void* right_value116;
char* __dec_obj48;
void* right_value117;
char* __dec_obj49;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&generics_type_35, 0, sizeof(struct sType*));
memset(&klass_36, 0, sizeof(struct sClass*));
memset(&class_name_37, 0, sizeof(char*));
memset(&fun_name2_38, 0, sizeof(char*));
memset(&operator_fun_39, 0, sizeof(struct sFun*));
right_value85 = (void*)0;
memset(&none_generics_name_40, 0, sizeof(char*));
right_value86 = (void*)0;
memset(&obj_type_41, 0, sizeof(struct sType*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&fun_name3_42, 0, sizeof(char*));
memset(&generics_fun_45, 0, sizeof(struct sGenericsFun*));
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&i_49, 0, sizeof(int));
right_value91 = (void*)0;
memset(&new_fun_name_50, 0, sizeof(char*));
right_value92 = (void*)0;
memset(&result_51, 0, sizeof(_Bool));
right_value93 = (void*)0;
memset(&come_value_52, 0, sizeof(struct CVALUE*));
memset(&left_value2_53, 0, sizeof(char*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&middle_value2_57, 0, sizeof(char*));
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&right_value2_58, 0, sizeof(char*));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&result_type1_59, 0, sizeof(struct sType*));
right_value112 = (void*)0;
memset(&result_type2_60, 0, sizeof(struct sType*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
    # 5 "18field.c"
    generics_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 11 "18field.c"
    # 7 "18field.c"
    if(generics_type_35->mNoSolvedGenericsType->v1) {
        # 8 "18field.c"
        __dec_obj35=generics_type_35;
        generics_type_35=(struct sType*)come_increment_ref_count(generics_type_35->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 11 "18field.c"
    klass_36=type->mClass;
    # 12 "18field.c"
    class_name_37=klass_36->mName;
    # 14 "18field.c"
    # 15 "18field.c"
    operator_fun_39=((void*)0);
    # 21 "18field.c"
    # 17 "18field.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 18 "18field.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 58 "18field.c"
    # 21 "18field.c"
    if(_if_conditional100=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional100) {
        # 22 "18field.c"
        none_generics_name_40=(char*)come_increment_ref_count(((char*)(right_value85=get_none_generics_name(type->mClass->mName))));
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 24 "18field.c"
        obj_type_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 26 "18field.c"
        __dec_obj36=fun_name2_38;
        fun_name2_38=(char*)come_increment_ref_count(((char*)(right_value87=create_method_name(obj_type_41,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 27 "18field.c"
        fun_name3_42=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s_%s",none_generics_name_40,fun_name))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 29 "18field.c"
        generics_fun_45=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_42,((void*)0));
        # 37 "18field.c"
        # 31 "18field.c"
        if(generics_fun_45) {
            # 35 "18field.c"
            # 32 "18field.c"
            if(_if_conditional116=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(fun_name2_38)))),generics_fun_45,obj_type_41,info),            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional116) {
                # 33 "18field.c"
                __result58__ = (_Bool)0;
                none_generics_name_40 = come_decrement_ref_count2(none_generics_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_42 = come_decrement_ref_count2(fun_name3_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_38 = come_decrement_ref_count2(fun_name2_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result58__;
            }
        }
        # 37 "18field.c"
        operator_fun_39=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_38);
        none_generics_name_40 = come_decrement_ref_count2(none_generics_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_42 = come_decrement_ref_count2(fun_name3_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 40 "18field.c"
        __dec_obj37=fun_name2_38;
        fun_name2_38=(char*)come_increment_ref_count(((char*)(right_value90=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 42 "18field.c"
        # 53 "18field.c"
        for(        i_49=128-1;        i_49>=1;        i_49--        ){
            # 44 "18field.c"
            new_fun_name_50=(char*)come_increment_ref_count(((char*)(right_value91=xsprintf("%s_v%d",fun_name2_38,i_49))));
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 45 "18field.c"
            operator_fun_39=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_50);
            # 51 "18field.c"
            # 47 "18field.c"
            if(operator_fun_39) {
                # 48 "18field.c"
                __dec_obj38=fun_name2_38;
                fun_name2_38=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(new_fun_name_50))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 49 "18field.c"
                new_fun_name_50 = come_decrement_ref_count2(new_fun_name_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_50 = come_decrement_ref_count2(new_fun_name_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 56 "18field.c"
        # 53 "18field.c"
        if(_if_conditional137=operator_fun_39==((void*)0),        _if_conditional137) {
            # 54 "18field.c"
            operator_fun_39=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_38);
        }
    }
    # 58 "18field.c"
    result_51=(_Bool)0;
    # 116 "18field.c"
    # 60 "18field.c"
    if(operator_fun_39) {
        # 61 "18field.c"
        come_value_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value93=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 62 "18field.c"
        # 63 "18field.c"
        check_assign_type(((char*)(right_value95=xsprintf("\%s is assigned to",((char*)(right_value94=string_to_string(fun_name2_38)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 71 "18field.c"
        # 64 "18field.c"
        if(_if_conditional143=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap,        _if_conditional143) {
            # 65 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info);
            # 66 "18field.c"
            __dec_obj39=left_value2_53;
            left_value2_53=(char*)come_increment_ref_count(((char*)(right_value96=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 69 "18field.c"
            __dec_obj40=left_value2_53;
            left_value2_53=(char*)come_increment_ref_count(((char*)(right_value97=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 71 "18field.c"
        # 72 "18field.c"
        check_assign_type(((char*)(right_value99=xsprintf("\%s is assigned to",((char*)(right_value98=string_to_string(fun_name2_38)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 80 "18field.c"
        # 73 "18field.c"
        if(_if_conditional144=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap,        _if_conditional144) {
            # 74 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info);
            # 75 "18field.c"
            __dec_obj41=middle_value2_57;
            middle_value2_57=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s",middle_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 78 "18field.c"
            __dec_obj42=middle_value2_57;
            middle_value2_57=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(middle_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 80 "18field.c"
        # 81 "18field.c"
        check_assign_type(((char*)(right_value103=xsprintf("\%s is assigned to",((char*)(right_value102=string_to_string(fun_name2_38)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 90 "18field.c"
        # 82 "18field.c"
        if(_if_conditional145=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap,        _if_conditional145) {
            # 83 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info);
            # 84 "18field.c"
            __dec_obj43=right_value2_58;
            right_value2_58=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s",right_value->c_value))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 87 "18field.c"
            __dec_obj44=right_value2_58;
            right_value2_58=(char*)come_increment_ref_count(((char*)(right_value105=string_clone(right_value->c_value))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 90 "18field.c"
        __dec_obj45=come_value_52->c_value;
        come_value_52->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value106=string_to_string(fun_name2_38))),((char*)(right_value107=string_to_string(left_value2_53))),((char*)(right_value108=string_to_string(middle_value2_57))),((char*)(right_value109=string_to_string(right_value2_58)))))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 92 "18field.c"
        result_type1_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(operator_fun_39->mResultType))));
        come_call_finalizer2(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 94 "18field.c"
        result_type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=solve_generics(result_type1_59,generics_type_35,info))));
        come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 96 "18field.c"
        __dec_obj46=come_value_52->type;
        come_value_52->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(result_type2_60))));
        come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 97 "18field.c"
        come_value_52->var=((void*)0);
        # 103 "18field.c"
        # 99 "18field.c"
        if(result_type2_60->mHeap) {
            # 100 "18field.c"
            __dec_obj47=come_value_52->c_value;
            come_value_52->c_value=(char*)come_increment_ref_count(((char*)(right_value114=append_object_to_right_values(come_value_52->c_value,(struct sType*)come_increment_ref_count(result_type2_60),info))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 107 "18field.c"
        # 103 "18field.c"
        if(_if_conditional147=result_type2_60->mGuardValue&&result_type2_60->mPointerNum>0,        _if_conditional147) {
            # 104 "18field.c"
            __dec_obj48=come_value_52->c_value;
            come_value_52->c_value=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value115=make_type_name_string(result_type2_60,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_52->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 107 "18field.c"
        __dec_obj49=come_value_52->c_value;
        come_value_52->c_value=(char*)come_increment_ref_count(((char*)(right_value117=append_stackframe(come_value_52->c_value,come_value_52->type,info))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 109 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_52->c_value);
        # 111 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_52));
        # 113 "18field.c"
        result_51=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_53 = come_decrement_ref_count2(left_value2_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_57 = come_decrement_ref_count2(middle_value2_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_58 = come_decrement_ref_count2(right_value2_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type1_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 116 "18field.c"
    __result66__ = result_51;
    come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_38 = come_decrement_ref_count2(fun_name2_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result66__;
    come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_38 = come_decrement_ref_count2(fun_name2_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional7;
struct sType* __result34__;
void* right_value49;
struct sType* result_11;
_Bool _if_conditional25;
_Bool _if_conditional26;
void* right_value56;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional30;
void* right_value59;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional34;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional35;
void* right_value61;
char* __dec_obj19;
_Bool _if_conditional36;
void* right_value62;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional37;
void* right_value70;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value71;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional52;
void* right_value78;
struct list$1charph* __dec_obj29;
_Bool _if_conditional56;
void* right_value79;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional57;
_Bool _if_conditional58;
void* right_value80;
struct sNode* __dec_obj31;
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
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value81;
struct sNode* __dec_obj32;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value82;
char* __dec_obj33;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value83;
char* __dec_obj34;
_Bool _if_conditional96;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
memset(&result_11, 0, sizeof(struct sType*));
right_value56 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            # 2 "sType_clone"
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        # 3 "sType_clone"
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional25=self!=((void*)0),        _if_conditional25) {
            # 4 "sType_clone"
            result_11->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional26=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional26) {
            # 5 "sType_clone"
            __dec_obj15=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional30=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional30) {
            # 6 "sType_clone"
            __dec_obj17=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value59=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional34=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional34) {
            # 7 "sType_clone"
            __dec_obj18=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional35) {
            # 8 "sType_clone"
            __dec_obj19=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional36=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional36) {
            # 9 "sType_clone"
            __dec_obj20=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value62=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional37=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional37) {
            # 10 "sType_clone"
            __dec_obj24=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value70=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            # 11 "sType_clone"
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional51=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional51) {
            # 12 "sType_clone"
            __dec_obj25=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value71=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional52) {
            # 13 "sType_clone"
            __dec_obj29=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional56=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional56) {
            # 14 "sType_clone"
            __dec_obj30=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value79=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            # 15 "sType_clone"
            result_11->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional58=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional58) {
            # 16 "sType_clone"
            __dec_obj31=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            # 17 "sType_clone"
            result_11->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            # 18 "sType_clone"
            result_11->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            # 19 "sType_clone"
            result_11->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 20 "sType_clone"
            result_11->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 21 "sType_clone"
            result_11->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            # 22 "sType_clone"
            result_11->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            # 23 "sType_clone"
            result_11->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 24 "sType_clone"
            result_11->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            # 25 "sType_clone"
            result_11->mExtern=self->mExtern;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 26 "sType_clone"
            result_11->mRestrict=self->mRestrict;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 27 "sType_clone"
            result_11->mImmutable=self->mImmutable;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 28 "sType_clone"
            result_11->mHeap=self->mHeap;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 29 "sType_clone"
            result_11->mDummyHeap=self->mDummyHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 30 "sType_clone"
            result_11->mDelegate=self->mDelegate;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 31 "sType_clone"
            result_11->mShare=self->mShare;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 32 "sType_clone"
            result_11->mClone=self->mClone;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 33 "sType_clone"
            result_11->mNoHeap=self->mNoHeap;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 34 "sType_clone"
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 35 "sType_clone"
            result_11->mRefference=self->mRefference;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 36 "sType_clone"
            result_11->mException=self->mException;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 37 "sType_clone"
            result_11->mPointerNum=self->mPointerNum;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 38 "sType_clone"
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 39 "sType_clone"
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional82=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional82) {
            # 40 "sType_clone"
            __dec_obj32=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 41 "sType_clone"
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 42 "sType_clone"
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional85=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional85) {
            # 43 "sType_clone"
            __dec_obj33=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value82=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 44 "sType_clone"
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 45 "sType_clone"
            result_11->mFunctionParam=self->mFunctionParam;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 46 "sType_clone"
            result_11->mAllocaValue=self->mAllocaValue;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 47 "sType_clone"
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 48 "sType_clone"
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 49 "sType_clone"
            result_11->mComeMemCore=self->mComeMemCore;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 50 "sType_clone"
            result_11->mInline=self->mInline;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 51 "sType_clone"
            result_11->mNullValue=self->mNullValue;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 52 "sType_clone"
            result_11->mGuardValue=self->mGuardValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional95=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional95) {
            # 53 "sType_clone"
            __dec_obj34=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 54 "sType_clone"
            result_11->mArrayPointerType=self->mArrayPointerType;
        }
        # 55 "sType_clone"
        __result51__ = __result_obj__ = result_11;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result51__;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional8=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional8) {
                # 0 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional10) {
                # 1 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional12) {
                # 2 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional13) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional14) {
                # 4 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional15) {
                # 5 "sType_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional17) {
                # 6 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional18) {
                # 7 "sType_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional20) {
                # 8 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional21) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional22) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional23) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional24) {
                # 12 "sType_finalize"
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_12;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1sTypeph*));
                    # 123 "./comelang2.h"
                    it_12=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional1=it_12!=((void*)0),                    _while_condtional1) {
                        # 125 "./comelang2.h"
                        prev_it_13=it_12;
                        # 126 "./comelang2.h"
                        it_12=it_12->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional9=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional9) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional11) {
                        # 0 "tuple1$1sTypephp_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1sNodeph*));
                    # 123 "./comelang2.h"
                    it_14=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional2=it_14!=((void*)0),                    _while_condtional2) {
                        # 125 "./comelang2.h"
                        prev_it_15=it_14;
                        # 126 "./comelang2.h"
                        it_14=it_14->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                # 0 "list_item$1sNodephp_finalize"
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_16;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1charph*));
                    # 123 "./comelang2.h"
                    it_16=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional3=it_16!=((void*)0),                    _while_condtional3) {
                        # 125 "./comelang2.h"
                        prev_it_17=it_16;
                        # 126 "./comelang2.h"
                        it_16=it_16->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
struct list$1sTypeph* __result35__;
void* right_value50;
void* right_value51;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional4;
void* right_value55;
struct list$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
right_value55 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional27=self==((void*)0),                _if_conditional27) {
                    # 140 "./comelang2.h"
                    __result35__ = __result_obj__ = ((void*)0);
                    return __result35__;
                }
                # 142 "./comelang2.h"
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value50=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_19=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    # 146 "./comelang2.h"
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_19=it_19->next;
                }
                # 151 "./comelang2.h"
                __result38__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result38__;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result36__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result36__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional28;
void* right_value52;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj12;
_Bool _if_conditional29;
void* right_value53;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj13;
void* right_value54;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj14;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
right_value53 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
right_value54 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional28=self->len==0,                        _if_conditional28) {
                            # 156 "./comelang2.h"
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_20->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_20->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj12=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_20;
                            # 163 "./comelang2.h"
                            self->head=litem_20;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional29=self->len==1,                            _if_conditional29) {
                                # 166 "./comelang2.h"
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_21->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_21->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj13=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_21;
                                # 173 "./comelang2.h"
                                self->head->next=litem_21;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_22->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_22->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj14=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_22;
                                # 183 "./comelang2.h"
                                self->tail=litem_22;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result37__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result37__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct tuple1$1sTypeph* __result39__;
void* right_value57;
struct tuple1$1sTypeph* result_23;
_Bool _if_conditional33;
void* right_value58;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&result_23, 0, sizeof(struct tuple1$1sTypeph*));
right_value58 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional31=self==(void*)0,                _if_conditional31) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional33) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj16=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result40__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional32) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional38;
struct list$1sNodeph* __result41__;
void* right_value63;
void* right_value64;
struct list$1sNodeph* result_24;
struct list_item$1sNodeph* it_25;
_Bool _while_condtional5;
void* right_value69;
struct list$1sNodeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1sNodeph*));
memset(&it_25, 0, sizeof(struct list_item$1sNodeph*));
right_value69 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional38=self==((void*)0),                _if_conditional38) {
                    # 140 "./comelang2.h"
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                # 142 "./comelang2.h"
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value64=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value63=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_25=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    # 146 "./comelang2.h"
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=sNode_clone(it_25->item)))));
                    if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "./comelang2.h"
                    it_25=it_25->next;
                }
                # 151 "./comelang2.h"
                __result46__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result42__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result42__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional39;
void* right_value65;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj21;
_Bool _if_conditional40;
void* right_value66;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj22;
void* right_value67;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
right_value66 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
right_value67 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional39=self->len==0,                        _if_conditional39) {
                            # 156 "./comelang2.h"
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value65=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_26->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_26->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj21=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            # 162 "./comelang2.h"
                            self->tail=litem_26;
                            # 163 "./comelang2.h"
                            self->head=litem_26;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional40=self->len==1,                            _if_conditional40) {
                                # 166 "./comelang2.h"
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value66=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_27->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_27->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj22=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./comelang2.h"
                                self->tail=litem_27;
                                # 173 "./comelang2.h"
                                self->head->next=litem_27;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value67=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_28->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_28->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj23=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                # 182 "./comelang2.h"
                                self->tail->next=litem_28;
                                # 183 "./comelang2.h"
                                self->tail=litem_28;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result43__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result43__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional41;
struct sNode* __result44__;
void* right_value68;
struct sNode* result_29;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
struct sNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&result_29, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional41=self==(void*)0,                        _if_conditional41) {
                            # 2 "sNode_clone"
                            __result44__ = __result_obj__ = (void*)0;
                            return __result44__;
                        }
                        # 3 "sNode_clone"
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value68) { right_value68 = come_decrement_ref_count2(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional42=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional42) {
                            # 4 "sNode_clone"
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            # 5 "sNode_clone"
                            result_29->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            # 6 "sNode_clone"
                            result_29->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            # 7 "sNode_clone"
                            result_29->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            # 8 "sNode_clone"
                            result_29->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            # 9 "sNode_clone"
                            result_29->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            # 10 "sNode_clone"
                            result_29->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            # 11 "sNode_clone"
                            result_29->kind=self->kind;
                        }
                        # 12 "sNode_clone"
                        __result45__ = __result_obj__ = result_29;
                        if(result_29) { result_29 = come_decrement_ref_count2(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result45__;
                        if(result_29) { result_29 = come_decrement_ref_count2(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional53;
struct list$1charph* __result47__;
void* right_value72;
void* right_value73;
struct list$1charph* result_30;
struct list_item$1charph* it_31;
_Bool _while_condtional6;
void* right_value77;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
right_value73 = (void*)0;
memset(&result_30, 0, sizeof(struct list$1charph*));
memset(&it_31, 0, sizeof(struct list_item$1charph*));
right_value77 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional53=self==((void*)0),                _if_conditional53) {
                    # 140 "./comelang2.h"
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                # 142 "./comelang2.h"
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value73=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value72=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_31=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    # 146 "./comelang2.h"
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value77=string_clone(it_31->item)))));
                    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_31=it_31->next;
                }
                # 151 "./comelang2.h"
                __result50__ = __result_obj__ = result_30;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result50__;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
                    __result48__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result48__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional54;
void* right_value74;
struct list_item$1charph* litem_32;
char* __dec_obj26;
_Bool _if_conditional55;
void* right_value75;
struct list_item$1charph* litem_33;
char* __dec_obj27;
void* right_value76;
struct list_item$1charph* litem_34;
char* __dec_obj28;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
right_value75 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
right_value76 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional54=self->len==0,                        _if_conditional54) {
                            # 156 "./comelang2.h"
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value74=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_32->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_32->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj26=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_32;
                            # 163 "./comelang2.h"
                            self->head=litem_32;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional55=self->len==1,                            _if_conditional55) {
                                # 166 "./comelang2.h"
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value75=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_33->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_33->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj27=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_33;
                                # 173 "./comelang2.h"
                                self->head->next=litem_33;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value76=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_34->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_34->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj28=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_34;
                                # 183 "./comelang2.h"
                                self->tail=litem_34;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
                        __result49__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result49__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional99;
int __result52__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional99=self==((void*)0),        _if_conditional99) {
            # 365 "./comelang2.h"
            __result52__ = 0;
            return __result52__;
        }
        # 367 "./comelang2.h"
        __result53__ = self->len;
        return __result53__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_43;
unsigned int it_44;
_Bool _while_condtional7;
_Bool _if_conditional101;
_Bool _if_conditional102;
struct sGenericsFun* __result54__;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct sGenericsFun* __result55__;
struct sGenericsFun* __result56__;
struct sGenericsFun* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&it_44, 0, sizeof(unsigned int));
            # 1226 "./comelang2.h"
            hash_43=string_get_hash_key(((char*)key))%self->size;
            # 1227 "./comelang2.h"
            it_44=hash_43;
            # 1251 "./comelang2.h"
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                # 1249 "./comelang2.h"
                # 1230 "./comelang2.h"
                if(_if_conditional101=self->item_existance[it_44],                _if_conditional101) {
                    # 1237 "./comelang2.h"
                    # 1232 "./comelang2.h"
                    if(_if_conditional102=string_equals(self->keys[it_44],key),                    _if_conditional102) {
                        # 1234 "./comelang2.h"
                        __result54__ = __result_obj__ = self->items[it_44];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result54__;
                    }
                    # 1237 "./comelang2.h"
                    it_44++;
                    # 1245 "./comelang2.h"
                    # 1239 "./comelang2.h"
                    if(_if_conditional113=it_44>=self->size,                    _if_conditional113) {
                        # 1240 "./comelang2.h"
                        it_44=0;
                    }
                    else {
                        # 1245 "./comelang2.h"
                        # 1242 "./comelang2.h"
                        if(_if_conditional114=it_44==hash_43,                        _if_conditional114) {
                            # 1243 "./comelang2.h"
                            __result55__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result55__;
                        }
                    }
                }
                else {
                    # 1247 "./comelang2.h"
                    __result56__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                }
            }
            # 1251 "./comelang2.h"
            __result57__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result57__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sGenericsFun_finalize"
                            # 0 "sGenericsFun_finalize"
                            if(_if_conditional103=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional103) {
                                # 0 "sGenericsFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sGenericsFun_finalize"
                            # 1 "sGenericsFun_finalize"
                            if(_if_conditional104=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional104) {
                                # 1 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sGenericsFun_finalize"
                            # 2 "sGenericsFun_finalize"
                            if(_if_conditional105=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional105) {
                                # 2 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sGenericsFun_finalize"
                            # 3 "sGenericsFun_finalize"
                            if(_if_conditional106=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional106) {
                                # 3 "sGenericsFun_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sGenericsFun_finalize"
                            # 4 "sGenericsFun_finalize"
                            if(_if_conditional107=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional107) {
                                # 4 "sGenericsFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sGenericsFun_finalize"
                            # 5 "sGenericsFun_finalize"
                            if(_if_conditional108=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional108) {
                                # 5 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sGenericsFun_finalize"
                            # 6 "sGenericsFun_finalize"
                            if(_if_conditional109=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional109) {
                                # 6 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sGenericsFun_finalize"
                            # 7 "sGenericsFun_finalize"
                            if(_if_conditional110=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional110) {
                                # 7 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sGenericsFun_finalize"
                            # 8 "sGenericsFun_finalize"
                            if(_if_conditional111=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional111) {
                                # 8 "sGenericsFun_finalize"
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sGenericsFun_finalize"
                            # 9 "sGenericsFun_finalize"
                            if(_if_conditional112=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional112) {
                                # 9 "sGenericsFun_finalize"
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_46;
unsigned int hash_47;
unsigned int it_48;
_Bool _while_condtional8;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct sFun* __result59__;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct sFun* __result60__;
struct sFun* __result61__;
struct sFun* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_46, 0, sizeof(struct sFun*));
memset(&hash_47, 0, sizeof(unsigned int));
memset(&it_48, 0, sizeof(unsigned int));
            # 1545 "./comelang2.h"
            # 1546 "./comelang2.h"
            memset(&default_value_46,0,sizeof(struct sFun*));
            # 1548 "./comelang2.h"
            hash_47=string_get_hash_key(((char*)key))%self->size;
            # 1549 "./comelang2.h"
            it_48=hash_47;
            # 1573 "./comelang2.h"
            while(_while_condtional8=(_Bool)1,            _while_condtional8) {
                # 1571 "./comelang2.h"
                # 1552 "./comelang2.h"
                if(_if_conditional117=self->item_existance[it_48],                _if_conditional117) {
                    # 1559 "./comelang2.h"
                    # 1554 "./comelang2.h"
                    if(_if_conditional118=string_equals(self->keys[it_48],key),                    _if_conditional118) {
                        # 1556 "./comelang2.h"
                        __result59__ = __result_obj__ = self->items[it_48];
                        come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result59__;
                    }
                    # 1559 "./comelang2.h"
                    it_48++;
                    # 1567 "./comelang2.h"
                    # 1561 "./comelang2.h"
                    if(_if_conditional134=it_48>=self->size,                    _if_conditional134) {
                        # 1562 "./comelang2.h"
                        it_48=0;
                    }
                    else {
                        # 1567 "./comelang2.h"
                        # 1564 "./comelang2.h"
                        if(_if_conditional135=it_48==hash_47,                        _if_conditional135) {
                            # 1565 "./comelang2.h"
                            __result60__ = __result_obj__ = default_value_46;
                            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result60__;
                        }
                    }
                }
                else {
                    # 1569 "./comelang2.h"
                    __result61__ = __result_obj__ = default_value_46;
                    come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result61__;
                }
            }
            # 1573 "./comelang2.h"
            __result62__ = __result_obj__ = default_value_46;
            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result62__;
            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sFun_finalize"
                            # 0 "sFun_finalize"
                            if(_if_conditional119=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional119) {
                                # 0 "sFun_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sFun_finalize"
                            # 1 "sFun_finalize"
                            if(_if_conditional120=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional120) {
                                # 1 "sFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sFun_finalize"
                            # 2 "sFun_finalize"
                            if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional121) {
                                # 2 "sFun_finalize"
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sFun_finalize"
                            # 3 "sFun_finalize"
                            if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional122) {
                                # 3 "sFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sFun_finalize"
                            # 4 "sFun_finalize"
                            if(_if_conditional123=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional123) {
                                # 4 "sFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sFun_finalize"
                            # 5 "sFun_finalize"
                            if(_if_conditional124=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional124) {
                                # 5 "sFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sFun_finalize"
                            # 6 "sFun_finalize"
                            if(_if_conditional125=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional125) {
                                # 6 "sFun_finalize"
                                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sFun_finalize"
                            # 7 "sFun_finalize"
                            if(_if_conditional128=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional128) {
                                # 7 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sFun_finalize"
                            # 8 "sFun_finalize"
                            if(_if_conditional129=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional129) {
                                # 8 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sFun_finalize"
                            # 9 "sFun_finalize"
                            if(_if_conditional130=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional130) {
                                # 9 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 11 "sFun_finalize"
                            # 10 "sFun_finalize"
                            if(_if_conditional131=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional131) {
                                # 10 "sFun_finalize"
                                come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 12 "sFun_finalize"
                            # 11 "sFun_finalize"
                            if(_if_conditional132=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional132) {
                                # 11 "sFun_finalize"
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 13 "sFun_finalize"
                            # 12 "sFun_finalize"
                            if(_if_conditional133=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional133) {
                                # 12 "sFun_finalize"
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sBlock_finalize"
                                    # 0 "sBlock_finalize"
                                    if(_if_conditional126=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional126) {
                                        # 0 "sBlock_finalize"
                                        come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sBlock_finalize"
                                    # 1 "sBlock_finalize"
                                    if(_if_conditional127=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional127) {
                                        # 1 "sBlock_finalize"
                                        come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional139;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional139=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional139) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional140=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional140) {
                # 1 "CVALUE_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional141;
struct list_item$1sTypeph* it_54;
int i_55;
_Bool _while_condtional9;
_Bool _if_conditional142;
struct sType* __result63__;
struct sType* default_value_56;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_55, 0, sizeof(int));
memset(&default_value_56, 0, sizeof(struct sType*));
            # 686 "./comelang2.h"
            # 682 "./comelang2.h"
            if(_if_conditional141=position<0,            _if_conditional141) {
                # 683 "./comelang2.h"
                position+=self->len;
            }
            # 686 "./comelang2.h"
            it_54=self->head;
            # 687 "./comelang2.h"
            i_55=0;
            # 694 "./comelang2.h"
            while(_while_condtional9=it_54!=((void*)0),            _while_condtional9) {
                # 692 "./comelang2.h"
                # 689 "./comelang2.h"
                if(_if_conditional142=position==i_55,                _if_conditional142) {
                    # 690 "./comelang2.h"
                    __result63__ = __result_obj__ = it_54->item;
                    return __result63__;
                }
                # 692 "./comelang2.h"
                it_54=it_54->next;
                # 693 "./comelang2.h"
                i_55++;
            }
            # 696 "./comelang2.h"
            # 697 "./comelang2.h"
            memset(&default_value_56,0,sizeof(struct sType*));
            # 698 "./comelang2.h"
            __result64__ = __result_obj__ = default_value_56;
            come_call_finalizer2(sType_finalize,default_value_56, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer2(sType_finalize,default_value_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional148;
void* right_value118;
struct list_item$1CVALUEph* litem_61;
struct CVALUE* __dec_obj50;
_Bool _if_conditional150;
void* right_value119;
struct list_item$1CVALUEph* litem_62;
struct CVALUE* __dec_obj51;
void* right_value120;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj52;
struct list$1CVALUEph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1CVALUEph*));
right_value119 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1CVALUEph*));
right_value120 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
            # 256 "./comelang2.h"
            # 225 "./comelang2.h"
            if(_if_conditional148=self->len==0,            _if_conditional148) {
                # 226 "./comelang2.h"
                litem_61=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value118=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./comelang2.h"
                litem_61->prev=((void*)0);
                # 229 "./comelang2.h"
                litem_61->next=((void*)0);
                # 230 "./comelang2.h"
                __dec_obj50=litem_61->item;
                litem_61->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 232 "./comelang2.h"
                self->tail=litem_61;
                # 233 "./comelang2.h"
                self->head=litem_61;
            }
            else {
                # 256 "./comelang2.h"
                # 235 "./comelang2.h"
                if(_if_conditional150=self->len==1,                _if_conditional150) {
                    # 236 "./comelang2.h"
                    litem_62=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value119=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./comelang2.h"
                    litem_62->prev=self->head;
                    # 239 "./comelang2.h"
                    litem_62->next=((void*)0);
                    # 240 "./comelang2.h"
                    __dec_obj51=litem_62->item;
                    litem_62->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 242 "./comelang2.h"
                    self->tail=litem_62;
                    # 243 "./comelang2.h"
                    self->head->next=litem_62;
                }
                else {
                    # 246 "./comelang2.h"
                    litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value120=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./comelang2.h"
                    litem_63->prev=self->tail;
                    # 249 "./comelang2.h"
                    litem_63->next=((void*)0);
                    # 250 "./comelang2.h"
                    __dec_obj52=litem_63->item;
                    litem_63->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 252 "./comelang2.h"
                    self->tail->next=litem_63;
                    # 253 "./comelang2.h"
                    self->tail=litem_63;
                }
            }
            # 256 "./comelang2.h"
            self->len++;
            # 258 "./comelang2.h"
            __result65__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result65__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1CVALUEphp_finalize"
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(_if_conditional149=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional149) {
                        # 0 "list_item$1CVALUEphp_finalize"
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value121;
char* __dec_obj53;
void* right_value122;
struct sNode* __dec_obj54;
void* right_value123;
struct sNode* __dec_obj55;
void* right_value124;
char* __dec_obj56;
struct sStoreFieldNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
    # 131 "18field.c"
    self->sline=info->sline;
    # 132 "18field.c"
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value121=__builtin_string(info->sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 134 "18field.c"
    __dec_obj54=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value122=sNode_clone(left))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 135 "18field.c"
    __dec_obj55=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value123=sNode_clone(right))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value123) { right_value123 = come_decrement_ref_count2(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 136 "18field.c"
    __dec_obj56=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 138 "18field.c"
    __result67__ = __result_obj__ = self;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result67__;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStoreFieldNode_terminated(){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    # 143 "18field.c"
    __result68__ = (_Bool)0;
    return __result68__;
}

char* sStoreFieldNode_kind(){
void* __result_obj__;
void* right_value125;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    # 148 "18field.c"
    __result69__ = __result_obj__ = ((char*)(right_value125=__builtin_string("sStoreFieldNode")));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_64;
struct sNode* right_65;
void* right_value126;
char* name_66;
_Bool _if_conditional155;
_Bool __result70__;
void* right_value127;
struct CVALUE* left_value_67;
_Bool _if_conditional156;
void* right_value128;
void* right_value129;
char* __dec_obj57;
_Bool _if_conditional157;
_Bool __result71__;
void* right_value130;
struct CVALUE* right_value_68;
struct sType* right_type_69;
struct sType* left_type_70;
void* right_value131;
struct sType* left_type2_71;
struct sClass* klass_72;
struct sType* field_type_78;
int index_79;
char* child_field_name_80;
_Bool _if_conditional168;
_Bool __result76__;
struct list$1tuple2$2charphsTypephph* o2_saved_81;
struct tuple2$2charphsTypeph* field_84;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_87;
struct sType* field_type2_88;
_Bool _if_conditional173;
void* right_value132;
struct sType* __dec_obj58;
_Bool _if_conditional175;
struct list$1tuple2$2charphsTypephph* o2_saved_89;
struct tuple2$2charphsTypeph* field_90;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_91;
struct sType* field_type2_92;
struct sClass* klass2_93;
struct list$1tuple2$2charphsTypephph* o2_saved_94;
struct tuple2$2charphsTypeph* field2_95;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_96;
struct sType* field_type3_97;
_Bool _if_conditional176;
void* right_value133;
char* __dec_obj59;
void* right_value134;
struct sType* __dec_obj60;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value135;
struct sType* __dec_obj61;
_Bool _if_conditional179;
_Bool __result86__;
void* right_value136;
struct CVALUE* come_value_98;
void* right_value137;
void* right_value138;
void* right_value139;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool __result87__;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value140;
char* c_value_99;
void* right_value141;
char* __dec_obj62;
void* right_value142;
char* c_value_100;
void* right_value143;
char* __dec_obj63;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value144;
char* c_value_101;
void* right_value145;
char* __dec_obj64;
void* right_value146;
char* c_value_102;
void* right_value147;
char* __dec_obj65;
void* right_value148;
char* __dec_obj66;
_Bool __result88__;
int right_value_id_103;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value149;
char* c_value_104;
void* right_value150;
char* __dec_obj67;
void* right_value151;
char* c_value_105;
void* right_value152;
char* __dec_obj68;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value153;
char* c_value_106;
void* right_value154;
char* __dec_obj69;
void* right_value155;
char* c_value_107;
void* right_value156;
char* __dec_obj70;
_Bool __result89__;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value157;
char* __dec_obj71;
void* right_value158;
char* __dec_obj72;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value159;
char* __dec_obj73;
void* right_value160;
char* __dec_obj74;
_Bool __result90__;
void* right_value161;
struct sType* __dec_obj75;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_64, 0, sizeof(struct sNode*));
memset(&right_65, 0, sizeof(struct sNode*));
right_value126 = (void*)0;
memset(&name_66, 0, sizeof(char*));
right_value127 = (void*)0;
memset(&left_value_67, 0, sizeof(struct CVALUE*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&right_value_68, 0, sizeof(struct CVALUE*));
memset(&right_type_69, 0, sizeof(struct sType*));
memset(&left_type_70, 0, sizeof(struct sType*));
right_value131 = (void*)0;
memset(&left_type2_71, 0, sizeof(struct sType*));
memset(&klass_72, 0, sizeof(struct sClass*));
memset(&field_type_78, 0, sizeof(struct sType*));
memset(&index_79, 0, sizeof(int));
memset(&child_field_name_80, 0, sizeof(char*));
memset(&o2_saved_81, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_84, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_87, 0, sizeof(char*));
memset(&field_type2_88, 0, sizeof(struct sType*));
memset(&field_name_87, 0, sizeof(char*));
memset(&field_type2_88, 0, sizeof(struct sType*));
right_value132 = (void*)0;
memset(&o2_saved_89, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_90, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_91, 0, sizeof(char*));
memset(&field_type2_92, 0, sizeof(struct sType*));
memset(&field_name_91, 0, sizeof(char*));
memset(&field_type2_92, 0, sizeof(struct sType*));
memset(&klass2_93, 0, sizeof(struct sClass*));
memset(&o2_saved_94, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_95, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_96, 0, sizeof(char*));
memset(&field_type3_97, 0, sizeof(struct sType*));
memset(&field_name2_96, 0, sizeof(char*));
memset(&field_type3_97, 0, sizeof(struct sType*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&c_value_99, 0, sizeof(char*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&c_value_100, 0, sizeof(char*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&c_value_101, 0, sizeof(char*));
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&c_value_102, 0, sizeof(char*));
right_value147 = (void*)0;
right_value148 = (void*)0;
memset(&right_value_id_103, 0, sizeof(int));
right_value149 = (void*)0;
memset(&c_value_104, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&c_value_105, 0, sizeof(char*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&c_value_106, 0, sizeof(char*));
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&c_value_107, 0, sizeof(char*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
    # 153 "18field.c"
    left_64=self->mLeft;
    # 154 "18field.c"
    right_65=self->mRight;
    # 155 "18field.c"
    name_66=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(self->mName))));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 161 "18field.c"
    # 157 "18field.c"
    if(_if_conditional155=!node_compile(left_64,info),    _if_conditional155) {
        # 158 "18field.c"
        __result70__ = (_Bool)0;
        name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result70__;
    }
    # 161 "18field.c"
    left_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 162 "18field.c"
    dec_stack_ptr(1,info);
    # 168 "18field.c"
    # 164 "18field.c"
    if(_if_conditional156=gComeDebug&&left_value_67->type->mPointerNum>0,    _if_conditional156) {
        # 165 "18field.c"
        __dec_obj57=left_value_67->c_value;
        left_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value128=make_type_name_string(left_value_67->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_67->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 172 "18field.c"
    # 168 "18field.c"
    if(_if_conditional157=!node_compile(right_65,info),    _if_conditional157) {
        # 169 "18field.c"
        __result71__ = (_Bool)0;
        name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result71__;
    }
    # 172 "18field.c"
    right_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 173 "18field.c"
    right_type_69=right_value_68->type;
    # 175 "18field.c"
    dec_stack_ptr(1,info);
    # 177 "18field.c"
    left_type_70=left_value_67->type;
    # 179 "18field.c"
    left_type2_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=solve_generics(left_type_70,left_type_70,info))));
    come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 181 "18field.c"
    klass_72=left_type2_71->mClass;
    # 182 "18field.c"
    klass_72=map$2charphsClassphp_operator_load_element(info->classes,klass_72->mName);
    # 184 "18field.c"
    field_type_78=((void*)0);
    # 185 "18field.c"
    index_79=0;
    # 186 "18field.c"
    child_field_name_80=((void*)0);
    # 187 "18field.c"
    klass_72=map$2charphsClassphp_operator_load_element(info->classes,klass_72->mName);
    # 194 "18field.c"
    # 189 "18field.c"
    if(_if_conditional168=klass_72->mFields==((void*)0),    _if_conditional168) {
        # 190 "18field.c"
        err_msg(info,"%s fields are null",klass_72->mName);
        # 191 "18field.c"
        __result76__ = (_Bool)0;
        name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result76__;
    }
    # 205 "18field.c"
    for(    o2_saved_81=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_72->mFields)),field_84=list$1tuple2$2charphsTypephph_begin((o2_saved_81));    !list$1tuple2$2charphsTypephph_end((o2_saved_81));    field_84=list$1tuple2$2charphsTypephph_next((o2_saved_81))    ){
        # 195 "18field.c"
        multiple_assign_var1=field_84;
        field_name_87=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_88=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 200 "18field.c"
        # 197 "18field.c"
        if(_if_conditional173=string_operator_equals(field_name_87,name_66),        _if_conditional173) {
            # 198 "18field.c"
            __dec_obj58=field_type_78;
            field_type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(field_type2_88))));
            come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 199 "18field.c"
            field_name_87 = come_decrement_ref_count2(field_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        # 202 "18field.c"
        index_79++;
        field_name_87 = come_decrement_ref_count2(field_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 240 "18field.c"
    # 205 "18field.c"
    if(_if_conditional175=index_79==list$1tuple2$2charphsTypephph_length(klass_72->mFields),    _if_conditional175) {
        # 206 "18field.c"
        index_79=0;
        # 234 "18field.c"
        for(        o2_saved_89=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_72->mFields)),field_90=list$1tuple2$2charphsTypephph_begin((o2_saved_89));        !list$1tuple2$2charphsTypephph_end((o2_saved_89));        field_90=list$1tuple2$2charphsTypephph_next((o2_saved_89))        ){
            # 208 "18field.c"
            multiple_assign_var2=field_90;
            field_name_91=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_92=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            # 210 "18field.c"
            klass2_93=field_type2_92->mClass;
            # 222 "18field.c"
            for(            o2_saved_94=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_93->mFields)),field2_95=list$1tuple2$2charphsTypephph_begin((o2_saved_94));            !list$1tuple2$2charphsTypephph_end((o2_saved_94));            field2_95=list$1tuple2$2charphsTypephph_next((o2_saved_94))            ){
                # 213 "18field.c"
                multiple_assign_var3=field2_95;
                field_name2_96=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_97=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                # 220 "18field.c"
                # 215 "18field.c"
                if(_if_conditional176=string_operator_equals(field_name2_96,name_66),                _if_conditional176) {
                    # 216 "18field.c"
                    __dec_obj59=child_field_name_80;
                    child_field_name_80=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(field_name_91))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 217 "18field.c"
                    __dec_obj60=field_type_78;
                    field_type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(field_type3_97))));
                    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 218 "18field.c"
                    field_name2_96 = come_decrement_ref_count2(field_name2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type3_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_96 = come_decrement_ref_count2(field_name2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type3_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 226 "18field.c"
            # 222 "18field.c"
            if(child_field_name_80) {
                # 223 "18field.c"
                field_name_91 = come_decrement_ref_count2(field_name_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 229 "18field.c"
            # 226 "18field.c"
            if(_if_conditional178=string_operator_equals(field_name_91,name_66),            _if_conditional178) {
                # 227 "18field.c"
                __dec_obj61=field_type_78;
                field_type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(field_type2_92))));
                come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "18field.c"
                field_name_91 = come_decrement_ref_count2(field_name_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 231 "18field.c"
            index_79++;
            field_name_91 = come_decrement_ref_count2(field_name_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 238 "18field.c"
        # 234 "18field.c"
        if(_if_conditional179=index_79==list$1tuple2$2charphsTypephph_length(klass_72->mFields),        _if_conditional179) {
            # 235 "18field.c"
            err_msg(info,"field not found(%s) in %s(1)",name_66,klass_72->mName);
            # 236 "18field.c"
            __result86__ = (_Bool)0;
            name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result86__;
        }
    }
    # 240 "18field.c"
    come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 240, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 242 "18field.c"
    check_assign_type(((char*)(right_value138=xsprintf("\%s is assigned to",((char*)(right_value137=string_to_string(name_66)))))),field_type_78,right_type_69,right_value_68,(_Bool)0,(_Bool)1,info);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 244 "18field.c"
    right_type_69=((struct sType*)(right_value139=sType_clone(right_value_68->type)));
    come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 258 "18field.c"
    # 246 "18field.c"
    if(_if_conditional180=field_type_78->mHeap&&!right_value_68->type->mHeap,    _if_conditional180) {
        # 257 "18field.c"
        # 247 "18field.c"
        if(_if_conditional181=string_operator_equals(right_value_68->type->mClass->mName,"void")&&right_value_68->type->mPointerNum==1,        _if_conditional181) {
        }
        else {
            # 256 "18field.c"
            # 251 "18field.c"
            if(_if_conditional182=!right_value_68->type->mDelegate&&!right_value_68->type->mShare&&!gComeGC,            _if_conditional182) {
                # 252 "18field.c"
                err_msg(info,"require right value as heap object(%s)(1)",name_66);
                # 253 "18field.c"
                printf("right type is %s pointer num %d heap %d\n",right_value_68->type->mClass->mName,right_value_68->type->mPointerNum,right_value_68->type->mHeap);
                # 254 "18field.c"
                __result87__ = (_Bool)0;
                name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result87__;
            }
        }
    }
    # 352 "18field.c"
    # 258 "18field.c"
    if(_if_conditional183=field_type_78->mHeap&&right_type_69->mHeap&&field_type_78->mPointerNum>0&&right_type_69->mPointerNum>0,    _if_conditional183) {
        # 292 "18field.c"
        # 260 "18field.c"
        if(_if_conditional184=left_value_67->type->mPointerNum==1,        _if_conditional184) {
            # 273 "18field.c"
            # 261 "18field.c"
            if(child_field_name_80) {
                # 262 "18field.c"
                c_value_99=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s->%s.%s",left_value_67->c_value,child_field_name_80,name_66))));
                right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 263 "18field.c"
                decrement_ref_count_object(field_type_78,c_value_99,info,(_Bool)0);
                # 264 "18field.c"
                std_move(field_type_78,right_type_69,right_value_68,info);
                # 265 "18field.c"
                __dec_obj62=come_value_98->c_value;
                come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("%s->%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_99 = come_decrement_ref_count2(c_value_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 268 "18field.c"
                c_value_100=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("%s->%s",left_value_67->c_value,name_66))));
                right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 269 "18field.c"
                decrement_ref_count_object(field_type_78,c_value_100,info,(_Bool)0);
                # 270 "18field.c"
                std_move(field_type_78,right_type_69,right_value_68,info);
                # 271 "18field.c"
                __dec_obj63=come_value_98->c_value;
                come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("%s->%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_100 = come_decrement_ref_count2(c_value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 292 "18field.c"
            # 274 "18field.c"
            if(_if_conditional186=left_value_67->type->mPointerNum==0,            _if_conditional186) {
                # 287 "18field.c"
                # 275 "18field.c"
                if(child_field_name_80) {
                    # 276 "18field.c"
                    c_value_101=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("%s.%s.%s",left_value_67->c_value,child_field_name_80,name_66))));
                    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 277 "18field.c"
                    decrement_ref_count_object(field_type_78,c_value_101,info,(_Bool)0);
                    # 278 "18field.c"
                    std_move(field_type_78,right_type_69,right_value_68,info);
                    # 279 "18field.c"
                    __dec_obj64=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s.%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_101 = come_decrement_ref_count2(c_value_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 282 "18field.c"
                    c_value_102=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("%s.%s",left_value_67->c_value,name_66))));
                    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 283 "18field.c"
                    decrement_ref_count_object(field_type_78,c_value_102,info,(_Bool)0);
                    # 284 "18field.c"
                    __dec_obj65=right_value_68->c_value;
                    right_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value147=increment_ref_count_object(right_value_68->type,right_value_68->c_value,info))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 285 "18field.c"
                    __dec_obj66=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s.%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_102 = come_decrement_ref_count2(c_value_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 289 "18field.c"
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_66,left_value_67->type->mPointerNum);
                # 290 "18field.c"
                __result88__ = (_Bool)0;
                name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result88__;
            }
        }
        # 292 "18field.c"
        right_value_id_103=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_68->c_value));
        # 297 "18field.c"
        # 294 "18field.c"
        if(_if_conditional188=right_value_id_103!=-1,        _if_conditional188) {
            # 295 "18field.c"
            remove_object_from_right_values(right_value_id_103,info);
        }
    }
    else {
        # 352 "18field.c"
        # 298 "18field.c"
        if(_if_conditional189=field_type_78->mHeap&&field_type_78->mPointerNum>0&&right_type_69->mPointerNum>0&&string_operator_equals(right_type_69->mClass->mName,"void"),        _if_conditional189) {
            # 328 "18field.c"
            # 300 "18field.c"
            if(_if_conditional190=left_value_67->type->mPointerNum==1,            _if_conditional190) {
                # 311 "18field.c"
                # 301 "18field.c"
                if(child_field_name_80) {
                    # 302 "18field.c"
                    c_value_104=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%s->%s.%s",left_value_67->c_value,child_field_name_80,name_66))));
                    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 303 "18field.c"
                    decrement_ref_count_object(field_type_78,c_value_104,info,(_Bool)0);
                    # 304 "18field.c"
                    __dec_obj67=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s->%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_104 = come_decrement_ref_count2(c_value_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 307 "18field.c"
                    c_value_105=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s->%s",left_value_67->c_value,name_66))));
                    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 308 "18field.c"
                    decrement_ref_count_object(field_type_78,c_value_105,info,(_Bool)0);
                    # 309 "18field.c"
                    __dec_obj68=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s->%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_105 = come_decrement_ref_count2(c_value_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 328 "18field.c"
                # 312 "18field.c"
                if(_if_conditional192=left_value_67->type->mPointerNum==0,                _if_conditional192) {
                    # 323 "18field.c"
                    # 313 "18field.c"
                    if(child_field_name_80) {
                        # 314 "18field.c"
                        c_value_106=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s.%s.%s",left_value_67->c_value,child_field_name_80,name_66))));
                        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 315 "18field.c"
                        decrement_ref_count_object(field_type_78,c_value_106,info,(_Bool)0);
                        # 316 "18field.c"
                        __dec_obj69=come_value_98->c_value;
                        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s.%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_106 = come_decrement_ref_count2(c_value_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 319 "18field.c"
                        c_value_107=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s.%s",left_value_67->c_value,name_66))));
                        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 320 "18field.c"
                        decrement_ref_count_object(field_type_78,c_value_107,info,(_Bool)0);
                        # 321 "18field.c"
                        __dec_obj70=come_value_98->c_value;
                        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("%s.%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_107 = come_decrement_ref_count2(c_value_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    # 325 "18field.c"
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_66,left_value_67->type->mPointerNum);
                    # 326 "18field.c"
                    __result89__ = (_Bool)0;
                    name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result89__;
                }
            }
        }
        else {
            # 350 "18field.c"
            # 330 "18field.c"
            if(_if_conditional194=left_value_67->type->mPointerNum==1,            _if_conditional194) {
                # 337 "18field.c"
                # 331 "18field.c"
                if(child_field_name_80) {
                    # 332 "18field.c"
                    __dec_obj71=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s->%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 335 "18field.c"
                    __dec_obj72=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("%s->%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 350 "18field.c"
                # 338 "18field.c"
                if(_if_conditional196=left_value_67->type->mPointerNum==0,                _if_conditional196) {
                    # 345 "18field.c"
                    # 339 "18field.c"
                    if(child_field_name_80) {
                        # 340 "18field.c"
                        __dec_obj73=come_value_98->c_value;
                        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s.%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 343 "18field.c"
                        __dec_obj74=come_value_98->c_value;
                        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s.%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    # 347 "18field.c"
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_66,left_value_67->type->mPointerNum);
                    # 348 "18field.c"
                    __result90__ = (_Bool)0;
                    name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result90__;
                }
            }
        }
    }
    # 352 "18field.c"
    __dec_obj75=come_value_98->type;
    come_value_98->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(field_type_78))));
    come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 353 "18field.c"
    come_value_98->var=((void*)0);
    # 355 "18field.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_98));
    # 357 "18field.c"
    add_come_last_code(info,"%s;\n",come_value_98->c_value);
    # 359 "18field.c"
    __result91__ = (_Bool)1;
    name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result91__;
    name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_73;
unsigned int hash_74;
unsigned int it_75;
_Bool _while_condtional10;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct sClass* __result72__;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct sClass* __result73__;
struct sClass* __result74__;
struct sClass* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_73, 0, sizeof(struct sClass*));
memset(&hash_74, 0, sizeof(unsigned int));
memset(&it_75, 0, sizeof(unsigned int));
        # 1545 "./comelang2.h"
        # 1546 "./comelang2.h"
        memset(&default_value_73,0,sizeof(struct sClass*));
        # 1548 "./comelang2.h"
        hash_74=string_get_hash_key(((char*)key))%self->size;
        # 1549 "./comelang2.h"
        it_75=hash_74;
        # 1573 "./comelang2.h"
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            # 1571 "./comelang2.h"
            # 1552 "./comelang2.h"
            if(_if_conditional158=self->item_existance[it_75],            _if_conditional158) {
                # 1559 "./comelang2.h"
                # 1554 "./comelang2.h"
                if(_if_conditional159=string_equals(self->keys[it_75],key),                _if_conditional159) {
                    # 1556 "./comelang2.h"
                    __result72__ = __result_obj__ = self->items[it_75];
                    come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result72__;
                }
                # 1559 "./comelang2.h"
                it_75++;
                # 1567 "./comelang2.h"
                # 1561 "./comelang2.h"
                if(_if_conditional166=it_75>=self->size,                _if_conditional166) {
                    # 1562 "./comelang2.h"
                    it_75=0;
                }
                else {
                    # 1567 "./comelang2.h"
                    # 1564 "./comelang2.h"
                    if(_if_conditional167=it_75==hash_74,                    _if_conditional167) {
                        # 1565 "./comelang2.h"
                        __result73__ = __result_obj__ = default_value_73;
                        come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result73__;
                    }
                }
            }
            else {
                # 1569 "./comelang2.h"
                __result74__ = __result_obj__ = default_value_73;
                come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result74__;
            }
        }
        # 1573 "./comelang2.h"
        __result75__ = __result_obj__ = default_value_73;
        come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result75__;
        come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional160=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional160) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional161=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional161) {
                            # 1 "sClass_finalize"
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional165=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional165) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_76;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_76, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 123 "./comelang2.h"
                                it_76=self->head;
                                # 129 "./comelang2.h"
                                while(_while_condtional11=it_76!=((void*)0),                                _while_condtional11) {
                                    # 125 "./comelang2.h"
                                    prev_it_77=it_76;
                                    # 126 "./comelang2.h"
                                    it_76=it_76->next;
                                    # 127 "./comelang2.h"
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional162=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional162) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional163;
_Bool _if_conditional164;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional163=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional163) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional164=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional164) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional169;
struct tuple2$2charphsTypeph* result_82;
struct tuple2$2charphsTypeph* __result77__;
_Bool _if_conditional170;
struct tuple2$2charphsTypeph* __result78__;
struct tuple2$2charphsTypeph* result_83;
struct tuple2$2charphsTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_83, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional169=self==((void*)0),        _if_conditional169) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_82,0,sizeof(struct tuple2$2charphsTypeph*));
            # 288 "./comelang2.h"
            __result77__ = __result_obj__ = result_82;
            return __result77__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result78__ = __result_obj__ = self->it->item;
            return __result78__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_83,0,sizeof(struct tuple2$2charphsTypeph*));
        # 298 "./comelang2.h"
        __result79__ = __result_obj__ = result_83;
        return __result79__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result80__ = self==((void*)0)||self->it==((void*)0);
        return __result80__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional171;
struct tuple2$2charphsTypeph* result_85;
struct tuple2$2charphsTypeph* __result81__;
_Bool _if_conditional172;
struct tuple2$2charphsTypeph* __result82__;
struct tuple2$2charphsTypeph* result_86;
struct tuple2$2charphsTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_86, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional171=self==((void*)0)||self->it==((void*)0),        _if_conditional171) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_85,0,sizeof(struct tuple2$2charphsTypeph*));
            # 305 "./comelang2.h"
            __result81__ = __result_obj__ = result_85;
            return __result81__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result82__ = __result_obj__ = self->it->item;
            return __result82__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_86,0,sizeof(struct tuple2$2charphsTypeph*));
        # 316 "./comelang2.h"
        __result83__ = __result_obj__ = result_86;
        return __result83__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional174;
int __result84__;
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional174=self==((void*)0),        _if_conditional174) {
            # 365 "./comelang2.h"
            __result84__ = 0;
            return __result84__;
        }
        # 367 "./comelang2.h"
        __result85__ = self->len;
        return __result85__;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    # 364 "18field.c"
    __result92__ = self->sline;
    return __result92__;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    # 369 "18field.c"
    __result93__ = __result_obj__ = ((char*)(right_value162=__builtin_string(self->sname)));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __dec_obj76;
void* right_value164;
struct sNode* __dec_obj77;
struct sNullCheckNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
right_value164 = (void*)0;
    # 384 "18field.c"
    self->sline=info->sline;
    # 385 "18field.c"
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 387 "18field.c"
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value164) { right_value164 = come_decrement_ref_count2(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 388 "18field.c"
    self->mOnlyNullCecker=only_null_checker;
    # 390 "18field.c"
    __result94__ = __result_obj__ = self;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result94__;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    # 395 "18field.c"
    __result95__ = (_Bool)0;
    return __result95__;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
void* right_value165;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    # 400 "18field.c"
    __result96__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sNullCheckNode")));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_108;
_Bool _if_conditional200;
_Bool __result97__;
void* right_value166;
struct CVALUE* left_value_109;
_Bool _if_conditional201;
void* right_value167;
char* method_name_110;
_Bool _if_conditional206;
struct sType* obj_type_113;
_Bool _if_conditional207;
struct sType* obj_type2_114;
void* right_value168;
void* right_value169;
char* __dec_obj78;
struct sFun* fun_115;
_Bool _if_conditional208;
_Bool __result102__;
void* right_value170;
struct sType* type_116;
void* right_value171;
struct CVALUE* come_value_117;
void* right_value172;
char* __dec_obj79;
void* right_value173;
struct sType* __dec_obj80;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value174;
struct CVALUE* come_value_118;
void* right_value175;
void* right_value176;
char* __dec_obj81;
void* right_value177;
struct sType* __dec_obj82;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_108, 0, sizeof(struct sNode*));
right_value166 = (void*)0;
memset(&left_value_109, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
memset(&method_name_110, 0, sizeof(char*));
memset(&obj_type_113, 0, sizeof(struct sType*));
memset(&obj_type2_114, 0, sizeof(struct sType*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&fun_115, 0, sizeof(struct sFun*));
right_value170 = (void*)0;
memset(&type_116, 0, sizeof(struct sType*));
right_value171 = (void*)0;
memset(&come_value_117, 0, sizeof(struct CVALUE*));
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&come_value_118, 0, sizeof(struct CVALUE*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
    # 405 "18field.c"
    left_108=self->mLeft;
    # 411 "18field.c"
    # 407 "18field.c"
    if(_if_conditional200=!node_compile(left_108,info),    _if_conditional200) {
        # 408 "18field.c"
        __result97__ = (_Bool)0;
        return __result97__;
    }
    # 411 "18field.c"
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 412 "18field.c"
    dec_stack_ptr(1,info);
    # 466 "18field.c"
    # 414 "18field.c"
    if(_if_conditional201=!self->mOnlyNullCecker&&left_value_109->type->mNoSolvedGenericsType&&left_value_109->type->mNoSolvedGenericsType->v1&&left_value_109->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_109->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional201) {
        # 415 "18field.c"
        method_name_110=(char*)come_increment_ref_count(((char*)(right_value167=create_method_name(left_value_109->type,(_Bool)0,"expect",info,(_Bool)1))));
        right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 429 "18field.c"
        # 417 "18field.c"
        if(_if_conditional206=map$2charphsFunph_at(info->funcs,method_name_110,((void*)0))==((void*)0),        _if_conditional206) {
            # 418 "18field.c"
            obj_type_113=left_value_109->type->mNoSolvedGenericsType->v1;
            # 427 "18field.c"
            # 419 "18field.c"
            if(_if_conditional207=list$1sTypeph_length(obj_type_113->mGenericsTypes)>0,            _if_conditional207) {
                # 420 "18field.c"
                obj_type2_114=left_value_109->type;
                # 421 "18field.c"
                __dec_obj78=method_name_110;
                method_name_110=(char*)come_increment_ref_count(((char*)(right_value169=make_generics_function(obj_type2_114,(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("expect")))),info,(_Bool)1))));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 424 "18field.c"
                err_msg(info,"require expect implementation(%s)",left_value_109->type->mClass->mName);
                # 425 "18field.c"
                exit(1);
            }
        }
        # 429 "18field.c"
        fun_115=map$2charphsFunphp_operator_load_element(info->funcs,method_name_110);
        # 436 "18field.c"
        # 431 "18field.c"
        if(_if_conditional208=fun_115==((void*)0),        _if_conditional208) {
            # 432 "18field.c"
            err_msg(info,"function not found(%s)",method_name_110);
            # 433 "18field.c"
            __result102__ = (_Bool)1;
            method_name_110 = come_decrement_ref_count2(method_name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result102__;
        }
        # 436 "18field.c"
        type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=solve_generics(fun_115->mResultType,left_value_109->type,info))));
        come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 438 "18field.c"
        come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 438, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 440 "18field.c"
        __dec_obj79=come_value_117->c_value;
        come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s(%s)",method_name_110,left_value_109->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 441 "18field.c"
        __dec_obj80=come_value_117->type;
        come_value_117->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(type_116))));
        come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 442 "18field.c"
        come_value_117->var=((void*)0);
        # 444 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
        # 446 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_117->c_value);
        method_name_110 = come_decrement_ref_count2(method_name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 466 "18field.c"
        # 448 "18field.c"
        if(_if_conditional209=!gComeDebug,        _if_conditional209) {
            # 449 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_109));
        }
        else {
            # 466 "18field.c"
            # 451 "18field.c"
            if(_if_conditional210=left_value_109->type->mPointerNum>0,            _if_conditional210) {
                # 452 "18field.c"
                come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 452, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 454 "18field.c"
                __dec_obj81=come_value_118->c_value;
                come_value_118->c_value=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value175=make_type_name_string(left_value_109->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_109->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 455 "18field.c"
                __dec_obj82=come_value_118->type;
                come_value_118->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(left_value_109->type))));
                come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 456 "18field.c"
                come_value_118->var=((void*)0);
                # 458 "18field.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_118));
                # 460 "18field.c"
                add_come_last_code(info,"%s;\n",come_value_118->c_value);
                come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 463 "18field.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_109));
            }
        }
    }
    # 466 "18field.c"
    __result103__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result103__;
    come_call_finalizer2(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_111;
unsigned int it_112;
_Bool _while_condtional12;
_Bool _if_conditional202;
_Bool _if_conditional203;
struct sFun* __result98__;
_Bool _if_conditional204;
_Bool _if_conditional205;
struct sFun* __result99__;
struct sFun* __result100__;
struct sFun* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_111, 0, sizeof(unsigned int));
memset(&it_112, 0, sizeof(unsigned int));
            # 1226 "./comelang2.h"
            hash_111=string_get_hash_key(((char*)key))%self->size;
            # 1227 "./comelang2.h"
            it_112=hash_111;
            # 1251 "./comelang2.h"
            while(_while_condtional12=(_Bool)1,            _while_condtional12) {
                # 1249 "./comelang2.h"
                # 1230 "./comelang2.h"
                if(_if_conditional202=self->item_existance[it_112],                _if_conditional202) {
                    # 1237 "./comelang2.h"
                    # 1232 "./comelang2.h"
                    if(_if_conditional203=string_equals(self->keys[it_112],key),                    _if_conditional203) {
                        # 1234 "./comelang2.h"
                        __result98__ = __result_obj__ = self->items[it_112];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result98__;
                    }
                    # 1237 "./comelang2.h"
                    it_112++;
                    # 1245 "./comelang2.h"
                    # 1239 "./comelang2.h"
                    if(_if_conditional204=it_112>=self->size,                    _if_conditional204) {
                        # 1240 "./comelang2.h"
                        it_112=0;
                    }
                    else {
                        # 1245 "./comelang2.h"
                        # 1242 "./comelang2.h"
                        if(_if_conditional205=it_112==hash_111,                        _if_conditional205) {
                            # 1243 "./comelang2.h"
                            __result99__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result99__;
                        }
                    }
                }
                else {
                    # 1247 "./comelang2.h"
                    __result100__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result100__;
                }
            }
            # 1251 "./comelang2.h"
            __result101__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result101__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    # 471 "18field.c"
    __result104__ = self->sline;
    return __result104__;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value178;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
    # 476 "18field.c"
    __result105__ = __result_obj__ = ((char*)(right_value178=__builtin_string(self->sname)));
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value179;
char* __dec_obj83;
void* right_value180;
struct sNode* __dec_obj84;
struct sNullableNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
right_value180 = (void*)0;
    # 491 "18field.c"
    self->sline=info->sline;
    # 492 "18field.c"
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 494 "18field.c"
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value180=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value180) { right_value180 = come_decrement_ref_count2(right_value180, ((struct sNode*)right_value180)->finalize, ((struct sNode*)right_value180)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 496 "18field.c"
    __result106__ = __result_obj__ = self;
    come_call_finalizer2(sNullableNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer2(sNullableNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullableNode_terminated(){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    # 501 "18field.c"
    __result107__ = (_Bool)0;
    return __result107__;
}

char* sNullableNode_kind(){
void* __result_obj__;
void* right_value181;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
    # 506 "18field.c"
    __result108__ = __result_obj__ = ((char*)(right_value181=__builtin_string("sNullableNode")));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_119;
_Bool _if_conditional213;
_Bool __result109__;
void* right_value182;
struct CVALUE* left_value_120;
_Bool _if_conditional214;
void* right_value186;
struct CVALUE* come_value_122;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_119, 0, sizeof(struct sNode*));
right_value182 = (void*)0;
memset(&left_value_120, 0, sizeof(struct CVALUE*));
right_value186 = (void*)0;
memset(&come_value_122, 0, sizeof(struct CVALUE*));
    # 511 "18field.c"
    left_119=self->mLeft;
    # 517 "18field.c"
    # 513 "18field.c"
    if(_if_conditional213=!node_compile(left_119,info),    _if_conditional213) {
        # 514 "18field.c"
        __result109__ = (_Bool)0;
        return __result109__;
    }
    # 517 "18field.c"
    left_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 518 "18field.c"
    dec_stack_ptr(1,info);
    # 533 "18field.c"
    # 520 "18field.c"
    if(_if_conditional214=left_value_120->type->mPointerNum>0&&left_value_120->type->mNullValue,    _if_conditional214) {
        # 521 "18field.c"
        come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=CVALUE_clone(left_value_120))));
        come_call_finalizer2(CVALUE_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 523 "18field.c"
        come_value_122->type->mNullValue=(_Bool)0;
        # 525 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_122));
        # 527 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_122->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 530 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_120));
    }
    # 533 "18field.c"
    __result112__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional215;
struct CVALUE* __result110__;
void* right_value183;
struct CVALUE* result_121;
_Bool _if_conditional216;
void* right_value184;
char* __dec_obj85;
_Bool _if_conditional217;
void* right_value185;
struct sType* __dec_obj86;
_Bool _if_conditional218;
struct CVALUE* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
memset(&result_121, 0, sizeof(struct CVALUE*));
right_value184 = (void*)0;
right_value185 = (void*)0;
            # 3 "CVALUE_clone"
            # 2 "CVALUE_clone"
            if(_if_conditional215=self==(void*)0,            _if_conditional215) {
                # 2 "CVALUE_clone"
                __result110__ = __result_obj__ = (void*)0;
                return __result110__;
            }
            # 3 "CVALUE_clone"
            result_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value183=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "CVALUE_clone"
            # 4 "CVALUE_clone"
            if(_if_conditional216=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional216) {
                # 4 "CVALUE_clone"
                __dec_obj85=result_121->c_value;
                result_121->c_value=(char*)come_increment_ref_count(((char*)(right_value184=string_clone(self->c_value))));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "CVALUE_clone"
            # 5 "CVALUE_clone"
            if(_if_conditional217=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional217) {
                # 5 "CVALUE_clone"
                __dec_obj86=result_121->type;
                result_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(self->type))));
                come_call_finalizer2(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "CVALUE_clone"
            # 6 "CVALUE_clone"
            if(_if_conditional218=self!=((void*)0),            _if_conditional218) {
                # 6 "CVALUE_clone"
                result_121->var=self->var;
            }
            # 7 "CVALUE_clone"
            __result111__ = __result_obj__ = result_121;
            come_call_finalizer2(CVALUE_finalize,result_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result111__;
            come_call_finalizer2(CVALUE_finalize,result_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNullableNode_sline(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 538 "18field.c"
    __result113__ = self->sline;
    return __result113__;
}

char* sNullableNode_sname(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value187;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
    # 543 "18field.c"
    __result114__ = __result_obj__ = ((char*)(right_value187=__builtin_string(self->sname)));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value188;
char* __dec_obj87;
void* right_value189;
struct sNode* __dec_obj88;
void* right_value190;
struct sNode* __dec_obj89;
void* right_value191;
struct sNode* __dec_obj90;
struct sRangeCheckNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
    # 558 "18field.c"
    self->sline=info->sline;
    # 559 "18field.c"
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 561 "18field.c"
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value189) { right_value189 = come_decrement_ref_count2(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 562 "18field.c"
    __dec_obj89=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value190=sNode_clone(begin))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value190) { right_value190 = come_decrement_ref_count2(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 563 "18field.c"
    __dec_obj90=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=sNode_clone(end))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 565 "18field.c"
    __result115__ = __result_obj__ = self;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result115__;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sRangeCheckNode_terminated(){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    # 570 "18field.c"
    __result116__ = (_Bool)0;
    return __result116__;
}

char* sRangeCheckNode_kind(){
void* __result_obj__;
void* right_value192;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
    # 575 "18field.c"
    __result117__ = __result_obj__ = ((char*)(right_value192=__builtin_string("sRangeCheckNode")));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_123;
_Bool _if_conditional223;
_Bool __result118__;
void* right_value193;
struct CVALUE* left_value_124;
struct sNode* begin_125;
_Bool _if_conditional224;
_Bool __result119__;
void* right_value194;
struct CVALUE* begin_value_126;
struct sNode* end_127;
_Bool _if_conditional225;
_Bool __result120__;
void* right_value195;
struct CVALUE* end_value_128;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value196;
struct CVALUE* come_value_129;
void* right_value197;
void* right_value198;
char* __dec_obj91;
void* right_value199;
struct sType* __dec_obj92;
void* right_value200;
struct CVALUE* come_value_130;
void* right_value201;
void* right_value202;
char* __dec_obj93;
void* right_value203;
struct sType* __dec_obj94;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_123, 0, sizeof(struct sNode*));
right_value193 = (void*)0;
memset(&left_value_124, 0, sizeof(struct CVALUE*));
memset(&begin_125, 0, sizeof(struct sNode*));
right_value194 = (void*)0;
memset(&begin_value_126, 0, sizeof(struct CVALUE*));
memset(&end_127, 0, sizeof(struct sNode*));
right_value195 = (void*)0;
memset(&end_value_128, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
memset(&come_value_129, 0, sizeof(struct CVALUE*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
    # 580 "18field.c"
    left_123=self->mLeft;
    # 586 "18field.c"
    # 582 "18field.c"
    if(_if_conditional223=!node_compile(left_123,info),    _if_conditional223) {
        # 583 "18field.c"
        __result118__ = (_Bool)0;
        return __result118__;
    }
    # 586 "18field.c"
    left_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value193=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 587 "18field.c"
    dec_stack_ptr(1,info);
    # 589 "18field.c"
    begin_125=self->mBegin;
    # 595 "18field.c"
    # 591 "18field.c"
    if(_if_conditional224=!node_compile(begin_125,info),    _if_conditional224) {
        # 592 "18field.c"
        __result119__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    # 595 "18field.c"
    begin_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 596 "18field.c"
    dec_stack_ptr(1,info);
    # 598 "18field.c"
    end_127=self->mEnd;
    # 604 "18field.c"
    # 600 "18field.c"
    if(_if_conditional225=!node_compile(end_127,info),    _if_conditional225) {
        # 601 "18field.c"
        __result120__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,begin_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result120__;
    }
    # 604 "18field.c"
    end_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 605 "18field.c"
    dec_stack_ptr(1,info);
    # 638 "18field.c"
    # 607 "18field.c"
    if(_if_conditional226=left_value_124->type->mPointerNum>0,    _if_conditional226) {
        # 633 "18field.c"
        # 608 "18field.c"
        if(_if_conditional227=!gComeDebug,        _if_conditional227) {
            # 609 "18field.c"
            come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value196=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 609, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 611 "18field.c"
            __dec_obj91=come_value_129->c_value;
            come_value_129->c_value=(char*)come_increment_ref_count(((char*)(right_value198=xsprintf("(*((%s)%s))",((char*)(right_value197=make_type_name_string(left_value_124->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_124->c_value))));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 613 "18field.c"
            left_value_124->type->mPointerNum--;
            # 614 "18field.c"
            __dec_obj92=come_value_129->type;
            come_value_129->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(left_value_124->type))));
            come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 615 "18field.c"
            come_value_129->var=((void*)0);
            # 617 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_129));
            # 619 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_129->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 622 "18field.c"
            come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 622, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 624 "18field.c"
            __dec_obj93=come_value_130->c_value;
            come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value201=make_type_name_string(left_value_124->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_124->c_value,begin_value_126->c_value,end_value_128->c_value,info->sname,info->sline))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 625 "18field.c"
            left_value_124->type->mPointerNum--;
            # 626 "18field.c"
            __dec_obj94=come_value_130->type;
            come_value_130->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(left_value_124->type))));
            come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 627 "18field.c"
            come_value_130->var=((void*)0);
            # 629 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
            # 631 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_130->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        # 635 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_124));
    }
    # 638 "18field.c"
    __result121__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result121__;
    come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    # 643 "18field.c"
    __result122__ = self->sline;
    return __result122__;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value204;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    # 648 "18field.c"
    __result123__ = __result_obj__ = ((char*)(right_value204=__builtin_string(self->sname)));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value205;
void* right_value206;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value212;
struct sNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value212 = (void*)0;
    # 653 "18field.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 653, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value206=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value205=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 653, "sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result126__ = __result_obj__ = ((struct sNode*)(right_value212=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result126__;
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value213;
char* __dec_obj99;
void* right_value214;
struct sNode* __dec_obj100;
void* right_value215;
char* __dec_obj101;
struct sLoadFieldNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
    # 667 "18field.c"
    self->sline=info->sline;
    # 668 "18field.c"
    __dec_obj99=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(info->sname))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 670 "18field.c"
    __dec_obj100=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(left))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value214) { right_value214 = come_decrement_ref_count2(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 671 "18field.c"
    __dec_obj101=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(name))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 673 "18field.c"
    __result127__ = __result_obj__ = self;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result127__;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    # 678 "18field.c"
    __result128__ = (_Bool)0;
    return __result128__;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
void* right_value216;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
    # 683 "18field.c"
    __result129__ = __result_obj__ = ((char*)(right_value216=__builtin_string("sLoadFieldNode")));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_132;
void* right_value217;
char* name_133;
_Bool _if_conditional241;
_Bool __result130__;
void* right_value218;
struct CVALUE* left_value_134;
_Bool _if_conditional242;
void* right_value219;
void* right_value220;
char* __dec_obj102;
struct sType* left_type_135;
void* right_value221;
struct sType* left_type2_136;
struct sClass* klass_137;
struct sType* field_type_138;
int index_139;
char* child_field_name_140;
_Bool _if_conditional243;
_Bool __result131__;
struct list$1tuple2$2charphsTypephph* o2_saved_141;
struct tuple2$2charphsTypeph* field_142;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_143;
struct sType* field_type2_144;
_Bool _if_conditional244;
void* right_value222;
struct sType* __dec_obj103;
_Bool _if_conditional245;
struct list$1tuple2$2charphsTypephph* o2_saved_145;
struct tuple2$2charphsTypeph* field_146;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_147;
struct sType* field_type2_148;
struct sClass* klass2_149;
struct list$1tuple2$2charphsTypephph* o2_saved_150;
struct tuple2$2charphsTypeph* field2_151;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_152;
struct sType* field_type3_153;
_Bool _if_conditional246;
void* right_value223;
char* __dec_obj104;
void* right_value224;
struct sType* __dec_obj105;
_Bool _if_conditional247;
_Bool _if_conditional248;
void* right_value225;
struct sType* __dec_obj106;
_Bool _if_conditional249;
_Bool __result132__;
void* right_value226;
struct CVALUE* come_value_154;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value227;
char* __dec_obj107;
void* right_value228;
char* __dec_obj108;
_Bool _if_conditional252;
void* right_value229;
char* __dec_obj109;
void* right_value230;
char* __dec_obj110;
void* right_value231;
struct sType* __dec_obj111;
_Bool _if_conditional253;
_Bool __result133__;
_Bool _if_conditional255;
void* right_value232;
struct sType* __dec_obj112;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_132, 0, sizeof(struct sNode*));
right_value217 = (void*)0;
memset(&name_133, 0, sizeof(char*));
right_value218 = (void*)0;
memset(&left_value_134, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&left_type_135, 0, sizeof(struct sType*));
right_value221 = (void*)0;
memset(&left_type2_136, 0, sizeof(struct sType*));
memset(&klass_137, 0, sizeof(struct sClass*));
memset(&field_type_138, 0, sizeof(struct sType*));
memset(&index_139, 0, sizeof(int));
memset(&child_field_name_140, 0, sizeof(char*));
memset(&o2_saved_141, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_142, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_143, 0, sizeof(char*));
memset(&field_type2_144, 0, sizeof(struct sType*));
memset(&field_name_143, 0, sizeof(char*));
memset(&field_type2_144, 0, sizeof(struct sType*));
right_value222 = (void*)0;
memset(&o2_saved_145, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_146, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_147, 0, sizeof(char*));
memset(&field_type2_148, 0, sizeof(struct sType*));
memset(&field_name_147, 0, sizeof(char*));
memset(&field_type2_148, 0, sizeof(struct sType*));
memset(&klass2_149, 0, sizeof(struct sClass*));
memset(&o2_saved_150, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_151, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_152, 0, sizeof(char*));
memset(&field_type3_153, 0, sizeof(struct sType*));
memset(&field_name2_152, 0, sizeof(char*));
memset(&field_type3_153, 0, sizeof(struct sType*));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
    # 688 "18field.c"
    left_132=self->mLeft;
    # 689 "18field.c"
    name_133=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(self->mName))));
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 695 "18field.c"
    # 691 "18field.c"
    if(_if_conditional241=!node_compile(left_132,info),    _if_conditional241) {
        # 692 "18field.c"
        __result130__ = (_Bool)0;
        name_133 = come_decrement_ref_count2(name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result130__;
    }
    # 695 "18field.c"
    left_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 696 "18field.c"
    dec_stack_ptr(1,info);
    # 702 "18field.c"
    # 698 "18field.c"
    if(_if_conditional242=gComeDebug&&left_value_134->type->mPointerNum>0,    _if_conditional242) {
        # 699 "18field.c"
        __dec_obj102=left_value_134->c_value;
        left_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value219=make_type_name_string(left_value_134->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_134->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 702 "18field.c"
    left_type_135=left_value_134->type;
    # 704 "18field.c"
    left_type2_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=solve_generics(left_type_135,left_type_135,info))));
    come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 706 "18field.c"
    klass_137=left_type2_136->mClass;
    # 707 "18field.c"
    klass_137=map$2charphsClassphp_operator_load_element(info->classes,klass_137->mName);
    # 709 "18field.c"
    field_type_138=((void*)0);
    # 710 "18field.c"
    index_139=0;
    # 711 "18field.c"
    child_field_name_140=((void*)0);
    # 712 "18field.c"
    klass_137=map$2charphsClassphp_operator_load_element(info->classes,klass_137->mName);
    # 717 "18field.c"
    # 713 "18field.c"
    if(_if_conditional243=klass_137==((void*)0)||klass_137->mFields==((void*)0),    _if_conditional243) {
        # 714 "18field.c"
        err_msg(info,"invalid class %s",klass_137->mName);
        # 715 "18field.c"
        __result131__ = (_Bool)0;
        name_133 = come_decrement_ref_count2(name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_140 = come_decrement_ref_count2(child_field_name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result131__;
    }
    # 728 "18field.c"
    for(    o2_saved_141=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_137->mFields)),field_142=list$1tuple2$2charphsTypephph_begin((o2_saved_141));    !list$1tuple2$2charphsTypephph_end((o2_saved_141));    field_142=list$1tuple2$2charphsTypephph_next((o2_saved_141))    ){
        # 718 "18field.c"
        multiple_assign_var4=field_142;
        field_name_143=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_144=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        # 725 "18field.c"
        # 720 "18field.c"
        if(_if_conditional244=string_operator_equals(field_name_143,name_133),        _if_conditional244) {
            # 721 "18field.c"
            __dec_obj103=field_type_138;
            field_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(field_type2_144))));
            come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 722 "18field.c"
            field_name_143 = come_decrement_ref_count2(field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        # 725 "18field.c"
        index_139++;
        field_name_143 = come_decrement_ref_count2(field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 763 "18field.c"
    # 728 "18field.c"
    if(_if_conditional245=index_139==list$1tuple2$2charphsTypephph_length(klass_137->mFields),    _if_conditional245) {
        # 729 "18field.c"
        index_139=0;
        # 757 "18field.c"
        for(        o2_saved_145=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_137->mFields)),field_146=list$1tuple2$2charphsTypephph_begin((o2_saved_145));        !list$1tuple2$2charphsTypephph_end((o2_saved_145));        field_146=list$1tuple2$2charphsTypephph_next((o2_saved_145))        ){
            # 731 "18field.c"
            multiple_assign_var5=field_146;
            field_name_147=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_148=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            # 733 "18field.c"
            klass2_149=field_type2_148->mClass;
            # 745 "18field.c"
            for(            o2_saved_150=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_149->mFields)),field2_151=list$1tuple2$2charphsTypephph_begin((o2_saved_150));            !list$1tuple2$2charphsTypephph_end((o2_saved_150));            field2_151=list$1tuple2$2charphsTypephph_next((o2_saved_150))            ){
                # 736 "18field.c"
                multiple_assign_var6=field2_151;
                field_name2_152=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_153=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                # 743 "18field.c"
                # 738 "18field.c"
                if(_if_conditional246=string_operator_equals(field_name2_152,name_133),                _if_conditional246) {
                    # 739 "18field.c"
                    __dec_obj104=child_field_name_140;
                    child_field_name_140=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(field_name_147))));
                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 740 "18field.c"
                    __dec_obj105=field_type_138;
                    field_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(field_type3_153))));
                    come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 741 "18field.c"
                    field_name2_152 = come_decrement_ref_count2(field_name2_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type3_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_152 = come_decrement_ref_count2(field_name2_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type3_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 749 "18field.c"
            # 745 "18field.c"
            if(child_field_name_140) {
                # 746 "18field.c"
                field_name_147 = come_decrement_ref_count2(field_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 754 "18field.c"
            # 749 "18field.c"
            if(_if_conditional248=string_operator_equals(field_name_147,name_133),            _if_conditional248) {
                # 750 "18field.c"
                __dec_obj106=field_type_138;
                field_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(field_type2_148))));
                come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 751 "18field.c"
                field_name_147 = come_decrement_ref_count2(field_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 754 "18field.c"
            index_139++;
            field_name_147 = come_decrement_ref_count2(field_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 761 "18field.c"
        # 757 "18field.c"
        if(_if_conditional249=index_139==list$1tuple2$2charphsTypephph_length(klass_137->mFields),        _if_conditional249) {
            # 758 "18field.c"
            err_msg(info,"field not found(%s) in %s(2)",name_133,klass_137->mName);
            # 759 "18field.c"
            __result132__ = (_Bool)0;
            name_133 = come_decrement_ref_count2(name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            child_field_name_140 = come_decrement_ref_count2(child_field_name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result132__;
        }
    }
    # 763 "18field.c"
    come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 763, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 781 "18field.c"
    # 765 "18field.c"
    if(_if_conditional250=left_value_134->type->mPointerNum>0,    _if_conditional250) {
        # 772 "18field.c"
        # 766 "18field.c"
        if(child_field_name_140) {
            # 767 "18field.c"
            __dec_obj107=come_value_154->c_value;
            come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("%s->%s.%s",left_value_134->c_value,child_field_name_140,name_133))));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 770 "18field.c"
            __dec_obj108=come_value_154->c_value;
            come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("%s->%s",left_value_134->c_value,name_133))));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        # 780 "18field.c"
        # 774 "18field.c"
        if(child_field_name_140) {
            # 775 "18field.c"
            __dec_obj109=come_value_154->c_value;
            come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("%s.%s.%s",left_value_134->c_value,child_field_name_140,name_133))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 778 "18field.c"
            __dec_obj110=come_value_154->c_value;
            come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("%s.%s",left_value_134->c_value,name_133))));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 781 "18field.c"
    __dec_obj111=come_value_154->type;
    come_value_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(field_type_138))));
    come_call_finalizer2(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 782 "18field.c"
    come_value_154->var=((void*)0);
    # 789 "18field.c"
    # 784 "18field.c"
    if(_if_conditional253=field_type_138==((void*)0),    _if_conditional253) {
        # 785 "18field.c"
        err_msg(info,"no field(%s)\n",name_133);
        # 786 "18field.c"
        __result133__ = (_Bool)0;
        name_133 = come_decrement_ref_count2(name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_140 = come_decrement_ref_count2(child_field_name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    # 797 "18field.c"
    # 789 "18field.c"
    if(_if_conditional255=list$1sNodeph_length(come_value_154->type->mArrayNum)==1,    _if_conditional255) {
        # 790 "18field.c"
        __dec_obj112=come_value_154->type->mOriginalLoadVarType->v1;
        come_value_154->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(come_value_154->type))));
        come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 792 "18field.c"
        list$1sNodeph_reset(come_value_154->type->mArrayNum);
        # 793 "18field.c"
        come_value_154->type->mPointerNum++;
        # 794 "18field.c"
        come_value_154->type->mOriginalTypeNamePointerNum=come_value_154->type->mPointerNum;
    }
    # 797 "18field.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
    # 799 "18field.c"
    __result137__ = (_Bool)1;
    name_133 = come_decrement_ref_count2(name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_140 = come_decrement_ref_count2(child_field_name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result137__;
    name_133 = come_decrement_ref_count2(name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_140 = come_decrement_ref_count2(child_field_name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional254;
int __result134__;
int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional254=self==((void*)0),        _if_conditional254) {
            # 365 "./comelang2.h"
            __result134__ = 0;
            return __result134__;
        }
        # 367 "./comelang2.h"
        __result135__ = self->len;
        return __result135__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_155;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_156;
struct list$1sNodeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_155, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_156, 0, sizeof(struct list_item$1sNodeph*));
            # 433 "./comelang2.h"
            it_155=self->head;
            # 440 "./comelang2.h"
            while(_while_condtional13=it_155!=((void*)0),            _while_condtional13) {
                # 435 "./comelang2.h"
                prev_it_156=it_155;
                # 436 "./comelang2.h"
                it_155=it_155->next;
                # 437 "./comelang2.h"
                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 440 "./comelang2.h"
            self->head=((void*)0);
            # 441 "./comelang2.h"
            self->tail=((void*)0);
            # 443 "./comelang2.h"
            self->len=0;
            # 445 "./comelang2.h"
            __result136__ = __result_obj__ = self;
            return __result136__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    # 804 "18field.c"
    __result138__ = self->sline;
    return __result138__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value233;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
    # 809 "18field.c"
    __result139__ = __result_obj__ = ((char*)(right_value233=__builtin_string(self->sname)));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result139__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value234;
char* __dec_obj113;
void* right_value235;
struct sNode* __dec_obj114;
void* right_value236;
struct sNode* __dec_obj115;
void* right_value237;
struct list$1sNodeph* __dec_obj116;
struct sStoreArrayNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
    # 825 "18field.c"
    self->sline=info->sline;
    # 826 "18field.c"
    __dec_obj113=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(info->sname))));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 828 "18field.c"
    __dec_obj114=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=sNode_clone(left))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 829 "18field.c"
    __dec_obj115=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=sNode_clone(right))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value236) { right_value236 = come_decrement_ref_count2(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 830 "18field.c"
    __dec_obj116=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value237=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 831 "18field.c"
    self->mQuote=quote;
    # 833 "18field.c"
    __result140__ = __result_obj__ = self;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result140__;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    # 838 "18field.c"
    __result141__ = (_Bool)0;
    return __result141__;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
void* right_value238;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
    # 843 "18field.c"
    __result142__ = __result_obj__ = ((char*)(right_value238=__builtin_string("sStoreArrayNode")));
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_157;
struct sNode* right_158;
struct list$1sNodeph* array_num_nodes_159;
_Bool _if_conditional260;
_Bool __result143__;
void* right_value239;
struct CVALUE* left_value_160;
_Bool _if_conditional261;
void* right_value240;
void* right_value241;
char* __dec_obj117;
struct sType* left_type_161;
void* right_value242;
void* right_value243;
struct list$1CVALUEph* array_num_164;
struct list$1sNodeph* o2_saved_165;
struct sNode* it_168;
_Bool _if_conditional266;
_Bool __result152__;
void* right_value244;
struct CVALUE* c_value_171;
_Bool _if_conditional267;
_Bool __result153__;
void* right_value245;
struct CVALUE* right_value_172;
struct sType* right_type_173;
struct sClass* klass_174;
void* right_value246;
struct sType* type_175;
char* fun_name_176;
_Bool calling_fun_177;
_Bool _if_conditional268;
_Bool _if_conditional271;
char* check_code_181;
_Bool _if_conditional272;
struct sType* var_type_182;
void* right_value247;
struct sType* result_type_183;
_Bool _if_conditional273;
struct sType* __dec_obj118;
_Bool _if_conditional274;
int n_184;
_Bool _if_conditional276;
void* right_value248;
struct sType* __dec_obj119;
_Bool _if_conditional277;
void* right_value249;
struct sType* __dec_obj120;
_Bool _if_conditional278;
int i_185;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value250;
struct CVALUE* come_value_198;
void* right_value251;
void* right_value252;
struct buffer* buf_199;
void* right_value253;
struct sType* result_type2_200;
void* right_value254;
struct list$1CVALUEph* o2_saved_201;
struct CVALUE* it_204;
void* right_value255;
void* right_value256;
int i_207;
struct list$1sNodeph* o2_saved_208;
struct sNode* it_209;
_Bool _if_conditional305;
void* right_value257;
struct CVALUE* come_value_210;
void* right_value258;
_Bool _if_conditional306;
void* right_value259;
void* right_value260;
char* __dec_obj121;
void* right_value261;
struct CVALUE* come_value_211;
_Bool _if_conditional307;
int i_212;
_Bool _if_conditional308;
_Bool _if_conditional309;
void* right_value262;
void* right_value263;
struct buffer* buf_213;
struct list$1CVALUEph* o2_saved_214;
struct CVALUE* it_215;
void* right_value264;
void* right_value265;
char* left_value_code_216;
void* right_value266;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value267;
char* __dec_obj122;
_Bool _if_conditional312;
void* right_value268;
char* __dec_obj123;
_Bool __result167__;
int right_value_id_217;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value269;
char* __dec_obj124;
_Bool _if_conditional315;
void* right_value270;
char* __dec_obj125;
_Bool __result168__;
void* right_value271;
struct sType* result_type_218;
void* right_value272;
void* right_value273;
struct list$1sNodeph* __dec_obj126;
struct sType* __dec_obj127;
_Bool _if_conditional316;
void* right_value274;
char* __dec_obj128;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_157, 0, sizeof(struct sNode*));
memset(&right_158, 0, sizeof(struct sNode*));
memset(&array_num_nodes_159, 0, sizeof(struct list$1sNodeph*));
right_value239 = (void*)0;
memset(&left_value_160, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&left_type_161, 0, sizeof(struct sType*));
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&array_num_164, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_165, 0, sizeof(struct list$1sNodeph*));
memset(&it_168, 0, sizeof(struct sNode*));
right_value244 = (void*)0;
memset(&c_value_171, 0, sizeof(struct CVALUE*));
right_value245 = (void*)0;
memset(&right_value_172, 0, sizeof(struct CVALUE*));
memset(&right_type_173, 0, sizeof(struct sType*));
memset(&klass_174, 0, sizeof(struct sClass*));
right_value246 = (void*)0;
memset(&type_175, 0, sizeof(struct sType*));
memset(&fun_name_176, 0, sizeof(char*));
memset(&calling_fun_177, 0, sizeof(_Bool));
memset(&check_code_181, 0, sizeof(char*));
memset(&var_type_182, 0, sizeof(struct sType*));
right_value247 = (void*)0;
memset(&result_type_183, 0, sizeof(struct sType*));
memset(&n_184, 0, sizeof(int));
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&i_185, 0, sizeof(int));
right_value250 = (void*)0;
memset(&come_value_198, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&buf_199, 0, sizeof(struct buffer*));
right_value253 = (void*)0;
memset(&result_type2_200, 0, sizeof(struct sType*));
right_value254 = (void*)0;
memset(&o2_saved_201, 0, sizeof(struct list$1CVALUEph*));
memset(&it_204, 0, sizeof(struct CVALUE*));
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&i_207, 0, sizeof(int));
memset(&o2_saved_208, 0, sizeof(struct list$1sNodeph*));
memset(&it_209, 0, sizeof(struct sNode*));
right_value257 = (void*)0;
memset(&come_value_210, 0, sizeof(struct CVALUE*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&come_value_211, 0, sizeof(struct CVALUE*));
memset(&i_212, 0, sizeof(int));
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&buf_213, 0, sizeof(struct buffer*));
memset(&o2_saved_214, 0, sizeof(struct list$1CVALUEph*));
memset(&it_215, 0, sizeof(struct CVALUE*));
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&left_value_code_216, 0, sizeof(char*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&right_value_id_217, 0, sizeof(int));
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&result_type_218, 0, sizeof(struct sType*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
    # 848 "18field.c"
    left_157=self->mLeft;
    # 849 "18field.c"
    right_158=self->mRight;
    # 850 "18field.c"
    array_num_nodes_159=self->mArrayNum;
    # 856 "18field.c"
    # 852 "18field.c"
    if(_if_conditional260=!node_compile(left_157,info),    _if_conditional260) {
        # 853 "18field.c"
        __result143__ = (_Bool)0;
        return __result143__;
    }
    # 856 "18field.c"
    left_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 857 "18field.c"
    dec_stack_ptr(1,info);
    # 863 "18field.c"
    # 859 "18field.c"
    if(_if_conditional261=gComeDebug&&left_value_160->type->mPointerNum>0,    _if_conditional261) {
        # 860 "18field.c"
        __dec_obj117=left_value_160->c_value;
        left_value_160->c_value=(char*)come_increment_ref_count(((char*)(right_value241=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value240=make_type_name_string(left_value_160->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_160->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 863 "18field.c"
    left_type_161=left_value_160->type;
    # 865 "18field.c"
    array_num_164=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value243=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value242=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 865, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 878 "18field.c"
    for(    o2_saved_165=(array_num_nodes_159),it_168=list$1sNodeph_begin((o2_saved_165));    !list$1sNodeph_end((o2_saved_165));    it_168=list$1sNodeph_next((o2_saved_165))    ){
        # 872 "18field.c"
        # 868 "18field.c"
        if(_if_conditional266=!node_compile(it_168,info),        _if_conditional266) {
            # 869 "18field.c"
            __result152__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result152__;
        }
        # 872 "18field.c"
        c_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 873 "18field.c"
        dec_stack_ptr(1,info);
        # 875 "18field.c"
        list$1CVALUEph_push_back(array_num_164,(struct CVALUE*)come_increment_ref_count(c_value_171));
        come_call_finalizer2(CVALUE_finalize,c_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 882 "18field.c"
    # 878 "18field.c"
    if(_if_conditional267=!node_compile(right_158,info),    _if_conditional267) {
        # 879 "18field.c"
        __result153__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,array_num_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result153__;
    }
    # 882 "18field.c"
    right_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value245=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 883 "18field.c"
    dec_stack_ptr(1,info);
    # 885 "18field.c"
    right_type_173=right_value_172->type;
    # 887 "18field.c"
    klass_174=left_value_160->type->mClass;
    # 889 "18field.c"
    type_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(left_value_160->type))));
    come_call_finalizer2(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 891 "18field.c"
    fun_name_176="operator_store_element";
    # 892 "18field.c"
    # 900 "18field.c"
    # 893 "18field.c"
    if(self->mQuote) {
        # 894 "18field.c"
        calling_fun_177=(_Bool)0;
    }
    else {
        # 897 "18field.c"
        calling_fun_177=operator_overload_fun2(type_175,fun_name_176,left_value_160,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_164,0), "18field.c", 897, 9)),right_value_172,info);
    }
    # 1059 "18field.c"
    # 900 "18field.c"
    if(_if_conditional271=!calling_fun_177,    _if_conditional271) {
        # 901 "18field.c"
        check_code_181=((void*)0);
        # 979 "18field.c"
        # 902 "18field.c"
        if(_if_conditional272=left_value_160->var&&left_value_160->var->mType&&list$1sNodeph_length(left_value_160->var->mType->mArrayNum)>0,        _if_conditional272) {
            # 904 "18field.c"
            var_type_182=left_value_160->var->mType;
            # 905 "18field.c"
            result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(left_type_161))));
            come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 911 "18field.c"
            # 907 "18field.c"
            if(result_type_183->mOriginalLoadVarType->v1) {
                # 908 "18field.c"
                __dec_obj118=result_type_183;
                result_type_183=(struct sType*)come_increment_ref_count(result_type_183->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 945 "18field.c"
            # 911 "18field.c"
            if(_if_conditional274=list$1sNodeph_length(result_type_183->mArrayNum)>0,            _if_conditional274) {
                # 912 "18field.c"
                n_184=list$1sNodeph_length(result_type_183->mArrayNum)-list$1CVALUEph_length(array_num_164);
                # 934 "18field.c"
                # 914 "18field.c"
                if(_if_conditional276=n_184==0,                _if_conditional276) {
                    # 915 "18field.c"
                    __dec_obj119=result_type_183;
                    result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=sType_clone(left_type_161))));
                    come_call_finalizer2(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 919 "18field.c"
                    # 916 "18field.c"
                    if(left_type_161->mOriginalLoadVarType->v1) {
                        # 917 "18field.c"
                        __dec_obj120=result_type_183;
                        result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(left_type_161->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 919 "18field.c"
                    list$1sNodeph_reset(result_type_183->mArrayNum);
                }
                else {
                    # 934 "18field.c"
                    # 921 "18field.c"
                    if(_if_conditional278=n_184>0,                    _if_conditional278) {
                        # 925 "18field.c"
                        for(                        i_185=0;                        i_185<n_184;                        i_185++                        ){
                            # 923 "18field.c"
                            list$1sNodeph_delete(result_type_183->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 934 "18field.c"
                        # 926 "18field.c"
                        if(_if_conditional297=n_184<0,                        _if_conditional297) {
                            # 927 "18field.c"
                            list$1sNodeph_reset(result_type_183->mArrayNum);
                            # 928 "18field.c"
                            result_type_183->mPointerNum+=n_184;
                            # 933 "18field.c"
                            # 930 "18field.c"
                            if(_if_conditional298=result_type_183->mPointerNum<0,                            _if_conditional298) {
                                # 931 "18field.c"
                                result_type_183->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 943 "18field.c"
                # 936 "18field.c"
                if(_if_conditional299=result_type_183->mPointerNum>0,                _if_conditional299) {
                    # 937 "18field.c"
                    result_type_183->mPointerNum-=list$1CVALUEph_length(array_num_164);
                    # 942 "18field.c"
                    # 939 "18field.c"
                    if(_if_conditional300=result_type_183->mPointerNum<0,                    _if_conditional300) {
                        # 940 "18field.c"
                        result_type_183->mPointerNum=0;
                    }
                }
            }
            # 945 "18field.c"
            come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 945, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 947 "18field.c"
            buf_199=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value252=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value251=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 947, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 949 "18field.c"
            result_type2_200=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(result_type_183))));
            come_call_finalizer2(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 950 "18field.c"
            result_type2_200->mPointerNum++;
            # 952 "18field.c"
            buffer_append_str(buf_199,((char*)(right_value254=xsprintf("come_range_check(&%s",left_value_160->c_value))));
            right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 957 "18field.c"
            for(            o2_saved_201=(struct list$1CVALUEph*)come_increment_ref_count((array_num_164)),it_204=list$1CVALUEph_begin((o2_saved_201));            !list$1CVALUEph_end((o2_saved_201));            it_204=list$1CVALUEph_next((o2_saved_201))            ){
                # 955 "18field.c"
                buffer_append_str(buf_199,((char*)(right_value255=xsprintf("[%s]",it_204->c_value))));
                right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 957 "18field.c"
            buffer_append_str(buf_199,((char*)(right_value256=xsprintf(",%s,%s+(",left_value_160->c_value,left_value_160->c_value))));
            right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 958 "18field.c"
            i_207=0;
            # 974 "18field.c"
            for(            o2_saved_208=(struct list$1sNodeph*)come_increment_ref_count((var_type_182->mArrayNum)),it_209=list$1sNodeph_begin((o2_saved_208));            !list$1sNodeph_end((o2_saved_208));            it_209=list$1sNodeph_next((o2_saved_208))            ){
                # 965 "18field.c"
                # 960 "18field.c"
                if(_if_conditional305=!node_compile(it_209,info),                _if_conditional305) {
                    # 961 "18field.c"
                    err_msg(info,"invalid array num");
                    # 962 "18field.c"
                    exit(1);
                }
                # 965 "18field.c"
                come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 966 "18field.c"
                dec_stack_ptr(1,info);
                # 968 "18field.c"
                buffer_append_str(buf_199,((char*)(right_value258=xsprintf("%s",come_value_210->c_value))));
                right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 972 "18field.c"
                # 969 "18field.c"
                if(_if_conditional306=i_207!=list$1sNodeph_length(var_type_182->mArrayNum)-1,                _if_conditional306) {
                    # 970 "18field.c"
                    buffer_append_str(buf_199,"*");
                }
                # 972 "18field.c"
                i_207++;
                come_call_finalizer2(CVALUE_finalize,come_value_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 974 "18field.c"
            buffer_append_str(buf_199,((char*)(right_value259=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 976 "18field.c"
            __dec_obj121=check_code_181;
            check_code_181=(char*)come_increment_ref_count(((char*)(right_value260=buffer_to_string(buf_199))));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 979 "18field.c"
        come_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 979, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1000 "18field.c"
        # 987 "18field.c"
        if(_if_conditional307=list$1sNodeph_length(left_type_161->mArrayNum)>0,        _if_conditional307) {
            # 991 "18field.c"
            for(            i_212=0;            i_212<list$1CVALUEph_length(array_num_164);            i_212++            ){
                # 989 "18field.c"
                list$1sNodeph_delete(left_type_161->mArrayNum,-1,-1);
            }
        }
        else {
            # 1000 "18field.c"
            # 992 "18field.c"
            if(_if_conditional308=left_type_161->mPointerNum>0,            _if_conditional308) {
                # 993 "18field.c"
                left_type_161->mPointerNum-=list$1CVALUEph_length(array_num_164);
                # 998 "18field.c"
                # 995 "18field.c"
                if(_if_conditional309=left_type_161->mPointerNum<0,                _if_conditional309) {
                    # 996 "18field.c"
                    left_type_161->mPointerNum=0;
                }
            }
        }
        # 1000 "18field.c"
        buf_213=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value263=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value262=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1002 "18field.c"
        buffer_append_str(buf_213,left_value_160->c_value);
        # 1008 "18field.c"
        for(        o2_saved_214=(struct list$1CVALUEph*)come_increment_ref_count((array_num_164)),it_215=list$1CVALUEph_begin((o2_saved_214));        !list$1CVALUEph_end((o2_saved_214));        it_215=list$1CVALUEph_next((o2_saved_214))        ){
            # 1005 "18field.c"
            buffer_append_str(buf_213,((char*)(right_value264=xsprintf("[%s]",it_215->c_value))));
            right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1008 "18field.c"
        left_value_code_216=(char*)come_increment_ref_count(((char*)(right_value265=buffer_to_string(buf_213))));
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1010 "18field.c"
        check_assign_type(((char*)(right_value266=xsprintf("array is assinged to"))),left_type_161,right_type_173,right_value_172,(_Bool)0,(_Bool)1,info);
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1045 "18field.c"
        # 1011 "18field.c"
        if(_if_conditional310=left_type_161->mHeap&&right_type_173->mHeap&&left_type_161->mPointerNum>0&&right_type_173->mPointerNum>0,        _if_conditional310) {
            # 1027 "18field.c"
            # 1013 "18field.c"
            if(_if_conditional311=left_value_160->type->mPointerNum>=1,            _if_conditional311) {
                # 1014 "18field.c"
                decrement_ref_count_object(left_type_161,left_value_code_216,info,(_Bool)0);
                # 1015 "18field.c"
                std_move(left_type_161,right_type_173,right_value_172,info);
                # 1016 "18field.c"
                __dec_obj122=come_value_211->c_value;
                come_value_211->c_value=(char*)come_increment_ref_count(((char*)(right_value267=xsprintf("%s=%s",left_value_code_216,right_value_172->c_value))));
                __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1027 "18field.c"
                # 1018 "18field.c"
                if(_if_conditional312=left_value_160->type->mPointerNum==0,                _if_conditional312) {
                    # 1019 "18field.c"
                    decrement_ref_count_object(left_type_161,left_value_code_216,info,(_Bool)0);
                    # 1020 "18field.c"
                    std_move(left_type_161,right_type_173,right_value_172,info);
                    # 1021 "18field.c"
                    __dec_obj123=come_value_211->c_value;
                    come_value_211->c_value=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("%s=%s",left_value_code_216,right_value_172->c_value))));
                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1024 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_216,left_value_160->type->mPointerNum);
                    # 1025 "18field.c"
                    __result167__ = (_Bool)0;
                    check_code_181 = come_decrement_ref_count2(check_code_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_216 = come_decrement_ref_count2(left_value_code_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result167__;
                }
            }
            # 1027 "18field.c"
            right_value_id_217=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_172->c_value));
            # 1032 "18field.c"
            # 1029 "18field.c"
            if(_if_conditional313=right_value_id_217!=-1,            _if_conditional313) {
                # 1030 "18field.c"
                remove_object_from_right_values(right_value_id_217,info);
            }
        }
        else {
            # 1044 "18field.c"
            # 1034 "18field.c"
            if(_if_conditional314=left_value_160->type->mPointerNum>=1,            _if_conditional314) {
                # 1035 "18field.c"
                __dec_obj124=come_value_211->c_value;
                come_value_211->c_value=(char*)come_increment_ref_count(((char*)(right_value269=xsprintf("%s=%s",left_value_code_216,right_value_172->c_value))));
                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1044 "18field.c"
                # 1037 "18field.c"
                if(_if_conditional315=left_value_160->type->mPointerNum==0,                _if_conditional315) {
                    # 1038 "18field.c"
                    __dec_obj125=come_value_211->c_value;
                    come_value_211->c_value=(char*)come_increment_ref_count(((char*)(right_value270=xsprintf("%s=%s",left_value_code_216,right_value_172->c_value))));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1041 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_216,left_value_160->type->mPointerNum);
                    # 1042 "18field.c"
                    __result168__ = (_Bool)0;
                    check_code_181 = come_decrement_ref_count2(check_code_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_216 = come_decrement_ref_count2(left_value_code_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result168__;
                }
            }
        }
        # 1045 "18field.c"
        result_type_218=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(left_type_161))));
        come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1046 "18field.c"
        __dec_obj126=result_type_218->mArrayNum;
        result_type_218->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value273=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value272=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1046, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1047 "18field.c"
        __dec_obj127=come_value_211->type;
        come_value_211->type=(struct sType*)come_increment_ref_count(result_type_218);
        come_call_finalizer2(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1048 "18field.c"
        come_value_211->var=((void*)0);
        # 1054 "18field.c"
        # 1050 "18field.c"
        if(_if_conditional316=check_code_181&&gComeDebug,        _if_conditional316) {
            # 1051 "18field.c"
            __dec_obj128=come_value_211->c_value;
            come_value_211->c_value=(char*)come_increment_ref_count(((char*)(right_value274=xsprintf("(%s, %s)",check_code_181,come_value_211->c_value))));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 1054 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_211));
        # 1056 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_211->c_value);
        check_code_181 = come_decrement_ref_count2(check_code_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_216 = come_decrement_ref_count2(left_value_code_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1059 "18field.c"
    __result169__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result169__;
    come_call_finalizer2(CVALUE_finalize,left_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./comelang2.h"
        self->head=((void*)0);
        # 105 "./comelang2.h"
        self->tail=((void*)0);
        # 106 "./comelang2.h"
        self->len=0;
        # 108 "./comelang2.h"
        __result144__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result144__;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_162;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_163;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_162, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_163, 0, sizeof(struct list_item$1CVALUEph*));
            # 123 "./comelang2.h"
            it_162=self->head;
            # 129 "./comelang2.h"
            while(_while_condtional14=it_162!=((void*)0),            _while_condtional14) {
                # 125 "./comelang2.h"
                prev_it_163=it_162;
                # 126 "./comelang2.h"
                it_162=it_162->next;
                # 127 "./comelang2.h"
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional262;
struct sNode* result_166;
struct sNode* __result145__;
_Bool _if_conditional263;
struct sNode* __result146__;
struct sNode* result_167;
struct sNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_166, 0, sizeof(struct sNode*));
memset(&result_167, 0, sizeof(struct sNode*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional262=self==((void*)0),        _if_conditional262) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_166,0,sizeof(struct sNode*));
            # 288 "./comelang2.h"
            __result145__ = __result_obj__ = result_166;
            return __result145__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result146__ = __result_obj__ = self->it->item;
            return __result146__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_167,0,sizeof(struct sNode*));
        # 298 "./comelang2.h"
        __result147__ = __result_obj__ = result_167;
        return __result147__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result148__ = self==((void*)0)||self->it==((void*)0);
        return __result148__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional264;
struct sNode* result_169;
struct sNode* __result149__;
_Bool _if_conditional265;
struct sNode* __result150__;
struct sNode* result_170;
struct sNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_169, 0, sizeof(struct sNode*));
memset(&result_170, 0, sizeof(struct sNode*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional264=self==((void*)0)||self->it==((void*)0),        _if_conditional264) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_169,0,sizeof(struct sNode*));
            # 305 "./comelang2.h"
            __result149__ = __result_obj__ = result_169;
            return __result149__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result150__ = __result_obj__ = self->it->item;
            return __result150__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_170,0,sizeof(struct sNode*));
        # 316 "./comelang2.h"
        __result151__ = __result_obj__ = result_170;
        return __result151__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional269;
struct list_item$1CVALUEph* it_178;
int i_179;
_Bool _while_condtional15;
_Bool _if_conditional270;
struct CVALUE* __result154__;
struct CVALUE* default_value_180;
struct CVALUE* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_178, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_179, 0, sizeof(int));
memset(&default_value_180, 0, sizeof(struct CVALUE*));
            # 686 "./comelang2.h"
            # 682 "./comelang2.h"
            if(_if_conditional269=position<0,            _if_conditional269) {
                # 683 "./comelang2.h"
                position+=self->len;
            }
            # 686 "./comelang2.h"
            it_178=self->head;
            # 687 "./comelang2.h"
            i_179=0;
            # 694 "./comelang2.h"
            while(_while_condtional15=it_178!=((void*)0),            _while_condtional15) {
                # 692 "./comelang2.h"
                # 689 "./comelang2.h"
                if(_if_conditional270=position==i_179,                _if_conditional270) {
                    # 690 "./comelang2.h"
                    __result154__ = __result_obj__ = it_178->item;
                    return __result154__;
                }
                # 692 "./comelang2.h"
                it_178=it_178->next;
                # 693 "./comelang2.h"
                i_179++;
            }
            # 696 "./comelang2.h"
            # 697 "./comelang2.h"
            memset(&default_value_180,0,sizeof(struct CVALUE*));
            # 698 "./comelang2.h"
            __result155__ = __result_obj__ = default_value_180;
            come_call_finalizer2(CVALUE_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result155__;
            come_call_finalizer2(CVALUE_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional275;
int __result156__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 367 "./comelang2.h"
                    # 364 "./comelang2.h"
                    if(_if_conditional275=self==((void*)0),                    _if_conditional275) {
                        # 365 "./comelang2.h"
                        __result156__ = 0;
                        return __result156__;
                    }
                    # 367 "./comelang2.h"
                    __result157__ = self->len;
                    return __result157__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
int tmp_186;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
struct list$1sNodeph* __result158__;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct list_item$1sNodeph* it_187;
int i_188;
_Bool _while_condtional16;
_Bool _if_conditional287;
struct list_item$1sNodeph* prev_it_189;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct list_item$1sNodeph* it_190;
int i_191;
_Bool _while_condtional17;
_Bool _if_conditional290;
_Bool _if_conditional291;
struct list_item$1sNodeph* prev_it_192;
struct list_item$1sNodeph* it_193;
struct list_item$1sNodeph* head_prev_it_194;
struct list_item$1sNodeph* tail_it_195;
int i_196;
_Bool _while_condtional18;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct list_item$1sNodeph* prev_it_197;
_Bool _if_conditional295;
_Bool _if_conditional296;
struct list$1sNodeph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_186, 0, sizeof(int));
memset(&it_187, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_188, 0, sizeof(int));
memset(&prev_it_189, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_190, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_191, 0, sizeof(int));
memset(&prev_it_192, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_193, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_194, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_195, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_196, 0, sizeof(int));
memset(&prev_it_197, 0, sizeof(struct list_item$1sNodeph*));
                                # 467 "./comelang2.h"
                                # 464 "./comelang2.h"
                                if(_if_conditional279=head<0,                                _if_conditional279) {
                                    # 465 "./comelang2.h"
                                    head+=self->len;
                                }
                                # 471 "./comelang2.h"
                                # 467 "./comelang2.h"
                                if(_if_conditional280=tail<0,                                _if_conditional280) {
                                    # 468 "./comelang2.h"
                                    tail+=self->len+1;
                                }
                                # 477 "./comelang2.h"
                                # 471 "./comelang2.h"
                                if(_if_conditional281=head>tail,                                _if_conditional281) {
                                    # 472 "./comelang2.h"
                                    tmp_186=tail;
                                    # 473 "./comelang2.h"
                                    tail=head;
                                    # 474 "./comelang2.h"
                                    head=tmp_186;
                                }
                                # 481 "./comelang2.h"
                                # 477 "./comelang2.h"
                                if(_if_conditional282=head<0,                                _if_conditional282) {
                                    # 478 "./comelang2.h"
                                    head=0;
                                }
                                # 485 "./comelang2.h"
                                # 481 "./comelang2.h"
                                if(_if_conditional283=tail>self->len,                                _if_conditional283) {
                                    # 482 "./comelang2.h"
                                    tail=self->len;
                                }
                                # 489 "./comelang2.h"
                                # 485 "./comelang2.h"
                                if(_if_conditional284=head==tail,                                _if_conditional284) {
                                    # 486 "./comelang2.h"
                                    __result158__ = __result_obj__ = self;
                                    return __result158__;
                                }
                                # 584 "./comelang2.h"
                                # 489 "./comelang2.h"
                                if(_if_conditional285=head==0&&tail==self->len,                                _if_conditional285) {
                                    # 491 "./comelang2.h"
                                    list$1sNodeph_reset(self);
                                }
                                else {
                                    # 584 "./comelang2.h"
                                    # 493 "./comelang2.h"
                                    if(_if_conditional286=head==0,                                    _if_conditional286) {
                                        # 494 "./comelang2.h"
                                        it_187=self->head;
                                        # 495 "./comelang2.h"
                                        i_188=0;
                                        # 517 "./comelang2.h"
                                        while(_while_condtional16=it_187!=((void*)0),                                        _while_condtional16) {
                                            # 516 "./comelang2.h"
                                            # 497 "./comelang2.h"
                                            if(_if_conditional287=i_188<tail,                                            _if_conditional287) {
                                                # 498 "./comelang2.h"
                                                prev_it_189=it_187;
                                                # 500 "./comelang2.h"
                                                it_187=it_187->next;
                                                # 501 "./comelang2.h"
                                                i_188++;
                                                # 503 "./comelang2.h"
                                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                # 505 "./comelang2.h"
                                                self->len--;
                                            }
                                            else {
                                                # 516 "./comelang2.h"
                                                # 507 "./comelang2.h"
                                                if(_if_conditional288=i_188==tail,                                                _if_conditional288) {
                                                    # 508 "./comelang2.h"
                                                    self->head=it_187;
                                                    # 509 "./comelang2.h"
                                                    self->head->prev=((void*)0);
                                                    # 510 "./comelang2.h"
                                                    break;
                                                }
                                                else {
                                                    # 513 "./comelang2.h"
                                                    it_187=it_187->next;
                                                    # 514 "./comelang2.h"
                                                    i_188++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 584 "./comelang2.h"
                                        # 518 "./comelang2.h"
                                        if(_if_conditional289=tail==self->len,                                        _if_conditional289) {
                                            # 519 "./comelang2.h"
                                            it_190=self->head;
                                            # 520 "./comelang2.h"
                                            i_191=0;
                                            # 542 "./comelang2.h"
                                            while(_while_condtional17=it_190!=((void*)0),                                            _while_condtional17) {
                                                # 527 "./comelang2.h"
                                                # 522 "./comelang2.h"
                                                if(_if_conditional290=i_191==head,                                                _if_conditional290) {
                                                    # 523 "./comelang2.h"
                                                    self->tail=it_190->prev;
                                                    # 524 "./comelang2.h"
                                                    self->tail->next=((void*)0);
                                                }
                                                # 541 "./comelang2.h"
                                                # 527 "./comelang2.h"
                                                if(_if_conditional291=i_191>=head,                                                _if_conditional291) {
                                                    # 528 "./comelang2.h"
                                                    prev_it_192=it_190;
                                                    # 530 "./comelang2.h"
                                                    it_190=it_190->next;
                                                    # 531 "./comelang2.h"
                                                    i_191++;
                                                    # 533 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 535 "./comelang2.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 538 "./comelang2.h"
                                                    it_190=it_190->next;
                                                    # 539 "./comelang2.h"
                                                    i_191++;
                                                }
                                            }
                                        }
                                        else {
                                            # 544 "./comelang2.h"
                                            it_193=self->head;
                                            # 546 "./comelang2.h"
                                            head_prev_it_194=((void*)0);
                                            # 547 "./comelang2.h"
                                            tail_it_195=((void*)0);
                                            # 550 "./comelang2.h"
                                            i_196=0;
                                            # 576 "./comelang2.h"
                                            while(_while_condtional18=it_193!=((void*)0),                                            _while_condtional18) {
                                                # 555 "./comelang2.h"
                                                # 552 "./comelang2.h"
                                                if(_if_conditional292=i_196==head,                                                _if_conditional292) {
                                                    # 553 "./comelang2.h"
                                                    head_prev_it_194=it_193->prev;
                                                }
                                                # 559 "./comelang2.h"
                                                # 555 "./comelang2.h"
                                                if(_if_conditional293=i_196==tail,                                                _if_conditional293) {
                                                    # 556 "./comelang2.h"
                                                    tail_it_195=it_193;
                                                }
                                                # 574 "./comelang2.h"
                                                # 559 "./comelang2.h"
                                                if(_if_conditional294=i_196>=head&&i_196<tail,                                                _if_conditional294) {
                                                    # 561 "./comelang2.h"
                                                    prev_it_197=it_193;
                                                    # 563 "./comelang2.h"
                                                    it_193=it_193->next;
                                                    # 564 "./comelang2.h"
                                                    i_196++;
                                                    # 566 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 568 "./comelang2.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 571 "./comelang2.h"
                                                    it_193=it_193->next;
                                                    # 572 "./comelang2.h"
                                                    i_196++;
                                                }
                                            }
                                            # 579 "./comelang2.h"
                                            # 576 "./comelang2.h"
                                            if(_if_conditional295=head_prev_it_194!=((void*)0),                                            _if_conditional295) {
                                                # 577 "./comelang2.h"
                                                head_prev_it_194->next=tail_it_195;
                                            }
                                            # 582 "./comelang2.h"
                                            # 579 "./comelang2.h"
                                            if(_if_conditional296=tail_it_195!=((void*)0),                                            _if_conditional296) {
                                                # 580 "./comelang2.h"
                                                tail_it_195->prev=head_prev_it_194;
                                            }
                                        }
                                    }
                                }
                                # 584 "./comelang2.h"
                                __result159__ = __result_obj__ = self;
                                return __result159__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional301;
struct CVALUE* result_202;
struct CVALUE* __result160__;
_Bool _if_conditional302;
struct CVALUE* __result161__;
struct CVALUE* result_203;
struct CVALUE* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_202, 0, sizeof(struct CVALUE*));
memset(&result_203, 0, sizeof(struct CVALUE*));
                # 290 "./comelang2.h"
                # 285 "./comelang2.h"
                if(_if_conditional301=self==((void*)0),                _if_conditional301) {
                    # 286 "./comelang2.h"
                    # 287 "./comelang2.h"
                    memset(&result_202,0,sizeof(struct CVALUE*));
                    # 288 "./comelang2.h"
                    __result160__ = __result_obj__ = result_202;
                    return __result160__;
                }
                # 290 "./comelang2.h"
                self->it=self->head;
                # 296 "./comelang2.h"
                # 292 "./comelang2.h"
                if(self->it) {
                    # 293 "./comelang2.h"
                    __result161__ = __result_obj__ = self->it->item;
                    return __result161__;
                }
                # 296 "./comelang2.h"
                # 297 "./comelang2.h"
                memset(&result_203,0,sizeof(struct CVALUE*));
                # 298 "./comelang2.h"
                __result162__ = __result_obj__ = result_203;
                return __result162__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./comelang2.h"
                __result163__ = self==((void*)0)||self->it==((void*)0);
                return __result163__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional303;
struct CVALUE* result_205;
struct CVALUE* __result164__;
_Bool _if_conditional304;
struct CVALUE* __result165__;
struct CVALUE* result_206;
struct CVALUE* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_205, 0, sizeof(struct CVALUE*));
memset(&result_206, 0, sizeof(struct CVALUE*));
                # 308 "./comelang2.h"
                # 302 "./comelang2.h"
                if(_if_conditional303=self==((void*)0)||self->it==((void*)0),                _if_conditional303) {
                    # 303 "./comelang2.h"
                    # 304 "./comelang2.h"
                    memset(&result_205,0,sizeof(struct CVALUE*));
                    # 305 "./comelang2.h"
                    __result164__ = __result_obj__ = result_205;
                    return __result164__;
                }
                # 308 "./comelang2.h"
                self->it=self->it->next;
                # 314 "./comelang2.h"
                # 310 "./comelang2.h"
                if(self->it) {
                    # 311 "./comelang2.h"
                    __result165__ = __result_obj__ = self->it->item;
                    return __result165__;
                }
                # 314 "./comelang2.h"
                # 315 "./comelang2.h"
                memset(&result_206,0,sizeof(struct CVALUE*));
                # 316 "./comelang2.h"
                __result166__ = __result_obj__ = result_206;
                return __result166__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1064 "18field.c"
    __result170__ = self->sline;
    return __result170__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value275;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
    # 1069 "18field.c"
    __result171__ = __result_obj__ = ((char*)(right_value275=__builtin_string(self->sname)));
    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result171__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value276;
char* __dec_obj129;
void* right_value277;
struct list$1sNodeph* __dec_obj130;
void* right_value278;
struct sNode* __dec_obj131;
struct sLoadArrayNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
    # 1085 "18field.c"
    self->sline=info->sline;
    # 1086 "18field.c"
    __dec_obj129=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(info->sname))));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1088 "18field.c"
    __dec_obj130=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value277=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1089 "18field.c"
    self->mBreakGuard=break_guard;
    # 1091 "18field.c"
    __dec_obj131=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(left))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1092 "18field.c"
    self->mQuote=quote;
    # 1094 "18field.c"
    __result172__ = __result_obj__ = self;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result172__;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1099 "18field.c"
    __result173__ = (_Bool)0;
    return __result173__;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
void* right_value279;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
    # 1104 "18field.c"
    __result174__ = __result_obj__ = ((char*)(right_value279=__builtin_string("sLoadArrayNode")));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result174__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_219;
struct list$1sNodeph* array_num_nodes_220;
_Bool _if_conditional320;
_Bool __result175__;
void* right_value280;
struct CVALUE* left_value_221;
_Bool _if_conditional321;
void* right_value281;
void* right_value282;
char* __dec_obj132;
void* right_value283;
struct sType* left_type_222;
void* right_value284;
void* right_value285;
struct list$1CVALUEph* array_num_223;
struct list$1sNodeph* o2_saved_224;
struct sNode* it_225;
_Bool _if_conditional322;
_Bool __result176__;
void* right_value286;
struct CVALUE* c_value_226;
void* right_value287;
struct sType* type_227;
char* fun_name_228;
_Bool calling_fun_229;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
struct sType* var_type_230;
void* right_value288;
struct sType* result_type_231;
_Bool _if_conditional326;
struct sType* __dec_obj133;
_Bool _if_conditional327;
int n_232;
_Bool _if_conditional328;
void* right_value289;
struct sType* __dec_obj134;
_Bool _if_conditional329;
void* right_value290;
struct sType* __dec_obj135;
_Bool _if_conditional330;
int i_233;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value291;
struct CVALUE* come_value_234;
void* right_value292;
void* right_value293;
struct buffer* buf_235;
void* right_value294;
struct sType* result_type2_236;
void* right_value295;
void* right_value296;
struct list$1CVALUEph* o2_saved_237;
struct CVALUE* it_238;
void* right_value297;
void* right_value298;
int i_239;
struct list$1sNodeph* o2_saved_240;
struct sNode* it_241;
_Bool _if_conditional335;
void* right_value299;
struct CVALUE* come_value_242;
void* right_value300;
_Bool _if_conditional336;
void* right_value301;
void* right_value302;
char* left_value_code_243;
void* right_value303;
char* __dec_obj136;
void* right_value304;
struct sType* __dec_obj137;
void* right_value305;
struct CVALUE* come_value_244;
void* right_value306;
void* right_value307;
struct buffer* buf_245;
struct list$1CVALUEph* o2_saved_246;
struct CVALUE* it_247;
void* right_value308;
void* right_value309;
char* left_value_code_248;
void* right_value310;
char* __dec_obj138;
void* right_value311;
struct sType* result_type_249;
_Bool _if_conditional337;
struct sType* __dec_obj139;
_Bool _if_conditional338;
int n_250;
_Bool _if_conditional339;
void* right_value312;
struct sType* __dec_obj140;
_Bool _if_conditional340;
void* right_value313;
struct sType* __dec_obj141;
_Bool _if_conditional341;
int i_251;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
void* right_value314;
struct sType* __dec_obj142;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_219, 0, sizeof(struct sNode*));
memset(&array_num_nodes_220, 0, sizeof(struct list$1sNodeph*));
right_value280 = (void*)0;
memset(&left_value_221, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&left_type_222, 0, sizeof(struct sType*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&array_num_223, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_224, 0, sizeof(struct list$1sNodeph*));
memset(&it_225, 0, sizeof(struct sNode*));
right_value286 = (void*)0;
memset(&c_value_226, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
memset(&type_227, 0, sizeof(struct sType*));
memset(&fun_name_228, 0, sizeof(char*));
memset(&calling_fun_229, 0, sizeof(_Bool));
memset(&var_type_230, 0, sizeof(struct sType*));
right_value288 = (void*)0;
memset(&result_type_231, 0, sizeof(struct sType*));
memset(&n_232, 0, sizeof(int));
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&i_233, 0, sizeof(int));
right_value291 = (void*)0;
memset(&come_value_234, 0, sizeof(struct CVALUE*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&buf_235, 0, sizeof(struct buffer*));
right_value294 = (void*)0;
memset(&result_type2_236, 0, sizeof(struct sType*));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&o2_saved_237, 0, sizeof(struct list$1CVALUEph*));
memset(&it_238, 0, sizeof(struct CVALUE*));
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&i_239, 0, sizeof(int));
memset(&o2_saved_240, 0, sizeof(struct list$1sNodeph*));
memset(&it_241, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
memset(&come_value_242, 0, sizeof(struct CVALUE*));
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&left_value_code_243, 0, sizeof(char*));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&come_value_244, 0, sizeof(struct CVALUE*));
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&buf_245, 0, sizeof(struct buffer*));
memset(&o2_saved_246, 0, sizeof(struct list$1CVALUEph*));
memset(&it_247, 0, sizeof(struct CVALUE*));
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&left_value_code_248, 0, sizeof(char*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&result_type_249, 0, sizeof(struct sType*));
memset(&n_250, 0, sizeof(int));
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&i_251, 0, sizeof(int));
right_value314 = (void*)0;
    # 1109 "18field.c"
    left_219=self->mLeft;
    # 1110 "18field.c"
    array_num_nodes_220=self->mArrayNum;
    # 1116 "18field.c"
    # 1112 "18field.c"
    if(_if_conditional320=!node_compile(left_219,info),    _if_conditional320) {
        # 1113 "18field.c"
        __result175__ = (_Bool)0;
        return __result175__;
    }
    # 1116 "18field.c"
    left_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1117 "18field.c"
    dec_stack_ptr(1,info);
    # 1123 "18field.c"
    # 1119 "18field.c"
    if(_if_conditional321=gComeDebug&&left_value_221->type->mPointerNum>0,    _if_conditional321) {
        # 1120 "18field.c"
        __dec_obj132=left_value_221->c_value;
        left_value_221->c_value=(char*)come_increment_ref_count(((char*)(right_value282=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value281=make_type_name_string(left_value_221->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_221->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1123 "18field.c"
    left_type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(left_value_221->type))));
    come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1125 "18field.c"
    array_num_223=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value285=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value284=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1125, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1138 "18field.c"
    for(    o2_saved_224=(array_num_nodes_220),it_225=list$1sNodeph_begin((o2_saved_224));    !list$1sNodeph_end((o2_saved_224));    it_225=list$1sNodeph_next((o2_saved_224))    ){
        # 1132 "18field.c"
        # 1128 "18field.c"
        if(_if_conditional322=!node_compile(it_225,info),        _if_conditional322) {
            # 1129 "18field.c"
            __result176__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result176__;
        }
        # 1132 "18field.c"
        c_value_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1133 "18field.c"
        dec_stack_ptr(1,info);
        # 1135 "18field.c"
        list$1CVALUEph_push_back(array_num_223,(struct CVALUE*)come_increment_ref_count(c_value_226));
        come_call_finalizer2(CVALUE_finalize,c_value_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1138 "18field.c"
    type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=sType_clone(left_value_221->type))));
    come_call_finalizer2(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1140 "18field.c"
    fun_name_228="operator_load_element";
    # 1141 "18field.c"
    # 1149 "18field.c"
    # 1142 "18field.c"
    if(self->mQuote) {
        # 1143 "18field.c"
        calling_fun_229=(_Bool)0;
    }
    else {
        # 1146 "18field.c"
        calling_fun_229=operator_overload_fun(type_227,fun_name_228,left_value_221,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_223,0), "18field.c", 1146, 10)),self->mBreakGuard,info);
    }
    # 1302 "18field.c"
    # 1149 "18field.c"
    if(_if_conditional324=!calling_fun_229,    _if_conditional324) {
        # 1300 "18field.c"
        # 1150 "18field.c"
        if(_if_conditional325=gComeDebug&&left_value_221->var&&left_value_221->var->mType&&list$1sNodeph_length(left_value_221->var->mType->mArrayNum)>0,        _if_conditional325) {
            # 1152 "18field.c"
            var_type_230=left_value_221->var->mType;
            # 1153 "18field.c"
            result_type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_clone(left_type_222))));
            come_call_finalizer2(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1159 "18field.c"
            # 1155 "18field.c"
            if(result_type_231->mOriginalLoadVarType->v1) {
                # 1156 "18field.c"
                __dec_obj133=result_type_231;
                result_type_231=(struct sType*)come_increment_ref_count(result_type_231->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 1193 "18field.c"
            # 1159 "18field.c"
            if(_if_conditional327=list$1sNodeph_length(result_type_231->mArrayNum)>0,            _if_conditional327) {
                # 1160 "18field.c"
                n_232=list$1sNodeph_length(result_type_231->mArrayNum)-list$1CVALUEph_length(array_num_223);
                # 1182 "18field.c"
                # 1162 "18field.c"
                if(_if_conditional328=n_232==0,                _if_conditional328) {
                    # 1163 "18field.c"
                    __dec_obj134=result_type_231;
                    result_type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(left_type_222))));
                    come_call_finalizer2(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1167 "18field.c"
                    # 1164 "18field.c"
                    if(left_type_222->mOriginalLoadVarType->v1) {
                        # 1165 "18field.c"
                        __dec_obj135=result_type_231;
                        result_type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(left_type_222->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1167 "18field.c"
                    list$1sNodeph_reset(result_type_231->mArrayNum);
                }
                else {
                    # 1182 "18field.c"
                    # 1169 "18field.c"
                    if(_if_conditional330=n_232>0,                    _if_conditional330) {
                        # 1173 "18field.c"
                        for(                        i_233=0;                        i_233<n_232;                        i_233++                        ){
                            # 1171 "18field.c"
                            list$1sNodeph_delete(result_type_231->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1182 "18field.c"
                        # 1174 "18field.c"
                        if(_if_conditional331=n_232<0,                        _if_conditional331) {
                            # 1175 "18field.c"
                            list$1sNodeph_reset(result_type_231->mArrayNum);
                            # 1176 "18field.c"
                            result_type_231->mPointerNum+=n_232;
                            # 1181 "18field.c"
                            # 1178 "18field.c"
                            if(_if_conditional332=result_type_231->mPointerNum<0,                            _if_conditional332) {
                                # 1179 "18field.c"
                                result_type_231->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1191 "18field.c"
                # 1184 "18field.c"
                if(_if_conditional333=result_type_231->mPointerNum>0,                _if_conditional333) {
                    # 1185 "18field.c"
                    result_type_231->mPointerNum-=list$1CVALUEph_length(array_num_223);
                    # 1190 "18field.c"
                    # 1187 "18field.c"
                    if(_if_conditional334=result_type_231->mPointerNum<0,                    _if_conditional334) {
                        # 1188 "18field.c"
                        result_type_231->mPointerNum=0;
                    }
                }
            }
            # 1193 "18field.c"
            come_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1193, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1195 "18field.c"
            buf_235=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value293=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value292=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1195, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1198 "18field.c"
            result_type2_236=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(result_type_231))));
            come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1199 "18field.c"
            result_type2_236->mPointerNum++;
            # 1203 "18field.c"
            buffer_append_str(buf_235,((char*)(right_value296=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value295=make_type_name_string(result_type2_236,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_221->c_value))));
            right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1208 "18field.c"
            for(            o2_saved_237=(struct list$1CVALUEph*)come_increment_ref_count((array_num_223)),it_238=list$1CVALUEph_begin((o2_saved_237));            !list$1CVALUEph_end((o2_saved_237));            it_238=list$1CVALUEph_next((o2_saved_237))            ){
                # 1206 "18field.c"
                buffer_append_str(buf_235,((char*)(right_value297=xsprintf("[%s]",it_238->c_value))));
                right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1208 "18field.c"
            buffer_append_str(buf_235,((char*)(right_value298=xsprintf(",%s,%s+(",left_value_221->c_value,left_value_221->c_value))));
            right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1209 "18field.c"
            i_239=0;
            # 1225 "18field.c"
            for(            o2_saved_240=(struct list$1sNodeph*)come_increment_ref_count((var_type_230->mArrayNum)),it_241=list$1sNodeph_begin((o2_saved_240));            !list$1sNodeph_end((o2_saved_240));            it_241=list$1sNodeph_next((o2_saved_240))            ){
                # 1216 "18field.c"
                # 1211 "18field.c"
                if(_if_conditional335=!node_compile(it_241,info),                _if_conditional335) {
                    # 1212 "18field.c"
                    err_msg(info,"invalid array num");
                    # 1213 "18field.c"
                    exit(1);
                }
                # 1216 "18field.c"
                come_value_242=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value299=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1217 "18field.c"
                dec_stack_ptr(1,info);
                # 1219 "18field.c"
                buffer_append_str(buf_235,((char*)(right_value300=xsprintf("%s",come_value_242->c_value))));
                right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1223 "18field.c"
                # 1220 "18field.c"
                if(_if_conditional336=i_239!=list$1sNodeph_length(var_type_230->mArrayNum)-1,                _if_conditional336) {
                    # 1221 "18field.c"
                    buffer_append_str(buf_235,"*");
                }
                # 1223 "18field.c"
                i_239++;
                come_call_finalizer2(CVALUE_finalize,come_value_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1225 "18field.c"
            buffer_append_str(buf_235,((char*)(right_value301=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1227 "18field.c"
            left_value_code_243=(char*)come_increment_ref_count(((char*)(right_value302=buffer_to_string(buf_235))));
            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1229 "18field.c"
            __dec_obj136=come_value_234->c_value;
            come_value_234->c_value=(char*)come_increment_ref_count(((char*)(right_value303=xsprintf("%s",left_value_code_243))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1231 "18field.c"
            __dec_obj137=come_value_234->type;
            come_value_234->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(result_type_231))));
            come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1232 "18field.c"
            come_value_234->var=((void*)0);
            # 1234 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_234));
            # 1236 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_234->c_value);
            come_call_finalizer2(sType_finalize,result_type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_243 = come_decrement_ref_count2(left_value_code_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1239 "18field.c"
            come_value_244=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value305=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1239, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1241 "18field.c"
            buf_245=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value307=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value306=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1241, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1243 "18field.c"
            buffer_append_str(buf_245,left_value_221->c_value);
            # 1249 "18field.c"
            for(            o2_saved_246=(struct list$1CVALUEph*)come_increment_ref_count((array_num_223)),it_247=list$1CVALUEph_begin((o2_saved_246));            !list$1CVALUEph_end((o2_saved_246));            it_247=list$1CVALUEph_next((o2_saved_246))            ){
                # 1246 "18field.c"
                buffer_append_str(buf_245,((char*)(right_value308=xsprintf("[%s]",it_247->c_value))));
                right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1249 "18field.c"
            left_value_code_248=(char*)come_increment_ref_count(((char*)(right_value309=buffer_to_string(buf_245))));
            right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1251 "18field.c"
            __dec_obj138=come_value_244->c_value;
            come_value_244->c_value=(char*)come_increment_ref_count(((char*)(right_value310=xsprintf("%s",left_value_code_248))));
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1253 "18field.c"
            result_type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(left_type_222))));
            come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1259 "18field.c"
            # 1255 "18field.c"
            if(result_type_249->mOriginalLoadVarType->v1) {
                # 1256 "18field.c"
                __dec_obj139=result_type_249;
                result_type_249=(struct sType*)come_increment_ref_count(result_type_249->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 1293 "18field.c"
            # 1259 "18field.c"
            if(_if_conditional338=list$1sNodeph_length(result_type_249->mArrayNum)>0,            _if_conditional338) {
                # 1260 "18field.c"
                n_250=list$1sNodeph_length(result_type_249->mArrayNum)-list$1CVALUEph_length(array_num_223);
                # 1282 "18field.c"
                # 1262 "18field.c"
                if(_if_conditional339=n_250==0,                _if_conditional339) {
                    # 1263 "18field.c"
                    __dec_obj140=result_type_249;
                    result_type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value312=sType_clone(left_type_222))));
                    come_call_finalizer2(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1267 "18field.c"
                    # 1264 "18field.c"
                    if(left_type_222->mOriginalLoadVarType->v1) {
                        # 1265 "18field.c"
                        __dec_obj141=result_type_249;
                        result_type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_clone(left_type_222->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1267 "18field.c"
                    list$1sNodeph_reset(result_type_249->mArrayNum);
                }
                else {
                    # 1282 "18field.c"
                    # 1269 "18field.c"
                    if(_if_conditional341=n_250>0,                    _if_conditional341) {
                        # 1273 "18field.c"
                        for(                        i_251=0;                        i_251<n_250;                        i_251++                        ){
                            # 1271 "18field.c"
                            list$1sNodeph_delete(result_type_249->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1282 "18field.c"
                        # 1274 "18field.c"
                        if(_if_conditional342=n_250<0,                        _if_conditional342) {
                            # 1275 "18field.c"
                            list$1sNodeph_reset(result_type_249->mArrayNum);
                            # 1276 "18field.c"
                            result_type_249->mPointerNum+=n_250;
                            # 1281 "18field.c"
                            # 1278 "18field.c"
                            if(_if_conditional343=result_type_249->mPointerNum<0,                            _if_conditional343) {
                                # 1279 "18field.c"
                                result_type_249->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1291 "18field.c"
                # 1284 "18field.c"
                if(_if_conditional344=result_type_249->mPointerNum>0,                _if_conditional344) {
                    # 1285 "18field.c"
                    result_type_249->mPointerNum-=list$1CVALUEph_length(array_num_223);
                    # 1290 "18field.c"
                    # 1287 "18field.c"
                    if(_if_conditional345=result_type_249->mPointerNum<0,                    _if_conditional345) {
                        # 1288 "18field.c"
                        result_type_249->mPointerNum=0;
                    }
                }
            }
            # 1293 "18field.c"
            __dec_obj142=come_value_244->type;
            come_value_244->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(result_type_249))));
            come_call_finalizer2(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1294 "18field.c"
            come_value_244->var=((void*)0);
            # 1296 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_244));
            # 1298 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_244->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_244, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_248 = come_decrement_ref_count2(left_value_code_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 1302 "18field.c"
    __result177__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result177__;
    come_call_finalizer2(CVALUE_finalize,left_value_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1307 "18field.c"
    __result178__ = self->sline;
    return __result178__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value315;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value315 = (void*)0;
    # 1312 "18field.c"
    __result179__ = __result_obj__ = ((char*)(right_value315=__builtin_string(self->sname)));
    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result179__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value316;
char* __dec_obj143;
void* right_value317;
struct list$1sNodeph* __dec_obj144;
void* right_value318;
struct sNode* __dec_obj145;
struct sLoadRangeArrayNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
    # 1327 "18field.c"
    self->sline=info->sline;
    # 1328 "18field.c"
    __dec_obj143=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(info->sname))));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1330 "18field.c"
    __dec_obj144=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value317=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1332 "18field.c"
    __dec_obj145=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNode_clone(left))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1333 "18field.c"
    self->mQuote=quote;
    # 1335 "18field.c"
    __result180__ = __result_obj__ = self;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result180__;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1340 "18field.c"
    __result181__ = (_Bool)0;
    return __result181__;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
void* right_value319;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value319 = (void*)0;
    # 1345 "18field.c"
    __result182__ = __result_obj__ = ((char*)(right_value319=__builtin_string("sLoadRangeArrayNode")));
    right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result182__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_252;
struct list$1sNodeph* array_num_nodes_253;
_Bool _if_conditional349;
_Bool __result183__;
void* right_value320;
struct CVALUE* left_value_254;
void* right_value321;
struct sType* left_type_255;
void* right_value322;
void* right_value323;
struct list$1CVALUEph* array_num_256;
struct list$1sNodeph* o2_saved_257;
struct sNode* it_258;
_Bool _if_conditional350;
_Bool __result184__;
void* right_value324;
struct CVALUE* c_value_259;
void* right_value325;
struct sType* type_260;
char* fun_name_261;
_Bool calling_fun_262;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value326;
struct CVALUE* come_value_263;
void* right_value327;
void* right_value328;
struct buffer* buf_264;
struct list$1CVALUEph* o2_saved_265;
struct CVALUE* it_266;
void* right_value329;
void* right_value330;
char* left_value_code_267;
void* right_value331;
char* __dec_obj146;
void* right_value332;
struct sType* result_type_268;
_Bool _if_conditional353;
struct sType* __dec_obj147;
_Bool _if_conditional354;
int n_269;
_Bool _if_conditional355;
void* right_value333;
struct sType* __dec_obj148;
_Bool _if_conditional356;
void* right_value334;
struct sType* __dec_obj149;
_Bool _if_conditional357;
int i_270;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value335;
struct sType* __dec_obj150;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_252, 0, sizeof(struct sNode*));
memset(&array_num_nodes_253, 0, sizeof(struct list$1sNodeph*));
right_value320 = (void*)0;
memset(&left_value_254, 0, sizeof(struct CVALUE*));
right_value321 = (void*)0;
memset(&left_type_255, 0, sizeof(struct sType*));
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&array_num_256, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_257, 0, sizeof(struct list$1sNodeph*));
memset(&it_258, 0, sizeof(struct sNode*));
right_value324 = (void*)0;
memset(&c_value_259, 0, sizeof(struct CVALUE*));
right_value325 = (void*)0;
memset(&type_260, 0, sizeof(struct sType*));
memset(&fun_name_261, 0, sizeof(char*));
memset(&calling_fun_262, 0, sizeof(_Bool));
right_value326 = (void*)0;
memset(&come_value_263, 0, sizeof(struct CVALUE*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&buf_264, 0, sizeof(struct buffer*));
memset(&o2_saved_265, 0, sizeof(struct list$1CVALUEph*));
memset(&it_266, 0, sizeof(struct CVALUE*));
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&left_value_code_267, 0, sizeof(char*));
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&result_type_268, 0, sizeof(struct sType*));
memset(&n_269, 0, sizeof(int));
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&i_270, 0, sizeof(int));
right_value335 = (void*)0;
    # 1350 "18field.c"
    left_252=self->mLeft;
    # 1351 "18field.c"
    array_num_nodes_253=self->mArrayNum;
    # 1357 "18field.c"
    # 1353 "18field.c"
    if(_if_conditional349=!node_compile(left_252,info),    _if_conditional349) {
        # 1354 "18field.c"
        __result183__ = (_Bool)0;
        return __result183__;
    }
    # 1357 "18field.c"
    left_value_254=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1358 "18field.c"
    dec_stack_ptr(1,info);
    # 1360 "18field.c"
    left_type_255=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_clone(left_value_254->type))));
    come_call_finalizer2(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1362 "18field.c"
    array_num_256=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value323=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value322=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1362, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1375 "18field.c"
    for(    o2_saved_257=(array_num_nodes_253),it_258=list$1sNodeph_begin((o2_saved_257));    !list$1sNodeph_end((o2_saved_257));    it_258=list$1sNodeph_next((o2_saved_257))    ){
        # 1369 "18field.c"
        # 1365 "18field.c"
        if(_if_conditional350=!node_compile(it_258,info),        _if_conditional350) {
            # 1366 "18field.c"
            __result184__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result184__;
        }
        # 1369 "18field.c"
        c_value_259=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value324=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1370 "18field.c"
        dec_stack_ptr(1,info);
        # 1372 "18field.c"
        list$1CVALUEph_push_back(array_num_256,(struct CVALUE*)come_increment_ref_count(c_value_259));
        come_call_finalizer2(CVALUE_finalize,c_value_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1375 "18field.c"
    type_260=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_clone(left_value_254->type))));
    come_call_finalizer2(sType_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1377 "18field.c"
    fun_name_261="operator_load_range_element";
    # 1378 "18field.c"
    # 1386 "18field.c"
    # 1379 "18field.c"
    if(self->mQuote) {
        # 1380 "18field.c"
        calling_fun_262=(_Bool)0;
    }
    else {
        # 1383 "18field.c"
        calling_fun_262=operator_overload_fun2(type_260,fun_name_261,left_value_254,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_256,0), "18field.c", 1383, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_256,1), "18field.c", 1383, 12)),info);
    }
    # 1449 "18field.c"
    # 1386 "18field.c"
    if(_if_conditional352=!calling_fun_262,    _if_conditional352) {
        # 1387 "18field.c"
        come_value_263=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value326=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1387, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1389 "18field.c"
        buf_264=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value328=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value327=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1389, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1391 "18field.c"
        buffer_append_str(buf_264,left_value_254->c_value);
        # 1397 "18field.c"
        for(        o2_saved_265=(struct list$1CVALUEph*)come_increment_ref_count((array_num_256)),it_266=list$1CVALUEph_begin((o2_saved_265));        !list$1CVALUEph_end((o2_saved_265));        it_266=list$1CVALUEph_next((o2_saved_265))        ){
            # 1394 "18field.c"
            buffer_append_str(buf_264,((char*)(right_value329=xsprintf("[%s]",it_266->c_value))));
            right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1397 "18field.c"
        left_value_code_267=(char*)come_increment_ref_count(((char*)(right_value330=buffer_to_string(buf_264))));
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1399 "18field.c"
        __dec_obj146=come_value_263->c_value;
        come_value_263->c_value=(char*)come_increment_ref_count(((char*)(right_value331=xsprintf("%s",left_value_code_267))));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1401 "18field.c"
        result_type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_clone(left_type_255))));
        come_call_finalizer2(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1407 "18field.c"
        # 1403 "18field.c"
        if(result_type_268->mOriginalLoadVarType->v1) {
            # 1404 "18field.c"
            __dec_obj147=result_type_268;
            result_type_268=(struct sType*)come_increment_ref_count(result_type_268->mOriginalLoadVarType->v1);
            come_call_finalizer2(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 1441 "18field.c"
        # 1407 "18field.c"
        if(_if_conditional354=list$1sNodeph_length(result_type_268->mArrayNum)>0,        _if_conditional354) {
            # 1408 "18field.c"
            n_269=list$1sNodeph_length(result_type_268->mArrayNum)-list$1CVALUEph_length(array_num_256);
            # 1430 "18field.c"
            # 1410 "18field.c"
            if(_if_conditional355=n_269==0,            _if_conditional355) {
                # 1411 "18field.c"
                __dec_obj148=result_type_268;
                result_type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_clone(left_type_255))));
                come_call_finalizer2(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1415 "18field.c"
                # 1412 "18field.c"
                if(left_type_255->mOriginalLoadVarType->v1) {
                    # 1413 "18field.c"
                    __dec_obj149=result_type_268;
                    result_type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_clone(left_type_255->mOriginalLoadVarType->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 1415 "18field.c"
                list$1sNodeph_reset(result_type_268->mArrayNum);
            }
            else {
                # 1430 "18field.c"
                # 1417 "18field.c"
                if(_if_conditional357=n_269>0,                _if_conditional357) {
                    # 1421 "18field.c"
                    for(                    i_270=0;                    i_270<n_269;                    i_270++                    ){
                        # 1419 "18field.c"
                        list$1sNodeph_delete(result_type_268->mArrayNum,-1,-1);
                    }
                }
                else {
                    # 1430 "18field.c"
                    # 1422 "18field.c"
                    if(_if_conditional358=n_269<0,                    _if_conditional358) {
                        # 1423 "18field.c"
                        list$1sNodeph_reset(result_type_268->mArrayNum);
                        # 1424 "18field.c"
                        result_type_268->mPointerNum+=n_269;
                        # 1429 "18field.c"
                        # 1426 "18field.c"
                        if(_if_conditional359=result_type_268->mPointerNum<0,                        _if_conditional359) {
                            # 1427 "18field.c"
                            result_type_268->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            # 1439 "18field.c"
            # 1432 "18field.c"
            if(_if_conditional360=result_type_268->mPointerNum>0,            _if_conditional360) {
                # 1433 "18field.c"
                result_type_268->mPointerNum-=list$1CVALUEph_length(array_num_256);
                # 1438 "18field.c"
                # 1435 "18field.c"
                if(_if_conditional361=result_type_268->mPointerNum<0,                _if_conditional361) {
                    # 1436 "18field.c"
                    result_type_268->mPointerNum=0;
                }
            }
        }
        # 1441 "18field.c"
        __dec_obj150=come_value_263->type;
        come_value_263->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(result_type_268))));
        come_call_finalizer2(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1442 "18field.c"
        come_value_263->var=((void*)0);
        # 1444 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_263));
        # 1446 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_263->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_267 = come_decrement_ref_count2(left_value_code_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_268, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1449 "18field.c"
    __result185__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result185__;
    come_call_finalizer2(CVALUE_finalize,left_value_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1454 "18field.c"
    __result186__ = self->sline;
    return __result186__;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value336;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value336 = (void*)0;
    # 1459 "18field.c"
    __result187__ = __result_obj__ = ((char*)(right_value336=__builtin_string(self->sname)));
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result187__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1464 "18field.c"
    __result188__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result188__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1469 "18field.c"
    err_msg(info,"parse_method_call is failed");
    # 1470 "18field.c"
    exit(2);
    # 1472 "18field.c"
    __result189__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result189__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional19;
_Bool range_array_271;
char* p_272;
int sline_273;
_Bool _if_conditional362;
_Bool no_comma_274;
_Bool no_output_err_275;
_Bool no_output_come_code_276;
void* right_value337;
struct sNode* exp_277;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool quote_278;
_Bool _if_conditional365;
void* right_value338;
void* right_value339;
struct list$1sNodeph* array_num_279;
void* right_value340;
struct sNode* node2_280;
_Bool _if_conditional368;
void* right_value344;
struct sNode* node3_284;
void* right_value345;
void* right_value346;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* right_value351;
struct sNode* __dec_obj157;
_Bool _if_conditional378;
_Bool quote_286;
_Bool _if_conditional379;
_Bool range_287;
void* right_value352;
void* right_value353;
struct list$1sNodeph* array_num_288;
_Bool _while_condtional20;
_Bool range_array2_289;
char* p_290;
int sline_291;
_Bool _if_conditional380;
_Bool no_comma_292;
_Bool no_output_err_293;
_Bool no_output_come_code_294;
void* right_value354;
struct sNode* exp_295;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value355;
struct sNode* node2_296;
_Bool _if_conditional384;
_Bool break_guard_297;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value356;
struct sNode* right_node_298;
void* right_value357;
void* right_value358;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value364;
struct sNode* __dec_obj162;
void* right_value365;
void* right_value366;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value371;
struct sNode* __dec_obj166;
_Bool _if_conditional408;
_Bool no_comma_301;
void* right_value372;
struct sNode* begin_302;
void* right_value373;
struct sNode* end_303;
void* right_value374;
void* right_value375;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value381;
struct sNode* __dec_obj171;
_Bool _if_conditional419;
void* right_value382;
void* right_value383;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value387;
struct sNode* __dec_obj174;
_Bool _if_conditional427;
void* right_value388;
void* right_value389;
struct sNode* _inf_value7;
struct sNullableNode* _inf_obj_value7;
void* right_value393;
struct sNode* __dec_obj177;
_Bool _if_conditional435;
_Bool _if_conditional436;
void* right_value394;
void* right_value395;
void* right_value396;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value400;
struct sNode* __dec_obj180;
void* right_value401;
char* field_name_308;
_Bool parse_method_generics_type_309;
char* p_310;
int sline_311;
_Bool _if_conditional444;
_Bool _if_conditional445;
void* right_value402;
char* word_312;
_Bool _if_conditional446;
_Bool _if_conditional447;
void* right_value403;
struct sNode* right_node_313;
void* right_value404;
void* right_value405;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* right_value411;
struct sNode* __dec_obj185;
_Bool _if_conditional458;
_Bool _if_conditional459;
void* right_value412;
void* right_value413;
struct sNode* __dec_obj186;
_Bool _if_conditional460;
void* right_value414;
void* right_value415;
struct sNode* __dec_obj187;
void* right_value416;
void* right_value417;
struct sNode* __dec_obj188;
void* right_value418;
void* right_value419;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* right_value424;
struct sNode* __dec_obj192;
void* right_value425;
struct sNode* node2_316;
_Bool _if_conditional469;
struct sNode* __dec_obj193;
struct sNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_271, 0, sizeof(_Bool));
memset(&p_272, 0, sizeof(char*));
memset(&sline_273, 0, sizeof(int));
memset(&no_comma_274, 0, sizeof(_Bool));
memset(&no_output_err_275, 0, sizeof(_Bool));
memset(&no_output_come_code_276, 0, sizeof(_Bool));
right_value337 = (void*)0;
memset(&exp_277, 0, sizeof(struct sNode*));
memset(&quote_278, 0, sizeof(_Bool));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&array_num_279, 0, sizeof(struct list$1sNodeph*));
right_value340 = (void*)0;
memset(&node2_280, 0, sizeof(struct sNode*));
right_value344 = (void*)0;
memset(&node3_284, 0, sizeof(struct sNode*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value351 = (void*)0;
memset(&quote_286, 0, sizeof(_Bool));
memset(&range_287, 0, sizeof(_Bool));
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&array_num_288, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_289, 0, sizeof(_Bool));
memset(&p_290, 0, sizeof(char*));
memset(&sline_291, 0, sizeof(int));
memset(&no_comma_292, 0, sizeof(_Bool));
memset(&no_output_err_293, 0, sizeof(_Bool));
memset(&no_output_come_code_294, 0, sizeof(_Bool));
right_value354 = (void*)0;
memset(&exp_295, 0, sizeof(struct sNode*));
right_value355 = (void*)0;
memset(&node2_296, 0, sizeof(struct sNode*));
memset(&break_guard_297, 0, sizeof(_Bool));
right_value356 = (void*)0;
memset(&right_node_298, 0, sizeof(struct sNode*));
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value371 = (void*)0;
memset(&no_comma_301, 0, sizeof(_Bool));
right_value372 = (void*)0;
memset(&begin_302, 0, sizeof(struct sNode*));
right_value373 = (void*)0;
memset(&end_303, 0, sizeof(struct sNode*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
memset(&field_name_308, 0, sizeof(char*));
memset(&parse_method_generics_type_309, 0, sizeof(_Bool));
memset(&p_310, 0, sizeof(char*));
memset(&sline_311, 0, sizeof(int));
right_value402 = (void*)0;
memset(&word_312, 0, sizeof(char*));
right_value403 = (void*)0;
memset(&right_node_313, 0, sizeof(struct sNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&node2_316, 0, sizeof(struct sNode*));
    # 1737 "18field.c"
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        # 1478 "18field.c"
        range_array_271=(_Bool)0;
        # 1507 "18field.c"
        {
            # 1480 "18field.c"
            p_272=info->p;
            # 1481 "18field.c"
            sline_273=info->sline;
            # 1503 "18field.c"
            # 1483 "18field.c"
            if(_if_conditional362=*info->p==91,            _if_conditional362) {
                # 1484 "18field.c"
                info->p++;
                # 1485 "18field.c"
                skip_spaces_and_lf(info);
                # 1487 "18field.c"
                no_comma_274=info->no_comma;
                # 1488 "18field.c"
                no_output_err_275=info->no_output_err;
                # 1489 "18field.c"
                no_output_come_code_276=info->no_output_come_code;
                # 1490 "18field.c"
                info->no_output_err=(_Bool)1;
                # 1491 "18field.c"
                info->no_comma=(_Bool)1;
                # 1492 "18field.c"
                info->no_output_come_code=(_Bool)1;
                # 1493 "18field.c"
                exp_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=expression_v13(info))));
                if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1494 "18field.c"
                info->no_comma=no_comma_274;
                # 1495 "18field.c"
                info->no_output_err=no_output_err_275;
                # 1496 "18field.c"
                info->no_output_come_code=no_output_come_code_276;
                # 1501 "18field.c"
                # 1498 "18field.c"
                if(_if_conditional363=*info->p==46&&*(info->p+1)==46,                _if_conditional363) {
                    # 1499 "18field.c"
                    range_array_271=(_Bool)1;
                }
                if(exp_277) { exp_277 = come_decrement_ref_count2(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1503 "18field.c"
            info->p=p_272;
            # 1504 "18field.c"
            info->sline=sline_273;
        }
        # 1735 "18field.c"
        # 1507 "18field.c"
        if(_if_conditional364=range_array_271&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional364) {
            # 1508 "18field.c"
            quote_278=*info->p==92;
            # 1512 "18field.c"
            # 1509 "18field.c"
            if(quote_278) {
                # 1510 "18field.c"
                info->p++;
            }
            # 1512 "18field.c"
            info->p++;
            # 1513 "18field.c"
            skip_spaces_and_lf(info);
            # 1515 "18field.c"
            array_num_279=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value339=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value338=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1515, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1517 "18field.c"
            skip_pointer_attribute(info);
            # 1519 "18field.c"
            node2_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=expression_v13(info))));
            if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1521 "18field.c"
            list$1sNodeph_push_back(array_num_279,(struct sNode*)come_increment_ref_count(node2_280));
            # 1536 "18field.c"
            # 1523 "18field.c"
            if(_if_conditional368=*info->p==46&&*(info->p+1)==46,            _if_conditional368) {
                # 1524 "18field.c"
                info->p+=2;
                # 1525 "18field.c"
                skip_spaces_and_lf(info);
                # 1527 "18field.c"
                skip_pointer_attribute(info);
                # 1529 "18field.c"
                node3_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=expression_v13(info))));
                if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1531 "18field.c"
                list$1sNodeph_push_back(array_num_279,(struct sNode*)come_increment_ref_count(node3_284));
                # 1533 "18field.c"
                expected_next_character(93,info);
                if(node3_284) { node3_284 = come_decrement_ref_count2(node3_284, ((struct sNode*)node3_284)->finalize, ((struct sNode*)node3_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1536 "18field.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1536, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value346=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value345=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1536, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_279),quote_278,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value2->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value2->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj157=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=_inf_value2)));
            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value351) { right_value351 = come_decrement_ref_count2(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer2(list$1sNodephp_finalize,array_num_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node2_280) { node2_280 = come_decrement_ref_count2(node2_280, ((struct sNode*)node2_280)->finalize, ((struct sNode*)node2_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1735 "18field.c"
            # 1538 "18field.c"
            if(_if_conditional378=!range_array_271&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional378) {
                # 1539 "18field.c"
                quote_286=*info->p==92;
                # 1544 "18field.c"
                # 1540 "18field.c"
                if(quote_286) {
                    # 1541 "18field.c"
                    info->p++;
                }
                # 1544 "18field.c"
                range_287=(_Bool)0;
                # 1545 "18field.c"
                array_num_288=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value353=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value352=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1545, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1603 "18field.c"
                while(_while_condtional20=1,                _while_condtional20) {
                    # 1547 "18field.c"
                    range_array2_289=(_Bool)0;
                    # 1576 "18field.c"
                    {
                        # 1549 "18field.c"
                        p_290=info->p;
                        # 1550 "18field.c"
                        sline_291=info->sline;
                        # 1572 "18field.c"
                        # 1552 "18field.c"
                        if(_if_conditional380=*info->p==91,                        _if_conditional380) {
                            # 1553 "18field.c"
                            info->p++;
                            # 1554 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1556 "18field.c"
                            no_comma_292=info->no_comma;
                            # 1557 "18field.c"
                            no_output_err_293=info->no_output_err;
                            # 1558 "18field.c"
                            no_output_come_code_294=info->no_output_come_code;
                            # 1559 "18field.c"
                            info->no_output_err=(_Bool)1;
                            # 1560 "18field.c"
                            info->no_comma=(_Bool)1;
                            # 1561 "18field.c"
                            info->no_output_come_code=(_Bool)1;
                            # 1562 "18field.c"
                            exp_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=expression_v13(info))));
                            if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1563 "18field.c"
                            info->no_comma=no_comma_292;
                            # 1564 "18field.c"
                            info->no_output_err=no_output_err_293;
                            # 1565 "18field.c"
                            info->no_output_come_code=no_output_come_code_294;
                            # 1570 "18field.c"
                            # 1567 "18field.c"
                            if(_if_conditional381=*info->p==46&&*(info->p+1)==46,                            _if_conditional381) {
                                # 1568 "18field.c"
                                range_array2_289=(_Bool)1;
                            }
                            if(exp_295) { exp_295 = come_decrement_ref_count2(exp_295, ((struct sNode*)exp_295)->finalize, ((struct sNode*)exp_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 1572 "18field.c"
                        info->p=p_290;
                        # 1573 "18field.c"
                        info->sline=sline_291;
                    }
                    # 1601 "18field.c"
                    # 1576 "18field.c"
                    if(range_array2_289) {
                        # 1577 "18field.c"
                        break;
                    }
                    else {
                        # 1601 "18field.c"
                        # 1579 "18field.c"
                        if(_if_conditional383=*info->p==91,                        _if_conditional383) {
                            # 1580 "18field.c"
                            info->p++;
                            # 1581 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1583 "18field.c"
                            skip_pointer_attribute(info);
                            # 1585 "18field.c"
                            node2_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=expression_v13(info))));
                            if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1587 "18field.c"
                            list$1sNodeph_push_back(array_num_288,(struct sNode*)come_increment_ref_count(node2_296));
                            # 1597 "18field.c"
                            # 1589 "18field.c"
                            if(_if_conditional384=*info->p==93,                            _if_conditional384) {
                                # 1590 "18field.c"
                                info->p++;
                                # 1591 "18field.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 1594 "18field.c"
                                err_msg(info,"require ] character");
                                # 1595 "18field.c"
                                exit(2);
                            }
                            if(node2_296) { node2_296 = come_decrement_ref_count2(node2_296, ((struct sNode*)node2_296)->finalize, ((struct sNode*)node2_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 1599 "18field.c"
                            break;
                        }
                    }
                }
                # 1603 "18field.c"
                break_guard_297=(_Bool)0;
                # 1610 "18field.c"
                # 1604 "18field.c"
                if(_if_conditional385=*info->p==63&&*(info->p+1)==63,                _if_conditional385) {
                    # 1605 "18field.c"
                    info->p+=2;
                    # 1606 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1607 "18field.c"
                    break_guard_297=(_Bool)1;
                }
                # 1625 "18field.c"
                # 1610 "18field.c"
                if(_if_conditional386=*info->p==61&&*(info->p+1)!=61,                _if_conditional386) {
                    # 1611 "18field.c"
                    info->p++;
                    # 1612 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1614 "18field.c"
                    parse_sharp_v5(info);
                    # 1616 "18field.c"
                    right_node_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=expression_v13(info))));
                    if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1618 "18field.c"
                    parse_sharp_v5(info);
                    # 1620 "18field.c"
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1620, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(right_value358=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value357=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1620, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_298),(struct list$1sNodeph*)come_increment_ref_count(array_num_288),quote_286,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sStoreArrayNode_sline;
                    _inf_value3->sname=(void*)sStoreArrayNode_sname;
                    _inf_value3->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj162=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=_inf_value3)));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value364) { right_value364 = come_decrement_ref_count2(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_298) { right_node_298 = come_decrement_ref_count2(right_node_298, ((struct sNode*)right_node_298)->finalize, ((struct sNode*)right_node_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1623 "18field.c"
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1623, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(right_value366=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value365=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1623, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_288),quote_286,break_guard_297,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sLoadArrayNode_sline;
                    _inf_value4->sname=(void*)sLoadArrayNode_sname;
                    _inf_value4->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj166=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value4)));
                    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer2(list$1sNodephp_finalize,array_num_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 1735 "18field.c"
                # 1626 "18field.c"
                if(_if_conditional408=*info->p==33&&*(info->p+1)==123,                _if_conditional408) {
                    # 1627 "18field.c"
                    info->p+=2;
                    # 1628 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1630 "18field.c"
                    no_comma_301=info->no_comma;
                    # 1631 "18field.c"
                    info->no_comma=(_Bool)1;
                    # 1632 "18field.c"
                    begin_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=expression_v13(info))));
                    if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1635 "18field.c"
                    info->no_comma=no_comma_301;
                    # 1635 "18field.c"
                    expected_next_character(44,info);
                    # 1637 "18field.c"
                    end_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=expression_v13(info))));
                    if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1639 "18field.c"
                    expected_next_character(125,info);
                    # 1641 "18field.c"
                    parse_sharp_v5(info);
                    # 1643 "18field.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1643, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(right_value375=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value374=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1643, "sRangeCheckNode")))),node,begin_302,end_303,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sRangeCheckNode_sline;
                    _inf_value5->sname=(void*)sRangeCheckNode_sname;
                    _inf_value5->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj171=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=_inf_value5)));
                    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_302) { begin_302 = come_decrement_ref_count2(begin_302, ((struct sNode*)begin_302)->finalize, ((struct sNode*)begin_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_303) { end_303 = come_decrement_ref_count2(end_303, ((struct sNode*)end_303)->finalize, ((struct sNode*)end_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1735 "18field.c"
                    # 1645 "18field.c"
                    if(_if_conditional419=*info->p==33&&*(info->p+1)!=61,                    _if_conditional419) {
                        # 1646 "18field.c"
                        info->p++;
                        # 1647 "18field.c"
                        skip_spaces_and_lf(info);
                        # 1649 "18field.c"
                        parse_sharp_v5(info);
                        # 1651 "18field.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1651, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(right_value383=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value382=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1651, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNullCheckNode_sline;
                        _inf_value6->sname=(void*)sNullCheckNode_sname;
                        _inf_value6->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj174=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=_inf_value6)));
                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer2(sNullCheckNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNullCheckNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        # 1735 "18field.c"
                        # 1653 "18field.c"
                        if(_if_conditional427=*info->p==63&&*(info->p+1)==63,                        _if_conditional427) {
                            # 1654 "18field.c"
                            info->p+=2;
                            # 1655 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1657 "18field.c"
                            parse_sharp_v5(info);
                            # 1659 "18field.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1659, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullableNode*)(right_value389=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value388=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1659, "sNullableNode")))),node,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullableNode_finalize;
                            _inf_value7->clone=(void*)sNullableNode_clone;
                            _inf_value7->compile=(void*)sNullableNode_compile;
                            _inf_value7->sline=(void*)sNullableNode_sline;
                            _inf_value7->sname=(void*)sNullableNode_sname;
                            _inf_value7->terminated=(void*)sNullableNode_terminated;
                            _inf_value7->kind=(void*)sNullableNode_kind;
                            __dec_obj177=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=_inf_value7)));
                            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer2(sNullableNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sNullableNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        else {
                            # 1735 "18field.c"
                            # 1661 "18field.c"
                            if(_if_conditional435=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                            _if_conditional435) {
                                # 1671 "18field.c"
                                # 1662 "18field.c"
                                if(_if_conditional436=*info->p==46,                                _if_conditional436) {
                                    # 1663 "18field.c"
                                    info->p++;
                                    # 1664 "18field.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 1667 "18field.c"
                                    info->p+=2;
                                    # 1668 "18field.c"
                                    skip_spaces_and_lf(info);
                                }
                                # 1671 "18field.c"
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1671, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(right_value396=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value394=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1671, "sNullCheckNode")))),((struct sNode*)(right_value395=sNode_clone(node))),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                                _inf_value8->clone=(void*)sNullCheckNode_clone;
                                _inf_value8->compile=(void*)sNullCheckNode_compile;
                                _inf_value8->sline=(void*)sNullCheckNode_sline;
                                _inf_value8->sname=(void*)sNullCheckNode_sname;
                                _inf_value8->terminated=(void*)sNullCheckNode_terminated;
                                _inf_value8->kind=(void*)sNullCheckNode_kind;
                                __dec_obj180=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=_inf_value8)));
                                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer2(sNullCheckNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                come_call_finalizer2(sNullCheckNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1673 "18field.c"
                                parse_sharp_v5(info);
                                # 1675 "18field.c"
                                field_name_308=(char*)come_increment_ref_count(((char*)(right_value401=parse_word(info))));
                                right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1677 "18field.c"
                                parse_sharp_v5(info);
                                # 1679 "18field.c"
                                parse_method_generics_type_309=(_Bool)0;
                                # 1701 "18field.c"
                                {
                                    # 1681 "18field.c"
                                    p_310=info->p;
                                    # 1682 "18field.c"
                                    sline_311=info->sline;
                                    # 1697 "18field.c"
                                    # 1684 "18field.c"
                                    if(_if_conditional444=*info->p==60,                                    _if_conditional444) {
                                        # 1685 "18field.c"
                                        info->p++;
                                        # 1686 "18field.c"
                                        skip_spaces_and_lf(info);
                                        # 1695 "18field.c"
                                        # 1688 "18field.c"
                                        if(_if_conditional445=xisalpha(*info->p)||*info->p==95,                                        _if_conditional445) {
                                            # 1689 "18field.c"
                                            word_312=(char*)come_increment_ref_count(((char*)(right_value402=parse_word(info))));
                                            right_value402 = come_decrement_ref_count2(right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 1694 "18field.c"
                                            # 1691 "18field.c"
                                            if(_if_conditional446=is_type_name(word_312,info),                                            _if_conditional446) {
                                                # 1692 "18field.c"
                                                parse_method_generics_type_309=(_Bool)1;
                                            }
                                            word_312 = come_decrement_ref_count2(word_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 1697 "18field.c"
                                    info->p=p_310;
                                    # 1698 "18field.c"
                                    info->sline=sline_311;
                                }
                                # 1725 "18field.c"
                                # 1701 "18field.c"
                                if(_if_conditional447=*info->p==61&&*(info->p+1)!=61,                                _if_conditional447) {
                                    # 1702 "18field.c"
                                    info->p++;
                                    # 1703 "18field.c"
                                    skip_spaces_and_lf(info);
                                    # 1705 "18field.c"
                                    parse_sharp_v5(info);
                                    # 1707 "18field.c"
                                    right_node_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=expression_v13(info))));
                                    if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1709 "18field.c"
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1709, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreFieldNode*)(right_value405=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value404=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1709, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_313),(char*)come_increment_ref_count(field_name_308),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                                    _inf_value9->clone=(void*)sStoreFieldNode_clone;
                                    _inf_value9->compile=(void*)sStoreFieldNode_compile;
                                    _inf_value9->sline=(void*)sStoreFieldNode_sline;
                                    _inf_value9->sname=(void*)sStoreFieldNode_sname;
                                    _inf_value9->terminated=(void*)sStoreFieldNode_terminated;
                                    _inf_value9->kind=(void*)sStoreFieldNode_kind;
                                    __dec_obj185=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=_inf_value9)));
                                    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer2(sStoreFieldNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sStoreFieldNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    if(right_node_313) { right_node_313 = come_decrement_ref_count2(right_node_313, ((struct sNode*)right_node_313)->finalize, ((struct sNode*)right_node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1725 "18field.c"
                                    # 1711 "18field.c"
                                    if(_if_conditional458=*info->p==40||*info->p==123||parse_method_generics_type_309||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                    _if_conditional458) {
                                        # 1721 "18field.c"
                                        # 1712 "18field.c"
                                        if(_if_conditional459=string_operator_equals(field_name_308,"if"),                                        _if_conditional459) {
                                            # 1713 "18field.c"
                                            __dec_obj186=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=sNode_clone(node)))),info))));
                                            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            # 1721 "18field.c"
                                            # 1715 "18field.c"
                                            if(_if_conditional460=string_operator_equals(field_name_308,"elif"),                                            _if_conditional460) {
                                                # 1716 "18field.c"
                                                __dec_obj187=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=sNode_clone(node)))),info))));
                                                if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            else {
                                                # 1719 "18field.c"
                                                __dec_obj188=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_308),info))));
                                                if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                        }
                                    }
                                    else {
                                        # 1723 "18field.c"
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1723, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sLoadFieldNode*)(right_value419=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value418=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1723, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_308),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                                        _inf_value10->clone=(void*)sLoadFieldNode_clone;
                                        _inf_value10->compile=(void*)sLoadFieldNode_compile;
                                        _inf_value10->sline=(void*)sLoadFieldNode_sline;
                                        _inf_value10->sname=(void*)sLoadFieldNode_sname;
                                        _inf_value10->terminated=(void*)sLoadFieldNode_terminated;
                                        _inf_value10->kind=(void*)sLoadFieldNode_kind;
                                        __dec_obj192=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value424=_inf_value10)));
                                        if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); }
                                        come_call_finalizer2(sLoadFieldNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sLoadFieldNode_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                }
                                field_name_308 = come_decrement_ref_count2(field_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                # 1727 "18field.c"
                                node2_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                                if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1733 "18field.c"
                                # 1729 "18field.c"
                                if(_if_conditional469=node2_316==((void*)0),                                _if_conditional469) {
                                    # 1730 "18field.c"
                                    if(node2_316) { node2_316 = come_decrement_ref_count2(node2_316, ((struct sNode*)node2_316)->finalize, ((struct sNode*)node2_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    break;
                                }
                                # 1733 "18field.c"
                                __dec_obj193=node;
                                node=(struct sNode*)come_increment_ref_count(node2_316);
                                if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node2_316) { node2_316 = come_decrement_ref_count2(node2_316, ((struct sNode*)node2_316)->finalize, ((struct sNode*)node2_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                        }
                    }
                }
            }
        }
    }
    # 1737 "18field.c"
    __result209__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result209__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional366;
void* right_value341;
struct list_item$1sNodeph* litem_281;
struct sNode* __dec_obj151;
_Bool _if_conditional367;
void* right_value342;
struct list_item$1sNodeph* litem_282;
struct sNode* __dec_obj152;
void* right_value343;
struct list_item$1sNodeph* litem_283;
struct sNode* __dec_obj153;
struct list$1sNodeph* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value341 = (void*)0;
memset(&litem_281, 0, sizeof(struct list_item$1sNodeph*));
right_value342 = (void*)0;
memset(&litem_282, 0, sizeof(struct list_item$1sNodeph*));
right_value343 = (void*)0;
memset(&litem_283, 0, sizeof(struct list_item$1sNodeph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional366=self->len==0,                _if_conditional366) {
                    # 226 "./comelang2.h"
                    litem_281=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value341=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_281->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_281->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj151=litem_281->item;
                    litem_281->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                    # 232 "./comelang2.h"
                    self->tail=litem_281;
                    # 233 "./comelang2.h"
                    self->head=litem_281;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional367=self->len==1,                    _if_conditional367) {
                        # 236 "./comelang2.h"
                        litem_282=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value342=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_282->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_282->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj152=litem_282->item;
                        litem_282->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
                        # 242 "./comelang2.h"
                        self->tail=litem_282;
                        # 243 "./comelang2.h"
                        self->head->next=litem_282;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_283=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value343=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_283->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_283->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj153=litem_283->item;
                        litem_283->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                        # 252 "./comelang2.h"
                        self->tail->next=litem_283;
                        # 253 "./comelang2.h"
                        self->tail=litem_283;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result190__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result190__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sLoadRangeArrayNode_finalize"
                # 0 "sLoadRangeArrayNode_finalize"
                if(_if_conditional369=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional369) {
                    # 0 "sLoadRangeArrayNode_finalize"
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 2 "sLoadRangeArrayNode_finalize"
                # 1 "sLoadRangeArrayNode_finalize"
                if(_if_conditional370=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional370) {
                    # 1 "sLoadRangeArrayNode_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sLoadRangeArrayNode_finalize"
                # 2 "sLoadRangeArrayNode_finalize"
                if(_if_conditional371=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional371) {
                    # 2 "sLoadRangeArrayNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional372;
struct sLoadRangeArrayNode* __result191__;
void* right_value347;
struct sLoadRangeArrayNode* result_285;
_Bool _if_conditional373;
void* right_value348;
struct sNode* __dec_obj154;
_Bool _if_conditional374;
void* right_value349;
struct list$1sNodeph* __dec_obj155;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
void* right_value350;
char* __dec_obj156;
struct sLoadRangeArrayNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value347 = (void*)0;
memset(&result_285, 0, sizeof(struct sLoadRangeArrayNode*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
                # 3 "sLoadRangeArrayNode_clone"
                # 2 "sLoadRangeArrayNode_clone"
                if(_if_conditional372=self==(void*)0,                _if_conditional372) {
                    # 2 "sLoadRangeArrayNode_clone"
                    __result191__ = __result_obj__ = (void*)0;
                    return __result191__;
                }
                # 3 "sLoadRangeArrayNode_clone"
                result_285=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value347=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sLoadRangeArrayNode_clone"
                # 4 "sLoadRangeArrayNode_clone"
                if(_if_conditional373=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional373) {
                    # 4 "sLoadRangeArrayNode_clone"
                    __dec_obj154=result_285->mLeft;
                    result_285->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=sNode_clone(self->mLeft))));
                    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "sLoadRangeArrayNode_clone"
                # 5 "sLoadRangeArrayNode_clone"
                if(_if_conditional374=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional374) {
                    # 5 "sLoadRangeArrayNode_clone"
                    __dec_obj155=result_285->mArrayNum;
                    result_285->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value349=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sLoadRangeArrayNode_clone"
                # 6 "sLoadRangeArrayNode_clone"
                if(_if_conditional375=self!=((void*)0),                _if_conditional375) {
                    # 6 "sLoadRangeArrayNode_clone"
                    result_285->mQuote=self->mQuote;
                }
                # 8 "sLoadRangeArrayNode_clone"
                # 7 "sLoadRangeArrayNode_clone"
                if(_if_conditional376=self!=((void*)0),                _if_conditional376) {
                    # 7 "sLoadRangeArrayNode_clone"
                    result_285->sline=self->sline;
                }
                # 9 "sLoadRangeArrayNode_clone"
                # 8 "sLoadRangeArrayNode_clone"
                if(_if_conditional377=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional377) {
                    # 8 "sLoadRangeArrayNode_clone"
                    __dec_obj156=result_285->sname;
                    result_285->sname=(char*)come_increment_ref_count(((char*)(right_value350=string_clone(self->sname))));
                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 9 "sLoadRangeArrayNode_clone"
                __result192__ = __result_obj__ = result_285;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result192__;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sStoreArrayNode_finalize"
                        # 0 "sStoreArrayNode_finalize"
                        if(_if_conditional387=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional387) {
                            # 0 "sStoreArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sStoreArrayNode_finalize"
                        # 1 "sStoreArrayNode_finalize"
                        if(_if_conditional388=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional388) {
                            # 1 "sStoreArrayNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sStoreArrayNode_finalize"
                        # 2 "sStoreArrayNode_finalize"
                        if(_if_conditional389=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional389) {
                            # 2 "sStoreArrayNode_finalize"
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sStoreArrayNode_finalize"
                        # 3 "sStoreArrayNode_finalize"
                        if(_if_conditional390=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional390) {
                            # 3 "sStoreArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional391;
struct sStoreArrayNode* __result193__;
void* right_value359;
struct sStoreArrayNode* result_299;
_Bool _if_conditional392;
void* right_value360;
struct sNode* __dec_obj158;
_Bool _if_conditional393;
void* right_value361;
struct sNode* __dec_obj159;
_Bool _if_conditional394;
void* right_value362;
struct list$1sNodeph* __dec_obj160;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value363;
char* __dec_obj161;
struct sStoreArrayNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value359 = (void*)0;
memset(&result_299, 0, sizeof(struct sStoreArrayNode*));
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
                        # 3 "sStoreArrayNode_clone"
                        # 2 "sStoreArrayNode_clone"
                        if(_if_conditional391=self==(void*)0,                        _if_conditional391) {
                            # 2 "sStoreArrayNode_clone"
                            __result193__ = __result_obj__ = (void*)0;
                            return __result193__;
                        }
                        # 3 "sStoreArrayNode_clone"
                        result_299=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value359=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer2(sStoreArrayNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sStoreArrayNode_clone"
                        # 4 "sStoreArrayNode_clone"
                        if(_if_conditional392=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional392) {
                            # 4 "sStoreArrayNode_clone"
                            __dec_obj158=result_299->mLeft;
                            result_299->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=sNode_clone(self->mLeft))));
                            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sStoreArrayNode_clone"
                        # 5 "sStoreArrayNode_clone"
                        if(_if_conditional393=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional393) {
                            # 5 "sStoreArrayNode_clone"
                            __dec_obj159=result_299->mRight;
                            result_299->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=sNode_clone(self->mRight))));
                            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sStoreArrayNode_clone"
                        # 6 "sStoreArrayNode_clone"
                        if(_if_conditional394=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional394) {
                            # 6 "sStoreArrayNode_clone"
                            __dec_obj160=result_299->mArrayNum;
                            result_299->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value362=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 8 "sStoreArrayNode_clone"
                        # 7 "sStoreArrayNode_clone"
                        if(_if_conditional395=self!=((void*)0),                        _if_conditional395) {
                            # 7 "sStoreArrayNode_clone"
                            result_299->mQuote=self->mQuote;
                        }
                        # 9 "sStoreArrayNode_clone"
                        # 8 "sStoreArrayNode_clone"
                        if(_if_conditional396=self!=((void*)0),                        _if_conditional396) {
                            # 8 "sStoreArrayNode_clone"
                            result_299->sline=self->sline;
                        }
                        # 10 "sStoreArrayNode_clone"
                        # 9 "sStoreArrayNode_clone"
                        if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional397) {
                            # 9 "sStoreArrayNode_clone"
                            __dec_obj161=result_299->sname;
                            result_299->sname=(char*)come_increment_ref_count(((char*)(right_value363=string_clone(self->sname))));
                            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 10 "sStoreArrayNode_clone"
                        __result194__ = __result_obj__ = result_299;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result194__;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sLoadArrayNode_finalize"
                        # 0 "sLoadArrayNode_finalize"
                        if(_if_conditional398=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional398) {
                            # 0 "sLoadArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sLoadArrayNode_finalize"
                        # 1 "sLoadArrayNode_finalize"
                        if(_if_conditional399=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional399) {
                            # 1 "sLoadArrayNode_finalize"
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sLoadArrayNode_finalize"
                        # 2 "sLoadArrayNode_finalize"
                        if(_if_conditional400=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional400) {
                            # 2 "sLoadArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional401;
struct sLoadArrayNode* __result195__;
void* right_value367;
struct sLoadArrayNode* result_300;
_Bool _if_conditional402;
void* right_value368;
struct sNode* __dec_obj163;
_Bool _if_conditional403;
void* right_value369;
struct list$1sNodeph* __dec_obj164;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value370;
char* __dec_obj165;
struct sLoadArrayNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value367 = (void*)0;
memset(&result_300, 0, sizeof(struct sLoadArrayNode*));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
                        # 3 "sLoadArrayNode_clone"
                        # 2 "sLoadArrayNode_clone"
                        if(_if_conditional401=self==(void*)0,                        _if_conditional401) {
                            # 2 "sLoadArrayNode_clone"
                            __result195__ = __result_obj__ = (void*)0;
                            return __result195__;
                        }
                        # 3 "sLoadArrayNode_clone"
                        result_300=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value367=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer2(sLoadArrayNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sLoadArrayNode_clone"
                        # 4 "sLoadArrayNode_clone"
                        if(_if_conditional402=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional402) {
                            # 4 "sLoadArrayNode_clone"
                            __dec_obj163=result_300->mLeft;
                            result_300->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=sNode_clone(self->mLeft))));
                            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sLoadArrayNode_clone"
                        # 5 "sLoadArrayNode_clone"
                        if(_if_conditional403=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional403) {
                            # 5 "sLoadArrayNode_clone"
                            __dec_obj164=result_300->mArrayNum;
                            result_300->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value369=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sLoadArrayNode_clone"
                        # 6 "sLoadArrayNode_clone"
                        if(_if_conditional404=self!=((void*)0),                        _if_conditional404) {
                            # 6 "sLoadArrayNode_clone"
                            result_300->mQuote=self->mQuote;
                        }
                        # 8 "sLoadArrayNode_clone"
                        # 7 "sLoadArrayNode_clone"
                        if(_if_conditional405=self!=((void*)0),                        _if_conditional405) {
                            # 7 "sLoadArrayNode_clone"
                            result_300->mBreakGuard=self->mBreakGuard;
                        }
                        # 9 "sLoadArrayNode_clone"
                        # 8 "sLoadArrayNode_clone"
                        if(_if_conditional406=self!=((void*)0),                        _if_conditional406) {
                            # 8 "sLoadArrayNode_clone"
                            result_300->sline=self->sline;
                        }
                        # 10 "sLoadArrayNode_clone"
                        # 9 "sLoadArrayNode_clone"
                        if(_if_conditional407=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional407) {
                            # 9 "sLoadArrayNode_clone"
                            __dec_obj165=result_300->sname;
                            result_300->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(self->sname))));
                            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 10 "sLoadArrayNode_clone"
                        __result196__ = __result_obj__ = result_300;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_300, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result196__;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool _if_conditional412;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sRangeCheckNode_finalize"
                        # 0 "sRangeCheckNode_finalize"
                        if(_if_conditional409=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional409) {
                            # 0 "sRangeCheckNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sRangeCheckNode_finalize"
                        # 1 "sRangeCheckNode_finalize"
                        if(_if_conditional410=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional410) {
                            # 1 "sRangeCheckNode_finalize"
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sRangeCheckNode_finalize"
                        # 2 "sRangeCheckNode_finalize"
                        if(_if_conditional411=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional411) {
                            # 2 "sRangeCheckNode_finalize"
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 4 "sRangeCheckNode_finalize"
                        # 3 "sRangeCheckNode_finalize"
                        if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional412) {
                            # 3 "sRangeCheckNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional413;
struct sRangeCheckNode* __result197__;
void* right_value376;
struct sRangeCheckNode* result_304;
_Bool _if_conditional414;
void* right_value377;
struct sNode* __dec_obj167;
_Bool _if_conditional415;
void* right_value378;
struct sNode* __dec_obj168;
_Bool _if_conditional416;
void* right_value379;
struct sNode* __dec_obj169;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value380;
char* __dec_obj170;
struct sRangeCheckNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value376 = (void*)0;
memset(&result_304, 0, sizeof(struct sRangeCheckNode*));
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
                        # 3 "sRangeCheckNode_clone"
                        # 2 "sRangeCheckNode_clone"
                        if(_if_conditional413=self==(void*)0,                        _if_conditional413) {
                            # 2 "sRangeCheckNode_clone"
                            __result197__ = __result_obj__ = (void*)0;
                            return __result197__;
                        }
                        # 3 "sRangeCheckNode_clone"
                        result_304=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value376=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer2(sRangeCheckNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sRangeCheckNode_clone"
                        # 4 "sRangeCheckNode_clone"
                        if(_if_conditional414=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional414) {
                            # 4 "sRangeCheckNode_clone"
                            __dec_obj167=result_304->mLeft;
                            result_304->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=sNode_clone(self->mLeft))));
                            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sRangeCheckNode_clone"
                        # 5 "sRangeCheckNode_clone"
                        if(_if_conditional415=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional415) {
                            # 5 "sRangeCheckNode_clone"
                            __dec_obj168=result_304->mBegin;
                            result_304->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=sNode_clone(self->mBegin))));
                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sRangeCheckNode_clone"
                        # 6 "sRangeCheckNode_clone"
                        if(_if_conditional416=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional416) {
                            # 6 "sRangeCheckNode_clone"
                            __dec_obj169=result_304->mEnd;
                            result_304->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=sNode_clone(self->mEnd))));
                            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sRangeCheckNode_clone"
                        # 7 "sRangeCheckNode_clone"
                        if(_if_conditional417=self!=((void*)0),                        _if_conditional417) {
                            # 7 "sRangeCheckNode_clone"
                            result_304->sline=self->sline;
                        }
                        # 9 "sRangeCheckNode_clone"
                        # 8 "sRangeCheckNode_clone"
                        if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional418) {
                            # 8 "sRangeCheckNode_clone"
                            __dec_obj170=result_304->sname;
                            result_304->sname=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(self->sname))));
                            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 9 "sRangeCheckNode_clone"
                        __result198__ = __result_obj__ = result_304;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result198__;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNullableNode_finalize(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional428;
_Bool _if_conditional429;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sNullableNode_finalize"
                                # 0 "sNullableNode_finalize"
                                if(_if_conditional428=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional428) {
                                    # 0 "sNullableNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 2 "sNullableNode_finalize"
                                # 1 "sNullableNode_finalize"
                                if(_if_conditional429=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional429) {
                                    # 1 "sNullableNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional430;
struct sNullableNode* __result201__;
void* right_value390;
struct sNullableNode* result_306;
_Bool _if_conditional431;
void* right_value391;
struct sNode* __dec_obj175;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value392;
char* __dec_obj176;
struct sNullableNode* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&result_306, 0, sizeof(struct sNullableNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
                                # 3 "sNullableNode_clone"
                                # 2 "sNullableNode_clone"
                                if(_if_conditional430=self==(void*)0,                                _if_conditional430) {
                                    # 2 "sNullableNode_clone"
                                    __result201__ = __result_obj__ = (void*)0;
                                    return __result201__;
                                }
                                # 3 "sNullableNode_clone"
                                result_306=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value390=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"))));
                                come_call_finalizer2(sNullableNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sNullableNode_clone"
                                # 4 "sNullableNode_clone"
                                if(_if_conditional431=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional431) {
                                    # 4 "sNullableNode_clone"
                                    __dec_obj175=result_306->mLeft;
                                    result_306->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=sNode_clone(self->mLeft))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 6 "sNullableNode_clone"
                                # 5 "sNullableNode_clone"
                                if(_if_conditional432=self!=((void*)0),                                _if_conditional432) {
                                    # 5 "sNullableNode_clone"
                                    result_306->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                # 7 "sNullableNode_clone"
                                # 6 "sNullableNode_clone"
                                if(_if_conditional433=self!=((void*)0),                                _if_conditional433) {
                                    # 6 "sNullableNode_clone"
                                    result_306->sline=self->sline;
                                }
                                # 8 "sNullableNode_clone"
                                # 7 "sNullableNode_clone"
                                if(_if_conditional434=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional434) {
                                    # 7 "sNullableNode_clone"
                                    __dec_obj176=result_306->sname;
                                    result_306->sname=(char*)come_increment_ref_count(((char*)(right_value392=string_clone(self->sname))));
                                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 8 "sNullableNode_clone"
                                __result202__ = __result_obj__ = result_306;
                                come_call_finalizer2(sNullableNode_finalize,result_306, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result202__;
                                come_call_finalizer2(sNullableNode_finalize,result_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional437;
_Bool _if_conditional438;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sNullCheckNode_finalize"
                                    # 0 "sNullCheckNode_finalize"
                                    if(_if_conditional437=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional437) {
                                        # 0 "sNullCheckNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 2 "sNullCheckNode_finalize"
                                    # 1 "sNullCheckNode_finalize"
                                    if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional438) {
                                        # 1 "sNullCheckNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional439;
struct sNullCheckNode* __result203__;
void* right_value397;
struct sNullCheckNode* result_307;
_Bool _if_conditional440;
void* right_value398;
struct sNode* __dec_obj178;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
void* right_value399;
char* __dec_obj179;
struct sNullCheckNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value397 = (void*)0;
memset(&result_307, 0, sizeof(struct sNullCheckNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
                                    # 3 "sNullCheckNode_clone"
                                    # 2 "sNullCheckNode_clone"
                                    if(_if_conditional439=self==(void*)0,                                    _if_conditional439) {
                                        # 2 "sNullCheckNode_clone"
                                        __result203__ = __result_obj__ = (void*)0;
                                        return __result203__;
                                    }
                                    # 3 "sNullCheckNode_clone"
                                    result_307=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value397=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                    come_call_finalizer2(sNullCheckNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sNullCheckNode_clone"
                                    # 4 "sNullCheckNode_clone"
                                    if(_if_conditional440=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional440) {
                                        # 4 "sNullCheckNode_clone"
                                        __dec_obj178=result_307->mLeft;
                                        result_307->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(self->mLeft))));
                                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 6 "sNullCheckNode_clone"
                                    # 5 "sNullCheckNode_clone"
                                    if(_if_conditional441=self!=((void*)0),                                    _if_conditional441) {
                                        # 5 "sNullCheckNode_clone"
                                        result_307->mOnlyNullCecker=self->mOnlyNullCecker;
                                    }
                                    # 7 "sNullCheckNode_clone"
                                    # 6 "sNullCheckNode_clone"
                                    if(_if_conditional442=self!=((void*)0),                                    _if_conditional442) {
                                        # 6 "sNullCheckNode_clone"
                                        result_307->sline=self->sline;
                                    }
                                    # 8 "sNullCheckNode_clone"
                                    # 7 "sNullCheckNode_clone"
                                    if(_if_conditional443=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional443) {
                                        # 7 "sNullCheckNode_clone"
                                        __dec_obj179=result_307->sname;
                                        result_307->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(self->sname))));
                                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sNullCheckNode_clone"
                                    __result204__ = __result_obj__ = result_307;
                                    come_call_finalizer2(sNullCheckNode_finalize,result_307, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result204__;
                                    come_call_finalizer2(sNullCheckNode_finalize,result_307, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sStoreFieldNode_finalize"
                                        # 0 "sStoreFieldNode_finalize"
                                        if(_if_conditional448=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional448) {
                                            # 0 "sStoreFieldNode_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 2 "sStoreFieldNode_finalize"
                                        # 1 "sStoreFieldNode_finalize"
                                        if(_if_conditional449=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional449) {
                                            # 1 "sStoreFieldNode_finalize"
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sStoreFieldNode_finalize"
                                        # 2 "sStoreFieldNode_finalize"
                                        if(_if_conditional450=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional450) {
                                            # 2 "sStoreFieldNode_finalize"
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 4 "sStoreFieldNode_finalize"
                                        # 3 "sStoreFieldNode_finalize"
                                        if(_if_conditional451=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional451) {
                                            # 3 "sStoreFieldNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional452;
struct sStoreFieldNode* __result205__;
void* right_value406;
struct sStoreFieldNode* result_314;
_Bool _if_conditional453;
void* right_value407;
struct sNode* __dec_obj181;
_Bool _if_conditional454;
void* right_value408;
struct sNode* __dec_obj182;
_Bool _if_conditional455;
void* right_value409;
char* __dec_obj183;
_Bool _if_conditional456;
_Bool _if_conditional457;
void* right_value410;
char* __dec_obj184;
struct sStoreFieldNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value406 = (void*)0;
memset(&result_314, 0, sizeof(struct sStoreFieldNode*));
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
                                        # 3 "sStoreFieldNode_clone"
                                        # 2 "sStoreFieldNode_clone"
                                        if(_if_conditional452=self==(void*)0,                                        _if_conditional452) {
                                            # 2 "sStoreFieldNode_clone"
                                            __result205__ = __result_obj__ = (void*)0;
                                            return __result205__;
                                        }
                                        # 3 "sStoreFieldNode_clone"
                                        result_314=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value406=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                        come_call_finalizer2(sStoreFieldNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sStoreFieldNode_clone"
                                        # 4 "sStoreFieldNode_clone"
                                        if(_if_conditional453=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional453) {
                                            # 4 "sStoreFieldNode_clone"
                                            __dec_obj181=result_314->mLeft;
                                            result_314->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(self->mLeft))));
                                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 6 "sStoreFieldNode_clone"
                                        # 5 "sStoreFieldNode_clone"
                                        if(_if_conditional454=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional454) {
                                            # 5 "sStoreFieldNode_clone"
                                            __dec_obj182=result_314->mRight;
                                            result_314->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=sNode_clone(self->mRight))));
                                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 7 "sStoreFieldNode_clone"
                                        # 6 "sStoreFieldNode_clone"
                                        if(_if_conditional455=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional455) {
                                            # 6 "sStoreFieldNode_clone"
                                            __dec_obj183=result_314->mName;
                                            result_314->mName=(char*)come_increment_ref_count(((char*)(right_value409=string_clone(self->mName))));
                                            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 8 "sStoreFieldNode_clone"
                                        # 7 "sStoreFieldNode_clone"
                                        if(_if_conditional456=self!=((void*)0),                                        _if_conditional456) {
                                            # 7 "sStoreFieldNode_clone"
                                            result_314->sline=self->sline;
                                        }
                                        # 9 "sStoreFieldNode_clone"
                                        # 8 "sStoreFieldNode_clone"
                                        if(_if_conditional457=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional457) {
                                            # 8 "sStoreFieldNode_clone"
                                            __dec_obj184=result_314->sname;
                                            result_314->sname=(char*)come_increment_ref_count(((char*)(right_value410=string_clone(self->sname))));
                                            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sStoreFieldNode_clone"
                                        __result206__ = __result_obj__ = result_314;
                                        come_call_finalizer2(sStoreFieldNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result206__;
                                        come_call_finalizer2(sStoreFieldNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional461;
_Bool _if_conditional462;
_Bool _if_conditional463;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sLoadFieldNode_finalize"
                                            # 0 "sLoadFieldNode_finalize"
                                            if(_if_conditional461=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional461) {
                                                # 0 "sLoadFieldNode_finalize"
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 2 "sLoadFieldNode_finalize"
                                            # 1 "sLoadFieldNode_finalize"
                                            if(_if_conditional462=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional462) {
                                                # 1 "sLoadFieldNode_finalize"
                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 3 "sLoadFieldNode_finalize"
                                            # 2 "sLoadFieldNode_finalize"
                                            if(_if_conditional463=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional463) {
                                                # 2 "sLoadFieldNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional464;
struct sLoadFieldNode* __result207__;
void* right_value420;
struct sLoadFieldNode* result_315;
_Bool _if_conditional465;
void* right_value421;
struct sNode* __dec_obj189;
_Bool _if_conditional466;
void* right_value422;
char* __dec_obj190;
_Bool _if_conditional467;
_Bool _if_conditional468;
void* right_value423;
char* __dec_obj191;
struct sLoadFieldNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value420 = (void*)0;
memset(&result_315, 0, sizeof(struct sLoadFieldNode*));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
                                            # 3 "sLoadFieldNode_clone"
                                            # 2 "sLoadFieldNode_clone"
                                            if(_if_conditional464=self==(void*)0,                                            _if_conditional464) {
                                                # 2 "sLoadFieldNode_clone"
                                                __result207__ = __result_obj__ = (void*)0;
                                                return __result207__;
                                            }
                                            # 3 "sLoadFieldNode_clone"
                                            result_315=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value420=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                            come_call_finalizer2(sLoadFieldNode_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sLoadFieldNode_clone"
                                            # 4 "sLoadFieldNode_clone"
                                            if(_if_conditional465=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional465) {
                                                # 4 "sLoadFieldNode_clone"
                                                __dec_obj189=result_315->mLeft;
                                                result_315->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=sNode_clone(self->mLeft))));
                                                if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 6 "sLoadFieldNode_clone"
                                            # 5 "sLoadFieldNode_clone"
                                            if(_if_conditional466=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional466) {
                                                # 5 "sLoadFieldNode_clone"
                                                __dec_obj190=result_315->mName;
                                                result_315->mName=(char*)come_increment_ref_count(((char*)(right_value422=string_clone(self->mName))));
                                                __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sLoadFieldNode_clone"
                                            # 6 "sLoadFieldNode_clone"
                                            if(_if_conditional467=self!=((void*)0),                                            _if_conditional467) {
                                                # 6 "sLoadFieldNode_clone"
                                                result_315->sline=self->sline;
                                            }
                                            # 8 "sLoadFieldNode_clone"
                                            # 7 "sLoadFieldNode_clone"
                                            if(_if_conditional468=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional468) {
                                                # 7 "sLoadFieldNode_clone"
                                                __dec_obj191=result_315->sname;
                                                result_315->sname=(char*)come_increment_ref_count(((char*)(right_value423=string_clone(self->sname))));
                                                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 8 "sLoadFieldNode_clone"
                                            __result208__ = __result_obj__ = result_315;
                                            come_call_finalizer2(sLoadFieldNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result208__;
                                            come_call_finalizer2(sLoadFieldNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

