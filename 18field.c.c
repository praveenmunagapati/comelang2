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

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value179;
char* __dec_obj83;
void* right_value180;
struct sNode* __dec_obj84;
void* right_value181;
struct sNode* __dec_obj85;
void* right_value182;
struct sNode* __dec_obj86;
struct sRangeCheckNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
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
    # 495 "18field.c"
    __dec_obj85=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value181=sNode_clone(begin))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value181) { right_value181 = come_decrement_ref_count2(right_value181, ((struct sNode*)right_value181)->finalize, ((struct sNode*)right_value181)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 496 "18field.c"
    __dec_obj86=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=sNode_clone(end))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 498 "18field.c"
    __result106__ = __result_obj__ = self;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sRangeCheckNode_terminated(){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    # 503 "18field.c"
    __result107__ = (_Bool)0;
    return __result107__;
}

char* sRangeCheckNode_kind(){
void* __result_obj__;
void* right_value183;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    # 508 "18field.c"
    __result108__ = __result_obj__ = ((char*)(right_value183=__builtin_string("sRangeCheckNode")));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_119;
_Bool _if_conditional215;
_Bool __result109__;
void* right_value184;
struct CVALUE* left_value_120;
struct sNode* begin_121;
_Bool _if_conditional216;
_Bool __result110__;
void* right_value185;
struct CVALUE* begin_value_122;
struct sNode* end_123;
_Bool _if_conditional217;
_Bool __result111__;
void* right_value186;
struct CVALUE* end_value_124;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value187;
struct CVALUE* come_value_125;
void* right_value188;
void* right_value189;
char* __dec_obj87;
void* right_value190;
struct sType* __dec_obj88;
void* right_value191;
struct CVALUE* come_value_126;
void* right_value192;
void* right_value193;
char* __dec_obj89;
void* right_value194;
struct sType* __dec_obj90;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_119, 0, sizeof(struct sNode*));
right_value184 = (void*)0;
memset(&left_value_120, 0, sizeof(struct CVALUE*));
memset(&begin_121, 0, sizeof(struct sNode*));
right_value185 = (void*)0;
memset(&begin_value_122, 0, sizeof(struct CVALUE*));
memset(&end_123, 0, sizeof(struct sNode*));
right_value186 = (void*)0;
memset(&end_value_124, 0, sizeof(struct CVALUE*));
right_value187 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&come_value_126, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
    # 513 "18field.c"
    left_119=self->mLeft;
    # 519 "18field.c"
    # 515 "18field.c"
    if(_if_conditional215=!node_compile(left_119,info),    _if_conditional215) {
        # 516 "18field.c"
        __result109__ = (_Bool)0;
        return __result109__;
    }
    # 519 "18field.c"
    left_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 520 "18field.c"
    dec_stack_ptr(1,info);
    # 522 "18field.c"
    begin_121=self->mBegin;
    # 528 "18field.c"
    # 524 "18field.c"
    if(_if_conditional216=!node_compile(begin_121,info),    _if_conditional216) {
        # 525 "18field.c"
        __result110__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result110__;
    }
    # 528 "18field.c"
    begin_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 529 "18field.c"
    dec_stack_ptr(1,info);
    # 531 "18field.c"
    end_123=self->mEnd;
    # 537 "18field.c"
    # 533 "18field.c"
    if(_if_conditional217=!node_compile(end_123,info),    _if_conditional217) {
        # 534 "18field.c"
        __result111__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,begin_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result111__;
    }
    # 537 "18field.c"
    end_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 538 "18field.c"
    dec_stack_ptr(1,info);
    # 571 "18field.c"
    # 540 "18field.c"
    if(_if_conditional218=left_value_120->type->mPointerNum>0,    _if_conditional218) {
        # 566 "18field.c"
        # 541 "18field.c"
        if(_if_conditional219=!gComeDebug,        _if_conditional219) {
            # 542 "18field.c"
            come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 542, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 544 "18field.c"
            __dec_obj87=come_value_125->c_value;
            come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("(*((%s)%s))",((char*)(right_value188=make_type_name_string(left_value_120->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_120->c_value))));
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 546 "18field.c"
            left_value_120->type->mPointerNum--;
            # 547 "18field.c"
            __dec_obj88=come_value_125->type;
            come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(left_value_120->type))));
            come_call_finalizer2(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 548 "18field.c"
            come_value_125->var=((void*)0);
            # 550 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
            # 552 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_125->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 555 "18field.c"
            come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 555, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 557 "18field.c"
            __dec_obj89=come_value_126->c_value;
            come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value192=make_type_name_string(left_value_120->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_120->c_value,begin_value_122->c_value,end_value_124->c_value,info->sname,info->sline))));
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 558 "18field.c"
            left_value_120->type->mPointerNum--;
            # 559 "18field.c"
            __dec_obj90=come_value_126->type;
            come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(left_value_120->type))));
            come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 560 "18field.c"
            come_value_126->var=((void*)0);
            # 562 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
            # 564 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_126->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        # 568 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_120));
    }
    # 571 "18field.c"
    __result112__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 576 "18field.c"
    __result113__ = self->sline;
    return __result113__;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value195;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    # 581 "18field.c"
    __result114__ = __result_obj__ = ((char*)(right_value195=__builtin_string(self->sname)));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value196;
void* right_value197;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value203;
struct sNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value203 = (void*)0;
    # 586 "18field.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 586, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value197=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value196=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 586, "sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result117__ = __result_obj__ = ((struct sNode*)(right_value203=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value203) { right_value203 = come_decrement_ref_count2(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result117__;
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value204;
char* __dec_obj95;
void* right_value205;
struct sNode* __dec_obj96;
void* right_value206;
char* __dec_obj97;
struct sLoadFieldNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
    # 600 "18field.c"
    self->sline=info->sline;
    # 601 "18field.c"
    __dec_obj95=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(info->sname))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 603 "18field.c"
    __dec_obj96=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(left))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 604 "18field.c"
    __dec_obj97=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(name))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 606 "18field.c"
    __result118__ = __result_obj__ = self;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result118__;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    # 611 "18field.c"
    __result119__ = (_Bool)0;
    return __result119__;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
void* right_value207;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    # 616 "18field.c"
    __result120__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sLoadFieldNode")));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_128;
void* right_value208;
char* name_129;
_Bool _if_conditional233;
_Bool __result121__;
void* right_value209;
struct CVALUE* left_value_130;
_Bool _if_conditional234;
void* right_value210;
void* right_value211;
char* __dec_obj98;
struct sType* left_type_131;
void* right_value212;
struct sType* left_type2_132;
struct sClass* klass_133;
struct sType* field_type_134;
int index_135;
char* child_field_name_136;
_Bool _if_conditional235;
_Bool __result122__;
struct list$1tuple2$2charphsTypephph* o2_saved_137;
struct tuple2$2charphsTypeph* field_138;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_139;
struct sType* field_type2_140;
_Bool _if_conditional236;
void* right_value213;
struct sType* __dec_obj99;
_Bool _if_conditional237;
struct list$1tuple2$2charphsTypephph* o2_saved_141;
struct tuple2$2charphsTypeph* field_142;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_143;
struct sType* field_type2_144;
struct sClass* klass2_145;
struct list$1tuple2$2charphsTypephph* o2_saved_146;
struct tuple2$2charphsTypeph* field2_147;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_148;
struct sType* field_type3_149;
_Bool _if_conditional238;
void* right_value214;
char* __dec_obj100;
void* right_value215;
struct sType* __dec_obj101;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value216;
struct sType* __dec_obj102;
_Bool _if_conditional241;
_Bool __result123__;
void* right_value217;
struct CVALUE* come_value_150;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value218;
char* __dec_obj103;
void* right_value219;
char* __dec_obj104;
_Bool _if_conditional244;
void* right_value220;
char* __dec_obj105;
void* right_value221;
char* __dec_obj106;
void* right_value222;
struct sType* __dec_obj107;
_Bool _if_conditional245;
_Bool __result124__;
_Bool _if_conditional247;
void* right_value223;
struct sType* __dec_obj108;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_128, 0, sizeof(struct sNode*));
right_value208 = (void*)0;
memset(&name_129, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&left_value_130, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&left_type_131, 0, sizeof(struct sType*));
right_value212 = (void*)0;
memset(&left_type2_132, 0, sizeof(struct sType*));
memset(&klass_133, 0, sizeof(struct sClass*));
memset(&field_type_134, 0, sizeof(struct sType*));
memset(&index_135, 0, sizeof(int));
memset(&child_field_name_136, 0, sizeof(char*));
memset(&o2_saved_137, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_138, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_139, 0, sizeof(char*));
memset(&field_type2_140, 0, sizeof(struct sType*));
memset(&field_name_139, 0, sizeof(char*));
memset(&field_type2_140, 0, sizeof(struct sType*));
right_value213 = (void*)0;
memset(&o2_saved_141, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_142, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_143, 0, sizeof(char*));
memset(&field_type2_144, 0, sizeof(struct sType*));
memset(&field_name_143, 0, sizeof(char*));
memset(&field_type2_144, 0, sizeof(struct sType*));
memset(&klass2_145, 0, sizeof(struct sClass*));
memset(&o2_saved_146, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_147, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_148, 0, sizeof(char*));
memset(&field_type3_149, 0, sizeof(struct sType*));
memset(&field_name2_148, 0, sizeof(char*));
memset(&field_type3_149, 0, sizeof(struct sType*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&come_value_150, 0, sizeof(struct CVALUE*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
    # 621 "18field.c"
    left_128=self->mLeft;
    # 622 "18field.c"
    name_129=(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string(self->mName))));
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 628 "18field.c"
    # 624 "18field.c"
    if(_if_conditional233=!node_compile(left_128,info),    _if_conditional233) {
        # 625 "18field.c"
        __result121__ = (_Bool)0;
        name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result121__;
    }
    # 628 "18field.c"
    left_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 629 "18field.c"
    dec_stack_ptr(1,info);
    # 635 "18field.c"
    # 631 "18field.c"
    if(_if_conditional234=gComeDebug&&left_value_130->type->mPointerNum>0,    _if_conditional234) {
        # 632 "18field.c"
        __dec_obj98=left_value_130->c_value;
        left_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value210=make_type_name_string(left_value_130->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_130->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 635 "18field.c"
    left_type_131=left_value_130->type;
    # 637 "18field.c"
    left_type2_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=solve_generics(left_type_131,left_type_131,info))));
    come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 639 "18field.c"
    klass_133=left_type2_132->mClass;
    # 640 "18field.c"
    klass_133=map$2charphsClassphp_operator_load_element(info->classes,klass_133->mName);
    # 642 "18field.c"
    field_type_134=((void*)0);
    # 643 "18field.c"
    index_135=0;
    # 644 "18field.c"
    child_field_name_136=((void*)0);
    # 645 "18field.c"
    klass_133=map$2charphsClassphp_operator_load_element(info->classes,klass_133->mName);
    # 650 "18field.c"
    # 646 "18field.c"
    if(_if_conditional235=klass_133==((void*)0)||klass_133->mFields==((void*)0),    _if_conditional235) {
        # 647 "18field.c"
        err_msg(info,"invalid class %s",klass_133->mName);
        # 648 "18field.c"
        __result122__ = (_Bool)0;
        name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_136 = come_decrement_ref_count2(child_field_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result122__;
    }
    # 661 "18field.c"
    for(    o2_saved_137=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_133->mFields)),field_138=list$1tuple2$2charphsTypephph_begin((o2_saved_137));    !list$1tuple2$2charphsTypephph_end((o2_saved_137));    field_138=list$1tuple2$2charphsTypephph_next((o2_saved_137))    ){
        # 651 "18field.c"
        multiple_assign_var4=field_138;
        field_name_139=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_140=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        # 658 "18field.c"
        # 653 "18field.c"
        if(_if_conditional236=string_operator_equals(field_name_139,name_129),        _if_conditional236) {
            # 654 "18field.c"
            __dec_obj99=field_type_134;
            field_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(field_type2_140))));
            come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 655 "18field.c"
            field_name_139 = come_decrement_ref_count2(field_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        # 658 "18field.c"
        index_135++;
        field_name_139 = come_decrement_ref_count2(field_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type2_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 696 "18field.c"
    # 661 "18field.c"
    if(_if_conditional237=index_135==list$1tuple2$2charphsTypephph_length(klass_133->mFields),    _if_conditional237) {
        # 662 "18field.c"
        index_135=0;
        # 690 "18field.c"
        for(        o2_saved_141=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_133->mFields)),field_142=list$1tuple2$2charphsTypephph_begin((o2_saved_141));        !list$1tuple2$2charphsTypephph_end((o2_saved_141));        field_142=list$1tuple2$2charphsTypephph_next((o2_saved_141))        ){
            # 664 "18field.c"
            multiple_assign_var5=field_142;
            field_name_143=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_144=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            # 666 "18field.c"
            klass2_145=field_type2_144->mClass;
            # 678 "18field.c"
            for(            o2_saved_146=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_145->mFields)),field2_147=list$1tuple2$2charphsTypephph_begin((o2_saved_146));            !list$1tuple2$2charphsTypephph_end((o2_saved_146));            field2_147=list$1tuple2$2charphsTypephph_next((o2_saved_146))            ){
                # 669 "18field.c"
                multiple_assign_var6=field2_147;
                field_name2_148=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_149=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                # 676 "18field.c"
                # 671 "18field.c"
                if(_if_conditional238=string_operator_equals(field_name2_148,name_129),                _if_conditional238) {
                    # 672 "18field.c"
                    __dec_obj100=child_field_name_136;
                    child_field_name_136=(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string(field_name_143))));
                    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 673 "18field.c"
                    __dec_obj101=field_type_134;
                    field_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(field_type3_149))));
                    come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 674 "18field.c"
                    field_name2_148 = come_decrement_ref_count2(field_name2_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type3_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_148 = come_decrement_ref_count2(field_name2_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type3_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 682 "18field.c"
            # 678 "18field.c"
            if(child_field_name_136) {
                # 679 "18field.c"
                field_name_143 = come_decrement_ref_count2(field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 687 "18field.c"
            # 682 "18field.c"
            if(_if_conditional240=string_operator_equals(field_name_143,name_129),            _if_conditional240) {
                # 683 "18field.c"
                __dec_obj102=field_type_134;
                field_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(field_type2_144))));
                come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 684 "18field.c"
                field_name_143 = come_decrement_ref_count2(field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 687 "18field.c"
            index_135++;
            field_name_143 = come_decrement_ref_count2(field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 694 "18field.c"
        # 690 "18field.c"
        if(_if_conditional241=index_135==list$1tuple2$2charphsTypephph_length(klass_133->mFields),        _if_conditional241) {
            # 691 "18field.c"
            err_msg(info,"field not found(%s) in %s(2)",name_129,klass_133->mName);
            # 692 "18field.c"
            __result123__ = (_Bool)0;
            name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            child_field_name_136 = come_decrement_ref_count2(child_field_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result123__;
        }
    }
    # 696 "18field.c"
    come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 696, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 714 "18field.c"
    # 698 "18field.c"
    if(_if_conditional242=left_value_130->type->mPointerNum>0,    _if_conditional242) {
        # 705 "18field.c"
        # 699 "18field.c"
        if(child_field_name_136) {
            # 700 "18field.c"
            __dec_obj103=come_value_150->c_value;
            come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s->%s.%s",left_value_130->c_value,child_field_name_136,name_129))));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 703 "18field.c"
            __dec_obj104=come_value_150->c_value;
            come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s->%s",left_value_130->c_value,name_129))));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        # 713 "18field.c"
        # 707 "18field.c"
        if(child_field_name_136) {
            # 708 "18field.c"
            __dec_obj105=come_value_150->c_value;
            come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("%s.%s.%s",left_value_130->c_value,child_field_name_136,name_129))));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 711 "18field.c"
            __dec_obj106=come_value_150->c_value;
            come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("%s.%s",left_value_130->c_value,name_129))));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 714 "18field.c"
    __dec_obj107=come_value_150->type;
    come_value_150->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(field_type_134))));
    come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 715 "18field.c"
    come_value_150->var=((void*)0);
    # 722 "18field.c"
    # 717 "18field.c"
    if(_if_conditional245=field_type_134==((void*)0),    _if_conditional245) {
        # 718 "18field.c"
        err_msg(info,"no field(%s)\n",name_129);
        # 719 "18field.c"
        __result124__ = (_Bool)0;
        name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_136 = come_decrement_ref_count2(child_field_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result124__;
    }
    # 730 "18field.c"
    # 722 "18field.c"
    if(_if_conditional247=list$1sNodeph_length(come_value_150->type->mArrayNum)==1,    _if_conditional247) {
        # 723 "18field.c"
        __dec_obj108=come_value_150->type->mOriginalLoadVarType->v1;
        come_value_150->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(come_value_150->type))));
        come_call_finalizer2(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 725 "18field.c"
        list$1sNodeph_reset(come_value_150->type->mArrayNum);
        # 726 "18field.c"
        come_value_150->type->mPointerNum++;
        # 727 "18field.c"
        come_value_150->type->mOriginalTypeNamePointerNum=come_value_150->type->mPointerNum;
    }
    # 730 "18field.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
    # 732 "18field.c"
    __result128__ = (_Bool)1;
    name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_136 = come_decrement_ref_count2(child_field_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result128__;
    name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_136 = come_decrement_ref_count2(child_field_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional246;
int __result125__;
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional246=self==((void*)0),        _if_conditional246) {
            # 365 "./comelang2.h"
            __result125__ = 0;
            return __result125__;
        }
        # 367 "./comelang2.h"
        __result126__ = self->len;
        return __result126__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_151;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_152;
struct list$1sNodeph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_151, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_152, 0, sizeof(struct list_item$1sNodeph*));
            # 433 "./comelang2.h"
            it_151=self->head;
            # 440 "./comelang2.h"
            while(_while_condtional13=it_151!=((void*)0),            _while_condtional13) {
                # 435 "./comelang2.h"
                prev_it_152=it_151;
                # 436 "./comelang2.h"
                it_151=it_151->next;
                # 437 "./comelang2.h"
                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 440 "./comelang2.h"
            self->head=((void*)0);
            # 441 "./comelang2.h"
            self->tail=((void*)0);
            # 443 "./comelang2.h"
            self->len=0;
            # 445 "./comelang2.h"
            __result127__ = __result_obj__ = self;
            return __result127__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    # 737 "18field.c"
    __result129__ = self->sline;
    return __result129__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value224;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
    # 742 "18field.c"
    __result130__ = __result_obj__ = ((char*)(right_value224=__builtin_string(self->sname)));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value225;
char* __dec_obj109;
void* right_value226;
struct sNode* __dec_obj110;
void* right_value227;
struct sNode* __dec_obj111;
void* right_value228;
struct list$1sNodeph* __dec_obj112;
struct sStoreArrayNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
    # 758 "18field.c"
    self->sline=info->sline;
    # 759 "18field.c"
    __dec_obj109=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(info->sname))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 761 "18field.c"
    __dec_obj110=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(left))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value226) { right_value226 = come_decrement_ref_count2(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 762 "18field.c"
    __dec_obj111=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(right))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value227) { right_value227 = come_decrement_ref_count2(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 763 "18field.c"
    __dec_obj112=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value228=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 764 "18field.c"
    self->mQuote=quote;
    # 766 "18field.c"
    __result131__ = __result_obj__ = self;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result131__;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    # 771 "18field.c"
    __result132__ = (_Bool)0;
    return __result132__;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
void* right_value229;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
    # 776 "18field.c"
    __result133__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sStoreArrayNode")));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_153;
struct sNode* right_154;
struct list$1sNodeph* array_num_nodes_155;
_Bool _if_conditional252;
_Bool __result134__;
void* right_value230;
struct CVALUE* left_value_156;
_Bool _if_conditional253;
void* right_value231;
void* right_value232;
char* __dec_obj113;
struct sType* left_type_157;
void* right_value233;
void* right_value234;
struct list$1CVALUEph* array_num_160;
struct list$1sNodeph* o2_saved_161;
struct sNode* it_164;
_Bool _if_conditional258;
_Bool __result143__;
void* right_value235;
struct CVALUE* c_value_167;
_Bool _if_conditional259;
_Bool __result144__;
void* right_value236;
struct CVALUE* right_value_168;
struct sType* right_type_169;
struct sClass* klass_170;
void* right_value237;
struct sType* type_171;
char* fun_name_172;
_Bool calling_fun_173;
_Bool _if_conditional260;
_Bool _if_conditional263;
char* check_code_177;
_Bool _if_conditional264;
struct sType* var_type_178;
void* right_value238;
struct sType* result_type_179;
_Bool _if_conditional265;
struct sType* __dec_obj114;
_Bool _if_conditional266;
int n_180;
_Bool _if_conditional268;
void* right_value239;
struct sType* __dec_obj115;
_Bool _if_conditional269;
void* right_value240;
struct sType* __dec_obj116;
_Bool _if_conditional270;
int i_181;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value241;
struct CVALUE* come_value_194;
void* right_value242;
void* right_value243;
struct buffer* buf_195;
void* right_value244;
struct sType* result_type2_196;
void* right_value245;
struct list$1CVALUEph* o2_saved_197;
struct CVALUE* it_200;
void* right_value246;
void* right_value247;
int i_203;
struct list$1sNodeph* o2_saved_204;
struct sNode* it_205;
_Bool _if_conditional297;
void* right_value248;
struct CVALUE* come_value_206;
void* right_value249;
_Bool _if_conditional298;
void* right_value250;
void* right_value251;
char* __dec_obj117;
void* right_value252;
struct CVALUE* come_value_207;
_Bool _if_conditional299;
int i_208;
_Bool _if_conditional300;
_Bool _if_conditional301;
void* right_value253;
void* right_value254;
struct buffer* buf_209;
struct list$1CVALUEph* o2_saved_210;
struct CVALUE* it_211;
void* right_value255;
void* right_value256;
char* left_value_code_212;
void* right_value257;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value258;
char* __dec_obj118;
_Bool _if_conditional304;
void* right_value259;
char* __dec_obj119;
_Bool __result158__;
int right_value_id_213;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value260;
char* __dec_obj120;
_Bool _if_conditional307;
void* right_value261;
char* __dec_obj121;
_Bool __result159__;
void* right_value262;
struct sType* result_type_214;
void* right_value263;
void* right_value264;
struct list$1sNodeph* __dec_obj122;
struct sType* __dec_obj123;
_Bool _if_conditional308;
void* right_value265;
char* __dec_obj124;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_153, 0, sizeof(struct sNode*));
memset(&right_154, 0, sizeof(struct sNode*));
memset(&array_num_nodes_155, 0, sizeof(struct list$1sNodeph*));
right_value230 = (void*)0;
memset(&left_value_156, 0, sizeof(struct CVALUE*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&left_type_157, 0, sizeof(struct sType*));
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&array_num_160, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_161, 0, sizeof(struct list$1sNodeph*));
memset(&it_164, 0, sizeof(struct sNode*));
right_value235 = (void*)0;
memset(&c_value_167, 0, sizeof(struct CVALUE*));
right_value236 = (void*)0;
memset(&right_value_168, 0, sizeof(struct CVALUE*));
memset(&right_type_169, 0, sizeof(struct sType*));
memset(&klass_170, 0, sizeof(struct sClass*));
right_value237 = (void*)0;
memset(&type_171, 0, sizeof(struct sType*));
memset(&fun_name_172, 0, sizeof(char*));
memset(&calling_fun_173, 0, sizeof(_Bool));
memset(&check_code_177, 0, sizeof(char*));
memset(&var_type_178, 0, sizeof(struct sType*));
right_value238 = (void*)0;
memset(&result_type_179, 0, sizeof(struct sType*));
memset(&n_180, 0, sizeof(int));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&i_181, 0, sizeof(int));
right_value241 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&buf_195, 0, sizeof(struct buffer*));
right_value244 = (void*)0;
memset(&result_type2_196, 0, sizeof(struct sType*));
right_value245 = (void*)0;
memset(&o2_saved_197, 0, sizeof(struct list$1CVALUEph*));
memset(&it_200, 0, sizeof(struct CVALUE*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&i_203, 0, sizeof(int));
memset(&o2_saved_204, 0, sizeof(struct list$1sNodeph*));
memset(&it_205, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
memset(&come_value_206, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&come_value_207, 0, sizeof(struct CVALUE*));
memset(&i_208, 0, sizeof(int));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&buf_209, 0, sizeof(struct buffer*));
memset(&o2_saved_210, 0, sizeof(struct list$1CVALUEph*));
memset(&it_211, 0, sizeof(struct CVALUE*));
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&left_value_code_212, 0, sizeof(char*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&right_value_id_213, 0, sizeof(int));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&result_type_214, 0, sizeof(struct sType*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
    # 781 "18field.c"
    left_153=self->mLeft;
    # 782 "18field.c"
    right_154=self->mRight;
    # 783 "18field.c"
    array_num_nodes_155=self->mArrayNum;
    # 789 "18field.c"
    # 785 "18field.c"
    if(_if_conditional252=!node_compile(left_153,info),    _if_conditional252) {
        # 786 "18field.c"
        __result134__ = (_Bool)0;
        return __result134__;
    }
    # 789 "18field.c"
    left_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 790 "18field.c"
    dec_stack_ptr(1,info);
    # 796 "18field.c"
    # 792 "18field.c"
    if(_if_conditional253=gComeDebug&&left_value_156->type->mPointerNum>0,    _if_conditional253) {
        # 793 "18field.c"
        __dec_obj113=left_value_156->c_value;
        left_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value231=make_type_name_string(left_value_156->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_156->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 796 "18field.c"
    left_type_157=left_value_156->type;
    # 798 "18field.c"
    array_num_160=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value234=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value233=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 798, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 811 "18field.c"
    for(    o2_saved_161=(array_num_nodes_155),it_164=list$1sNodeph_begin((o2_saved_161));    !list$1sNodeph_end((o2_saved_161));    it_164=list$1sNodeph_next((o2_saved_161))    ){
        # 805 "18field.c"
        # 801 "18field.c"
        if(_if_conditional258=!node_compile(it_164,info),        _if_conditional258) {
            # 802 "18field.c"
            __result143__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result143__;
        }
        # 805 "18field.c"
        c_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 806 "18field.c"
        dec_stack_ptr(1,info);
        # 808 "18field.c"
        list$1CVALUEph_push_back(array_num_160,(struct CVALUE*)come_increment_ref_count(c_value_167));
        come_call_finalizer2(CVALUE_finalize,c_value_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 815 "18field.c"
    # 811 "18field.c"
    if(_if_conditional259=!node_compile(right_154,info),    _if_conditional259) {
        # 812 "18field.c"
        __result144__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result144__;
    }
    # 815 "18field.c"
    right_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 816 "18field.c"
    dec_stack_ptr(1,info);
    # 818 "18field.c"
    right_type_169=right_value_168->type;
    # 820 "18field.c"
    klass_170=left_value_156->type->mClass;
    # 822 "18field.c"
    type_171=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(left_value_156->type))));
    come_call_finalizer2(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 824 "18field.c"
    fun_name_172="operator_store_element";
    # 825 "18field.c"
    # 833 "18field.c"
    # 826 "18field.c"
    if(self->mQuote) {
        # 827 "18field.c"
        calling_fun_173=(_Bool)0;
    }
    else {
        # 830 "18field.c"
        calling_fun_173=operator_overload_fun2(type_171,fun_name_172,left_value_156,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_160,0), "18field.c", 830, 9)),right_value_168,info);
    }
    # 992 "18field.c"
    # 833 "18field.c"
    if(_if_conditional263=!calling_fun_173,    _if_conditional263) {
        # 834 "18field.c"
        check_code_177=((void*)0);
        # 912 "18field.c"
        # 835 "18field.c"
        if(_if_conditional264=left_value_156->var&&left_value_156->var->mType&&list$1sNodeph_length(left_value_156->var->mType->mArrayNum)>0,        _if_conditional264) {
            # 837 "18field.c"
            var_type_178=left_value_156->var->mType;
            # 838 "18field.c"
            result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(left_type_157))));
            come_call_finalizer2(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 844 "18field.c"
            # 840 "18field.c"
            if(result_type_179->mOriginalLoadVarType->v1) {
                # 841 "18field.c"
                __dec_obj114=result_type_179;
                result_type_179=(struct sType*)come_increment_ref_count(result_type_179->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 878 "18field.c"
            # 844 "18field.c"
            if(_if_conditional266=list$1sNodeph_length(result_type_179->mArrayNum)>0,            _if_conditional266) {
                # 845 "18field.c"
                n_180=list$1sNodeph_length(result_type_179->mArrayNum)-list$1CVALUEph_length(array_num_160);
                # 867 "18field.c"
                # 847 "18field.c"
                if(_if_conditional268=n_180==0,                _if_conditional268) {
                    # 848 "18field.c"
                    __dec_obj115=result_type_179;
                    result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_clone(left_type_157))));
                    come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 852 "18field.c"
                    # 849 "18field.c"
                    if(left_type_157->mOriginalLoadVarType->v1) {
                        # 850 "18field.c"
                        __dec_obj116=result_type_179;
                        result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(left_type_157->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 852 "18field.c"
                    list$1sNodeph_reset(result_type_179->mArrayNum);
                }
                else {
                    # 867 "18field.c"
                    # 854 "18field.c"
                    if(_if_conditional270=n_180>0,                    _if_conditional270) {
                        # 858 "18field.c"
                        for(                        i_181=0;                        i_181<n_180;                        i_181++                        ){
                            # 856 "18field.c"
                            list$1sNodeph_delete(result_type_179->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 867 "18field.c"
                        # 859 "18field.c"
                        if(_if_conditional289=n_180<0,                        _if_conditional289) {
                            # 860 "18field.c"
                            list$1sNodeph_reset(result_type_179->mArrayNum);
                            # 861 "18field.c"
                            result_type_179->mPointerNum+=n_180;
                            # 866 "18field.c"
                            # 863 "18field.c"
                            if(_if_conditional290=result_type_179->mPointerNum<0,                            _if_conditional290) {
                                # 864 "18field.c"
                                result_type_179->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 876 "18field.c"
                # 869 "18field.c"
                if(_if_conditional291=result_type_179->mPointerNum>0,                _if_conditional291) {
                    # 870 "18field.c"
                    result_type_179->mPointerNum-=list$1CVALUEph_length(array_num_160);
                    # 875 "18field.c"
                    # 872 "18field.c"
                    if(_if_conditional292=result_type_179->mPointerNum<0,                    _if_conditional292) {
                        # 873 "18field.c"
                        result_type_179->mPointerNum=0;
                    }
                }
            }
            # 878 "18field.c"
            come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 878, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 880 "18field.c"
            buf_195=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value243=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value242=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 880, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 882 "18field.c"
            result_type2_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(result_type_179))));
            come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 883 "18field.c"
            result_type2_196->mPointerNum++;
            # 885 "18field.c"
            buffer_append_str(buf_195,((char*)(right_value245=xsprintf("come_range_check(&%s",left_value_156->c_value))));
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 890 "18field.c"
            for(            o2_saved_197=(struct list$1CVALUEph*)come_increment_ref_count((array_num_160)),it_200=list$1CVALUEph_begin((o2_saved_197));            !list$1CVALUEph_end((o2_saved_197));            it_200=list$1CVALUEph_next((o2_saved_197))            ){
                # 888 "18field.c"
                buffer_append_str(buf_195,((char*)(right_value246=xsprintf("[%s]",it_200->c_value))));
                right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 890 "18field.c"
            buffer_append_str(buf_195,((char*)(right_value247=xsprintf(",%s,%s+(",left_value_156->c_value,left_value_156->c_value))));
            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 891 "18field.c"
            i_203=0;
            # 907 "18field.c"
            for(            o2_saved_204=(struct list$1sNodeph*)come_increment_ref_count((var_type_178->mArrayNum)),it_205=list$1sNodeph_begin((o2_saved_204));            !list$1sNodeph_end((o2_saved_204));            it_205=list$1sNodeph_next((o2_saved_204))            ){
                # 898 "18field.c"
                # 893 "18field.c"
                if(_if_conditional297=!node_compile(it_205,info),                _if_conditional297) {
                    # 894 "18field.c"
                    err_msg(info,"invalid array num");
                    # 895 "18field.c"
                    exit(1);
                }
                # 898 "18field.c"
                come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 899 "18field.c"
                dec_stack_ptr(1,info);
                # 901 "18field.c"
                buffer_append_str(buf_195,((char*)(right_value249=xsprintf("%s",come_value_206->c_value))));
                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 905 "18field.c"
                # 902 "18field.c"
                if(_if_conditional298=i_203!=list$1sNodeph_length(var_type_178->mArrayNum)-1,                _if_conditional298) {
                    # 903 "18field.c"
                    buffer_append_str(buf_195,"*");
                }
                # 905 "18field.c"
                i_203++;
                come_call_finalizer2(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 907 "18field.c"
            buffer_append_str(buf_195,((char*)(right_value250=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 909 "18field.c"
            __dec_obj117=check_code_177;
            check_code_177=(char*)come_increment_ref_count(((char*)(right_value251=buffer_to_string(buf_195))));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 912 "18field.c"
        come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 912, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 933 "18field.c"
        # 920 "18field.c"
        if(_if_conditional299=list$1sNodeph_length(left_type_157->mArrayNum)>0,        _if_conditional299) {
            # 924 "18field.c"
            for(            i_208=0;            i_208<list$1CVALUEph_length(array_num_160);            i_208++            ){
                # 922 "18field.c"
                list$1sNodeph_delete(left_type_157->mArrayNum,-1,-1);
            }
        }
        else {
            # 933 "18field.c"
            # 925 "18field.c"
            if(_if_conditional300=left_type_157->mPointerNum>0,            _if_conditional300) {
                # 926 "18field.c"
                left_type_157->mPointerNum-=list$1CVALUEph_length(array_num_160);
                # 931 "18field.c"
                # 928 "18field.c"
                if(_if_conditional301=left_type_157->mPointerNum<0,                _if_conditional301) {
                    # 929 "18field.c"
                    left_type_157->mPointerNum=0;
                }
            }
        }
        # 933 "18field.c"
        buf_209=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value254=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value253=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 933, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 935 "18field.c"
        buffer_append_str(buf_209,left_value_156->c_value);
        # 941 "18field.c"
        for(        o2_saved_210=(struct list$1CVALUEph*)come_increment_ref_count((array_num_160)),it_211=list$1CVALUEph_begin((o2_saved_210));        !list$1CVALUEph_end((o2_saved_210));        it_211=list$1CVALUEph_next((o2_saved_210))        ){
            # 938 "18field.c"
            buffer_append_str(buf_209,((char*)(right_value255=xsprintf("[%s]",it_211->c_value))));
            right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 941 "18field.c"
        left_value_code_212=(char*)come_increment_ref_count(((char*)(right_value256=buffer_to_string(buf_209))));
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 943 "18field.c"
        check_assign_type(((char*)(right_value257=xsprintf("array is assinged to"))),left_type_157,right_type_169,right_value_168,(_Bool)0,(_Bool)1,info);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 978 "18field.c"
        # 944 "18field.c"
        if(_if_conditional302=left_type_157->mHeap&&right_type_169->mHeap&&left_type_157->mPointerNum>0&&right_type_169->mPointerNum>0,        _if_conditional302) {
            # 960 "18field.c"
            # 946 "18field.c"
            if(_if_conditional303=left_value_156->type->mPointerNum>=1,            _if_conditional303) {
                # 947 "18field.c"
                decrement_ref_count_object(left_type_157,left_value_code_212,info,(_Bool)0);
                # 948 "18field.c"
                std_move(left_type_157,right_type_169,right_value_168,info);
                # 949 "18field.c"
                __dec_obj118=come_value_207->c_value;
                come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s=%s",left_value_code_212,right_value_168->c_value))));
                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 960 "18field.c"
                # 951 "18field.c"
                if(_if_conditional304=left_value_156->type->mPointerNum==0,                _if_conditional304) {
                    # 952 "18field.c"
                    decrement_ref_count_object(left_type_157,left_value_code_212,info,(_Bool)0);
                    # 953 "18field.c"
                    std_move(left_type_157,right_type_169,right_value_168,info);
                    # 954 "18field.c"
                    __dec_obj119=come_value_207->c_value;
                    come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("%s=%s",left_value_code_212,right_value_168->c_value))));
                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 957 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_212,left_value_156->type->mPointerNum);
                    # 958 "18field.c"
                    __result158__ = (_Bool)0;
                    check_code_177 = come_decrement_ref_count2(check_code_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_212 = come_decrement_ref_count2(left_value_code_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result158__;
                }
            }
            # 960 "18field.c"
            right_value_id_213=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_168->c_value));
            # 965 "18field.c"
            # 962 "18field.c"
            if(_if_conditional305=right_value_id_213!=-1,            _if_conditional305) {
                # 963 "18field.c"
                remove_object_from_right_values(right_value_id_213,info);
            }
        }
        else {
            # 977 "18field.c"
            # 967 "18field.c"
            if(_if_conditional306=left_value_156->type->mPointerNum>=1,            _if_conditional306) {
                # 968 "18field.c"
                __dec_obj120=come_value_207->c_value;
                come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value260=xsprintf("%s=%s",left_value_code_212,right_value_168->c_value))));
                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 977 "18field.c"
                # 970 "18field.c"
                if(_if_conditional307=left_value_156->type->mPointerNum==0,                _if_conditional307) {
                    # 971 "18field.c"
                    __dec_obj121=come_value_207->c_value;
                    come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value261=xsprintf("%s=%s",left_value_code_212,right_value_168->c_value))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 974 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_212,left_value_156->type->mPointerNum);
                    # 975 "18field.c"
                    __result159__ = (_Bool)0;
                    check_code_177 = come_decrement_ref_count2(check_code_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_212 = come_decrement_ref_count2(left_value_code_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result159__;
                }
            }
        }
        # 978 "18field.c"
        result_type_214=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_clone(left_type_157))));
        come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 979 "18field.c"
        __dec_obj122=result_type_214->mArrayNum;
        result_type_214->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value264=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value263=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 979, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 980 "18field.c"
        __dec_obj123=come_value_207->type;
        come_value_207->type=(struct sType*)come_increment_ref_count(result_type_214);
        come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 981 "18field.c"
        come_value_207->var=((void*)0);
        # 987 "18field.c"
        # 983 "18field.c"
        if(_if_conditional308=check_code_177&&gComeDebug,        _if_conditional308) {
            # 984 "18field.c"
            __dec_obj124=come_value_207->c_value;
            come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value265=xsprintf("(%s, %s)",check_code_177,come_value_207->c_value))));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 987 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_207));
        # 989 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_207->c_value);
        check_code_177 = come_decrement_ref_count2(check_code_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_212 = come_decrement_ref_count2(left_value_code_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 992 "18field.c"
    __result160__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result160__;
    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
        # 104 "./comelang2.h"
        self->head=((void*)0);
        # 105 "./comelang2.h"
        self->tail=((void*)0);
        # 106 "./comelang2.h"
        self->len=0;
        # 108 "./comelang2.h"
        __result135__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result135__;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_158;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_158, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_159, 0, sizeof(struct list_item$1CVALUEph*));
            # 123 "./comelang2.h"
            it_158=self->head;
            # 129 "./comelang2.h"
            while(_while_condtional14=it_158!=((void*)0),            _while_condtional14) {
                # 125 "./comelang2.h"
                prev_it_159=it_158;
                # 126 "./comelang2.h"
                it_158=it_158->next;
                # 127 "./comelang2.h"
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional254;
struct sNode* result_162;
struct sNode* __result136__;
_Bool _if_conditional255;
struct sNode* __result137__;
struct sNode* result_163;
struct sNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct sNode*));
memset(&result_163, 0, sizeof(struct sNode*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional254=self==((void*)0),        _if_conditional254) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_162,0,sizeof(struct sNode*));
            # 288 "./comelang2.h"
            __result136__ = __result_obj__ = result_162;
            return __result136__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result137__ = __result_obj__ = self->it->item;
            return __result137__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_163,0,sizeof(struct sNode*));
        # 298 "./comelang2.h"
        __result138__ = __result_obj__ = result_163;
        return __result138__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result139__ = self==((void*)0)||self->it==((void*)0);
        return __result139__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional256;
struct sNode* result_165;
struct sNode* __result140__;
_Bool _if_conditional257;
struct sNode* __result141__;
struct sNode* result_166;
struct sNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_165, 0, sizeof(struct sNode*));
memset(&result_166, 0, sizeof(struct sNode*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional256=self==((void*)0)||self->it==((void*)0),        _if_conditional256) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_165,0,sizeof(struct sNode*));
            # 305 "./comelang2.h"
            __result140__ = __result_obj__ = result_165;
            return __result140__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result141__ = __result_obj__ = self->it->item;
            return __result141__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_166,0,sizeof(struct sNode*));
        # 316 "./comelang2.h"
        __result142__ = __result_obj__ = result_166;
        return __result142__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional261;
struct list_item$1CVALUEph* it_174;
int i_175;
_Bool _while_condtional15;
_Bool _if_conditional262;
struct CVALUE* __result145__;
struct CVALUE* default_value_176;
struct CVALUE* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_174, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_175, 0, sizeof(int));
memset(&default_value_176, 0, sizeof(struct CVALUE*));
            # 686 "./comelang2.h"
            # 682 "./comelang2.h"
            if(_if_conditional261=position<0,            _if_conditional261) {
                # 683 "./comelang2.h"
                position+=self->len;
            }
            # 686 "./comelang2.h"
            it_174=self->head;
            # 687 "./comelang2.h"
            i_175=0;
            # 694 "./comelang2.h"
            while(_while_condtional15=it_174!=((void*)0),            _while_condtional15) {
                # 692 "./comelang2.h"
                # 689 "./comelang2.h"
                if(_if_conditional262=position==i_175,                _if_conditional262) {
                    # 690 "./comelang2.h"
                    __result145__ = __result_obj__ = it_174->item;
                    return __result145__;
                }
                # 692 "./comelang2.h"
                it_174=it_174->next;
                # 693 "./comelang2.h"
                i_175++;
            }
            # 696 "./comelang2.h"
            # 697 "./comelang2.h"
            memset(&default_value_176,0,sizeof(struct CVALUE*));
            # 698 "./comelang2.h"
            __result146__ = __result_obj__ = default_value_176;
            come_call_finalizer2(CVALUE_finalize,default_value_176, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result146__;
            come_call_finalizer2(CVALUE_finalize,default_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional267;
int __result147__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 367 "./comelang2.h"
                    # 364 "./comelang2.h"
                    if(_if_conditional267=self==((void*)0),                    _if_conditional267) {
                        # 365 "./comelang2.h"
                        __result147__ = 0;
                        return __result147__;
                    }
                    # 367 "./comelang2.h"
                    __result148__ = self->len;
                    return __result148__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
int tmp_182;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
struct list$1sNodeph* __result149__;
_Bool _if_conditional277;
_Bool _if_conditional278;
struct list_item$1sNodeph* it_183;
int i_184;
_Bool _while_condtional16;
_Bool _if_conditional279;
struct list_item$1sNodeph* prev_it_185;
_Bool _if_conditional280;
_Bool _if_conditional281;
struct list_item$1sNodeph* it_186;
int i_187;
_Bool _while_condtional17;
_Bool _if_conditional282;
_Bool _if_conditional283;
struct list_item$1sNodeph* prev_it_188;
struct list_item$1sNodeph* it_189;
struct list_item$1sNodeph* head_prev_it_190;
struct list_item$1sNodeph* tail_it_191;
int i_192;
_Bool _while_condtional18;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct list_item$1sNodeph* prev_it_193;
_Bool _if_conditional287;
_Bool _if_conditional288;
struct list$1sNodeph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_182, 0, sizeof(int));
memset(&it_183, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_184, 0, sizeof(int));
memset(&prev_it_185, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_186, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_187, 0, sizeof(int));
memset(&prev_it_188, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_189, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_190, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_191, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_192, 0, sizeof(int));
memset(&prev_it_193, 0, sizeof(struct list_item$1sNodeph*));
                                # 467 "./comelang2.h"
                                # 464 "./comelang2.h"
                                if(_if_conditional271=head<0,                                _if_conditional271) {
                                    # 465 "./comelang2.h"
                                    head+=self->len;
                                }
                                # 471 "./comelang2.h"
                                # 467 "./comelang2.h"
                                if(_if_conditional272=tail<0,                                _if_conditional272) {
                                    # 468 "./comelang2.h"
                                    tail+=self->len+1;
                                }
                                # 477 "./comelang2.h"
                                # 471 "./comelang2.h"
                                if(_if_conditional273=head>tail,                                _if_conditional273) {
                                    # 472 "./comelang2.h"
                                    tmp_182=tail;
                                    # 473 "./comelang2.h"
                                    tail=head;
                                    # 474 "./comelang2.h"
                                    head=tmp_182;
                                }
                                # 481 "./comelang2.h"
                                # 477 "./comelang2.h"
                                if(_if_conditional274=head<0,                                _if_conditional274) {
                                    # 478 "./comelang2.h"
                                    head=0;
                                }
                                # 485 "./comelang2.h"
                                # 481 "./comelang2.h"
                                if(_if_conditional275=tail>self->len,                                _if_conditional275) {
                                    # 482 "./comelang2.h"
                                    tail=self->len;
                                }
                                # 489 "./comelang2.h"
                                # 485 "./comelang2.h"
                                if(_if_conditional276=head==tail,                                _if_conditional276) {
                                    # 486 "./comelang2.h"
                                    __result149__ = __result_obj__ = self;
                                    return __result149__;
                                }
                                # 584 "./comelang2.h"
                                # 489 "./comelang2.h"
                                if(_if_conditional277=head==0&&tail==self->len,                                _if_conditional277) {
                                    # 491 "./comelang2.h"
                                    list$1sNodeph_reset(self);
                                }
                                else {
                                    # 584 "./comelang2.h"
                                    # 493 "./comelang2.h"
                                    if(_if_conditional278=head==0,                                    _if_conditional278) {
                                        # 494 "./comelang2.h"
                                        it_183=self->head;
                                        # 495 "./comelang2.h"
                                        i_184=0;
                                        # 517 "./comelang2.h"
                                        while(_while_condtional16=it_183!=((void*)0),                                        _while_condtional16) {
                                            # 516 "./comelang2.h"
                                            # 497 "./comelang2.h"
                                            if(_if_conditional279=i_184<tail,                                            _if_conditional279) {
                                                # 498 "./comelang2.h"
                                                prev_it_185=it_183;
                                                # 500 "./comelang2.h"
                                                it_183=it_183->next;
                                                # 501 "./comelang2.h"
                                                i_184++;
                                                # 503 "./comelang2.h"
                                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                # 505 "./comelang2.h"
                                                self->len--;
                                            }
                                            else {
                                                # 516 "./comelang2.h"
                                                # 507 "./comelang2.h"
                                                if(_if_conditional280=i_184==tail,                                                _if_conditional280) {
                                                    # 508 "./comelang2.h"
                                                    self->head=it_183;
                                                    # 509 "./comelang2.h"
                                                    self->head->prev=((void*)0);
                                                    # 510 "./comelang2.h"
                                                    break;
                                                }
                                                else {
                                                    # 513 "./comelang2.h"
                                                    it_183=it_183->next;
                                                    # 514 "./comelang2.h"
                                                    i_184++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 584 "./comelang2.h"
                                        # 518 "./comelang2.h"
                                        if(_if_conditional281=tail==self->len,                                        _if_conditional281) {
                                            # 519 "./comelang2.h"
                                            it_186=self->head;
                                            # 520 "./comelang2.h"
                                            i_187=0;
                                            # 542 "./comelang2.h"
                                            while(_while_condtional17=it_186!=((void*)0),                                            _while_condtional17) {
                                                # 527 "./comelang2.h"
                                                # 522 "./comelang2.h"
                                                if(_if_conditional282=i_187==head,                                                _if_conditional282) {
                                                    # 523 "./comelang2.h"
                                                    self->tail=it_186->prev;
                                                    # 524 "./comelang2.h"
                                                    self->tail->next=((void*)0);
                                                }
                                                # 541 "./comelang2.h"
                                                # 527 "./comelang2.h"
                                                if(_if_conditional283=i_187>=head,                                                _if_conditional283) {
                                                    # 528 "./comelang2.h"
                                                    prev_it_188=it_186;
                                                    # 530 "./comelang2.h"
                                                    it_186=it_186->next;
                                                    # 531 "./comelang2.h"
                                                    i_187++;
                                                    # 533 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 535 "./comelang2.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 538 "./comelang2.h"
                                                    it_186=it_186->next;
                                                    # 539 "./comelang2.h"
                                                    i_187++;
                                                }
                                            }
                                        }
                                        else {
                                            # 544 "./comelang2.h"
                                            it_189=self->head;
                                            # 546 "./comelang2.h"
                                            head_prev_it_190=((void*)0);
                                            # 547 "./comelang2.h"
                                            tail_it_191=((void*)0);
                                            # 550 "./comelang2.h"
                                            i_192=0;
                                            # 576 "./comelang2.h"
                                            while(_while_condtional18=it_189!=((void*)0),                                            _while_condtional18) {
                                                # 555 "./comelang2.h"
                                                # 552 "./comelang2.h"
                                                if(_if_conditional284=i_192==head,                                                _if_conditional284) {
                                                    # 553 "./comelang2.h"
                                                    head_prev_it_190=it_189->prev;
                                                }
                                                # 559 "./comelang2.h"
                                                # 555 "./comelang2.h"
                                                if(_if_conditional285=i_192==tail,                                                _if_conditional285) {
                                                    # 556 "./comelang2.h"
                                                    tail_it_191=it_189;
                                                }
                                                # 574 "./comelang2.h"
                                                # 559 "./comelang2.h"
                                                if(_if_conditional286=i_192>=head&&i_192<tail,                                                _if_conditional286) {
                                                    # 561 "./comelang2.h"
                                                    prev_it_193=it_189;
                                                    # 563 "./comelang2.h"
                                                    it_189=it_189->next;
                                                    # 564 "./comelang2.h"
                                                    i_192++;
                                                    # 566 "./comelang2.h"
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    # 568 "./comelang2.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 571 "./comelang2.h"
                                                    it_189=it_189->next;
                                                    # 572 "./comelang2.h"
                                                    i_192++;
                                                }
                                            }
                                            # 579 "./comelang2.h"
                                            # 576 "./comelang2.h"
                                            if(_if_conditional287=head_prev_it_190!=((void*)0),                                            _if_conditional287) {
                                                # 577 "./comelang2.h"
                                                head_prev_it_190->next=tail_it_191;
                                            }
                                            # 582 "./comelang2.h"
                                            # 579 "./comelang2.h"
                                            if(_if_conditional288=tail_it_191!=((void*)0),                                            _if_conditional288) {
                                                # 580 "./comelang2.h"
                                                tail_it_191->prev=head_prev_it_190;
                                            }
                                        }
                                    }
                                }
                                # 584 "./comelang2.h"
                                __result150__ = __result_obj__ = self;
                                return __result150__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional293;
struct CVALUE* result_198;
struct CVALUE* __result151__;
_Bool _if_conditional294;
struct CVALUE* __result152__;
struct CVALUE* result_199;
struct CVALUE* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_198, 0, sizeof(struct CVALUE*));
memset(&result_199, 0, sizeof(struct CVALUE*));
                # 290 "./comelang2.h"
                # 285 "./comelang2.h"
                if(_if_conditional293=self==((void*)0),                _if_conditional293) {
                    # 286 "./comelang2.h"
                    # 287 "./comelang2.h"
                    memset(&result_198,0,sizeof(struct CVALUE*));
                    # 288 "./comelang2.h"
                    __result151__ = __result_obj__ = result_198;
                    return __result151__;
                }
                # 290 "./comelang2.h"
                self->it=self->head;
                # 296 "./comelang2.h"
                # 292 "./comelang2.h"
                if(self->it) {
                    # 293 "./comelang2.h"
                    __result152__ = __result_obj__ = self->it->item;
                    return __result152__;
                }
                # 296 "./comelang2.h"
                # 297 "./comelang2.h"
                memset(&result_199,0,sizeof(struct CVALUE*));
                # 298 "./comelang2.h"
                __result153__ = __result_obj__ = result_199;
                return __result153__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
                # 320 "./comelang2.h"
                __result154__ = self==((void*)0)||self->it==((void*)0);
                return __result154__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional295;
struct CVALUE* result_201;
struct CVALUE* __result155__;
_Bool _if_conditional296;
struct CVALUE* __result156__;
struct CVALUE* result_202;
struct CVALUE* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_201, 0, sizeof(struct CVALUE*));
memset(&result_202, 0, sizeof(struct CVALUE*));
                # 308 "./comelang2.h"
                # 302 "./comelang2.h"
                if(_if_conditional295=self==((void*)0)||self->it==((void*)0),                _if_conditional295) {
                    # 303 "./comelang2.h"
                    # 304 "./comelang2.h"
                    memset(&result_201,0,sizeof(struct CVALUE*));
                    # 305 "./comelang2.h"
                    __result155__ = __result_obj__ = result_201;
                    return __result155__;
                }
                # 308 "./comelang2.h"
                self->it=self->it->next;
                # 314 "./comelang2.h"
                # 310 "./comelang2.h"
                if(self->it) {
                    # 311 "./comelang2.h"
                    __result156__ = __result_obj__ = self->it->item;
                    return __result156__;
                }
                # 314 "./comelang2.h"
                # 315 "./comelang2.h"
                memset(&result_202,0,sizeof(struct CVALUE*));
                # 316 "./comelang2.h"
                __result157__ = __result_obj__ = result_202;
                return __result157__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    # 997 "18field.c"
    __result161__ = self->sline;
    return __result161__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value266;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
    # 1002 "18field.c"
    __result162__ = __result_obj__ = ((char*)(right_value266=__builtin_string(self->sname)));
    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result162__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value267;
char* __dec_obj125;
void* right_value268;
struct list$1sNodeph* __dec_obj126;
void* right_value269;
struct sNode* __dec_obj127;
struct sLoadArrayNode* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
    # 1018 "18field.c"
    self->sline=info->sline;
    # 1019 "18field.c"
    __dec_obj125=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string(info->sname))));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1021 "18field.c"
    __dec_obj126=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value268=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1022 "18field.c"
    self->mBreakGuard=break_guard;
    # 1024 "18field.c"
    __dec_obj127=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=sNode_clone(left))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value269) { right_value269 = come_decrement_ref_count2(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1025 "18field.c"
    self->mQuote=quote;
    # 1027 "18field.c"
    __result163__ = __result_obj__ = self;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result163__;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1032 "18field.c"
    __result164__ = (_Bool)0;
    return __result164__;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
void* right_value270;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
    # 1037 "18field.c"
    __result165__ = __result_obj__ = ((char*)(right_value270=__builtin_string("sLoadArrayNode")));
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result165__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_215;
struct list$1sNodeph* array_num_nodes_216;
_Bool _if_conditional312;
_Bool __result166__;
void* right_value271;
struct CVALUE* left_value_217;
_Bool _if_conditional313;
void* right_value272;
void* right_value273;
char* __dec_obj128;
void* right_value274;
struct sType* left_type_218;
void* right_value275;
void* right_value276;
struct list$1CVALUEph* array_num_219;
struct list$1sNodeph* o2_saved_220;
struct sNode* it_221;
_Bool _if_conditional314;
_Bool __result167__;
void* right_value277;
struct CVALUE* c_value_222;
void* right_value278;
struct sType* type_223;
char* fun_name_224;
_Bool calling_fun_225;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
struct sType* var_type_226;
void* right_value279;
struct sType* result_type_227;
_Bool _if_conditional318;
struct sType* __dec_obj129;
_Bool _if_conditional319;
int n_228;
_Bool _if_conditional320;
void* right_value280;
struct sType* __dec_obj130;
_Bool _if_conditional321;
void* right_value281;
struct sType* __dec_obj131;
_Bool _if_conditional322;
int i_229;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
void* right_value282;
struct CVALUE* come_value_230;
void* right_value283;
void* right_value284;
struct buffer* buf_231;
void* right_value285;
struct sType* result_type2_232;
void* right_value286;
void* right_value287;
struct list$1CVALUEph* o2_saved_233;
struct CVALUE* it_234;
void* right_value288;
void* right_value289;
int i_235;
struct list$1sNodeph* o2_saved_236;
struct sNode* it_237;
_Bool _if_conditional327;
void* right_value290;
struct CVALUE* come_value_238;
void* right_value291;
_Bool _if_conditional328;
void* right_value292;
void* right_value293;
char* left_value_code_239;
void* right_value294;
char* __dec_obj132;
void* right_value295;
struct sType* __dec_obj133;
void* right_value296;
struct CVALUE* come_value_240;
void* right_value297;
void* right_value298;
struct buffer* buf_241;
struct list$1CVALUEph* o2_saved_242;
struct CVALUE* it_243;
void* right_value299;
void* right_value300;
char* left_value_code_244;
void* right_value301;
char* __dec_obj134;
void* right_value302;
struct sType* result_type_245;
_Bool _if_conditional329;
struct sType* __dec_obj135;
_Bool _if_conditional330;
int n_246;
_Bool _if_conditional331;
void* right_value303;
struct sType* __dec_obj136;
_Bool _if_conditional332;
void* right_value304;
struct sType* __dec_obj137;
_Bool _if_conditional333;
int i_247;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value305;
struct sType* __dec_obj138;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_215, 0, sizeof(struct sNode*));
memset(&array_num_nodes_216, 0, sizeof(struct list$1sNodeph*));
right_value271 = (void*)0;
memset(&left_value_217, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&left_type_218, 0, sizeof(struct sType*));
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&array_num_219, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_220, 0, sizeof(struct list$1sNodeph*));
memset(&it_221, 0, sizeof(struct sNode*));
right_value277 = (void*)0;
memset(&c_value_222, 0, sizeof(struct CVALUE*));
right_value278 = (void*)0;
memset(&type_223, 0, sizeof(struct sType*));
memset(&fun_name_224, 0, sizeof(char*));
memset(&calling_fun_225, 0, sizeof(_Bool));
memset(&var_type_226, 0, sizeof(struct sType*));
right_value279 = (void*)0;
memset(&result_type_227, 0, sizeof(struct sType*));
memset(&n_228, 0, sizeof(int));
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&i_229, 0, sizeof(int));
right_value282 = (void*)0;
memset(&come_value_230, 0, sizeof(struct CVALUE*));
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&buf_231, 0, sizeof(struct buffer*));
right_value285 = (void*)0;
memset(&result_type2_232, 0, sizeof(struct sType*));
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&o2_saved_233, 0, sizeof(struct list$1CVALUEph*));
memset(&it_234, 0, sizeof(struct CVALUE*));
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&i_235, 0, sizeof(int));
memset(&o2_saved_236, 0, sizeof(struct list$1sNodeph*));
memset(&it_237, 0, sizeof(struct sNode*));
right_value290 = (void*)0;
memset(&come_value_238, 0, sizeof(struct CVALUE*));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&left_value_code_239, 0, sizeof(char*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&come_value_240, 0, sizeof(struct CVALUE*));
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&buf_241, 0, sizeof(struct buffer*));
memset(&o2_saved_242, 0, sizeof(struct list$1CVALUEph*));
memset(&it_243, 0, sizeof(struct CVALUE*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&left_value_code_244, 0, sizeof(char*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&result_type_245, 0, sizeof(struct sType*));
memset(&n_246, 0, sizeof(int));
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&i_247, 0, sizeof(int));
right_value305 = (void*)0;
    # 1042 "18field.c"
    left_215=self->mLeft;
    # 1043 "18field.c"
    array_num_nodes_216=self->mArrayNum;
    # 1049 "18field.c"
    # 1045 "18field.c"
    if(_if_conditional312=!node_compile(left_215,info),    _if_conditional312) {
        # 1046 "18field.c"
        __result166__ = (_Bool)0;
        return __result166__;
    }
    # 1049 "18field.c"
    left_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1050 "18field.c"
    dec_stack_ptr(1,info);
    # 1056 "18field.c"
    # 1052 "18field.c"
    if(_if_conditional313=gComeDebug&&left_value_217->type->mPointerNum>0,    _if_conditional313) {
        # 1053 "18field.c"
        __dec_obj128=left_value_217->c_value;
        left_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value272=make_type_name_string(left_value_217->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_217->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1056 "18field.c"
    left_type_218=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_clone(left_value_217->type))));
    come_call_finalizer2(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1058 "18field.c"
    array_num_219=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value276=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value275=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1058, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1071 "18field.c"
    for(    o2_saved_220=(array_num_nodes_216),it_221=list$1sNodeph_begin((o2_saved_220));    !list$1sNodeph_end((o2_saved_220));    it_221=list$1sNodeph_next((o2_saved_220))    ){
        # 1065 "18field.c"
        # 1061 "18field.c"
        if(_if_conditional314=!node_compile(it_221,info),        _if_conditional314) {
            # 1062 "18field.c"
            __result167__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result167__;
        }
        # 1065 "18field.c"
        c_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value277=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1066 "18field.c"
        dec_stack_ptr(1,info);
        # 1068 "18field.c"
        list$1CVALUEph_push_back(array_num_219,(struct CVALUE*)come_increment_ref_count(c_value_222));
        come_call_finalizer2(CVALUE_finalize,c_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1071 "18field.c"
    type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_clone(left_value_217->type))));
    come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1073 "18field.c"
    fun_name_224="operator_load_element";
    # 1074 "18field.c"
    # 1082 "18field.c"
    # 1075 "18field.c"
    if(self->mQuote) {
        # 1076 "18field.c"
        calling_fun_225=(_Bool)0;
    }
    else {
        # 1079 "18field.c"
        calling_fun_225=operator_overload_fun(type_223,fun_name_224,left_value_217,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_219,0), "18field.c", 1079, 10)),self->mBreakGuard,info);
    }
    # 1235 "18field.c"
    # 1082 "18field.c"
    if(_if_conditional316=!calling_fun_225,    _if_conditional316) {
        # 1233 "18field.c"
        # 1083 "18field.c"
        if(_if_conditional317=gComeDebug&&left_value_217->var&&left_value_217->var->mType&&list$1sNodeph_length(left_value_217->var->mType->mArrayNum)>0,        _if_conditional317) {
            # 1085 "18field.c"
            var_type_226=left_value_217->var->mType;
            # 1086 "18field.c"
            result_type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(left_type_218))));
            come_call_finalizer2(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1092 "18field.c"
            # 1088 "18field.c"
            if(result_type_227->mOriginalLoadVarType->v1) {
                # 1089 "18field.c"
                __dec_obj129=result_type_227;
                result_type_227=(struct sType*)come_increment_ref_count(result_type_227->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 1126 "18field.c"
            # 1092 "18field.c"
            if(_if_conditional319=list$1sNodeph_length(result_type_227->mArrayNum)>0,            _if_conditional319) {
                # 1093 "18field.c"
                n_228=list$1sNodeph_length(result_type_227->mArrayNum)-list$1CVALUEph_length(array_num_219);
                # 1115 "18field.c"
                # 1095 "18field.c"
                if(_if_conditional320=n_228==0,                _if_conditional320) {
                    # 1096 "18field.c"
                    __dec_obj130=result_type_227;
                    result_type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_clone(left_type_218))));
                    come_call_finalizer2(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1100 "18field.c"
                    # 1097 "18field.c"
                    if(left_type_218->mOriginalLoadVarType->v1) {
                        # 1098 "18field.c"
                        __dec_obj131=result_type_227;
                        result_type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_clone(left_type_218->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1100 "18field.c"
                    list$1sNodeph_reset(result_type_227->mArrayNum);
                }
                else {
                    # 1115 "18field.c"
                    # 1102 "18field.c"
                    if(_if_conditional322=n_228>0,                    _if_conditional322) {
                        # 1106 "18field.c"
                        for(                        i_229=0;                        i_229<n_228;                        i_229++                        ){
                            # 1104 "18field.c"
                            list$1sNodeph_delete(result_type_227->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1115 "18field.c"
                        # 1107 "18field.c"
                        if(_if_conditional323=n_228<0,                        _if_conditional323) {
                            # 1108 "18field.c"
                            list$1sNodeph_reset(result_type_227->mArrayNum);
                            # 1109 "18field.c"
                            result_type_227->mPointerNum+=n_228;
                            # 1114 "18field.c"
                            # 1111 "18field.c"
                            if(_if_conditional324=result_type_227->mPointerNum<0,                            _if_conditional324) {
                                # 1112 "18field.c"
                                result_type_227->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1124 "18field.c"
                # 1117 "18field.c"
                if(_if_conditional325=result_type_227->mPointerNum>0,                _if_conditional325) {
                    # 1118 "18field.c"
                    result_type_227->mPointerNum-=list$1CVALUEph_length(array_num_219);
                    # 1123 "18field.c"
                    # 1120 "18field.c"
                    if(_if_conditional326=result_type_227->mPointerNum<0,                    _if_conditional326) {
                        # 1121 "18field.c"
                        result_type_227->mPointerNum=0;
                    }
                }
            }
            # 1126 "18field.c"
            come_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1126, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1128 "18field.c"
            buf_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value284=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value283=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1128, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1131 "18field.c"
            result_type2_232=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(result_type_227))));
            come_call_finalizer2(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1132 "18field.c"
            result_type2_232->mPointerNum++;
            # 1136 "18field.c"
            buffer_append_str(buf_231,((char*)(right_value287=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value286=make_type_name_string(result_type2_232,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_217->c_value))));
            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1141 "18field.c"
            for(            o2_saved_233=(struct list$1CVALUEph*)come_increment_ref_count((array_num_219)),it_234=list$1CVALUEph_begin((o2_saved_233));            !list$1CVALUEph_end((o2_saved_233));            it_234=list$1CVALUEph_next((o2_saved_233))            ){
                # 1139 "18field.c"
                buffer_append_str(buf_231,((char*)(right_value288=xsprintf("[%s]",it_234->c_value))));
                right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1141 "18field.c"
            buffer_append_str(buf_231,((char*)(right_value289=xsprintf(",%s,%s+(",left_value_217->c_value,left_value_217->c_value))));
            right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1142 "18field.c"
            i_235=0;
            # 1158 "18field.c"
            for(            o2_saved_236=(struct list$1sNodeph*)come_increment_ref_count((var_type_226->mArrayNum)),it_237=list$1sNodeph_begin((o2_saved_236));            !list$1sNodeph_end((o2_saved_236));            it_237=list$1sNodeph_next((o2_saved_236))            ){
                # 1149 "18field.c"
                # 1144 "18field.c"
                if(_if_conditional327=!node_compile(it_237,info),                _if_conditional327) {
                    # 1145 "18field.c"
                    err_msg(info,"invalid array num");
                    # 1146 "18field.c"
                    exit(1);
                }
                # 1149 "18field.c"
                come_value_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1150 "18field.c"
                dec_stack_ptr(1,info);
                # 1152 "18field.c"
                buffer_append_str(buf_231,((char*)(right_value291=xsprintf("%s",come_value_238->c_value))));
                right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1156 "18field.c"
                # 1153 "18field.c"
                if(_if_conditional328=i_235!=list$1sNodeph_length(var_type_226->mArrayNum)-1,                _if_conditional328) {
                    # 1154 "18field.c"
                    buffer_append_str(buf_231,"*");
                }
                # 1156 "18field.c"
                i_235++;
                come_call_finalizer2(CVALUE_finalize,come_value_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1158 "18field.c"
            buffer_append_str(buf_231,((char*)(right_value292=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1160 "18field.c"
            left_value_code_239=(char*)come_increment_ref_count(((char*)(right_value293=buffer_to_string(buf_231))));
            right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1162 "18field.c"
            __dec_obj132=come_value_230->c_value;
            come_value_230->c_value=(char*)come_increment_ref_count(((char*)(right_value294=xsprintf("%s",left_value_code_239))));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1164 "18field.c"
            __dec_obj133=come_value_230->type;
            come_value_230->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_clone(result_type_227))));
            come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1165 "18field.c"
            come_value_230->var=((void*)0);
            # 1167 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_230));
            # 1169 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_230->c_value);
            come_call_finalizer2(sType_finalize,result_type_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_239 = come_decrement_ref_count2(left_value_code_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1172 "18field.c"
            come_value_240=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value296=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1172, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1174 "18field.c"
            buf_241=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value298=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value297=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1174, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1176 "18field.c"
            buffer_append_str(buf_241,left_value_217->c_value);
            # 1182 "18field.c"
            for(            o2_saved_242=(struct list$1CVALUEph*)come_increment_ref_count((array_num_219)),it_243=list$1CVALUEph_begin((o2_saved_242));            !list$1CVALUEph_end((o2_saved_242));            it_243=list$1CVALUEph_next((o2_saved_242))            ){
                # 1179 "18field.c"
                buffer_append_str(buf_241,((char*)(right_value299=xsprintf("[%s]",it_243->c_value))));
                right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1182 "18field.c"
            left_value_code_244=(char*)come_increment_ref_count(((char*)(right_value300=buffer_to_string(buf_241))));
            right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1184 "18field.c"
            __dec_obj134=come_value_240->c_value;
            come_value_240->c_value=(char*)come_increment_ref_count(((char*)(right_value301=xsprintf("%s",left_value_code_244))));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1186 "18field.c"
            result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_clone(left_type_218))));
            come_call_finalizer2(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1192 "18field.c"
            # 1188 "18field.c"
            if(result_type_245->mOriginalLoadVarType->v1) {
                # 1189 "18field.c"
                __dec_obj135=result_type_245;
                result_type_245=(struct sType*)come_increment_ref_count(result_type_245->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 1226 "18field.c"
            # 1192 "18field.c"
            if(_if_conditional330=list$1sNodeph_length(result_type_245->mArrayNum)>0,            _if_conditional330) {
                # 1193 "18field.c"
                n_246=list$1sNodeph_length(result_type_245->mArrayNum)-list$1CVALUEph_length(array_num_219);
                # 1215 "18field.c"
                # 1195 "18field.c"
                if(_if_conditional331=n_246==0,                _if_conditional331) {
                    # 1196 "18field.c"
                    __dec_obj136=result_type_245;
                    result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_type_218))));
                    come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1200 "18field.c"
                    # 1197 "18field.c"
                    if(left_type_218->mOriginalLoadVarType->v1) {
                        # 1198 "18field.c"
                        __dec_obj137=result_type_245;
                        result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_type_218->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1200 "18field.c"
                    list$1sNodeph_reset(result_type_245->mArrayNum);
                }
                else {
                    # 1215 "18field.c"
                    # 1202 "18field.c"
                    if(_if_conditional333=n_246>0,                    _if_conditional333) {
                        # 1206 "18field.c"
                        for(                        i_247=0;                        i_247<n_246;                        i_247++                        ){
                            # 1204 "18field.c"
                            list$1sNodeph_delete(result_type_245->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1215 "18field.c"
                        # 1207 "18field.c"
                        if(_if_conditional334=n_246<0,                        _if_conditional334) {
                            # 1208 "18field.c"
                            list$1sNodeph_reset(result_type_245->mArrayNum);
                            # 1209 "18field.c"
                            result_type_245->mPointerNum+=n_246;
                            # 1214 "18field.c"
                            # 1211 "18field.c"
                            if(_if_conditional335=result_type_245->mPointerNum<0,                            _if_conditional335) {
                                # 1212 "18field.c"
                                result_type_245->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1224 "18field.c"
                # 1217 "18field.c"
                if(_if_conditional336=result_type_245->mPointerNum>0,                _if_conditional336) {
                    # 1218 "18field.c"
                    result_type_245->mPointerNum-=list$1CVALUEph_length(array_num_219);
                    # 1223 "18field.c"
                    # 1220 "18field.c"
                    if(_if_conditional337=result_type_245->mPointerNum<0,                    _if_conditional337) {
                        # 1221 "18field.c"
                        result_type_245->mPointerNum=0;
                    }
                }
            }
            # 1226 "18field.c"
            __dec_obj138=come_value_240->type;
            come_value_240->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(result_type_245))));
            come_call_finalizer2(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1227 "18field.c"
            come_value_240->var=((void*)0);
            # 1229 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_240));
            # 1231 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_240->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_244 = come_decrement_ref_count2(left_value_code_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    # 1235 "18field.c"
    __result168__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result168__;
    come_call_finalizer2(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1240 "18field.c"
    __result169__ = self->sline;
    return __result169__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value306;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
    # 1245 "18field.c"
    __result170__ = __result_obj__ = ((char*)(right_value306=__builtin_string(self->sname)));
    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result170__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value307;
char* __dec_obj139;
void* right_value308;
struct list$1sNodeph* __dec_obj140;
void* right_value309;
struct sNode* __dec_obj141;
struct sLoadRangeArrayNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
    # 1260 "18field.c"
    self->sline=info->sline;
    # 1261 "18field.c"
    __dec_obj139=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(info->sname))));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1263 "18field.c"
    __dec_obj140=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value308=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1265 "18field.c"
    __dec_obj141=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=sNode_clone(left))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1266 "18field.c"
    self->mQuote=quote;
    # 1268 "18field.c"
    __result171__ = __result_obj__ = self;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result171__;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1273 "18field.c"
    __result172__ = (_Bool)0;
    return __result172__;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
void* right_value310;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
    # 1278 "18field.c"
    __result173__ = __result_obj__ = ((char*)(right_value310=__builtin_string("sLoadRangeArrayNode")));
    right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_248;
struct list$1sNodeph* array_num_nodes_249;
_Bool _if_conditional341;
_Bool __result174__;
void* right_value311;
struct CVALUE* left_value_250;
void* right_value312;
struct sType* left_type_251;
void* right_value313;
void* right_value314;
struct list$1CVALUEph* array_num_252;
struct list$1sNodeph* o2_saved_253;
struct sNode* it_254;
_Bool _if_conditional342;
_Bool __result175__;
void* right_value315;
struct CVALUE* c_value_255;
void* right_value316;
struct sType* type_256;
char* fun_name_257;
_Bool calling_fun_258;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value317;
struct CVALUE* come_value_259;
void* right_value318;
void* right_value319;
struct buffer* buf_260;
struct list$1CVALUEph* o2_saved_261;
struct CVALUE* it_262;
void* right_value320;
void* right_value321;
char* left_value_code_263;
void* right_value322;
char* __dec_obj142;
void* right_value323;
struct sType* result_type_264;
_Bool _if_conditional345;
struct sType* __dec_obj143;
_Bool _if_conditional346;
int n_265;
_Bool _if_conditional347;
void* right_value324;
struct sType* __dec_obj144;
_Bool _if_conditional348;
void* right_value325;
struct sType* __dec_obj145;
_Bool _if_conditional349;
int i_266;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value326;
struct sType* __dec_obj146;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_248, 0, sizeof(struct sNode*));
memset(&array_num_nodes_249, 0, sizeof(struct list$1sNodeph*));
right_value311 = (void*)0;
memset(&left_value_250, 0, sizeof(struct CVALUE*));
right_value312 = (void*)0;
memset(&left_type_251, 0, sizeof(struct sType*));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&array_num_252, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_253, 0, sizeof(struct list$1sNodeph*));
memset(&it_254, 0, sizeof(struct sNode*));
right_value315 = (void*)0;
memset(&c_value_255, 0, sizeof(struct CVALUE*));
right_value316 = (void*)0;
memset(&type_256, 0, sizeof(struct sType*));
memset(&fun_name_257, 0, sizeof(char*));
memset(&calling_fun_258, 0, sizeof(_Bool));
right_value317 = (void*)0;
memset(&come_value_259, 0, sizeof(struct CVALUE*));
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&buf_260, 0, sizeof(struct buffer*));
memset(&o2_saved_261, 0, sizeof(struct list$1CVALUEph*));
memset(&it_262, 0, sizeof(struct CVALUE*));
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&left_value_code_263, 0, sizeof(char*));
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&result_type_264, 0, sizeof(struct sType*));
memset(&n_265, 0, sizeof(int));
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&i_266, 0, sizeof(int));
right_value326 = (void*)0;
    # 1283 "18field.c"
    left_248=self->mLeft;
    # 1284 "18field.c"
    array_num_nodes_249=self->mArrayNum;
    # 1290 "18field.c"
    # 1286 "18field.c"
    if(_if_conditional341=!node_compile(left_248,info),    _if_conditional341) {
        # 1287 "18field.c"
        __result174__ = (_Bool)0;
        return __result174__;
    }
    # 1290 "18field.c"
    left_value_250=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1291 "18field.c"
    dec_stack_ptr(1,info);
    # 1293 "18field.c"
    left_type_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value312=sType_clone(left_value_250->type))));
    come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1295 "18field.c"
    array_num_252=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value314=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value313=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1295, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1308 "18field.c"
    for(    o2_saved_253=(array_num_nodes_249),it_254=list$1sNodeph_begin((o2_saved_253));    !list$1sNodeph_end((o2_saved_253));    it_254=list$1sNodeph_next((o2_saved_253))    ){
        # 1302 "18field.c"
        # 1298 "18field.c"
        if(_if_conditional342=!node_compile(it_254,info),        _if_conditional342) {
            # 1299 "18field.c"
            __result175__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result175__;
        }
        # 1302 "18field.c"
        c_value_255=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value315=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1303 "18field.c"
        dec_stack_ptr(1,info);
        # 1305 "18field.c"
        list$1CVALUEph_push_back(array_num_252,(struct CVALUE*)come_increment_ref_count(c_value_255));
        come_call_finalizer2(CVALUE_finalize,c_value_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1308 "18field.c"
    type_256=(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_clone(left_value_250->type))));
    come_call_finalizer2(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1310 "18field.c"
    fun_name_257="operator_load_range_element";
    # 1311 "18field.c"
    # 1319 "18field.c"
    # 1312 "18field.c"
    if(self->mQuote) {
        # 1313 "18field.c"
        calling_fun_258=(_Bool)0;
    }
    else {
        # 1316 "18field.c"
        calling_fun_258=operator_overload_fun2(type_256,fun_name_257,left_value_250,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_252,0), "18field.c", 1316, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_252,1), "18field.c", 1316, 12)),info);
    }
    # 1382 "18field.c"
    # 1319 "18field.c"
    if(_if_conditional344=!calling_fun_258,    _if_conditional344) {
        # 1320 "18field.c"
        come_value_259=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value317=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1320, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1322 "18field.c"
        buf_260=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value318=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1322, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1324 "18field.c"
        buffer_append_str(buf_260,left_value_250->c_value);
        # 1330 "18field.c"
        for(        o2_saved_261=(struct list$1CVALUEph*)come_increment_ref_count((array_num_252)),it_262=list$1CVALUEph_begin((o2_saved_261));        !list$1CVALUEph_end((o2_saved_261));        it_262=list$1CVALUEph_next((o2_saved_261))        ){
            # 1327 "18field.c"
            buffer_append_str(buf_260,((char*)(right_value320=xsprintf("[%s]",it_262->c_value))));
            right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1330 "18field.c"
        left_value_code_263=(char*)come_increment_ref_count(((char*)(right_value321=buffer_to_string(buf_260))));
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1332 "18field.c"
        __dec_obj142=come_value_259->c_value;
        come_value_259->c_value=(char*)come_increment_ref_count(((char*)(right_value322=xsprintf("%s",left_value_code_263))));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1334 "18field.c"
        result_type_264=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(left_type_251))));
        come_call_finalizer2(sType_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1340 "18field.c"
        # 1336 "18field.c"
        if(result_type_264->mOriginalLoadVarType->v1) {
            # 1337 "18field.c"
            __dec_obj143=result_type_264;
            result_type_264=(struct sType*)come_increment_ref_count(result_type_264->mOriginalLoadVarType->v1);
            come_call_finalizer2(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 1374 "18field.c"
        # 1340 "18field.c"
        if(_if_conditional346=list$1sNodeph_length(result_type_264->mArrayNum)>0,        _if_conditional346) {
            # 1341 "18field.c"
            n_265=list$1sNodeph_length(result_type_264->mArrayNum)-list$1CVALUEph_length(array_num_252);
            # 1363 "18field.c"
            # 1343 "18field.c"
            if(_if_conditional347=n_265==0,            _if_conditional347) {
                # 1344 "18field.c"
                __dec_obj144=result_type_264;
                result_type_264=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(left_type_251))));
                come_call_finalizer2(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1348 "18field.c"
                # 1345 "18field.c"
                if(left_type_251->mOriginalLoadVarType->v1) {
                    # 1346 "18field.c"
                    __dec_obj145=result_type_264;
                    result_type_264=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_clone(left_type_251->mOriginalLoadVarType->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 1348 "18field.c"
                list$1sNodeph_reset(result_type_264->mArrayNum);
            }
            else {
                # 1363 "18field.c"
                # 1350 "18field.c"
                if(_if_conditional349=n_265>0,                _if_conditional349) {
                    # 1354 "18field.c"
                    for(                    i_266=0;                    i_266<n_265;                    i_266++                    ){
                        # 1352 "18field.c"
                        list$1sNodeph_delete(result_type_264->mArrayNum,-1,-1);
                    }
                }
                else {
                    # 1363 "18field.c"
                    # 1355 "18field.c"
                    if(_if_conditional350=n_265<0,                    _if_conditional350) {
                        # 1356 "18field.c"
                        list$1sNodeph_reset(result_type_264->mArrayNum);
                        # 1357 "18field.c"
                        result_type_264->mPointerNum+=n_265;
                        # 1362 "18field.c"
                        # 1359 "18field.c"
                        if(_if_conditional351=result_type_264->mPointerNum<0,                        _if_conditional351) {
                            # 1360 "18field.c"
                            result_type_264->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            # 1372 "18field.c"
            # 1365 "18field.c"
            if(_if_conditional352=result_type_264->mPointerNum>0,            _if_conditional352) {
                # 1366 "18field.c"
                result_type_264->mPointerNum-=list$1CVALUEph_length(array_num_252);
                # 1371 "18field.c"
                # 1368 "18field.c"
                if(_if_conditional353=result_type_264->mPointerNum<0,                _if_conditional353) {
                    # 1369 "18field.c"
                    result_type_264->mPointerNum=0;
                }
            }
        }
        # 1374 "18field.c"
        __dec_obj146=come_value_259->type;
        come_value_259->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(result_type_264))));
        come_call_finalizer2(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1375 "18field.c"
        come_value_259->var=((void*)0);
        # 1377 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_259));
        # 1379 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_259->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_263 = come_decrement_ref_count2(left_value_code_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1382 "18field.c"
    __result176__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result176__;
    come_call_finalizer2(CVALUE_finalize,left_value_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1387 "18field.c"
    __result177__ = self->sline;
    return __result177__;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value327;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
    # 1392 "18field.c"
    __result178__ = __result_obj__ = ((char*)(right_value327=__builtin_string(self->sname)));
    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result178__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1397 "18field.c"
    __result179__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result179__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1402 "18field.c"
    err_msg(info,"parse_method_call is failed");
    # 1403 "18field.c"
    exit(2);
    # 1405 "18field.c"
    __result180__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result180__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional19;
_Bool range_array_267;
char* p_268;
int sline_269;
_Bool _if_conditional354;
_Bool no_comma_270;
_Bool no_output_err_271;
_Bool no_output_come_code_272;
void* right_value328;
struct sNode* exp_273;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool quote_274;
_Bool _if_conditional357;
void* right_value329;
void* right_value330;
struct list$1sNodeph* array_num_275;
void* right_value331;
struct sNode* node2_276;
_Bool _if_conditional360;
void* right_value335;
struct sNode* node3_280;
void* right_value336;
void* right_value337;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* right_value342;
struct sNode* __dec_obj153;
_Bool _if_conditional370;
_Bool quote_282;
_Bool _if_conditional371;
_Bool range_283;
void* right_value343;
void* right_value344;
struct list$1sNodeph* array_num_284;
_Bool _while_condtional20;
_Bool range_array2_285;
char* p_286;
int sline_287;
_Bool _if_conditional372;
_Bool no_comma_288;
_Bool no_output_err_289;
_Bool no_output_come_code_290;
void* right_value345;
struct sNode* exp_291;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
void* right_value346;
struct sNode* node2_292;
_Bool _if_conditional376;
_Bool break_guard_293;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value347;
struct sNode* right_node_294;
void* right_value348;
void* right_value349;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value355;
struct sNode* __dec_obj158;
void* right_value356;
void* right_value357;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value362;
struct sNode* __dec_obj162;
_Bool _if_conditional400;
_Bool no_comma_297;
void* right_value363;
struct sNode* begin_298;
void* right_value364;
struct sNode* end_299;
void* right_value365;
void* right_value366;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value372;
struct sNode* __dec_obj167;
_Bool _if_conditional411;
void* right_value373;
void* right_value374;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value378;
struct sNode* __dec_obj170;
_Bool _if_conditional419;
_Bool _if_conditional420;
void* right_value379;
void* right_value380;
void* right_value381;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* right_value385;
struct sNode* __dec_obj173;
void* right_value386;
char* field_name_303;
_Bool parse_method_generics_type_304;
char* p_305;
int sline_306;
_Bool _if_conditional428;
_Bool _if_conditional429;
void* right_value387;
char* word_307;
_Bool _if_conditional430;
_Bool _if_conditional431;
void* right_value388;
struct sNode* right_node_308;
void* right_value389;
void* right_value390;
struct sNode* _inf_value8;
struct sStoreFieldNode* _inf_obj_value8;
void* right_value396;
struct sNode* __dec_obj178;
_Bool _if_conditional442;
_Bool _if_conditional443;
void* right_value397;
void* right_value398;
struct sNode* __dec_obj179;
_Bool _if_conditional444;
void* right_value399;
void* right_value400;
struct sNode* __dec_obj180;
void* right_value401;
void* right_value402;
struct sNode* __dec_obj181;
void* right_value403;
void* right_value404;
struct sNode* _inf_value9;
struct sLoadFieldNode* _inf_obj_value9;
void* right_value409;
struct sNode* __dec_obj185;
void* right_value410;
struct sNode* node2_311;
_Bool _if_conditional453;
struct sNode* __dec_obj186;
struct sNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_267, 0, sizeof(_Bool));
memset(&p_268, 0, sizeof(char*));
memset(&sline_269, 0, sizeof(int));
memset(&no_comma_270, 0, sizeof(_Bool));
memset(&no_output_err_271, 0, sizeof(_Bool));
memset(&no_output_come_code_272, 0, sizeof(_Bool));
right_value328 = (void*)0;
memset(&exp_273, 0, sizeof(struct sNode*));
memset(&quote_274, 0, sizeof(_Bool));
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&array_num_275, 0, sizeof(struct list$1sNodeph*));
right_value331 = (void*)0;
memset(&node2_276, 0, sizeof(struct sNode*));
right_value335 = (void*)0;
memset(&node3_280, 0, sizeof(struct sNode*));
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value342 = (void*)0;
memset(&quote_282, 0, sizeof(_Bool));
memset(&range_283, 0, sizeof(_Bool));
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&array_num_284, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_285, 0, sizeof(_Bool));
memset(&p_286, 0, sizeof(char*));
memset(&sline_287, 0, sizeof(int));
memset(&no_comma_288, 0, sizeof(_Bool));
memset(&no_output_err_289, 0, sizeof(_Bool));
memset(&no_output_come_code_290, 0, sizeof(_Bool));
right_value345 = (void*)0;
memset(&exp_291, 0, sizeof(struct sNode*));
right_value346 = (void*)0;
memset(&node2_292, 0, sizeof(struct sNode*));
memset(&break_guard_293, 0, sizeof(_Bool));
right_value347 = (void*)0;
memset(&right_node_294, 0, sizeof(struct sNode*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value362 = (void*)0;
memset(&no_comma_297, 0, sizeof(_Bool));
right_value363 = (void*)0;
memset(&begin_298, 0, sizeof(struct sNode*));
right_value364 = (void*)0;
memset(&end_299, 0, sizeof(struct sNode*));
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&field_name_303, 0, sizeof(char*));
memset(&parse_method_generics_type_304, 0, sizeof(_Bool));
memset(&p_305, 0, sizeof(char*));
memset(&sline_306, 0, sizeof(int));
right_value387 = (void*)0;
memset(&word_307, 0, sizeof(char*));
right_value388 = (void*)0;
memset(&right_node_308, 0, sizeof(struct sNode*));
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&node2_311, 0, sizeof(struct sNode*));
    # 1662 "18field.c"
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        # 1411 "18field.c"
        range_array_267=(_Bool)0;
        # 1440 "18field.c"
        {
            # 1413 "18field.c"
            p_268=info->p;
            # 1414 "18field.c"
            sline_269=info->sline;
            # 1436 "18field.c"
            # 1416 "18field.c"
            if(_if_conditional354=*info->p==91,            _if_conditional354) {
                # 1417 "18field.c"
                info->p++;
                # 1418 "18field.c"
                skip_spaces_and_lf(info);
                # 1420 "18field.c"
                no_comma_270=info->no_comma;
                # 1421 "18field.c"
                no_output_err_271=info->no_output_err;
                # 1422 "18field.c"
                no_output_come_code_272=info->no_output_come_code;
                # 1423 "18field.c"
                info->no_output_err=(_Bool)1;
                # 1424 "18field.c"
                info->no_comma=(_Bool)1;
                # 1425 "18field.c"
                info->no_output_come_code=(_Bool)1;
                # 1426 "18field.c"
                exp_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=expression_v13(info))));
                if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1427 "18field.c"
                info->no_comma=no_comma_270;
                # 1428 "18field.c"
                info->no_output_err=no_output_err_271;
                # 1429 "18field.c"
                info->no_output_come_code=no_output_come_code_272;
                # 1434 "18field.c"
                # 1431 "18field.c"
                if(_if_conditional355=*info->p==46&&*(info->p+1)==46,                _if_conditional355) {
                    # 1432 "18field.c"
                    range_array_267=(_Bool)1;
                }
                if(exp_273) { exp_273 = come_decrement_ref_count2(exp_273, ((struct sNode*)exp_273)->finalize, ((struct sNode*)exp_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1436 "18field.c"
            info->p=p_268;
            # 1437 "18field.c"
            info->sline=sline_269;
        }
        # 1660 "18field.c"
        # 1440 "18field.c"
        if(_if_conditional356=range_array_267&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional356) {
            # 1441 "18field.c"
            quote_274=*info->p==92;
            # 1445 "18field.c"
            # 1442 "18field.c"
            if(quote_274) {
                # 1443 "18field.c"
                info->p++;
            }
            # 1445 "18field.c"
            info->p++;
            # 1446 "18field.c"
            skip_spaces_and_lf(info);
            # 1448 "18field.c"
            array_num_275=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value330=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value329=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1448, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 1450 "18field.c"
            skip_pointer_attribute(info);
            # 1452 "18field.c"
            node2_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=expression_v13(info))));
            if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1454 "18field.c"
            list$1sNodeph_push_back(array_num_275,(struct sNode*)come_increment_ref_count(node2_276));
            # 1469 "18field.c"
            # 1456 "18field.c"
            if(_if_conditional360=*info->p==46&&*(info->p+1)==46,            _if_conditional360) {
                # 1457 "18field.c"
                info->p+=2;
                # 1458 "18field.c"
                skip_spaces_and_lf(info);
                # 1460 "18field.c"
                skip_pointer_attribute(info);
                # 1462 "18field.c"
                node3_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=expression_v13(info))));
                if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1464 "18field.c"
                list$1sNodeph_push_back(array_num_275,(struct sNode*)come_increment_ref_count(node3_280));
                # 1466 "18field.c"
                expected_next_character(93,info);
                if(node3_280) { node3_280 = come_decrement_ref_count2(node3_280, ((struct sNode*)node3_280)->finalize, ((struct sNode*)node3_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1469 "18field.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1469, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value337=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value336=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1469, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_275),quote_274,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value2->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value2->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj153=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=_inf_value2)));
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer2(list$1sNodephp_finalize,array_num_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node2_276) { node2_276 = come_decrement_ref_count2(node2_276, ((struct sNode*)node2_276)->finalize, ((struct sNode*)node2_276)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1660 "18field.c"
            # 1471 "18field.c"
            if(_if_conditional370=!range_array_267&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional370) {
                # 1472 "18field.c"
                quote_282=*info->p==92;
                # 1477 "18field.c"
                # 1473 "18field.c"
                if(quote_282) {
                    # 1474 "18field.c"
                    info->p++;
                }
                # 1477 "18field.c"
                range_283=(_Bool)0;
                # 1478 "18field.c"
                array_num_284=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value344=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value343=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1478, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1536 "18field.c"
                while(_while_condtional20=1,                _while_condtional20) {
                    # 1480 "18field.c"
                    range_array2_285=(_Bool)0;
                    # 1509 "18field.c"
                    {
                        # 1482 "18field.c"
                        p_286=info->p;
                        # 1483 "18field.c"
                        sline_287=info->sline;
                        # 1505 "18field.c"
                        # 1485 "18field.c"
                        if(_if_conditional372=*info->p==91,                        _if_conditional372) {
                            # 1486 "18field.c"
                            info->p++;
                            # 1487 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1489 "18field.c"
                            no_comma_288=info->no_comma;
                            # 1490 "18field.c"
                            no_output_err_289=info->no_output_err;
                            # 1491 "18field.c"
                            no_output_come_code_290=info->no_output_come_code;
                            # 1492 "18field.c"
                            info->no_output_err=(_Bool)1;
                            # 1493 "18field.c"
                            info->no_comma=(_Bool)1;
                            # 1494 "18field.c"
                            info->no_output_come_code=(_Bool)1;
                            # 1495 "18field.c"
                            exp_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=expression_v13(info))));
                            if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1496 "18field.c"
                            info->no_comma=no_comma_288;
                            # 1497 "18field.c"
                            info->no_output_err=no_output_err_289;
                            # 1498 "18field.c"
                            info->no_output_come_code=no_output_come_code_290;
                            # 1503 "18field.c"
                            # 1500 "18field.c"
                            if(_if_conditional373=*info->p==46&&*(info->p+1)==46,                            _if_conditional373) {
                                # 1501 "18field.c"
                                range_array2_285=(_Bool)1;
                            }
                            if(exp_291) { exp_291 = come_decrement_ref_count2(exp_291, ((struct sNode*)exp_291)->finalize, ((struct sNode*)exp_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 1505 "18field.c"
                        info->p=p_286;
                        # 1506 "18field.c"
                        info->sline=sline_287;
                    }
                    # 1534 "18field.c"
                    # 1509 "18field.c"
                    if(range_array2_285) {
                        # 1510 "18field.c"
                        break;
                    }
                    else {
                        # 1534 "18field.c"
                        # 1512 "18field.c"
                        if(_if_conditional375=*info->p==91,                        _if_conditional375) {
                            # 1513 "18field.c"
                            info->p++;
                            # 1514 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1516 "18field.c"
                            skip_pointer_attribute(info);
                            # 1518 "18field.c"
                            node2_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=expression_v13(info))));
                            if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1520 "18field.c"
                            list$1sNodeph_push_back(array_num_284,(struct sNode*)come_increment_ref_count(node2_292));
                            # 1530 "18field.c"
                            # 1522 "18field.c"
                            if(_if_conditional376=*info->p==93,                            _if_conditional376) {
                                # 1523 "18field.c"
                                info->p++;
                                # 1524 "18field.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 1527 "18field.c"
                                err_msg(info,"require ] character");
                                # 1528 "18field.c"
                                exit(2);
                            }
                            if(node2_292) { node2_292 = come_decrement_ref_count2(node2_292, ((struct sNode*)node2_292)->finalize, ((struct sNode*)node2_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 1532 "18field.c"
                            break;
                        }
                    }
                }
                # 1536 "18field.c"
                break_guard_293=(_Bool)0;
                # 1543 "18field.c"
                # 1537 "18field.c"
                if(_if_conditional377=*info->p==63&&*(info->p+1)==63,                _if_conditional377) {
                    # 1538 "18field.c"
                    info->p+=2;
                    # 1539 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1540 "18field.c"
                    break_guard_293=(_Bool)1;
                }
                # 1558 "18field.c"
                # 1543 "18field.c"
                if(_if_conditional378=*info->p==61&&*(info->p+1)!=61,                _if_conditional378) {
                    # 1544 "18field.c"
                    info->p++;
                    # 1545 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1547 "18field.c"
                    parse_sharp_v5(info);
                    # 1549 "18field.c"
                    right_node_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=expression_v13(info))));
                    if(right_value347) { right_value347 = come_decrement_ref_count2(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1551 "18field.c"
                    parse_sharp_v5(info);
                    # 1553 "18field.c"
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1553, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(right_value349=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value348=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1553, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_294),(struct list$1sNodeph*)come_increment_ref_count(array_num_284),quote_282,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sStoreArrayNode_sline;
                    _inf_value3->sname=(void*)sStoreArrayNode_sname;
                    _inf_value3->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj158=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=_inf_value3)));
                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_294) { right_node_294 = come_decrement_ref_count2(right_node_294, ((struct sNode*)right_node_294)->finalize, ((struct sNode*)right_node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1556 "18field.c"
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1556, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(right_value357=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value356=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1556, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_284),quote_282,break_guard_293,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sLoadArrayNode_sline;
                    _inf_value4->sname=(void*)sLoadArrayNode_sname;
                    _inf_value4->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj162=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=_inf_value4)));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer2(list$1sNodephp_finalize,array_num_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 1660 "18field.c"
                # 1559 "18field.c"
                if(_if_conditional400=*info->p==33&&*(info->p+1)==123,                _if_conditional400) {
                    # 1560 "18field.c"
                    info->p+=2;
                    # 1561 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1563 "18field.c"
                    no_comma_297=info->no_comma;
                    # 1564 "18field.c"
                    info->no_comma=(_Bool)1;
                    # 1565 "18field.c"
                    begin_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=expression_v13(info))));
                    if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1568 "18field.c"
                    info->no_comma=no_comma_297;
                    # 1568 "18field.c"
                    expected_next_character(44,info);
                    # 1570 "18field.c"
                    end_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=expression_v13(info))));
                    if(right_value364) { right_value364 = come_decrement_ref_count2(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1572 "18field.c"
                    expected_next_character(125,info);
                    # 1574 "18field.c"
                    parse_sharp_v5(info);
                    # 1576 "18field.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1576, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(right_value366=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value365=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1576, "sRangeCheckNode")))),node,begin_298,end_299,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sRangeCheckNode_sline;
                    _inf_value5->sname=(void*)sRangeCheckNode_sname;
                    _inf_value5->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj167=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=_inf_value5)));
                    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_298) { begin_298 = come_decrement_ref_count2(begin_298, ((struct sNode*)begin_298)->finalize, ((struct sNode*)begin_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_299) { end_299 = come_decrement_ref_count2(end_299, ((struct sNode*)end_299)->finalize, ((struct sNode*)end_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1660 "18field.c"
                    # 1578 "18field.c"
                    if(_if_conditional411=*info->p==33&&*(info->p+1)!=61,                    _if_conditional411) {
                        # 1579 "18field.c"
                        info->p++;
                        # 1580 "18field.c"
                        skip_spaces_and_lf(info);
                        # 1582 "18field.c"
                        parse_sharp_v5(info);
                        # 1584 "18field.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1584, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(right_value374=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value373=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1584, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNullCheckNode_sline;
                        _inf_value6->sname=(void*)sNullCheckNode_sname;
                        _inf_value6->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj170=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=_inf_value6)));
                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer2(sNullCheckNode_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNullCheckNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        # 1660 "18field.c"
                        # 1586 "18field.c"
                        if(_if_conditional419=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                        _if_conditional419) {
                            # 1596 "18field.c"
                            # 1587 "18field.c"
                            if(_if_conditional420=*info->p==46,                            _if_conditional420) {
                                # 1588 "18field.c"
                                info->p++;
                                # 1589 "18field.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 1592 "18field.c"
                                info->p+=2;
                                # 1593 "18field.c"
                                skip_spaces_and_lf(info);
                            }
                            # 1596 "18field.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1596, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullCheckNode*)(right_value381=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value379=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1596, "sNullCheckNode")))),((struct sNode*)(right_value380=sNode_clone(node))),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
                            _inf_value7->clone=(void*)sNullCheckNode_clone;
                            _inf_value7->compile=(void*)sNullCheckNode_compile;
                            _inf_value7->sline=(void*)sNullCheckNode_sline;
                            _inf_value7->sname=(void*)sNullCheckNode_sname;
                            _inf_value7->terminated=(void*)sNullCheckNode_terminated;
                            _inf_value7->kind=(void*)sNullCheckNode_kind;
                            __dec_obj173=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=_inf_value7)));
                            if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer2(sNullCheckNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            come_call_finalizer2(sNullCheckNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1598 "18field.c"
                            parse_sharp_v5(info);
                            # 1600 "18field.c"
                            field_name_303=(char*)come_increment_ref_count(((char*)(right_value386=parse_word(info))));
                            right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1602 "18field.c"
                            parse_sharp_v5(info);
                            # 1604 "18field.c"
                            parse_method_generics_type_304=(_Bool)0;
                            # 1626 "18field.c"
                            {
                                # 1606 "18field.c"
                                p_305=info->p;
                                # 1607 "18field.c"
                                sline_306=info->sline;
                                # 1622 "18field.c"
                                # 1609 "18field.c"
                                if(_if_conditional428=*info->p==60,                                _if_conditional428) {
                                    # 1610 "18field.c"
                                    info->p++;
                                    # 1611 "18field.c"
                                    skip_spaces_and_lf(info);
                                    # 1620 "18field.c"
                                    # 1613 "18field.c"
                                    if(_if_conditional429=xisalpha(*info->p)||*info->p==95,                                    _if_conditional429) {
                                        # 1614 "18field.c"
                                        word_307=(char*)come_increment_ref_count(((char*)(right_value387=parse_word(info))));
                                        right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1619 "18field.c"
                                        # 1616 "18field.c"
                                        if(_if_conditional430=is_type_name(word_307,info),                                        _if_conditional430) {
                                            # 1617 "18field.c"
                                            parse_method_generics_type_304=(_Bool)1;
                                        }
                                        word_307 = come_decrement_ref_count2(word_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                }
                                # 1622 "18field.c"
                                info->p=p_305;
                                # 1623 "18field.c"
                                info->sline=sline_306;
                            }
                            # 1650 "18field.c"
                            # 1626 "18field.c"
                            if(_if_conditional431=*info->p==61&&*(info->p+1)!=61,                            _if_conditional431) {
                                # 1627 "18field.c"
                                info->p++;
                                # 1628 "18field.c"
                                skip_spaces_and_lf(info);
                                # 1630 "18field.c"
                                parse_sharp_v5(info);
                                # 1632 "18field.c"
                                right_node_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=expression_v13(info))));
                                if(right_value388) { right_value388 = come_decrement_ref_count2(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1634 "18field.c"
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1634, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreFieldNode*)(right_value390=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value389=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1634, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_308),(char*)come_increment_ref_count(field_name_303),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreFieldNode_finalize;
                                _inf_value8->clone=(void*)sStoreFieldNode_clone;
                                _inf_value8->compile=(void*)sStoreFieldNode_compile;
                                _inf_value8->sline=(void*)sStoreFieldNode_sline;
                                _inf_value8->sname=(void*)sStoreFieldNode_sname;
                                _inf_value8->terminated=(void*)sStoreFieldNode_terminated;
                                _inf_value8->kind=(void*)sStoreFieldNode_kind;
                                __dec_obj178=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=_inf_value8)));
                                if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer2(sStoreFieldNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sStoreFieldNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(right_node_308) { right_node_308 = come_decrement_ref_count2(right_node_308, ((struct sNode*)right_node_308)->finalize, ((struct sNode*)right_node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 1650 "18field.c"
                                # 1636 "18field.c"
                                if(_if_conditional442=*info->p==40||*info->p==123||parse_method_generics_type_304||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                _if_conditional442) {
                                    # 1646 "18field.c"
                                    # 1637 "18field.c"
                                    if(_if_conditional443=string_operator_equals(field_name_303,"if"),                                    _if_conditional443) {
                                        # 1638 "18field.c"
                                        __dec_obj179=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=sNode_clone(node)))),info))));
                                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    else {
                                        # 1646 "18field.c"
                                        # 1640 "18field.c"
                                        if(_if_conditional444=string_operator_equals(field_name_303,"elif"),                                        _if_conditional444) {
                                            # 1641 "18field.c"
                                            __dec_obj180=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=sNode_clone(node)))),info))));
                                            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            # 1644 "18field.c"
                                            __dec_obj181=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_303),info))));
                                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                    }
                                }
                                else {
                                    # 1648 "18field.c"
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1648, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sLoadFieldNode*)(right_value404=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value403=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1648, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_303),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sLoadFieldNode_finalize;
                                    _inf_value9->clone=(void*)sLoadFieldNode_clone;
                                    _inf_value9->compile=(void*)sLoadFieldNode_compile;
                                    _inf_value9->sline=(void*)sLoadFieldNode_sline;
                                    _inf_value9->sname=(void*)sLoadFieldNode_sname;
                                    _inf_value9->terminated=(void*)sLoadFieldNode_terminated;
                                    _inf_value9->kind=(void*)sLoadFieldNode_kind;
                                    __dec_obj185=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=_inf_value9)));
                                    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer2(sLoadFieldNode_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sLoadFieldNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                            field_name_303 = come_decrement_ref_count2(field_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1652 "18field.c"
                            node2_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                            if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1658 "18field.c"
                            # 1654 "18field.c"
                            if(_if_conditional453=node2_311==((void*)0),                            _if_conditional453) {
                                # 1655 "18field.c"
                                if(node2_311) { node2_311 = come_decrement_ref_count2(node2_311, ((struct sNode*)node2_311)->finalize, ((struct sNode*)node2_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                break;
                            }
                            # 1658 "18field.c"
                            __dec_obj186=node;
                            node=(struct sNode*)come_increment_ref_count(node2_311);
                            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node2_311) { node2_311 = come_decrement_ref_count2(node2_311, ((struct sNode*)node2_311)->finalize, ((struct sNode*)node2_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    # 1662 "18field.c"
    __result198__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result198__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional358;
void* right_value332;
struct list_item$1sNodeph* litem_277;
struct sNode* __dec_obj147;
_Bool _if_conditional359;
void* right_value333;
struct list_item$1sNodeph* litem_278;
struct sNode* __dec_obj148;
void* right_value334;
struct list_item$1sNodeph* litem_279;
struct sNode* __dec_obj149;
struct list$1sNodeph* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value332 = (void*)0;
memset(&litem_277, 0, sizeof(struct list_item$1sNodeph*));
right_value333 = (void*)0;
memset(&litem_278, 0, sizeof(struct list_item$1sNodeph*));
right_value334 = (void*)0;
memset(&litem_279, 0, sizeof(struct list_item$1sNodeph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional358=self->len==0,                _if_conditional358) {
                    # 226 "./comelang2.h"
                    litem_277=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value332=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_277->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_277->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj147=litem_277->item;
                    litem_277->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                    # 232 "./comelang2.h"
                    self->tail=litem_277;
                    # 233 "./comelang2.h"
                    self->head=litem_277;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional359=self->len==1,                    _if_conditional359) {
                        # 236 "./comelang2.h"
                        litem_278=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value333=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_278->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_278->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj148=litem_278->item;
                        litem_278->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                        # 242 "./comelang2.h"
                        self->tail=litem_278;
                        # 243 "./comelang2.h"
                        self->head->next=litem_278;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_279=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value334=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_279->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_279->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj149=litem_279->item;
                        litem_279->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                        # 252 "./comelang2.h"
                        self->tail->next=litem_279;
                        # 253 "./comelang2.h"
                        self->tail=litem_279;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result181__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result181__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sLoadRangeArrayNode_finalize"
                # 0 "sLoadRangeArrayNode_finalize"
                if(_if_conditional361=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional361) {
                    # 0 "sLoadRangeArrayNode_finalize"
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 2 "sLoadRangeArrayNode_finalize"
                # 1 "sLoadRangeArrayNode_finalize"
                if(_if_conditional362=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional362) {
                    # 1 "sLoadRangeArrayNode_finalize"
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sLoadRangeArrayNode_finalize"
                # 2 "sLoadRangeArrayNode_finalize"
                if(_if_conditional363=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional363) {
                    # 2 "sLoadRangeArrayNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional364;
struct sLoadRangeArrayNode* __result182__;
void* right_value338;
struct sLoadRangeArrayNode* result_281;
_Bool _if_conditional365;
void* right_value339;
struct sNode* __dec_obj150;
_Bool _if_conditional366;
void* right_value340;
struct list$1sNodeph* __dec_obj151;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
void* right_value341;
char* __dec_obj152;
struct sLoadRangeArrayNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value338 = (void*)0;
memset(&result_281, 0, sizeof(struct sLoadRangeArrayNode*));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
                # 3 "sLoadRangeArrayNode_clone"
                # 2 "sLoadRangeArrayNode_clone"
                if(_if_conditional364=self==(void*)0,                _if_conditional364) {
                    # 2 "sLoadRangeArrayNode_clone"
                    __result182__ = __result_obj__ = (void*)0;
                    return __result182__;
                }
                # 3 "sLoadRangeArrayNode_clone"
                result_281=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value338=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sLoadRangeArrayNode_clone"
                # 4 "sLoadRangeArrayNode_clone"
                if(_if_conditional365=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional365) {
                    # 4 "sLoadRangeArrayNode_clone"
                    __dec_obj150=result_281->mLeft;
                    result_281->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=sNode_clone(self->mLeft))));
                    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value339) { right_value339 = come_decrement_ref_count2(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "sLoadRangeArrayNode_clone"
                # 5 "sLoadRangeArrayNode_clone"
                if(_if_conditional366=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional366) {
                    # 5 "sLoadRangeArrayNode_clone"
                    __dec_obj151=result_281->mArrayNum;
                    result_281->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value340=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sLoadRangeArrayNode_clone"
                # 6 "sLoadRangeArrayNode_clone"
                if(_if_conditional367=self!=((void*)0),                _if_conditional367) {
                    # 6 "sLoadRangeArrayNode_clone"
                    result_281->mQuote=self->mQuote;
                }
                # 8 "sLoadRangeArrayNode_clone"
                # 7 "sLoadRangeArrayNode_clone"
                if(_if_conditional368=self!=((void*)0),                _if_conditional368) {
                    # 7 "sLoadRangeArrayNode_clone"
                    result_281->sline=self->sline;
                }
                # 9 "sLoadRangeArrayNode_clone"
                # 8 "sLoadRangeArrayNode_clone"
                if(_if_conditional369=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional369) {
                    # 8 "sLoadRangeArrayNode_clone"
                    __dec_obj152=result_281->sname;
                    result_281->sname=(char*)come_increment_ref_count(((char*)(right_value341=string_clone(self->sname))));
                    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 9 "sLoadRangeArrayNode_clone"
                __result183__ = __result_obj__ = result_281;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result183__;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sStoreArrayNode_finalize"
                        # 0 "sStoreArrayNode_finalize"
                        if(_if_conditional379=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional379) {
                            # 0 "sStoreArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sStoreArrayNode_finalize"
                        # 1 "sStoreArrayNode_finalize"
                        if(_if_conditional380=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional380) {
                            # 1 "sStoreArrayNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sStoreArrayNode_finalize"
                        # 2 "sStoreArrayNode_finalize"
                        if(_if_conditional381=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional381) {
                            # 2 "sStoreArrayNode_finalize"
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sStoreArrayNode_finalize"
                        # 3 "sStoreArrayNode_finalize"
                        if(_if_conditional382=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional382) {
                            # 3 "sStoreArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional383;
struct sStoreArrayNode* __result184__;
void* right_value350;
struct sStoreArrayNode* result_295;
_Bool _if_conditional384;
void* right_value351;
struct sNode* __dec_obj154;
_Bool _if_conditional385;
void* right_value352;
struct sNode* __dec_obj155;
_Bool _if_conditional386;
void* right_value353;
struct list$1sNodeph* __dec_obj156;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
void* right_value354;
char* __dec_obj157;
struct sStoreArrayNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value350 = (void*)0;
memset(&result_295, 0, sizeof(struct sStoreArrayNode*));
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
                        # 3 "sStoreArrayNode_clone"
                        # 2 "sStoreArrayNode_clone"
                        if(_if_conditional383=self==(void*)0,                        _if_conditional383) {
                            # 2 "sStoreArrayNode_clone"
                            __result184__ = __result_obj__ = (void*)0;
                            return __result184__;
                        }
                        # 3 "sStoreArrayNode_clone"
                        result_295=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value350=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer2(sStoreArrayNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sStoreArrayNode_clone"
                        # 4 "sStoreArrayNode_clone"
                        if(_if_conditional384=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional384) {
                            # 4 "sStoreArrayNode_clone"
                            __dec_obj154=result_295->mLeft;
                            result_295->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=sNode_clone(self->mLeft))));
                            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value351) { right_value351 = come_decrement_ref_count2(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sStoreArrayNode_clone"
                        # 5 "sStoreArrayNode_clone"
                        if(_if_conditional385=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional385) {
                            # 5 "sStoreArrayNode_clone"
                            __dec_obj155=result_295->mRight;
                            result_295->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=sNode_clone(self->mRight))));
                            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sStoreArrayNode_clone"
                        # 6 "sStoreArrayNode_clone"
                        if(_if_conditional386=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional386) {
                            # 6 "sStoreArrayNode_clone"
                            __dec_obj156=result_295->mArrayNum;
                            result_295->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value353=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 8 "sStoreArrayNode_clone"
                        # 7 "sStoreArrayNode_clone"
                        if(_if_conditional387=self!=((void*)0),                        _if_conditional387) {
                            # 7 "sStoreArrayNode_clone"
                            result_295->mQuote=self->mQuote;
                        }
                        # 9 "sStoreArrayNode_clone"
                        # 8 "sStoreArrayNode_clone"
                        if(_if_conditional388=self!=((void*)0),                        _if_conditional388) {
                            # 8 "sStoreArrayNode_clone"
                            result_295->sline=self->sline;
                        }
                        # 10 "sStoreArrayNode_clone"
                        # 9 "sStoreArrayNode_clone"
                        if(_if_conditional389=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional389) {
                            # 9 "sStoreArrayNode_clone"
                            __dec_obj157=result_295->sname;
                            result_295->sname=(char*)come_increment_ref_count(((char*)(right_value354=string_clone(self->sname))));
                            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 10 "sStoreArrayNode_clone"
                        __result185__ = __result_obj__ = result_295;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result185__;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sLoadArrayNode_finalize"
                        # 0 "sLoadArrayNode_finalize"
                        if(_if_conditional390=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional390) {
                            # 0 "sLoadArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sLoadArrayNode_finalize"
                        # 1 "sLoadArrayNode_finalize"
                        if(_if_conditional391=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional391) {
                            # 1 "sLoadArrayNode_finalize"
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sLoadArrayNode_finalize"
                        # 2 "sLoadArrayNode_finalize"
                        if(_if_conditional392=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional392) {
                            # 2 "sLoadArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional393;
struct sLoadArrayNode* __result186__;
void* right_value358;
struct sLoadArrayNode* result_296;
_Bool _if_conditional394;
void* right_value359;
struct sNode* __dec_obj159;
_Bool _if_conditional395;
void* right_value360;
struct list$1sNodeph* __dec_obj160;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
void* right_value361;
char* __dec_obj161;
struct sLoadArrayNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value358 = (void*)0;
memset(&result_296, 0, sizeof(struct sLoadArrayNode*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
                        # 3 "sLoadArrayNode_clone"
                        # 2 "sLoadArrayNode_clone"
                        if(_if_conditional393=self==(void*)0,                        _if_conditional393) {
                            # 2 "sLoadArrayNode_clone"
                            __result186__ = __result_obj__ = (void*)0;
                            return __result186__;
                        }
                        # 3 "sLoadArrayNode_clone"
                        result_296=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value358=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer2(sLoadArrayNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sLoadArrayNode_clone"
                        # 4 "sLoadArrayNode_clone"
                        if(_if_conditional394=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional394) {
                            # 4 "sLoadArrayNode_clone"
                            __dec_obj159=result_296->mLeft;
                            result_296->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=sNode_clone(self->mLeft))));
                            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sLoadArrayNode_clone"
                        # 5 "sLoadArrayNode_clone"
                        if(_if_conditional395=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional395) {
                            # 5 "sLoadArrayNode_clone"
                            __dec_obj160=result_296->mArrayNum;
                            result_296->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value360=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sLoadArrayNode_clone"
                        # 6 "sLoadArrayNode_clone"
                        if(_if_conditional396=self!=((void*)0),                        _if_conditional396) {
                            # 6 "sLoadArrayNode_clone"
                            result_296->mQuote=self->mQuote;
                        }
                        # 8 "sLoadArrayNode_clone"
                        # 7 "sLoadArrayNode_clone"
                        if(_if_conditional397=self!=((void*)0),                        _if_conditional397) {
                            # 7 "sLoadArrayNode_clone"
                            result_296->mBreakGuard=self->mBreakGuard;
                        }
                        # 9 "sLoadArrayNode_clone"
                        # 8 "sLoadArrayNode_clone"
                        if(_if_conditional398=self!=((void*)0),                        _if_conditional398) {
                            # 8 "sLoadArrayNode_clone"
                            result_296->sline=self->sline;
                        }
                        # 10 "sLoadArrayNode_clone"
                        # 9 "sLoadArrayNode_clone"
                        if(_if_conditional399=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional399) {
                            # 9 "sLoadArrayNode_clone"
                            __dec_obj161=result_296->sname;
                            result_296->sname=(char*)come_increment_ref_count(((char*)(right_value361=string_clone(self->sname))));
                            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 10 "sLoadArrayNode_clone"
                        __result187__ = __result_obj__ = result_296;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_296, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result187__;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sRangeCheckNode_finalize"
                        # 0 "sRangeCheckNode_finalize"
                        if(_if_conditional401=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional401) {
                            # 0 "sRangeCheckNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sRangeCheckNode_finalize"
                        # 1 "sRangeCheckNode_finalize"
                        if(_if_conditional402=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional402) {
                            # 1 "sRangeCheckNode_finalize"
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sRangeCheckNode_finalize"
                        # 2 "sRangeCheckNode_finalize"
                        if(_if_conditional403=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional403) {
                            # 2 "sRangeCheckNode_finalize"
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 4 "sRangeCheckNode_finalize"
                        # 3 "sRangeCheckNode_finalize"
                        if(_if_conditional404=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional404) {
                            # 3 "sRangeCheckNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional405;
struct sRangeCheckNode* __result188__;
void* right_value367;
struct sRangeCheckNode* result_300;
_Bool _if_conditional406;
void* right_value368;
struct sNode* __dec_obj163;
_Bool _if_conditional407;
void* right_value369;
struct sNode* __dec_obj164;
_Bool _if_conditional408;
void* right_value370;
struct sNode* __dec_obj165;
_Bool _if_conditional409;
_Bool _if_conditional410;
void* right_value371;
char* __dec_obj166;
struct sRangeCheckNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value367 = (void*)0;
memset(&result_300, 0, sizeof(struct sRangeCheckNode*));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
                        # 3 "sRangeCheckNode_clone"
                        # 2 "sRangeCheckNode_clone"
                        if(_if_conditional405=self==(void*)0,                        _if_conditional405) {
                            # 2 "sRangeCheckNode_clone"
                            __result188__ = __result_obj__ = (void*)0;
                            return __result188__;
                        }
                        # 3 "sRangeCheckNode_clone"
                        result_300=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value367=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer2(sRangeCheckNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sRangeCheckNode_clone"
                        # 4 "sRangeCheckNode_clone"
                        if(_if_conditional406=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional406) {
                            # 4 "sRangeCheckNode_clone"
                            __dec_obj163=result_300->mLeft;
                            result_300->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=sNode_clone(self->mLeft))));
                            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sRangeCheckNode_clone"
                        # 5 "sRangeCheckNode_clone"
                        if(_if_conditional407=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional407) {
                            # 5 "sRangeCheckNode_clone"
                            __dec_obj164=result_300->mBegin;
                            result_300->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=sNode_clone(self->mBegin))));
                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value369) { right_value369 = come_decrement_ref_count2(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sRangeCheckNode_clone"
                        # 6 "sRangeCheckNode_clone"
                        if(_if_conditional408=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional408) {
                            # 6 "sRangeCheckNode_clone"
                            __dec_obj165=result_300->mEnd;
                            result_300->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=sNode_clone(self->mEnd))));
                            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value370) { right_value370 = come_decrement_ref_count2(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sRangeCheckNode_clone"
                        # 7 "sRangeCheckNode_clone"
                        if(_if_conditional409=self!=((void*)0),                        _if_conditional409) {
                            # 7 "sRangeCheckNode_clone"
                            result_300->sline=self->sline;
                        }
                        # 9 "sRangeCheckNode_clone"
                        # 8 "sRangeCheckNode_clone"
                        if(_if_conditional410=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional410) {
                            # 8 "sRangeCheckNode_clone"
                            __dec_obj166=result_300->sname;
                            result_300->sname=(char*)come_increment_ref_count(((char*)(right_value371=string_clone(self->sname))));
                            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 9 "sRangeCheckNode_clone"
                        __result189__ = __result_obj__ = result_300;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_300, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result189__;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional421;
_Bool _if_conditional422;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sNullCheckNode_finalize"
                                # 0 "sNullCheckNode_finalize"
                                if(_if_conditional421=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional421) {
                                    # 0 "sNullCheckNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 2 "sNullCheckNode_finalize"
                                # 1 "sNullCheckNode_finalize"
                                if(_if_conditional422=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional422) {
                                    # 1 "sNullCheckNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional423;
struct sNullCheckNode* __result192__;
void* right_value382;
struct sNullCheckNode* result_302;
_Bool _if_conditional424;
void* right_value383;
struct sNode* __dec_obj171;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value384;
char* __dec_obj172;
struct sNullCheckNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
memset(&result_302, 0, sizeof(struct sNullCheckNode*));
right_value383 = (void*)0;
right_value384 = (void*)0;
                                # 3 "sNullCheckNode_clone"
                                # 2 "sNullCheckNode_clone"
                                if(_if_conditional423=self==(void*)0,                                _if_conditional423) {
                                    # 2 "sNullCheckNode_clone"
                                    __result192__ = __result_obj__ = (void*)0;
                                    return __result192__;
                                }
                                # 3 "sNullCheckNode_clone"
                                result_302=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value382=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                come_call_finalizer2(sNullCheckNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sNullCheckNode_clone"
                                # 4 "sNullCheckNode_clone"
                                if(_if_conditional424=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional424) {
                                    # 4 "sNullCheckNode_clone"
                                    __dec_obj171=result_302->mLeft;
                                    result_302->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=sNode_clone(self->mLeft))));
                                    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 6 "sNullCheckNode_clone"
                                # 5 "sNullCheckNode_clone"
                                if(_if_conditional425=self!=((void*)0),                                _if_conditional425) {
                                    # 5 "sNullCheckNode_clone"
                                    result_302->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                # 7 "sNullCheckNode_clone"
                                # 6 "sNullCheckNode_clone"
                                if(_if_conditional426=self!=((void*)0),                                _if_conditional426) {
                                    # 6 "sNullCheckNode_clone"
                                    result_302->sline=self->sline;
                                }
                                # 8 "sNullCheckNode_clone"
                                # 7 "sNullCheckNode_clone"
                                if(_if_conditional427=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional427) {
                                    # 7 "sNullCheckNode_clone"
                                    __dec_obj172=result_302->sname;
                                    result_302->sname=(char*)come_increment_ref_count(((char*)(right_value384=string_clone(self->sname))));
                                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 8 "sNullCheckNode_clone"
                                __result193__ = __result_obj__ = result_302;
                                come_call_finalizer2(sNullCheckNode_finalize,result_302, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result193__;
                                come_call_finalizer2(sNullCheckNode_finalize,result_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sStoreFieldNode_finalize"
                                    # 0 "sStoreFieldNode_finalize"
                                    if(_if_conditional432=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional432) {
                                        # 0 "sStoreFieldNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 2 "sStoreFieldNode_finalize"
                                    # 1 "sStoreFieldNode_finalize"
                                    if(_if_conditional433=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional433) {
                                        # 1 "sStoreFieldNode_finalize"
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sStoreFieldNode_finalize"
                                    # 2 "sStoreFieldNode_finalize"
                                    if(_if_conditional434=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional434) {
                                        # 2 "sStoreFieldNode_finalize"
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sStoreFieldNode_finalize"
                                    # 3 "sStoreFieldNode_finalize"
                                    if(_if_conditional435=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional435) {
                                        # 3 "sStoreFieldNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional436;
struct sStoreFieldNode* __result194__;
void* right_value391;
struct sStoreFieldNode* result_309;
_Bool _if_conditional437;
void* right_value392;
struct sNode* __dec_obj174;
_Bool _if_conditional438;
void* right_value393;
struct sNode* __dec_obj175;
_Bool _if_conditional439;
void* right_value394;
char* __dec_obj176;
_Bool _if_conditional440;
_Bool _if_conditional441;
void* right_value395;
char* __dec_obj177;
struct sStoreFieldNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value391 = (void*)0;
memset(&result_309, 0, sizeof(struct sStoreFieldNode*));
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
                                    # 3 "sStoreFieldNode_clone"
                                    # 2 "sStoreFieldNode_clone"
                                    if(_if_conditional436=self==(void*)0,                                    _if_conditional436) {
                                        # 2 "sStoreFieldNode_clone"
                                        __result194__ = __result_obj__ = (void*)0;
                                        return __result194__;
                                    }
                                    # 3 "sStoreFieldNode_clone"
                                    result_309=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value391=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                    come_call_finalizer2(sStoreFieldNode_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sStoreFieldNode_clone"
                                    # 4 "sStoreFieldNode_clone"
                                    if(_if_conditional437=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional437) {
                                        # 4 "sStoreFieldNode_clone"
                                        __dec_obj174=result_309->mLeft;
                                        result_309->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=sNode_clone(self->mLeft))));
                                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 6 "sStoreFieldNode_clone"
                                    # 5 "sStoreFieldNode_clone"
                                    if(_if_conditional438=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional438) {
                                        # 5 "sStoreFieldNode_clone"
                                        __dec_obj175=result_309->mRight;
                                        result_309->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=sNode_clone(self->mRight))));
                                        if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 7 "sStoreFieldNode_clone"
                                    # 6 "sStoreFieldNode_clone"
                                    if(_if_conditional439=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional439) {
                                        # 6 "sStoreFieldNode_clone"
                                        __dec_obj176=result_309->mName;
                                        result_309->mName=(char*)come_increment_ref_count(((char*)(right_value394=string_clone(self->mName))));
                                        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sStoreFieldNode_clone"
                                    # 7 "sStoreFieldNode_clone"
                                    if(_if_conditional440=self!=((void*)0),                                    _if_conditional440) {
                                        # 7 "sStoreFieldNode_clone"
                                        result_309->sline=self->sline;
                                    }
                                    # 9 "sStoreFieldNode_clone"
                                    # 8 "sStoreFieldNode_clone"
                                    if(_if_conditional441=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional441) {
                                        # 8 "sStoreFieldNode_clone"
                                        __dec_obj177=result_309->sname;
                                        result_309->sname=(char*)come_increment_ref_count(((char*)(right_value395=string_clone(self->sname))));
                                        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sStoreFieldNode_clone"
                                    __result195__ = __result_obj__ = result_309;
                                    come_call_finalizer2(sStoreFieldNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result195__;
                                    come_call_finalizer2(sStoreFieldNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sLoadFieldNode_finalize"
                                        # 0 "sLoadFieldNode_finalize"
                                        if(_if_conditional445=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional445) {
                                            # 0 "sLoadFieldNode_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 2 "sLoadFieldNode_finalize"
                                        # 1 "sLoadFieldNode_finalize"
                                        if(_if_conditional446=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional446) {
                                            # 1 "sLoadFieldNode_finalize"
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 3 "sLoadFieldNode_finalize"
                                        # 2 "sLoadFieldNode_finalize"
                                        if(_if_conditional447=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional447) {
                                            # 2 "sLoadFieldNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional448;
struct sLoadFieldNode* __result196__;
void* right_value405;
struct sLoadFieldNode* result_310;
_Bool _if_conditional449;
void* right_value406;
struct sNode* __dec_obj182;
_Bool _if_conditional450;
void* right_value407;
char* __dec_obj183;
_Bool _if_conditional451;
_Bool _if_conditional452;
void* right_value408;
char* __dec_obj184;
struct sLoadFieldNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value405 = (void*)0;
memset(&result_310, 0, sizeof(struct sLoadFieldNode*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
                                        # 3 "sLoadFieldNode_clone"
                                        # 2 "sLoadFieldNode_clone"
                                        if(_if_conditional448=self==(void*)0,                                        _if_conditional448) {
                                            # 2 "sLoadFieldNode_clone"
                                            __result196__ = __result_obj__ = (void*)0;
                                            return __result196__;
                                        }
                                        # 3 "sLoadFieldNode_clone"
                                        result_310=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value405=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                        come_call_finalizer2(sLoadFieldNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sLoadFieldNode_clone"
                                        # 4 "sLoadFieldNode_clone"
                                        if(_if_conditional449=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional449) {
                                            # 4 "sLoadFieldNode_clone"
                                            __dec_obj182=result_310->mLeft;
                                            result_310->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=sNode_clone(self->mLeft))));
                                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 6 "sLoadFieldNode_clone"
                                        # 5 "sLoadFieldNode_clone"
                                        if(_if_conditional450=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional450) {
                                            # 5 "sLoadFieldNode_clone"
                                            __dec_obj183=result_310->mName;
                                            result_310->mName=(char*)come_increment_ref_count(((char*)(right_value407=string_clone(self->mName))));
                                            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sLoadFieldNode_clone"
                                        # 6 "sLoadFieldNode_clone"
                                        if(_if_conditional451=self!=((void*)0),                                        _if_conditional451) {
                                            # 6 "sLoadFieldNode_clone"
                                            result_310->sline=self->sline;
                                        }
                                        # 8 "sLoadFieldNode_clone"
                                        # 7 "sLoadFieldNode_clone"
                                        if(_if_conditional452=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional452) {
                                            # 7 "sLoadFieldNode_clone"
                                            __dec_obj184=result_310->sname;
                                            result_310->sname=(char*)come_increment_ref_count(((char*)(right_value408=string_clone(self->sname))));
                                            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 8 "sLoadFieldNode_clone"
                                        __result197__ = __result_obj__ = result_310;
                                        come_call_finalizer2(sLoadFieldNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result197__;
                                        come_call_finalizer2(sLoadFieldNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

