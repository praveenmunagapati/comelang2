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

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

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
    perror(msg);
    stackframe();
    exit(4);
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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1940, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1947, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1954, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1961, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1968, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1975, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1990, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_6->p=result_6->memory->buf;
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_7->p=(char*)result_7->memory->buf;
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2010, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_8->p=(short short*)result_8->memory->buf;
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2020, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_9->p=(int*)result_9->memory->buf;
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2030, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_10->p=(long*)result_10->memory->buf;
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2198, "smart_pointer$1char")))),self,sizeof(char)*len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2203, "smart_pointer$1short")))),self,sizeof(short short)*len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2208, "smart_pointer$1int")))),self,sizeof(int)*len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2213, "smart_pointer$1long")))),self,sizeof(long)*len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2218, "smart_pointer$1float")))),self,sizeof(float)*len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2223, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    __result25__ = len;
    return __result25__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    __result26__ = len;
    return __result26__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    __result27__ = len;
    return __result27__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    __result28__ = len;
    return __result28__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    __result29__ = len;
    return __result29__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    __result30__ = len;
    return __result30__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value46;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
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
    __result33__ = __result_obj__ = ((char*)(right_value48=xsprintf(msg,self)));
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
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


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
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
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
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
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
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
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
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
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result21__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
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
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2042, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result23__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value84;
struct sType* generics_type_35;
_Bool _if_conditional96;
struct sType* __dec_obj35;
struct sClass* klass_36;
char* class_name_37;
char* fun_name2_38;
struct sFun* operator_fun_39;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value85;
char* none_generics_name_40;
void* right_value86;
struct sType* obj_type_41;
void* right_value87;
char* __dec_obj36;
void* right_value88;
char* fun_name3_42;
struct sGenericsFun* generics_fun_45;
_Bool _if_conditional113;
void* right_value89;
_Bool _if_conditional114;
_Bool __result57__;
void* right_value90;
char* __dec_obj37;
int i_49;
void* right_value91;
char* new_fun_name_50;
_Bool _if_conditional134;
void* right_value92;
char* __dec_obj38;
_Bool _if_conditional135;
_Bool result_51;
_Bool _if_conditional136;
void* right_value93;
struct CVALUE* come_value_52;
char* left_value2_53;
void* right_value94;
void* right_value95;
_Bool _if_conditional141;
void* right_value96;
char* __dec_obj39;
void* right_value97;
char* __dec_obj40;
char* middle_value2_57;
void* right_value98;
void* right_value99;
_Bool _if_conditional142;
void* right_value100;
char* __dec_obj41;
void* right_value101;
char* __dec_obj42;
char* right_value2_58;
void* right_value102;
void* right_value103;
_Bool _if_conditional143;
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
_Bool _if_conditional144;
void* right_value114;
char* __dec_obj47;
void* right_value115;
char* __dec_obj48;
_Bool __result65__;
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
    generics_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(generics_type_35->mNoSolvedGenericsType->v1) {
        __dec_obj35=generics_type_35;
        generics_type_35=(struct sType*)come_increment_ref_count(generics_type_35->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    klass_36=type->mClass;
    class_name_37=klass_36->mName;
    operator_fun_39=((void*)0);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional98=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional98) {
        none_generics_name_40=(char*)come_increment_ref_count(((char*)(right_value85=get_none_generics_name(type->mClass->mName))));
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=fun_name2_38;
        fun_name2_38=(char*)come_increment_ref_count(((char*)(right_value87=create_method_name(obj_type_41,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_42=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s_%s",none_generics_name_40,fun_name))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_45=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_42,((void*)0));
        if(generics_fun_45) {
            if(_if_conditional114=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(fun_name2_38)))),generics_fun_45,obj_type_41,info),            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional114) {
                __result57__ = (_Bool)0;
                none_generics_name_40 = come_decrement_ref_count2(none_generics_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_42 = come_decrement_ref_count2(fun_name3_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_38 = come_decrement_ref_count2(fun_name2_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result57__;
            }
        }
        operator_fun_39=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_38);
        none_generics_name_40 = come_decrement_ref_count2(none_generics_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_42 = come_decrement_ref_count2(fun_name3_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj37=fun_name2_38;
        fun_name2_38=(char*)come_increment_ref_count(((char*)(right_value90=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_49=128-1;        i_49>=1;        i_49--        ){
            new_fun_name_50=(char*)come_increment_ref_count(((char*)(right_value91=xsprintf("%s_v%d",fun_name2_38,i_49))));
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_39=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_50);
            if(operator_fun_39) {
                __dec_obj38=fun_name2_38;
                fun_name2_38=(char*)come_increment_ref_count(((char*)(right_value92=__builtin_string(new_fun_name_50))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_50 = come_decrement_ref_count2(new_fun_name_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_50 = come_decrement_ref_count2(new_fun_name_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional135=operator_fun_39==((void*)0),        _if_conditional135) {
            operator_fun_39=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_38);
        }
    }
    result_51=(_Bool)0;
    if(operator_fun_39) {
        come_value_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value93=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value95=xsprintf("\%s is assigned to",((char*)(right_value94=string_to_string(fun_name2_38)))))),list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,0),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional141=list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,0)->mHeap&&left_value->type->mHeap,        _if_conditional141) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,0),left_value->type,left_value,info);
            __dec_obj39=left_value2_53;
            left_value2_53=(char*)come_increment_ref_count(((char*)(right_value96=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj40=left_value2_53;
            left_value2_53=(char*)come_increment_ref_count(((char*)(right_value97=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value99=xsprintf("\%s is assigned to",((char*)(right_value98=string_to_string(fun_name2_38)))))),list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,1),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional142=list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,1)->mHeap&&middle_value->type->mHeap,        _if_conditional142) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,1),middle_value->type,middle_value,info);
            __dec_obj41=middle_value2_57;
            middle_value2_57=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s",middle_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj42=middle_value2_57;
            middle_value2_57=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(middle_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value103=xsprintf("\%s is assigned to",((char*)(right_value102=string_to_string(fun_name2_38)))))),list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,2),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional143=list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,2)->mHeap&&right_value->type->mHeap,        _if_conditional143) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_39->mParamTypes,2),right_value->type,right_value,info);
            __dec_obj43=right_value2_58;
            right_value2_58=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s",right_value->c_value))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj44=right_value2_58;
            right_value2_58=(char*)come_increment_ref_count(((char*)(right_value105=string_clone(right_value->c_value))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj45=come_value_52->c_value;
        come_value_52->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value106=string_to_string(fun_name2_38))),((char*)(right_value107=string_to_string(left_value2_53))),((char*)(right_value108=string_to_string(middle_value2_57))),((char*)(right_value109=string_to_string(right_value2_58)))))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type1_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(operator_fun_39->mResultType))));
        come_call_finalizer2(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=solve_generics(result_type1_59,generics_type_35,info))));
        come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj46=come_value_52->type;
        come_value_52->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(result_type2_60))));
        come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_52->var=((void*)0);
        if(result_type2_60->mHeap) {
            __dec_obj47=come_value_52->c_value;
            come_value_52->c_value=(char*)come_increment_ref_count(((char*)(right_value114=append_object_to_right_values(come_value_52->c_value,(struct sType*)come_increment_ref_count(result_type2_60),info))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj48=come_value_52->c_value;
        come_value_52->c_value=(char*)come_increment_ref_count(((char*)(right_value115=append_stackframe(come_value_52->c_value,come_value_52->type,info))));
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_52->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_52));
        result_51=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_53 = come_decrement_ref_count2(left_value2_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_57 = come_decrement_ref_count2(middle_value2_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_58 = come_decrement_ref_count2(right_value2_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type1_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result65__ = result_51;
    come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_38 = come_decrement_ref_count2(fun_name2_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result65__;
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
void* right_value83;
char* __dec_obj34;
_Bool _if_conditional95;
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
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional25=self!=((void*)0),        _if_conditional25) {
            result_11->mClass=self->mClass;
        }
        if(_if_conditional26=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional26) {
            __dec_obj15=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional30=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional30) {
            __dec_obj17=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value59=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional34) {
            __dec_obj18=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional35) {
            __dec_obj19=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional36=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional36) {
            __dec_obj20=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value62=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional37) {
            __dec_obj24=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value70=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional51=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional51) {
            __dec_obj25=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value71=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional52) {
            __dec_obj29=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional56=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional56) {
            __dec_obj30=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value79=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_11->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional58=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional58) {
            __dec_obj31=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_11->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_11->mShort=self->mShort;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_11->mLong=self->mLong;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_11->mLongLong=self->mLongLong;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_11->mConstant=self->mConstant;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_11->mRegister=self->mRegister;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_11->mVolatile=self->mVolatile;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_11->mStatic=self->mStatic;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_11->mExtern=self->mExtern;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_11->mRestrict=self->mRestrict;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_11->mImmutable=self->mImmutable;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_11->mHeap=self->mHeap;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_11->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_11->mDelegate=self->mDelegate;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_11->mShare=self->mShare;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_11->mClone=self->mClone;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_11->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_11->mRefference=self->mRefference;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_11->mException=self->mException;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_11->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional82=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional82) {
            __dec_obj32=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional85=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional85) {
            __dec_obj33=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value82=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_11->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_11->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_11->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_11->mInline=self->mInline;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_11->mNullValue=self->mNullValue;
        }
        if(_if_conditional94=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional94) {
            __dec_obj34=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_11->mArrayPointerType=self->mArrayPointerType;
        }
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
            if(_if_conditional8=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional10) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional13) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional20) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional21) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional22) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional23) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional24) {
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
                    it_12=self->head;
                    while(_while_condtional1=it_12!=((void*)0),                    _while_condtional1) {
                        prev_it_13=it_12;
                        it_12=it_12->next;
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional9=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional9) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional11) {
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
                    it_14=self->head;
                    while(_while_condtional2=it_14!=((void*)0),                    _while_condtional2) {
                        prev_it_15=it_14;
                        it_14=it_14->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
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
                    it_16=self->head;
                    while(_while_condtional3=it_16!=((void*)0),                    _while_condtional3) {
                        prev_it_17=it_16;
                        it_16=it_16->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
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
                if(_if_conditional27=self==((void*)0),                _if_conditional27) {
                    __result35__ = __result_obj__ = ((void*)0);
                    return __result35__;
                }
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value50=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_19=it_19->next;
                }
                __result38__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result38__;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
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
                        if(_if_conditional28=self->len==0,                        _if_conditional28) {
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj12=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional29=self->len==1,                            _if_conditional29) {
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj13=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj14=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
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
                if(_if_conditional31=self==(void*)0,                _if_conditional31) {
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional33) {
                    __dec_obj16=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result40__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional32) {
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
                if(_if_conditional38=self==((void*)0),                _if_conditional38) {
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value64=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value63=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=sNode_clone(it_25->item)))));
                    if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_25=it_25->next;
                }
                __result46__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
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
                        if(_if_conditional39=self->len==0,                        _if_conditional39) {
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value65=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj21=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional40=self->len==1,                            _if_conditional40) {
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value66=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj22=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value67=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj23=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
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
                        if(_if_conditional41=self==(void*)0,                        _if_conditional41) {
                            __result44__ = __result_obj__ = (void*)0;
                            return __result44__;
                        }
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value68) { right_value68 = come_decrement_ref_count2(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional42=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional42) {
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_29->finalize=self->finalize;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_29->clone=self->clone;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_29->compile=self->compile;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_29->sline=self->sline;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_29->sname=self->sname;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_29->terminated=self->terminated;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_29->kind=self->kind;
                        }
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
                if(_if_conditional53=self==((void*)0),                _if_conditional53) {
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value73=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value72=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_31=self->head;
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value77=string_clone(it_31->item)))));
                    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_31=it_31->next;
                }
                __result50__ = __result_obj__ = result_30;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result50__;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
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
                        if(_if_conditional54=self->len==0,                        _if_conditional54) {
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value74=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_32->prev=((void*)0);
                            litem_32->next=((void*)0);
                            __dec_obj26=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_32;
                            self->head=litem_32;
                        }
                        else {
                            if(_if_conditional55=self->len==1,                            _if_conditional55) {
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value75=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_33->prev=self->head;
                                litem_33->next=((void*)0);
                                __dec_obj27=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_33;
                                self->head->next=litem_33;
                            }
                            else {
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value76=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_34->prev=self->tail;
                                litem_34->next=((void*)0);
                                __dec_obj28=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_34;
                                self->tail=litem_34;
                            }
                        }
                        self->len++;
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
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
        __result52__ = self->len;
        return __result52__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_43;
unsigned int it_44;
_Bool _while_condtional7;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sGenericsFun* __result53__;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct sGenericsFun* __result54__;
struct sGenericsFun* __result55__;
struct sGenericsFun* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&it_44, 0, sizeof(unsigned int));
            hash_43=string_get_hash_key(((char*)key))%self->size;
            it_44=hash_43;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional99=self->item_existance[it_44],                _if_conditional99) {
                    if(_if_conditional100=string_equals(self->keys[it_44],key),                    _if_conditional100) {
                        __result53__ = __result_obj__ = self->items[it_44];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result53__;
                    }
                    it_44++;
                    if(_if_conditional111=it_44>=self->size,                    _if_conditional111) {
                        it_44=0;
                    }
                    else {
                        if(_if_conditional112=it_44==hash_43,                        _if_conditional112) {
                            __result54__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result54__;
                        }
                    }
                }
                else {
                    __result55__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result55__;
                }
            }
            __result56__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result56__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional101=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional101) {
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional102) {
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional103) {
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional104) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional105=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional105) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional106=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional106) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional107=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional107) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional108=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional108) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional109=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional109) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional110=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional110) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_46;
unsigned int hash_47;
unsigned int it_48;
_Bool _while_condtional8;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct sFun* __result58__;
_Bool _if_conditional132;
_Bool _if_conditional133;
struct sFun* __result59__;
struct sFun* __result60__;
struct sFun* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_46, 0, sizeof(struct sFun*));
memset(&hash_47, 0, sizeof(unsigned int));
memset(&it_48, 0, sizeof(unsigned int));
            memset(&default_value_46,0,sizeof(struct sFun*));
            hash_47=string_get_hash_key(((char*)key))%self->size;
            it_48=hash_47;
            while(_while_condtional8=(_Bool)1,            _while_condtional8) {
                if(_if_conditional115=self->item_existance[it_48],                _if_conditional115) {
                    if(_if_conditional116=string_equals(self->keys[it_48],key),                    _if_conditional116) {
                        __result58__ = __result_obj__ = self->items[it_48];
                        come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result58__;
                    }
                    it_48++;
                    if(_if_conditional132=it_48>=self->size,                    _if_conditional132) {
                        it_48=0;
                    }
                    else {
                        if(_if_conditional133=it_48==hash_47,                        _if_conditional133) {
                            __result59__ = __result_obj__ = default_value_46;
                            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result59__;
                        }
                    }
                }
                else {
                    __result60__ = __result_obj__ = default_value_46;
                    come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                }
            }
            __result61__ = __result_obj__ = default_value_46;
            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result61__;
            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional117=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional117) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional118=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional118) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional119=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional119) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional120=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional120) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional121) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional122=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional122) {
                                come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional123=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional123) {
                                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional126=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional126) {
                                come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional127=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional127) {
                                come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional128=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional128) {
                                come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional129=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional129) {
                                come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional130=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional130) {
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional131=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional131) {
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional124=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional124) {
                                        come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional125=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional125) {
                                        come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_54;
int i_55;
_Bool _while_condtional9;
_Bool _if_conditional140;
struct sType* __result62__;
struct sType* default_value_56;
struct sType* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_55, 0, sizeof(int));
memset(&default_value_56, 0, sizeof(struct sType*));
            if(_if_conditional139=position<0,            _if_conditional139) {
                position+=self->len;
            }
            it_54=self->head;
            i_55=0;
            while(_while_condtional9=it_54!=((void*)0),            _while_condtional9) {
                if(_if_conditional140=position==i_55,                _if_conditional140) {
                    __result62__ = __result_obj__ = it_54->item;
                    return __result62__;
                }
                it_54=it_54->next;
                i_55++;
            }
            memset(&default_value_56,0,sizeof(struct sType*));
            __result63__ = __result_obj__ = default_value_56;
            come_call_finalizer2(sType_finalize,default_value_56, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result63__;
            come_call_finalizer2(sType_finalize,default_value_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional145;
void* right_value116;
struct list_item$1CVALUEph* litem_61;
struct CVALUE* __dec_obj49;
_Bool _if_conditional147;
void* right_value117;
struct list_item$1CVALUEph* litem_62;
struct CVALUE* __dec_obj50;
void* right_value118;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj51;
struct list$1CVALUEph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1CVALUEph*));
right_value117 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1CVALUEph*));
right_value118 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional145=self->len==0,            _if_conditional145) {
                litem_61=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value116=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_61->prev=((void*)0);
                litem_61->next=((void*)0);
                __dec_obj49=litem_61->item;
                litem_61->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_61;
                self->head=litem_61;
            }
            else {
                if(_if_conditional147=self->len==1,                _if_conditional147) {
                    litem_62=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value117=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_62->prev=self->head;
                    litem_62->next=((void*)0);
                    __dec_obj50=litem_62->item;
                    litem_62->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_62;
                    self->head->next=litem_62;
                }
                else {
                    litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value118=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_63->prev=self->tail;
                    litem_63->next=((void*)0);
                    __dec_obj51=litem_63->item;
                    litem_63->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_63;
                    self->tail=litem_63;
                }
            }
            self->len++;
            __result64__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional146=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional146) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value119;
char* __dec_obj52;
void* right_value120;
struct sNode* __dec_obj53;
void* right_value121;
struct sNode* __dec_obj54;
void* right_value122;
char* __dec_obj55;
struct sStoreFieldNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj53=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=sNode_clone(left))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj54=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value121=sNode_clone(right))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value121) { right_value121 = come_decrement_ref_count2(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj55=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(name))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result66__ = __result_obj__ = self;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result66__;
    come_call_finalizer2(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStoreFieldNode_terminated(){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    __result67__ = (_Bool)0;
    return __result67__;
}

char* sStoreFieldNode_kind(){
void* __result_obj__;
void* right_value123;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    __result68__ = __result_obj__ = ((char*)(right_value123=__builtin_string("sStoreFieldNode")));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_64;
struct sNode* right_65;
void* right_value124;
char* name_66;
_Bool _if_conditional152;
_Bool __result69__;
void* right_value125;
struct CVALUE* left_value_67;
_Bool _if_conditional153;
void* right_value126;
void* right_value127;
char* __dec_obj56;
_Bool _if_conditional154;
_Bool __result70__;
void* right_value128;
struct CVALUE* right_value_68;
struct sType* right_type_69;
struct sType* left_type_70;
void* right_value129;
struct sType* left_type2_71;
struct sClass* klass_72;
struct sType* field_type_78;
int index_79;
char* child_field_name_80;
_Bool _if_conditional165;
_Bool __result75__;
struct list$1tuple2$2charphsTypephph* o2_saved_81;
struct tuple2$2charphsTypeph* field_84;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_87;
struct sType* field_type2_88;
_Bool _if_conditional170;
void* right_value130;
struct sType* __dec_obj57;
_Bool _if_conditional171;
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
_Bool _if_conditional172;
void* right_value131;
char* __dec_obj58;
void* right_value132;
struct sType* __dec_obj59;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value133;
struct sType* __dec_obj60;
_Bool _if_conditional175;
_Bool __result84__;
void* right_value134;
struct CVALUE* come_value_98;
void* right_value135;
void* right_value136;
void* right_value137;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool __result85__;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value138;
char* c_value_99;
void* right_value139;
char* __dec_obj61;
void* right_value140;
char* c_value_100;
void* right_value141;
char* __dec_obj62;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value142;
char* c_value_101;
void* right_value143;
char* __dec_obj63;
void* right_value144;
char* c_value_102;
void* right_value145;
char* __dec_obj64;
void* right_value146;
char* __dec_obj65;
_Bool __result86__;
int right_value_id_103;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value147;
char* c_value_104;
void* right_value148;
char* __dec_obj66;
void* right_value149;
char* c_value_105;
void* right_value150;
char* __dec_obj67;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value151;
char* c_value_106;
void* right_value152;
char* __dec_obj68;
void* right_value153;
char* c_value_107;
void* right_value154;
char* __dec_obj69;
_Bool __result87__;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value155;
char* __dec_obj70;
void* right_value156;
char* __dec_obj71;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value157;
char* __dec_obj72;
void* right_value158;
char* __dec_obj73;
_Bool __result88__;
void* right_value159;
struct sType* __dec_obj74;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_64, 0, sizeof(struct sNode*));
memset(&right_65, 0, sizeof(struct sNode*));
right_value124 = (void*)0;
memset(&name_66, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&left_value_67, 0, sizeof(struct CVALUE*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&right_value_68, 0, sizeof(struct CVALUE*));
memset(&right_type_69, 0, sizeof(struct sType*));
memset(&left_type_70, 0, sizeof(struct sType*));
right_value129 = (void*)0;
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
right_value130 = (void*)0;
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
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&c_value_99, 0, sizeof(char*));
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&c_value_100, 0, sizeof(char*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&c_value_101, 0, sizeof(char*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&c_value_102, 0, sizeof(char*));
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&right_value_id_103, 0, sizeof(int));
right_value147 = (void*)0;
memset(&c_value_104, 0, sizeof(char*));
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&c_value_105, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&c_value_106, 0, sizeof(char*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&c_value_107, 0, sizeof(char*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
    left_64=self->mLeft;
    right_65=self->mRight;
    name_66=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(self->mName))));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional152=!node_compile(left_64,info),    _if_conditional152) {
        __result69__ = (_Bool)0;
        name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result69__;
    }
    left_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional153=gComeDebug&&left_value_67->type->mPointerNum>0,    _if_conditional153) {
        __dec_obj56=left_value_67->c_value;
        left_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value126=make_type_name_string(left_value_67->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_67->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional154=!node_compile(right_65,info),    _if_conditional154) {
        __result70__ = (_Bool)0;
        name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result70__;
    }
    right_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_type_69=right_value_68->type;
    left_type_70=left_value_67->type;
    left_type2_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=solve_generics(left_type_70,left_type_70,info))));
    come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_72=left_type2_71->mClass;
    klass_72=map$2charphsClassphp_operator_load_element(info->classes,klass_72->mName);
    field_type_78=((void*)0);
    index_79=0;
    child_field_name_80=((void*)0);
    klass_72=map$2charphsClassphp_operator_load_element(info->classes,klass_72->mName);
    if(_if_conditional165=klass_72->mFields==((void*)0),    _if_conditional165) {
        err_msg(info,"%s fields are null",klass_72->mName);
        __result75__ = (_Bool)0;
        name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result75__;
    }
    for(    o2_saved_81=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_72->mFields)),field_84=list$1tuple2$2charphsTypephph_begin((o2_saved_81));    !list$1tuple2$2charphsTypephph_end((o2_saved_81));    field_84=list$1tuple2$2charphsTypephph_next((o2_saved_81))    ){
        multiple_assign_var1=field_84;
        field_name_87=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_88=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional170=string_operator_equals(field_name_87,name_66),        _if_conditional170) {
            __dec_obj57=field_type_78;
            field_type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(field_type2_88))));
            come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            field_name_87 = come_decrement_ref_count2(field_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_79++;
        field_name_87 = come_decrement_ref_count2(field_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(_if_conditional171=index_79==list$1tuple2$2charphsTypephph_length(klass_72->mFields),    _if_conditional171) {
        index_79=0;
        for(        o2_saved_89=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_72->mFields)),field_90=list$1tuple2$2charphsTypephph_begin((o2_saved_89));        !list$1tuple2$2charphsTypephph_end((o2_saved_89));        field_90=list$1tuple2$2charphsTypephph_next((o2_saved_89))        ){
            multiple_assign_var2=field_90;
            field_name_91=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_92=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_93=field_type2_92->mClass;
            for(            o2_saved_94=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_93->mFields)),field2_95=list$1tuple2$2charphsTypephph_begin((o2_saved_94));            !list$1tuple2$2charphsTypephph_end((o2_saved_94));            field2_95=list$1tuple2$2charphsTypephph_next((o2_saved_94))            ){
                multiple_assign_var3=field2_95;
                field_name2_96=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_97=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(_if_conditional172=string_operator_equals(field_name2_96,name_66),                _if_conditional172) {
                    __dec_obj58=child_field_name_80;
                    child_field_name_80=(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string(field_name_91))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj59=field_type_78;
                    field_type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(field_type3_97))));
                    come_call_finalizer2(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    field_name2_96 = come_decrement_ref_count2(field_name2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type3_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_96 = come_decrement_ref_count2(field_name2_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type3_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(child_field_name_80) {
                field_name_91 = come_decrement_ref_count2(field_name_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional174=string_operator_equals(field_name_91,name_66),            _if_conditional174) {
                __dec_obj60=field_type_78;
                field_type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(field_type2_92))));
                come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                field_name_91 = come_decrement_ref_count2(field_name_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_79++;
            field_name_91 = come_decrement_ref_count2(field_name_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(_if_conditional175=index_79==list$1tuple2$2charphsTypephph_length(klass_72->mFields),        _if_conditional175) {
            err_msg(info,"field not found(%s) in %s(1)",name_66,klass_72->mName);
            __result84__ = (_Bool)0;
            name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result84__;
        }
    }
    come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 236, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    check_assign_type(((char*)(right_value136=xsprintf("\%s is assigned to",((char*)(right_value135=string_to_string(name_66)))))),field_type_78,right_type_69,right_value_68,(_Bool)0,(_Bool)1,info);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_type_69=((struct sType*)(right_value137=sType_clone(right_value_68->type)));
    come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional176=field_type_78->mHeap&&!right_value_68->type->mHeap,    _if_conditional176) {
        if(_if_conditional177=string_operator_equals(right_value_68->type->mClass->mName,"void")&&right_value_68->type->mPointerNum==1,        _if_conditional177) {
        }
        else {
            if(_if_conditional178=!right_value_68->type->mDelegate&&!right_value_68->type->mShare&&!gComeGC,            _if_conditional178) {
                err_msg(info,"require right value as heap object(%s)(1)",name_66);
                printf("right type is %s pointer num %d heap %d\n",right_value_68->type->mClass->mName,right_value_68->type->mPointerNum,right_value_68->type->mHeap);
                __result85__ = (_Bool)0;
                name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result85__;
            }
        }
    }
    if(_if_conditional179=field_type_78->mHeap&&right_type_69->mHeap&&field_type_78->mPointerNum>0&&right_type_69->mPointerNum>0,    _if_conditional179) {
        if(_if_conditional180=left_value_67->type->mPointerNum==1,        _if_conditional180) {
            if(child_field_name_80) {
                c_value_99=(char*)come_increment_ref_count(((char*)(right_value138=xsprintf("%s->%s.%s",left_value_67->c_value,child_field_name_80,name_66))));
                right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                decrement_ref_count_object(field_type_78,c_value_99,info,(_Bool)0);
                std_move(field_type_78,right_type_69,right_value_68,info);
                __dec_obj61=come_value_98->c_value;
                come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("%s->%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_99 = come_decrement_ref_count2(c_value_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_100=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s->%s",left_value_67->c_value,name_66))));
                right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                decrement_ref_count_object(field_type_78,c_value_100,info,(_Bool)0);
                std_move(field_type_78,right_type_69,right_value_68,info);
                __dec_obj62=come_value_98->c_value;
                come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("%s->%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_100 = come_decrement_ref_count2(c_value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(_if_conditional182=left_value_67->type->mPointerNum==0,            _if_conditional182) {
                if(child_field_name_80) {
                    c_value_101=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("%s.%s.%s",left_value_67->c_value,child_field_name_80,name_66))));
                    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_78,c_value_101,info,(_Bool)0);
                    std_move(field_type_78,right_type_69,right_value_68,info);
                    __dec_obj63=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("%s.%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_101 = come_decrement_ref_count2(c_value_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_102=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("%s.%s",left_value_67->c_value,name_66))));
                    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_78,c_value_102,info,(_Bool)0);
                    __dec_obj64=right_value_68->c_value;
                    right_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value145=increment_ref_count_object(right_value_68->type,right_value_68->c_value,info))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj65=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("%s.%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_102 = come_decrement_ref_count2(c_value_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_66,left_value_67->type->mPointerNum);
                __result86__ = (_Bool)0;
                name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result86__;
            }
        }
        right_value_id_103=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_68->c_value));
        if(_if_conditional184=right_value_id_103!=-1,        _if_conditional184) {
            remove_object_from_right_values(right_value_id_103,info);
        }
    }
    else {
        if(_if_conditional185=field_type_78->mHeap&&field_type_78->mPointerNum>0&&right_type_69->mPointerNum>0&&string_operator_equals(right_type_69->mClass->mName,"void"),        _if_conditional185) {
            if(_if_conditional186=left_value_67->type->mPointerNum==1,            _if_conditional186) {
                if(child_field_name_80) {
                    c_value_104=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s->%s.%s",left_value_67->c_value,child_field_name_80,name_66))));
                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_78,c_value_104,info,(_Bool)0);
                    __dec_obj66=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s->%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_104 = come_decrement_ref_count2(c_value_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_105=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%s->%s",left_value_67->c_value,name_66))));
                    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_78,c_value_105,info,(_Bool)0);
                    __dec_obj67=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s->%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_105 = come_decrement_ref_count2(c_value_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(_if_conditional188=left_value_67->type->mPointerNum==0,                _if_conditional188) {
                    if(child_field_name_80) {
                        c_value_106=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s.%s.%s",left_value_67->c_value,child_field_name_80,name_66))));
                        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        decrement_ref_count_object(field_type_78,c_value_106,info,(_Bool)0);
                        __dec_obj68=come_value_98->c_value;
                        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s.%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_106 = come_decrement_ref_count2(c_value_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        c_value_107=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s.%s",left_value_67->c_value,name_66))));
                        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        decrement_ref_count_object(field_type_78,c_value_107,info,(_Bool)0);
                        __dec_obj69=come_value_98->c_value;
                        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s.%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_107 = come_decrement_ref_count2(c_value_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_66,left_value_67->type->mPointerNum);
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
        else {
            if(_if_conditional190=left_value_67->type->mPointerNum==1,            _if_conditional190) {
                if(child_field_name_80) {
                    __dec_obj70=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s->%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj71=come_value_98->c_value;
                    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("%s->%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                if(_if_conditional192=left_value_67->type->mPointerNum==0,                _if_conditional192) {
                    if(child_field_name_80) {
                        __dec_obj72=come_value_98->c_value;
                        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s.%s.%s=%s",left_value_67->c_value,child_field_name_80,name_66,right_value_68->c_value))));
                        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        __dec_obj73=come_value_98->c_value;
                        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("%s.%s=%s",left_value_67->c_value,name_66,right_value_68->c_value))));
                        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_66,left_value_67->type->mPointerNum);
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
        }
    }
    __dec_obj74=come_value_98->type;
    come_value_98->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(field_type_78))));
    come_call_finalizer2(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_98->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_98));
    add_come_last_code(info,"%s;\n",come_value_98->c_value);
    __result89__ = (_Bool)1;
    name_66 = come_decrement_ref_count2(name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_80 = come_decrement_ref_count2(child_field_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result89__;
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
_Bool _if_conditional155;
_Bool _if_conditional156;
struct sClass* __result71__;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct sClass* __result72__;
struct sClass* __result73__;
struct sClass* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_73, 0, sizeof(struct sClass*));
memset(&hash_74, 0, sizeof(unsigned int));
memset(&it_75, 0, sizeof(unsigned int));
        memset(&default_value_73,0,sizeof(struct sClass*));
        hash_74=string_get_hash_key(((char*)key))%self->size;
        it_75=hash_74;
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            if(_if_conditional155=self->item_existance[it_75],            _if_conditional155) {
                if(_if_conditional156=string_equals(self->keys[it_75],key),                _if_conditional156) {
                    __result71__ = __result_obj__ = self->items[it_75];
                    come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result71__;
                }
                it_75++;
                if(_if_conditional163=it_75>=self->size,                _if_conditional163) {
                    it_75=0;
                }
                else {
                    if(_if_conditional164=it_75==hash_74,                    _if_conditional164) {
                        __result72__ = __result_obj__ = default_value_73;
                        come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                }
            }
            else {
                __result73__ = __result_obj__ = default_value_73;
                come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result73__;
            }
        }
        __result74__ = __result_obj__ = default_value_73;
        come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer2(sClass_finalize,default_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional157=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional157) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional158=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional158) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional162=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional162) {
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
                                it_76=self->head;
                                while(_while_condtional11=it_76!=((void*)0),                                _while_condtional11) {
                                    prev_it_77=it_76;
                                    it_76=it_76->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional159;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional159=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional159) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional160;
_Bool _if_conditional161;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional160=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional160) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional161=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional161) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional166;
struct tuple2$2charphsTypeph* result_82;
struct tuple2$2charphsTypeph* __result76__;
_Bool _if_conditional167;
struct tuple2$2charphsTypeph* __result77__;
struct tuple2$2charphsTypeph* result_83;
struct tuple2$2charphsTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_83, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional166=self==((void*)0),        _if_conditional166) {
            memset(&result_82,0,sizeof(struct tuple2$2charphsTypeph*));
            __result76__ = __result_obj__ = result_82;
            return __result76__;
        }
        self->it=self->head;
        if(self->it) {
            __result77__ = __result_obj__ = self->it->item;
            return __result77__;
        }
        memset(&result_83,0,sizeof(struct tuple2$2charphsTypeph*));
        __result78__ = __result_obj__ = result_83;
        return __result78__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
        __result79__ = self==((void*)0)||self->it==((void*)0);
        return __result79__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional168;
struct tuple2$2charphsTypeph* result_85;
struct tuple2$2charphsTypeph* __result80__;
_Bool _if_conditional169;
struct tuple2$2charphsTypeph* __result81__;
struct tuple2$2charphsTypeph* result_86;
struct tuple2$2charphsTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_86, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional168=self==((void*)0)||self->it==((void*)0),        _if_conditional168) {
            memset(&result_85,0,sizeof(struct tuple2$2charphsTypeph*));
            __result80__ = __result_obj__ = result_85;
            return __result80__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result81__ = __result_obj__ = self->it->item;
            return __result81__;
        }
        memset(&result_86,0,sizeof(struct tuple2$2charphsTypeph*));
        __result82__ = __result_obj__ = result_86;
        return __result82__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
        __result83__ = self->len;
        return __result83__;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = self->sline;
    return __result90__;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value160;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value160=__builtin_string(self->sname)));
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value161;
char* __dec_obj75;
void* right_value162;
struct sNode* __dec_obj76;
struct sNullCheckNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
right_value162 = (void*)0;
    self->sline=info->sline;
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string(info->sname))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj76=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value162=sNode_clone(left))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value162) { right_value162 = come_decrement_ref_count2(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mOnlyNullCecker=only_null_checker;
    __result92__ = __result_obj__ = self;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result92__;
    come_call_finalizer2(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = (_Bool)0;
    return __result93__;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
void* right_value163;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value163=__builtin_string("sNullCheckNode")));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_108;
_Bool _if_conditional196;
_Bool __result95__;
void* right_value164;
struct CVALUE* left_value_109;
_Bool _if_conditional197;
void* right_value165;
char* method_name_110;
_Bool _if_conditional202;
struct sType* obj_type_113;
_Bool _if_conditional203;
struct sType* obj_type2_114;
void* right_value166;
void* right_value167;
char* __dec_obj77;
struct sFun* fun_115;
_Bool _if_conditional204;
_Bool __result100__;
void* right_value168;
struct sType* type_116;
void* right_value169;
struct CVALUE* come_value_117;
void* right_value170;
char* __dec_obj78;
void* right_value171;
struct sType* __dec_obj79;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value172;
struct CVALUE* come_value_118;
void* right_value173;
void* right_value174;
char* __dec_obj80;
void* right_value175;
struct sType* __dec_obj81;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_108, 0, sizeof(struct sNode*));
right_value164 = (void*)0;
memset(&left_value_109, 0, sizeof(struct CVALUE*));
right_value165 = (void*)0;
memset(&method_name_110, 0, sizeof(char*));
memset(&obj_type_113, 0, sizeof(struct sType*));
memset(&obj_type2_114, 0, sizeof(struct sType*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&fun_115, 0, sizeof(struct sFun*));
right_value168 = (void*)0;
memset(&type_116, 0, sizeof(struct sType*));
right_value169 = (void*)0;
memset(&come_value_117, 0, sizeof(struct CVALUE*));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&come_value_118, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
    left_108=self->mLeft;
    if(_if_conditional196=!node_compile(left_108,info),    _if_conditional196) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional197=!self->mOnlyNullCecker&&left_value_109->type->mNoSolvedGenericsType&&left_value_109->type->mNoSolvedGenericsType->v1&&left_value_109->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_109->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional197) {
        method_name_110=(char*)come_increment_ref_count(((char*)(right_value165=create_method_name(left_value_109->type,(_Bool)0,"expect",info,(_Bool)1))));
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional202=map$2charphsFunph_at(info->funcs,method_name_110,((void*)0))==((void*)0),        _if_conditional202) {
            obj_type_113=left_value_109->type->mNoSolvedGenericsType->v1;
            if(_if_conditional203=list$1sTypeph_length(obj_type_113->mGenericsTypes)>0,            _if_conditional203) {
                obj_type2_114=left_value_109->type;
                __dec_obj77=method_name_110;
                method_name_110=(char*)come_increment_ref_count(((char*)(right_value167=make_generics_function(obj_type2_114,(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string("expect")))),info,(_Bool)1))));
                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_109->type->mClass->mName);
                exit(1);
            }
        }
        fun_115=map$2charphsFunphp_operator_load_element(info->funcs,method_name_110);
        if(_if_conditional204=fun_115==((void*)0),        _if_conditional204) {
            err_msg(info,"function not found(%s)",method_name_110);
            __result100__ = (_Bool)1;
            method_name_110 = come_decrement_ref_count2(method_name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result100__;
        }
        type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=solve_generics(fun_115->mResultType,left_value_109->type,info))));
        come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 434, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj78=come_value_117->c_value;
        come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s(%s)",method_name_110,left_value_109->c_value))));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj79=come_value_117->type;
        come_value_117->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(type_116))));
        come_call_finalizer2(sType_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_117->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
        add_come_last_code(info,"%s;\n",come_value_117->c_value);
        method_name_110 = come_decrement_ref_count2(method_name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional205=!gComeDebug,        _if_conditional205) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_109));
        }
        else {
            if(_if_conditional206=left_value_109->type->mPointerNum>0,            _if_conditional206) {
                come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 448, "CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj80=come_value_118->c_value;
                come_value_118->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value173=make_type_name_string(left_value_109->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_109->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj81=come_value_118->type;
                come_value_118->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(left_value_109->type))));
                come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_118->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_118));
                add_come_last_code(info,"%s;\n",come_value_118->c_value);
                come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_109));
            }
        }
    }
    __result101__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result101__;
    come_call_finalizer2(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_111;
unsigned int it_112;
_Bool _while_condtional12;
_Bool _if_conditional198;
_Bool _if_conditional199;
struct sFun* __result96__;
_Bool _if_conditional200;
_Bool _if_conditional201;
struct sFun* __result97__;
struct sFun* __result98__;
struct sFun* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_111, 0, sizeof(unsigned int));
memset(&it_112, 0, sizeof(unsigned int));
            hash_111=string_get_hash_key(((char*)key))%self->size;
            it_112=hash_111;
            while(_while_condtional12=(_Bool)1,            _while_condtional12) {
                if(_if_conditional198=self->item_existance[it_112],                _if_conditional198) {
                    if(_if_conditional199=string_equals(self->keys[it_112],key),                    _if_conditional199) {
                        __result96__ = __result_obj__ = self->items[it_112];
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result96__;
                    }
                    it_112++;
                    if(_if_conditional200=it_112>=self->size,                    _if_conditional200) {
                        it_112=0;
                    }
                    else {
                        if(_if_conditional201=it_112==hash_111,                        _if_conditional201) {
                            __result97__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result97__;
                        }
                    }
                }
                else {
                    __result98__ = __result_obj__ = default_value;
                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result98__;
                }
            }
            __result99__ = __result_obj__ = default_value;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result99__;
            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = self->sline;
    return __result102__;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value176;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
    __result103__ = __result_obj__ = ((char*)(right_value176=__builtin_string(self->sname)));
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value177;
char* __dec_obj82;
void* right_value178;
struct sNode* __dec_obj83;
void* right_value179;
struct sNode* __dec_obj84;
void* right_value180;
struct sNode* __dec_obj85;
struct sRangeCheckNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
    self->sline=info->sline;
    __dec_obj82=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(info->sname))));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj84=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=sNode_clone(begin))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj85=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value180=sNode_clone(end))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value180) { right_value180 = come_decrement_ref_count2(right_value180, ((struct sNode*)right_value180)->finalize, ((struct sNode*)right_value180)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result104__ = __result_obj__ = self;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result104__;
    come_call_finalizer2(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sRangeCheckNode_terminated(){
void* __result_obj__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = (_Bool)0;
    return __result105__;
}

char* sRangeCheckNode_kind(){
void* __result_obj__;
void* right_value181;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
    __result106__ = __result_obj__ = ((char*)(right_value181=__builtin_string("sRangeCheckNode")));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_119;
_Bool _if_conditional211;
_Bool __result107__;
void* right_value182;
struct CVALUE* left_value_120;
struct sNode* begin_121;
_Bool _if_conditional212;
_Bool __result108__;
void* right_value183;
struct CVALUE* begin_value_122;
struct sNode* end_123;
_Bool _if_conditional213;
_Bool __result109__;
void* right_value184;
struct CVALUE* end_value_124;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value185;
struct CVALUE* come_value_125;
void* right_value186;
void* right_value187;
char* __dec_obj86;
void* right_value188;
struct sType* __dec_obj87;
void* right_value189;
struct CVALUE* come_value_126;
void* right_value190;
void* right_value191;
char* __dec_obj88;
void* right_value192;
struct sType* __dec_obj89;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_119, 0, sizeof(struct sNode*));
right_value182 = (void*)0;
memset(&left_value_120, 0, sizeof(struct CVALUE*));
memset(&begin_121, 0, sizeof(struct sNode*));
right_value183 = (void*)0;
memset(&begin_value_122, 0, sizeof(struct CVALUE*));
memset(&end_123, 0, sizeof(struct sNode*));
right_value184 = (void*)0;
memset(&end_value_124, 0, sizeof(struct CVALUE*));
right_value185 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&come_value_126, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
    left_119=self->mLeft;
    if(_if_conditional211=!node_compile(left_119,info),    _if_conditional211) {
        __result107__ = (_Bool)0;
        return __result107__;
    }
    left_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    begin_121=self->mBegin;
    if(_if_conditional212=!node_compile(begin_121,info),    _if_conditional212) {
        __result108__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result108__;
    }
    begin_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value183=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    end_123=self->mEnd;
    if(_if_conditional213=!node_compile(end_123,info),    _if_conditional213) {
        __result109__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,begin_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result109__;
    }
    end_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional214=left_value_120->type->mPointerNum>0,    _if_conditional214) {
        if(_if_conditional215=!gComeDebug,        _if_conditional215) {
            come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 538, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj86=come_value_125->c_value;
            come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("(*((%s)%s))",((char*)(right_value186=make_type_name_string(left_value_120->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_120->c_value))));
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_120->type->mPointerNum--;
            __dec_obj87=come_value_125->type;
            come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(left_value_120->type))));
            come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_125->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
            add_come_last_code(info,"%s;\n",come_value_125->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 551, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj88=come_value_126->c_value;
            come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value190=make_type_name_string(left_value_120->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_120->c_value,begin_value_122->c_value,end_value_124->c_value,info->sname,info->sline))));
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_120->type->mPointerNum--;
            __dec_obj89=come_value_126->type;
            come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(left_value_120->type))));
            come_call_finalizer2(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_126->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
            add_come_last_code(info,"%s;\n",come_value_126->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_120));
    }
    __result110__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result110__;
    come_call_finalizer2(CVALUE_finalize,left_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,begin_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,end_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    __result111__ = self->sline;
    return __result111__;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value193;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
    __result112__ = __result_obj__ = ((char*)(right_value193=__builtin_string(self->sname)));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result112__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value194;
void* right_value195;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value201;
struct sNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value201 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 582, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value195=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value194=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 582, "sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result115__ = __result_obj__ = ((struct sNode*)(right_value201=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStoreFieldNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value201) { right_value201 = come_decrement_ref_count2(right_value201, ((struct sNode*)right_value201)->finalize, ((struct sNode*)right_value201)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result115__;
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value202;
char* __dec_obj94;
void* right_value203;
struct sNode* __dec_obj95;
void* right_value204;
char* __dec_obj96;
struct sLoadFieldNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
    self->sline=info->sline;
    __dec_obj94=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string(info->sname))));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value203=sNode_clone(left))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value203) { right_value203 = come_decrement_ref_count2(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj96=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(name))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result116__ = __result_obj__ = self;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result116__;
    come_call_finalizer2(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = (_Bool)0;
    return __result117__;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
void* right_value205;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    __result118__ = __result_obj__ = ((char*)(right_value205=__builtin_string("sLoadFieldNode")));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result118__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_128;
void* right_value206;
char* name_129;
_Bool _if_conditional229;
_Bool __result119__;
void* right_value207;
struct CVALUE* left_value_130;
_Bool _if_conditional230;
void* right_value208;
void* right_value209;
char* __dec_obj97;
struct sType* left_type_131;
void* right_value210;
struct sType* left_type2_132;
struct sClass* klass_133;
struct sType* field_type_134;
int index_135;
char* child_field_name_136;
struct list$1tuple2$2charphsTypephph* o2_saved_137;
struct tuple2$2charphsTypeph* field_138;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_139;
struct sType* field_type2_140;
_Bool _if_conditional231;
void* right_value211;
struct sType* __dec_obj98;
_Bool _if_conditional232;
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
_Bool _if_conditional233;
void* right_value212;
char* __dec_obj99;
void* right_value213;
struct sType* __dec_obj100;
_Bool _if_conditional234;
_Bool _if_conditional235;
void* right_value214;
struct sType* __dec_obj101;
_Bool _if_conditional236;
_Bool __result120__;
void* right_value215;
struct CVALUE* come_value_150;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value216;
char* __dec_obj102;
void* right_value217;
char* __dec_obj103;
_Bool _if_conditional239;
void* right_value218;
char* __dec_obj104;
void* right_value219;
char* __dec_obj105;
void* right_value220;
struct sType* __dec_obj106;
_Bool _if_conditional240;
_Bool __result121__;
_Bool _if_conditional241;
void* right_value221;
struct sType* __dec_obj107;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_128, 0, sizeof(struct sNode*));
right_value206 = (void*)0;
memset(&name_129, 0, sizeof(char*));
right_value207 = (void*)0;
memset(&left_value_130, 0, sizeof(struct CVALUE*));
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&left_type_131, 0, sizeof(struct sType*));
right_value210 = (void*)0;
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
right_value211 = (void*)0;
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
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&come_value_150, 0, sizeof(struct CVALUE*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
    left_128=self->mLeft;
    name_129=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(self->mName))));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional229=!node_compile(left_128,info),    _if_conditional229) {
        __result119__ = (_Bool)0;
        name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    left_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional230=gComeDebug&&left_value_130->type->mPointerNum>0,    _if_conditional230) {
        __dec_obj97=left_value_130->c_value;
        left_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value209=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value208=make_type_name_string(left_value_130->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_130->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_131=left_value_130->type;
    left_type2_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=solve_generics(left_type_131,left_type_131,info))));
    come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_133=left_type2_132->mClass;
    klass_133=map$2charphsClassphp_operator_load_element(info->classes,klass_133->mName);
    field_type_134=((void*)0);
    index_135=0;
    child_field_name_136=((void*)0);
    klass_133=map$2charphsClassphp_operator_load_element(info->classes,klass_133->mName);
    for(    o2_saved_137=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_133->mFields)),field_138=list$1tuple2$2charphsTypephph_begin((o2_saved_137));    !list$1tuple2$2charphsTypephph_end((o2_saved_137));    field_138=list$1tuple2$2charphsTypephph_next((o2_saved_137))    ){
        multiple_assign_var4=field_138;
        field_name_139=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_140=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(_if_conditional231=string_operator_equals(field_name_139,name_129),        _if_conditional231) {
            __dec_obj98=field_type_134;
            field_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(field_type2_140))));
            come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            field_name_139 = come_decrement_ref_count2(field_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_135++;
        field_name_139 = come_decrement_ref_count2(field_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type2_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(_if_conditional232=index_135==list$1tuple2$2charphsTypephph_length(klass_133->mFields),    _if_conditional232) {
        index_135=0;
        for(        o2_saved_141=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_133->mFields)),field_142=list$1tuple2$2charphsTypephph_begin((o2_saved_141));        !list$1tuple2$2charphsTypephph_end((o2_saved_141));        field_142=list$1tuple2$2charphsTypephph_next((o2_saved_141))        ){
            multiple_assign_var5=field_142;
            field_name_143=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_144=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_145=field_type2_144->mClass;
            for(            o2_saved_146=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_145->mFields)),field2_147=list$1tuple2$2charphsTypephph_begin((o2_saved_146));            !list$1tuple2$2charphsTypephph_end((o2_saved_146));            field2_147=list$1tuple2$2charphsTypephph_next((o2_saved_146))            ){
                multiple_assign_var6=field2_147;
                field_name2_148=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_149=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional233=string_operator_equals(field_name2_148,name_129),                _if_conditional233) {
                    __dec_obj99=child_field_name_136;
                    child_field_name_136=(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(field_name_143))));
                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj100=field_type_134;
                    field_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(field_type3_149))));
                    come_call_finalizer2(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    field_name2_148 = come_decrement_ref_count2(field_name2_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,field_type3_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_148 = come_decrement_ref_count2(field_name2_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type3_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(child_field_name_136) {
                field_name_143 = come_decrement_ref_count2(field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional235=string_operator_equals(field_name_143,name_129),            _if_conditional235) {
                __dec_obj101=field_type_134;
                field_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(field_type2_144))));
                come_call_finalizer2(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                field_name_143 = come_decrement_ref_count2(field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_135++;
            field_name_143 = come_decrement_ref_count2(field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type2_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(_if_conditional236=index_135==list$1tuple2$2charphsTypephph_length(klass_133->mFields),        _if_conditional236) {
            err_msg(info,"field not found(%s) in %s(2)",name_129,klass_133->mName);
            __result120__ = (_Bool)0;
            name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            child_field_name_136 = come_decrement_ref_count2(child_field_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result120__;
        }
    }
    come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value215=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 688, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional237=left_value_130->type->mPointerNum>0,    _if_conditional237) {
        if(child_field_name_136) {
            __dec_obj102=come_value_150->c_value;
            come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("%s->%s.%s",left_value_130->c_value,child_field_name_136,name_129))));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj103=come_value_150->c_value;
            come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("%s->%s",left_value_130->c_value,name_129))));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        if(child_field_name_136) {
            __dec_obj104=come_value_150->c_value;
            come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s.%s.%s",left_value_130->c_value,child_field_name_136,name_129))));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj105=come_value_150->c_value;
            come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s.%s",left_value_130->c_value,name_129))));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __dec_obj106=come_value_150->type;
    come_value_150->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(field_type_134))));
    come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_150->var=((void*)0);
    if(_if_conditional240=field_type_134==((void*)0),    _if_conditional240) {
        err_msg(info,"no field(%s)\n",name_129);
        __result121__ = (_Bool)0;
        name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        child_field_name_136 = come_decrement_ref_count2(child_field_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result121__;
    }
    if(_if_conditional241=list$1sNodeph_length(come_value_150->type->mArrayNum)==1,    _if_conditional241) {
        __dec_obj107=come_value_150->type->mOriginalLoadVarType->v1;
        come_value_150->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_clone(come_value_150->type))));
        come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_150->type->mArrayNum);
        come_value_150->type->mPointerNum++;
        come_value_150->type->mOriginalTypeNamePointerNum=come_value_150->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
    __result124__ = (_Bool)1;
    name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_136 = come_decrement_ref_count2(child_field_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result124__;
    name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,left_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type2_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,field_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    child_field_name_136 = come_decrement_ref_count2(child_field_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
        __result122__ = self->len;
        return __result122__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_151;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_152;
struct list$1sNodeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_151, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_152, 0, sizeof(struct list_item$1sNodeph*));
            it_151=self->head;
            while(_while_condtional13=it_151!=((void*)0),            _while_condtional13) {
                prev_it_152=it_151;
                it_151=it_151->next;
                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result123__ = __result_obj__ = self;
            return __result123__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = self->sline;
    return __result125__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value222;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
    __result126__ = __result_obj__ = ((char*)(right_value222=__builtin_string(self->sname)));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value223;
char* __dec_obj108;
void* right_value224;
struct sNode* __dec_obj109;
void* right_value225;
struct sNode* __dec_obj110;
void* right_value226;
struct list$1sNodeph* __dec_obj111;
struct sStoreArrayNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
    self->sline=info->sline;
    __dec_obj108=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(info->sname))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj109=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNode_clone(left))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj110=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=sNode_clone(right))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj111=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value226=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __result127__ = __result_obj__ = self;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result127__;
    come_call_finalizer2(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = (_Bool)0;
    return __result128__;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
void* right_value227;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
    __result129__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sStoreArrayNode")));
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_153;
struct sNode* right_154;
struct list$1sNodeph* array_num_nodes_155;
_Bool _if_conditional246;
_Bool __result130__;
void* right_value228;
struct CVALUE* left_value_156;
_Bool _if_conditional247;
void* right_value229;
void* right_value230;
char* __dec_obj112;
struct sType* left_type_157;
void* right_value231;
void* right_value232;
struct list$1CVALUEph* array_num_160;
struct list$1sNodeph* o2_saved_161;
struct sNode* it_164;
_Bool _if_conditional252;
_Bool __result139__;
void* right_value233;
struct CVALUE* c_value_167;
_Bool _if_conditional253;
_Bool __result140__;
void* right_value234;
struct CVALUE* right_value_168;
struct sType* right_type_169;
struct sClass* klass_170;
void* right_value235;
struct sType* type_171;
char* fun_name_172;
_Bool calling_fun_173;
_Bool _if_conditional254;
_Bool _if_conditional257;
char* check_code_177;
_Bool _if_conditional258;
struct sType* var_type_178;
void* right_value236;
struct sType* result_type_179;
_Bool _if_conditional259;
struct sType* __dec_obj113;
_Bool _if_conditional260;
int n_180;
_Bool _if_conditional261;
void* right_value237;
struct sType* __dec_obj114;
_Bool _if_conditional262;
void* right_value238;
struct sType* __dec_obj115;
_Bool _if_conditional263;
int i_181;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value239;
struct CVALUE* come_value_194;
void* right_value240;
void* right_value241;
struct buffer* buf_195;
void* right_value242;
struct sType* result_type2_196;
void* right_value243;
struct list$1CVALUEph* o2_saved_197;
struct CVALUE* it_200;
void* right_value244;
void* right_value245;
int i_203;
struct list$1sNodeph* o2_saved_204;
struct sNode* it_205;
_Bool _if_conditional290;
void* right_value246;
struct CVALUE* come_value_206;
void* right_value247;
_Bool _if_conditional291;
void* right_value248;
void* right_value249;
char* __dec_obj116;
void* right_value250;
struct CVALUE* come_value_207;
_Bool _if_conditional292;
int i_208;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value251;
void* right_value252;
struct buffer* buf_209;
struct list$1CVALUEph* o2_saved_210;
struct CVALUE* it_211;
void* right_value253;
void* right_value254;
char* left_value_code_212;
void* right_value255;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value256;
char* __dec_obj117;
_Bool _if_conditional297;
void* right_value257;
char* __dec_obj118;
_Bool __result153__;
int right_value_id_213;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value258;
char* __dec_obj119;
_Bool _if_conditional300;
void* right_value259;
char* __dec_obj120;
_Bool __result154__;
void* right_value260;
struct sType* result_type_214;
void* right_value261;
void* right_value262;
struct list$1sNodeph* __dec_obj121;
struct sType* __dec_obj122;
_Bool _if_conditional301;
void* right_value263;
char* __dec_obj123;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_153, 0, sizeof(struct sNode*));
memset(&right_154, 0, sizeof(struct sNode*));
memset(&array_num_nodes_155, 0, sizeof(struct list$1sNodeph*));
right_value228 = (void*)0;
memset(&left_value_156, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&left_type_157, 0, sizeof(struct sType*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&array_num_160, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_161, 0, sizeof(struct list$1sNodeph*));
memset(&it_164, 0, sizeof(struct sNode*));
right_value233 = (void*)0;
memset(&c_value_167, 0, sizeof(struct CVALUE*));
right_value234 = (void*)0;
memset(&right_value_168, 0, sizeof(struct CVALUE*));
memset(&right_type_169, 0, sizeof(struct sType*));
memset(&klass_170, 0, sizeof(struct sClass*));
right_value235 = (void*)0;
memset(&type_171, 0, sizeof(struct sType*));
memset(&fun_name_172, 0, sizeof(char*));
memset(&calling_fun_173, 0, sizeof(_Bool));
memset(&check_code_177, 0, sizeof(char*));
memset(&var_type_178, 0, sizeof(struct sType*));
right_value236 = (void*)0;
memset(&result_type_179, 0, sizeof(struct sType*));
memset(&n_180, 0, sizeof(int));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&i_181, 0, sizeof(int));
right_value239 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&buf_195, 0, sizeof(struct buffer*));
right_value242 = (void*)0;
memset(&result_type2_196, 0, sizeof(struct sType*));
right_value243 = (void*)0;
memset(&o2_saved_197, 0, sizeof(struct list$1CVALUEph*));
memset(&it_200, 0, sizeof(struct CVALUE*));
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&i_203, 0, sizeof(int));
memset(&o2_saved_204, 0, sizeof(struct list$1sNodeph*));
memset(&it_205, 0, sizeof(struct sNode*));
right_value246 = (void*)0;
memset(&come_value_206, 0, sizeof(struct CVALUE*));
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&come_value_207, 0, sizeof(struct CVALUE*));
memset(&i_208, 0, sizeof(int));
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&buf_209, 0, sizeof(struct buffer*));
memset(&o2_saved_210, 0, sizeof(struct list$1CVALUEph*));
memset(&it_211, 0, sizeof(struct CVALUE*));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&left_value_code_212, 0, sizeof(char*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&right_value_id_213, 0, sizeof(int));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&result_type_214, 0, sizeof(struct sType*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
    left_153=self->mLeft;
    right_154=self->mRight;
    array_num_nodes_155=self->mArrayNum;
    if(_if_conditional246=!node_compile(left_153,info),    _if_conditional246) {
        __result130__ = (_Bool)0;
        return __result130__;
    }
    left_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional247=gComeDebug&&left_value_156->type->mPointerNum>0,    _if_conditional247) {
        __dec_obj112=left_value_156->c_value;
        left_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value229=make_type_name_string(left_value_156->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_156->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_157=left_value_156->type;
    array_num_160=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value232=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value231=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 790, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_161=(array_num_nodes_155),it_164=list$1sNodeph_begin((o2_saved_161));    !list$1sNodeph_end((o2_saved_161));    it_164=list$1sNodeph_next((o2_saved_161))    ){
        if(_if_conditional252=!node_compile(it_164,info),        _if_conditional252) {
            __result139__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result139__;
        }
        c_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_160,(struct CVALUE*)come_increment_ref_count(c_value_167));
        come_call_finalizer2(CVALUE_finalize,c_value_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional253=!node_compile(right_154,info),    _if_conditional253) {
        __result140__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result140__;
    }
    right_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_type_169=right_value_168->type;
    klass_170=left_value_156->type->mClass;
    type_171=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_clone(left_value_156->type))));
    come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_172="operator_store_element";
    if(self->mQuote) {
        calling_fun_173=(_Bool)0;
    }
    else {
        calling_fun_173=operator_overload_fun2(type_171,fun_name_172,left_value_156,list$1CVALUEphp_operator_load_element(array_num_160,0),right_value_168,info);
    }
    if(_if_conditional257=!calling_fun_173,    _if_conditional257) {
        check_code_177=((void*)0);
        if(_if_conditional258=left_value_156->var&&left_value_156->var->mType&&list$1sNodeph_length(left_value_156->var->mType->mArrayNum)>0,        _if_conditional258) {
            var_type_178=left_value_156->var->mType;
            result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(left_type_157))));
            come_call_finalizer2(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(result_type_179->mOriginalLoadVarType->v1) {
                __dec_obj113=result_type_179;
                result_type_179=(struct sType*)come_increment_ref_count(result_type_179->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional260=list$1sNodeph_length(result_type_179->mArrayNum)>0,            _if_conditional260) {
                n_180=list$1sNodeph_length(result_type_179->mArrayNum)-list$1CVALUEph_length(array_num_160);
                if(_if_conditional261=n_180==0,                _if_conditional261) {
                    __dec_obj114=result_type_179;
                    result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(left_type_157))));
                    come_call_finalizer2(sType_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(left_type_157->mOriginalLoadVarType->v1) {
                        __dec_obj115=result_type_179;
                        result_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(left_type_157->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_179->mArrayNum);
                }
                else {
                    if(_if_conditional263=n_180>0,                    _if_conditional263) {
                        for(                        i_181=0;                        i_181<n_180;                        i_181++                        ){
                            list$1sNodeph_delete(result_type_179->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional282=n_180<0,                        _if_conditional282) {
                            list$1sNodeph_reset(result_type_179->mArrayNum);
                            result_type_179->mPointerNum+=n_180;
                            if(_if_conditional283=result_type_179->mPointerNum<0,                            _if_conditional283) {
                                result_type_179->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional284=result_type_179->mPointerNum>0,                _if_conditional284) {
                    result_type_179->mPointerNum-=list$1CVALUEph_length(array_num_160);
                    if(_if_conditional285=result_type_179->mPointerNum<0,                    _if_conditional285) {
                        result_type_179->mPointerNum=0;
                    }
                }
            }
            come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 870, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buf_195=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value241=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value240=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 872, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type2_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(result_type_179))));
            come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type2_196->mPointerNum++;
            buffer_append_str(buf_195,((char*)(right_value243=xsprintf("come_range_check(&%s",left_value_156->c_value))));
            right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_197=(struct list$1CVALUEph*)come_increment_ref_count((array_num_160)),it_200=list$1CVALUEph_begin((o2_saved_197));            !list$1CVALUEph_end((o2_saved_197));            it_200=list$1CVALUEph_next((o2_saved_197))            ){
                buffer_append_str(buf_195,((char*)(right_value244=xsprintf("[%s]",it_200->c_value))));
                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_195,((char*)(right_value245=xsprintf(",%s,%s+(",left_value_156->c_value,left_value_156->c_value))));
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_203=0;
            for(            o2_saved_204=(struct list$1sNodeph*)come_increment_ref_count((var_type_178->mArrayNum)),it_205=list$1sNodeph_begin((o2_saved_204));            !list$1sNodeph_end((o2_saved_204));            it_205=list$1sNodeph_next((o2_saved_204))            ){
                if(_if_conditional290=!node_compile(it_205,info),                _if_conditional290) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value246=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                buffer_append_str(buf_195,((char*)(right_value247=xsprintf("%s",come_value_206->c_value))));
                right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional291=i_203!=list$1sNodeph_length(var_type_178->mArrayNum)-1,                _if_conditional291) {
                    buffer_append_str(buf_195,"*");
                }
                i_203++;
                come_call_finalizer2(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_195,((char*)(right_value248=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj116=check_code_177;
            check_code_177=(char*)come_increment_ref_count(((char*)(right_value249=buffer_to_string(buf_195))));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 904, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional292=list$1sNodeph_length(left_type_157->mArrayNum)>0,        _if_conditional292) {
            for(            i_208=0;            i_208<list$1CVALUEph_length(array_num_160);            i_208++            ){
                list$1sNodeph_delete(left_type_157->mArrayNum,-1,-1);
            }
        }
        else {
            if(_if_conditional293=left_type_157->mPointerNum>0,            _if_conditional293) {
                left_type_157->mPointerNum-=list$1CVALUEph_length(array_num_160);
                if(_if_conditional294=left_type_157->mPointerNum<0,                _if_conditional294) {
                    left_type_157->mPointerNum=0;
                }
            }
        }
        buf_209=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value252=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value251=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 925, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_209,left_value_156->c_value);
        for(        o2_saved_210=(struct list$1CVALUEph*)come_increment_ref_count((array_num_160)),it_211=list$1CVALUEph_begin((o2_saved_210));        !list$1CVALUEph_end((o2_saved_210));        it_211=list$1CVALUEph_next((o2_saved_210))        ){
            buffer_append_str(buf_209,((char*)(right_value253=xsprintf("[%s]",it_211->c_value))));
            right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_212=(char*)come_increment_ref_count(((char*)(right_value254=buffer_to_string(buf_209))));
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value255=xsprintf("array is assinged to"))),left_type_157,right_type_169,right_value_168,(_Bool)0,(_Bool)1,info);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional295=left_type_157->mHeap&&right_type_169->mHeap&&left_type_157->mPointerNum>0&&right_type_169->mPointerNum>0,        _if_conditional295) {
            if(_if_conditional296=left_value_156->type->mPointerNum>=1,            _if_conditional296) {
                decrement_ref_count_object(left_type_157,left_value_code_212,info,(_Bool)0);
                std_move(left_type_157,right_type_169,right_value_168,info);
                __dec_obj117=come_value_207->c_value;
                come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("%s=%s",left_value_code_212,right_value_168->c_value))));
                __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional297=left_value_156->type->mPointerNum==0,                _if_conditional297) {
                    decrement_ref_count_object(left_type_157,left_value_code_212,info,(_Bool)0);
                    std_move(left_type_157,right_type_169,right_value_168,info);
                    __dec_obj118=come_value_207->c_value;
                    come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s=%s",left_value_code_212,right_value_168->c_value))));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_212,left_value_156->type->mPointerNum);
                    __result153__ = (_Bool)0;
                    check_code_177 = come_decrement_ref_count2(check_code_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_212 = come_decrement_ref_count2(left_value_code_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result153__;
                }
            }
            right_value_id_213=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_168->c_value));
            if(_if_conditional298=right_value_id_213!=-1,            _if_conditional298) {
                remove_object_from_right_values(right_value_id_213,info);
            }
        }
        else {
            if(_if_conditional299=left_value_156->type->mPointerNum>=1,            _if_conditional299) {
                __dec_obj119=come_value_207->c_value;
                come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s=%s",left_value_code_212,right_value_168->c_value))));
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional300=left_value_156->type->mPointerNum==0,                _if_conditional300) {
                    __dec_obj120=come_value_207->c_value;
                    come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("%s=%s",left_value_code_212,right_value_168->c_value))));
                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_212,left_value_156->type->mPointerNum);
                    __result154__ = (_Bool)0;
                    check_code_177 = come_decrement_ref_count2(check_code_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,come_value_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,buf_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    left_value_code_212 = come_decrement_ref_count2(left_value_code_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result154__;
                }
            }
        }
        result_type_214=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(left_type_157))));
        come_call_finalizer2(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj121=result_type_214->mArrayNum;
        result_type_214->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value262=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value261=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 971, "list$1sNodeph"))))))));
        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sNodephp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sNodephp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj122=come_value_207->type;
        come_value_207->type=(struct sType*)come_increment_ref_count(result_type_214);
        come_call_finalizer2(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_value_207->var=((void*)0);
        if(_if_conditional301=check_code_177&&gComeDebug,        _if_conditional301) {
            __dec_obj123=come_value_207->c_value;
            come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("(%s, %s)",check_code_177,come_value_207->c_value))));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_207));
        add_come_last_code(info,"%s;\n",come_value_207->c_value);
        check_code_177 = come_decrement_ref_count2(check_code_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_212 = come_decrement_ref_count2(left_value_code_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result155__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result155__;
    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result131__ = __result_obj__ = self;
        come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result131__;
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
            it_158=self->head;
            while(_while_condtional14=it_158!=((void*)0),            _while_condtional14) {
                prev_it_159=it_158;
                it_158=it_158->next;
                come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional248;
struct sNode* result_162;
struct sNode* __result132__;
_Bool _if_conditional249;
struct sNode* __result133__;
struct sNode* result_163;
struct sNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct sNode*));
memset(&result_163, 0, sizeof(struct sNode*));
        if(_if_conditional248=self==((void*)0),        _if_conditional248) {
            memset(&result_162,0,sizeof(struct sNode*));
            __result132__ = __result_obj__ = result_162;
            return __result132__;
        }
        self->it=self->head;
        if(self->it) {
            __result133__ = __result_obj__ = self->it->item;
            return __result133__;
        }
        memset(&result_163,0,sizeof(struct sNode*));
        __result134__ = __result_obj__ = result_163;
        return __result134__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
        __result135__ = self==((void*)0)||self->it==((void*)0);
        return __result135__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional250;
struct sNode* result_165;
struct sNode* __result136__;
_Bool _if_conditional251;
struct sNode* __result137__;
struct sNode* result_166;
struct sNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_165, 0, sizeof(struct sNode*));
memset(&result_166, 0, sizeof(struct sNode*));
        if(_if_conditional250=self==((void*)0)||self->it==((void*)0),        _if_conditional250) {
            memset(&result_165,0,sizeof(struct sNode*));
            __result136__ = __result_obj__ = result_165;
            return __result136__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result137__ = __result_obj__ = self->it->item;
            return __result137__;
        }
        memset(&result_166,0,sizeof(struct sNode*));
        __result138__ = __result_obj__ = result_166;
        return __result138__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional255;
struct list_item$1CVALUEph* it_174;
int i_175;
_Bool _while_condtional15;
_Bool _if_conditional256;
struct CVALUE* __result141__;
struct CVALUE* default_value_176;
struct CVALUE* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_174, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_175, 0, sizeof(int));
memset(&default_value_176, 0, sizeof(struct CVALUE*));
            if(_if_conditional255=position<0,            _if_conditional255) {
                position+=self->len;
            }
            it_174=self->head;
            i_175=0;
            while(_while_condtional15=it_174!=((void*)0),            _while_condtional15) {
                if(_if_conditional256=position==i_175,                _if_conditional256) {
                    __result141__ = __result_obj__ = it_174->item;
                    return __result141__;
                }
                it_174=it_174->next;
                i_175++;
            }
            memset(&default_value_176,0,sizeof(struct CVALUE*));
            __result142__ = __result_obj__ = default_value_176;
            come_call_finalizer2(CVALUE_finalize,default_value_176, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result142__;
            come_call_finalizer2(CVALUE_finalize,default_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result143__ = self->len;
                    return __result143__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
int tmp_182;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
struct list$1sNodeph* __result144__;
_Bool _if_conditional270;
_Bool _if_conditional271;
struct list_item$1sNodeph* it_183;
int i_184;
_Bool _while_condtional16;
_Bool _if_conditional272;
struct list_item$1sNodeph* prev_it_185;
_Bool _if_conditional273;
_Bool _if_conditional274;
struct list_item$1sNodeph* it_186;
int i_187;
_Bool _while_condtional17;
_Bool _if_conditional275;
_Bool _if_conditional276;
struct list_item$1sNodeph* prev_it_188;
struct list_item$1sNodeph* it_189;
struct list_item$1sNodeph* head_prev_it_190;
struct list_item$1sNodeph* tail_it_191;
int i_192;
_Bool _while_condtional18;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
struct list_item$1sNodeph* prev_it_193;
_Bool _if_conditional280;
_Bool _if_conditional281;
struct list$1sNodeph* __result145__;
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
                                if(_if_conditional264=head<0,                                _if_conditional264) {
                                    head+=self->len;
                                }
                                if(_if_conditional265=tail<0,                                _if_conditional265) {
                                    tail+=self->len+1;
                                }
                                if(_if_conditional266=head>tail,                                _if_conditional266) {
                                    tmp_182=tail;
                                    tail=head;
                                    head=tmp_182;
                                }
                                if(_if_conditional267=head<0,                                _if_conditional267) {
                                    head=0;
                                }
                                if(_if_conditional268=tail>self->len,                                _if_conditional268) {
                                    tail=self->len;
                                }
                                if(_if_conditional269=head==tail,                                _if_conditional269) {
                                    __result144__ = __result_obj__ = self;
                                    return __result144__;
                                }
                                if(_if_conditional270=head==0&&tail==self->len,                                _if_conditional270) {
                                    list$1sNodeph_reset(self);
                                }
                                else {
                                    if(_if_conditional271=head==0,                                    _if_conditional271) {
                                        it_183=self->head;
                                        i_184=0;
                                        while(_while_condtional16=it_183!=((void*)0),                                        _while_condtional16) {
                                            if(_if_conditional272=i_184<tail,                                            _if_conditional272) {
                                                prev_it_185=it_183;
                                                it_183=it_183->next;
                                                i_184++;
                                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->len--;
                                            }
                                            else {
                                                if(_if_conditional273=i_184==tail,                                                _if_conditional273) {
                                                    self->head=it_183;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_183=it_183->next;
                                                    i_184++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional274=tail==self->len,                                        _if_conditional274) {
                                            it_186=self->head;
                                            i_187=0;
                                            while(_while_condtional17=it_186!=((void*)0),                                            _while_condtional17) {
                                                if(_if_conditional275=i_187==head,                                                _if_conditional275) {
                                                    self->tail=it_186->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(_if_conditional276=i_187>=head,                                                _if_conditional276) {
                                                    prev_it_188=it_186;
                                                    it_186=it_186->next;
                                                    i_187++;
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    self->len--;
                                                }
                                                else {
                                                    it_186=it_186->next;
                                                    i_187++;
                                                }
                                            }
                                        }
                                        else {
                                            it_189=self->head;
                                            head_prev_it_190=((void*)0);
                                            tail_it_191=((void*)0);
                                            i_192=0;
                                            while(_while_condtional18=it_189!=((void*)0),                                            _while_condtional18) {
                                                if(_if_conditional277=i_192==head,                                                _if_conditional277) {
                                                    head_prev_it_190=it_189->prev;
                                                }
                                                if(_if_conditional278=i_192==tail,                                                _if_conditional278) {
                                                    tail_it_191=it_189;
                                                }
                                                if(_if_conditional279=i_192>=head&&i_192<tail,                                                _if_conditional279) {
                                                    prev_it_193=it_189;
                                                    it_189=it_189->next;
                                                    i_192++;
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    self->len--;
                                                }
                                                else {
                                                    it_189=it_189->next;
                                                    i_192++;
                                                }
                                            }
                                            if(_if_conditional280=head_prev_it_190!=((void*)0),                                            _if_conditional280) {
                                                head_prev_it_190->next=tail_it_191;
                                            }
                                            if(_if_conditional281=tail_it_191!=((void*)0),                                            _if_conditional281) {
                                                tail_it_191->prev=head_prev_it_190;
                                            }
                                        }
                                    }
                                }
                                __result145__ = __result_obj__ = self;
                                return __result145__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional286;
struct CVALUE* result_198;
struct CVALUE* __result146__;
_Bool _if_conditional287;
struct CVALUE* __result147__;
struct CVALUE* result_199;
struct CVALUE* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_198, 0, sizeof(struct CVALUE*));
memset(&result_199, 0, sizeof(struct CVALUE*));
                if(_if_conditional286=self==((void*)0),                _if_conditional286) {
                    memset(&result_198,0,sizeof(struct CVALUE*));
                    __result146__ = __result_obj__ = result_198;
                    return __result146__;
                }
                self->it=self->head;
                if(self->it) {
                    __result147__ = __result_obj__ = self->it->item;
                    return __result147__;
                }
                memset(&result_199,0,sizeof(struct CVALUE*));
                __result148__ = __result_obj__ = result_199;
                return __result148__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
                __result149__ = self==((void*)0)||self->it==((void*)0);
                return __result149__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional288;
struct CVALUE* result_201;
struct CVALUE* __result150__;
_Bool _if_conditional289;
struct CVALUE* __result151__;
struct CVALUE* result_202;
struct CVALUE* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_201, 0, sizeof(struct CVALUE*));
memset(&result_202, 0, sizeof(struct CVALUE*));
                if(_if_conditional288=self==((void*)0)||self->it==((void*)0),                _if_conditional288) {
                    memset(&result_201,0,sizeof(struct CVALUE*));
                    __result150__ = __result_obj__ = result_201;
                    return __result150__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result151__ = __result_obj__ = self->it->item;
                    return __result151__;
                }
                memset(&result_202,0,sizeof(struct CVALUE*));
                __result152__ = __result_obj__ = result_202;
                return __result152__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = self->sline;
    return __result156__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value264;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
    __result157__ = __result_obj__ = ((char*)(right_value264=__builtin_string(self->sname)));
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result157__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value265;
char* __dec_obj124;
void* right_value266;
struct list$1sNodeph* __dec_obj125;
void* right_value267;
struct sNode* __dec_obj126;
struct sLoadArrayNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
    self->sline=info->sline;
    __dec_obj124=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(info->sname))));
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj125=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value266=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj126=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=sNode_clone(left))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value267) { right_value267 = come_decrement_ref_count2(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result158__ = __result_obj__ = self;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result158__;
    come_call_finalizer2(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = (_Bool)0;
    return __result159__;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
void* right_value268;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value268 = (void*)0;
    __result160__ = __result_obj__ = ((char*)(right_value268=__builtin_string("sLoadArrayNode")));
    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_215;
struct list$1sNodeph* array_num_nodes_216;
_Bool _if_conditional305;
_Bool __result161__;
void* right_value269;
struct CVALUE* left_value_217;
_Bool _if_conditional306;
void* right_value270;
void* right_value271;
char* __dec_obj127;
void* right_value272;
struct sType* left_type_218;
void* right_value273;
void* right_value274;
struct list$1CVALUEph* array_num_219;
struct list$1sNodeph* o2_saved_220;
struct sNode* it_221;
_Bool _if_conditional307;
_Bool __result162__;
void* right_value275;
struct CVALUE* c_value_222;
void* right_value276;
struct sType* type_223;
char* fun_name_224;
_Bool calling_fun_225;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct sType* var_type_226;
void* right_value277;
struct sType* result_type_227;
_Bool _if_conditional311;
struct sType* __dec_obj128;
_Bool _if_conditional312;
int n_228;
_Bool _if_conditional313;
void* right_value278;
struct sType* __dec_obj129;
_Bool _if_conditional314;
void* right_value279;
struct sType* __dec_obj130;
_Bool _if_conditional315;
int i_229;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value280;
struct CVALUE* come_value_230;
void* right_value281;
void* right_value282;
struct buffer* buf_231;
void* right_value283;
struct sType* result_type2_232;
void* right_value284;
void* right_value285;
struct list$1CVALUEph* o2_saved_233;
struct CVALUE* it_234;
void* right_value286;
void* right_value287;
int i_235;
struct list$1sNodeph* o2_saved_236;
struct sNode* it_237;
_Bool _if_conditional320;
void* right_value288;
struct CVALUE* come_value_238;
void* right_value289;
_Bool _if_conditional321;
void* right_value290;
void* right_value291;
char* left_value_code_239;
void* right_value292;
char* __dec_obj131;
void* right_value293;
struct sType* __dec_obj132;
void* right_value294;
struct CVALUE* come_value_240;
void* right_value295;
void* right_value296;
struct buffer* buf_241;
struct list$1CVALUEph* o2_saved_242;
struct CVALUE* it_243;
void* right_value297;
void* right_value298;
char* left_value_code_244;
void* right_value299;
char* __dec_obj133;
void* right_value300;
struct sType* result_type_245;
_Bool _if_conditional322;
struct sType* __dec_obj134;
_Bool _if_conditional323;
int n_246;
_Bool _if_conditional324;
void* right_value301;
struct sType* __dec_obj135;
_Bool _if_conditional325;
void* right_value302;
struct sType* __dec_obj136;
_Bool _if_conditional326;
int i_247;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool _if_conditional330;
void* right_value303;
struct sType* __dec_obj137;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_215, 0, sizeof(struct sNode*));
memset(&array_num_nodes_216, 0, sizeof(struct list$1sNodeph*));
right_value269 = (void*)0;
memset(&left_value_217, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&left_type_218, 0, sizeof(struct sType*));
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&array_num_219, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_220, 0, sizeof(struct list$1sNodeph*));
memset(&it_221, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
memset(&c_value_222, 0, sizeof(struct CVALUE*));
right_value276 = (void*)0;
memset(&type_223, 0, sizeof(struct sType*));
memset(&fun_name_224, 0, sizeof(char*));
memset(&calling_fun_225, 0, sizeof(_Bool));
memset(&var_type_226, 0, sizeof(struct sType*));
right_value277 = (void*)0;
memset(&result_type_227, 0, sizeof(struct sType*));
memset(&n_228, 0, sizeof(int));
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&i_229, 0, sizeof(int));
right_value280 = (void*)0;
memset(&come_value_230, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&buf_231, 0, sizeof(struct buffer*));
right_value283 = (void*)0;
memset(&result_type2_232, 0, sizeof(struct sType*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&o2_saved_233, 0, sizeof(struct list$1CVALUEph*));
memset(&it_234, 0, sizeof(struct CVALUE*));
right_value286 = (void*)0;
right_value287 = (void*)0;
memset(&i_235, 0, sizeof(int));
memset(&o2_saved_236, 0, sizeof(struct list$1sNodeph*));
memset(&it_237, 0, sizeof(struct sNode*));
right_value288 = (void*)0;
memset(&come_value_238, 0, sizeof(struct CVALUE*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&left_value_code_239, 0, sizeof(char*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&come_value_240, 0, sizeof(struct CVALUE*));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&buf_241, 0, sizeof(struct buffer*));
memset(&o2_saved_242, 0, sizeof(struct list$1CVALUEph*));
memset(&it_243, 0, sizeof(struct CVALUE*));
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&left_value_code_244, 0, sizeof(char*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&result_type_245, 0, sizeof(struct sType*));
memset(&n_246, 0, sizeof(int));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&i_247, 0, sizeof(int));
right_value303 = (void*)0;
    left_215=self->mLeft;
    array_num_nodes_216=self->mArrayNum;
    if(_if_conditional305=!node_compile(left_215,info),    _if_conditional305) {
        __result161__ = (_Bool)0;
        return __result161__;
    }
    left_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional306=gComeDebug&&left_value_217->type->mPointerNum>0,    _if_conditional306) {
        __dec_obj127=left_value_217->c_value;
        left_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value271=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value270=make_type_name_string(left_value_217->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_217->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_218=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(left_value_217->type))));
    come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    array_num_219=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value274=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value273=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1048, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_220=(array_num_nodes_216),it_221=list$1sNodeph_begin((o2_saved_220));    !list$1sNodeph_end((o2_saved_220));    it_221=list$1sNodeph_next((o2_saved_220))    ){
        if(_if_conditional307=!node_compile(it_221,info),        _if_conditional307) {
            __result162__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result162__;
        }
        c_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_219,(struct CVALUE*)come_increment_ref_count(c_value_222));
        come_call_finalizer2(CVALUE_finalize,c_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_clone(left_value_217->type))));
    come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_224="operator_load_element";
    if(self->mQuote) {
        calling_fun_225=(_Bool)0;
    }
    else {
        calling_fun_225=operator_overload_fun(type_223,fun_name_224,left_value_217,list$1CVALUEphp_operator_load_element(array_num_219,0),info);
    }
    if(_if_conditional309=!calling_fun_225,    _if_conditional309) {
        if(_if_conditional310=gComeDebug&&left_value_217->var&&left_value_217->var->mType&&list$1sNodeph_length(left_value_217->var->mType->mArrayNum)>0,        _if_conditional310) {
            var_type_226=left_value_217->var->mType;
            result_type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value277=sType_clone(left_type_218))));
            come_call_finalizer2(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(result_type_227->mOriginalLoadVarType->v1) {
                __dec_obj128=result_type_227;
                result_type_227=(struct sType*)come_increment_ref_count(result_type_227->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional312=list$1sNodeph_length(result_type_227->mArrayNum)>0,            _if_conditional312) {
                n_228=list$1sNodeph_length(result_type_227->mArrayNum)-list$1CVALUEph_length(array_num_219);
                if(_if_conditional313=n_228==0,                _if_conditional313) {
                    __dec_obj129=result_type_227;
                    result_type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_clone(left_type_218))));
                    come_call_finalizer2(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(left_type_218->mOriginalLoadVarType->v1) {
                        __dec_obj130=result_type_227;
                        result_type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(left_type_218->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_227->mArrayNum);
                }
                else {
                    if(_if_conditional315=n_228>0,                    _if_conditional315) {
                        for(                        i_229=0;                        i_229<n_228;                        i_229++                        ){
                            list$1sNodeph_delete(result_type_227->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional316=n_228<0,                        _if_conditional316) {
                            list$1sNodeph_reset(result_type_227->mArrayNum);
                            result_type_227->mPointerNum+=n_228;
                            if(_if_conditional317=result_type_227->mPointerNum<0,                            _if_conditional317) {
                                result_type_227->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional318=result_type_227->mPointerNum>0,                _if_conditional318) {
                    result_type_227->mPointerNum-=list$1CVALUEph_length(array_num_219);
                    if(_if_conditional319=result_type_227->mPointerNum<0,                    _if_conditional319) {
                        result_type_227->mPointerNum=0;
                    }
                }
            }
            come_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1116, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buf_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value282=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value281=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1118, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type2_232=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(result_type_227))));
            come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type2_232->mPointerNum++;
            buffer_append_str(buf_231,((char*)(right_value285=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value284=make_type_name_string(result_type2_232,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_217->c_value))));
            right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_233=(struct list$1CVALUEph*)come_increment_ref_count((array_num_219)),it_234=list$1CVALUEph_begin((o2_saved_233));            !list$1CVALUEph_end((o2_saved_233));            it_234=list$1CVALUEph_next((o2_saved_233))            ){
                buffer_append_str(buf_231,((char*)(right_value286=xsprintf("[%s]",it_234->c_value))));
                right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_231,((char*)(right_value287=xsprintf(",%s,%s+(",left_value_217->c_value,left_value_217->c_value))));
            right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_235=0;
            for(            o2_saved_236=(struct list$1sNodeph*)come_increment_ref_count((var_type_226->mArrayNum)),it_237=list$1sNodeph_begin((o2_saved_236));            !list$1sNodeph_end((o2_saved_236));            it_237=list$1sNodeph_next((o2_saved_236))            ){
                if(_if_conditional320=!node_compile(it_237,info),                _if_conditional320) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                buffer_append_str(buf_231,((char*)(right_value289=xsprintf("%s",come_value_238->c_value))));
                right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional321=i_235!=list$1sNodeph_length(var_type_226->mArrayNum)-1,                _if_conditional321) {
                    buffer_append_str(buf_231,"*");
                }
                i_235++;
                come_call_finalizer2(CVALUE_finalize,come_value_238, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_231,((char*)(right_value290=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_code_239=(char*)come_increment_ref_count(((char*)(right_value291=buffer_to_string(buf_231))));
            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj131=come_value_230->c_value;
            come_value_230->c_value=(char*)come_increment_ref_count(((char*)(right_value292=xsprintf("%s",left_value_code_239))));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj132=come_value_230->type;
            come_value_230->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(result_type_227))));
            come_call_finalizer2(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_230->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_230));
            add_come_last_code(info,"%s;\n",come_value_230->c_value);
            come_call_finalizer2(sType_finalize,result_type_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_239 = come_decrement_ref_count2(left_value_code_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_240=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1162, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buf_241=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value296=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value295=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1164, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_241,left_value_217->c_value);
            for(            o2_saved_242=(struct list$1CVALUEph*)come_increment_ref_count((array_num_219)),it_243=list$1CVALUEph_begin((o2_saved_242));            !list$1CVALUEph_end((o2_saved_242));            it_243=list$1CVALUEph_next((o2_saved_242))            ){
                buffer_append_str(buf_241,((char*)(right_value297=xsprintf("[%s]",it_243->c_value))));
                right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_244=(char*)come_increment_ref_count(((char*)(right_value298=buffer_to_string(buf_241))));
            right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj133=come_value_240->c_value;
            come_value_240->c_value=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("%s",left_value_code_244))));
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_clone(left_type_218))));
            come_call_finalizer2(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(result_type_245->mOriginalLoadVarType->v1) {
                __dec_obj134=result_type_245;
                result_type_245=(struct sType*)come_increment_ref_count(result_type_245->mOriginalLoadVarType->v1);
                come_call_finalizer2(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional323=list$1sNodeph_length(result_type_245->mArrayNum)>0,            _if_conditional323) {
                n_246=list$1sNodeph_length(result_type_245->mArrayNum)-list$1CVALUEph_length(array_num_219);
                if(_if_conditional324=n_246==0,                _if_conditional324) {
                    __dec_obj135=result_type_245;
                    result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_clone(left_type_218))));
                    come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(left_type_218->mOriginalLoadVarType->v1) {
                        __dec_obj136=result_type_245;
                        result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_clone(left_type_218->mOriginalLoadVarType->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_245->mArrayNum);
                }
                else {
                    if(_if_conditional326=n_246>0,                    _if_conditional326) {
                        for(                        i_247=0;                        i_247<n_246;                        i_247++                        ){
                            list$1sNodeph_delete(result_type_245->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional327=n_246<0,                        _if_conditional327) {
                            list$1sNodeph_reset(result_type_245->mArrayNum);
                            result_type_245->mPointerNum+=n_246;
                            if(_if_conditional328=result_type_245->mPointerNum<0,                            _if_conditional328) {
                                result_type_245->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional329=result_type_245->mPointerNum>0,                _if_conditional329) {
                    result_type_245->mPointerNum-=list$1CVALUEph_length(array_num_219);
                    if(_if_conditional330=result_type_245->mPointerNum<0,                    _if_conditional330) {
                        result_type_245->mPointerNum=0;
                    }
                }
            }
            __dec_obj137=come_value_240->type;
            come_value_240->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(result_type_245))));
            come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value_240->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_240));
            add_come_last_code(info,"%s;\n",come_value_240->c_value);
            come_call_finalizer2(CVALUE_finalize,come_value_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,buf_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            left_value_code_244 = come_decrement_ref_count2(left_value_code_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    __result163__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result163__;
    come_call_finalizer2(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = self->sline;
    return __result164__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value304;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
    __result165__ = __result_obj__ = ((char*)(right_value304=__builtin_string(self->sname)));
    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result165__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value305;
char* __dec_obj138;
void* right_value306;
struct list$1sNodeph* __dec_obj139;
void* right_value307;
struct sNode* __dec_obj140;
struct sLoadRangeArrayNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
    self->sline=info->sline;
    __dec_obj138=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string(info->sname))));
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj139=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value306=list$1sNodephp_clone(array_num))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj140=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(left))));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result166__ = __result_obj__ = self;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result166__;
    come_call_finalizer2(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = (_Bool)0;
    return __result167__;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
void* right_value308;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
    __result168__ = __result_obj__ = ((char*)(right_value308=__builtin_string("sLoadRangeArrayNode")));
    right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result168__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_248;
struct list$1sNodeph* array_num_nodes_249;
_Bool _if_conditional334;
_Bool __result169__;
void* right_value309;
struct CVALUE* left_value_250;
void* right_value310;
struct sType* left_type_251;
void* right_value311;
void* right_value312;
struct list$1CVALUEph* array_num_252;
struct list$1sNodeph* o2_saved_253;
struct sNode* it_254;
_Bool _if_conditional335;
_Bool __result170__;
void* right_value313;
struct CVALUE* c_value_255;
void* right_value314;
struct sType* type_256;
char* fun_name_257;
_Bool calling_fun_258;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value315;
struct CVALUE* come_value_259;
void* right_value316;
void* right_value317;
struct buffer* buf_260;
struct list$1CVALUEph* o2_saved_261;
struct CVALUE* it_262;
void* right_value318;
void* right_value319;
char* left_value_code_263;
void* right_value320;
char* __dec_obj141;
void* right_value321;
struct sType* result_type_264;
_Bool _if_conditional338;
struct sType* __dec_obj142;
_Bool _if_conditional339;
int n_265;
_Bool _if_conditional340;
void* right_value322;
struct sType* __dec_obj143;
_Bool _if_conditional341;
void* right_value323;
struct sType* __dec_obj144;
_Bool _if_conditional342;
int i_266;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
void* right_value324;
struct sType* __dec_obj145;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_248, 0, sizeof(struct sNode*));
memset(&array_num_nodes_249, 0, sizeof(struct list$1sNodeph*));
right_value309 = (void*)0;
memset(&left_value_250, 0, sizeof(struct CVALUE*));
right_value310 = (void*)0;
memset(&left_type_251, 0, sizeof(struct sType*));
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&array_num_252, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_253, 0, sizeof(struct list$1sNodeph*));
memset(&it_254, 0, sizeof(struct sNode*));
right_value313 = (void*)0;
memset(&c_value_255, 0, sizeof(struct CVALUE*));
right_value314 = (void*)0;
memset(&type_256, 0, sizeof(struct sType*));
memset(&fun_name_257, 0, sizeof(char*));
memset(&calling_fun_258, 0, sizeof(_Bool));
right_value315 = (void*)0;
memset(&come_value_259, 0, sizeof(struct CVALUE*));
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&buf_260, 0, sizeof(struct buffer*));
memset(&o2_saved_261, 0, sizeof(struct list$1CVALUEph*));
memset(&it_262, 0, sizeof(struct CVALUE*));
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&left_value_code_263, 0, sizeof(char*));
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&result_type_264, 0, sizeof(struct sType*));
memset(&n_265, 0, sizeof(int));
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&i_266, 0, sizeof(int));
right_value324 = (void*)0;
    left_248=self->mLeft;
    array_num_nodes_249=self->mArrayNum;
    if(_if_conditional334=!node_compile(left_248,info),    _if_conditional334) {
        __result169__ = (_Bool)0;
        return __result169__;
    }
    left_value_250=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value309=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(left_value_250->type))));
    come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    array_num_252=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value312=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value311=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1285, "list$1CVALUEph"))))))));
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1CVALUEphp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_253=(array_num_nodes_249),it_254=list$1sNodeph_begin((o2_saved_253));    !list$1sNodeph_end((o2_saved_253));    it_254=list$1sNodeph_next((o2_saved_253))    ){
        if(_if_conditional335=!node_compile(it_254,info),        _if_conditional335) {
            __result170__ = (_Bool)0;
            come_call_finalizer2(CVALUE_finalize,left_value_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,left_type_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1CVALUEphp_finalize,array_num_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result170__;
        }
        c_value_255=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value313=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_252,(struct CVALUE*)come_increment_ref_count(c_value_255));
        come_call_finalizer2(CVALUE_finalize,c_value_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    type_256=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(left_value_250->type))));
    come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    fun_name_257="operator_load_range_element";
    if(self->mQuote) {
        calling_fun_258=(_Bool)0;
    }
    else {
        calling_fun_258=operator_overload_fun2(type_256,fun_name_257,left_value_250,list$1CVALUEphp_operator_load_element(array_num_252,0),list$1CVALUEphp_operator_load_element(array_num_252,1),info);
    }
    if(_if_conditional337=!calling_fun_258,    _if_conditional337) {
        come_value_259=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value315=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1310, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buf_260=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value317=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value316=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1312, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_260,left_value_250->c_value);
        for(        o2_saved_261=(struct list$1CVALUEph*)come_increment_ref_count((array_num_252)),it_262=list$1CVALUEph_begin((o2_saved_261));        !list$1CVALUEph_end((o2_saved_261));        it_262=list$1CVALUEph_next((o2_saved_261))        ){
            buffer_append_str(buf_260,((char*)(right_value318=xsprintf("[%s]",it_262->c_value))));
            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_263=(char*)come_increment_ref_count(((char*)(right_value319=buffer_to_string(buf_260))));
        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj141=come_value_259->c_value;
        come_value_259->c_value=(char*)come_increment_ref_count(((char*)(right_value320=xsprintf("%s",left_value_code_263))));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_264=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_clone(left_type_251))));
        come_call_finalizer2(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(result_type_264->mOriginalLoadVarType->v1) {
            __dec_obj142=result_type_264;
            result_type_264=(struct sType*)come_increment_ref_count(result_type_264->mOriginalLoadVarType->v1);
            come_call_finalizer2(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional339=list$1sNodeph_length(result_type_264->mArrayNum)>0,        _if_conditional339) {
            n_265=list$1sNodeph_length(result_type_264->mArrayNum)-list$1CVALUEph_length(array_num_252);
            if(_if_conditional340=n_265==0,            _if_conditional340) {
                __dec_obj143=result_type_264;
                result_type_264=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_clone(left_type_251))));
                come_call_finalizer2(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(left_type_251->mOriginalLoadVarType->v1) {
                    __dec_obj144=result_type_264;
                    result_type_264=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(left_type_251->mOriginalLoadVarType->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                list$1sNodeph_reset(result_type_264->mArrayNum);
            }
            else {
                if(_if_conditional342=n_265>0,                _if_conditional342) {
                    for(                    i_266=0;                    i_266<n_265;                    i_266++                    ){
                        list$1sNodeph_delete(result_type_264->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional343=n_265<0,                    _if_conditional343) {
                        list$1sNodeph_reset(result_type_264->mArrayNum);
                        result_type_264->mPointerNum+=n_265;
                        if(_if_conditional344=result_type_264->mPointerNum<0,                        _if_conditional344) {
                            result_type_264->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional345=result_type_264->mPointerNum>0,            _if_conditional345) {
                result_type_264->mPointerNum-=list$1CVALUEph_length(array_num_252);
                if(_if_conditional346=result_type_264->mPointerNum<0,                _if_conditional346) {
                    result_type_264->mPointerNum=0;
                }
            }
        }
        __dec_obj145=come_value_259->type;
        come_value_259->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(result_type_264))));
        come_call_finalizer2(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_259->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_259));
        add_come_last_code(info,"%s;\n",come_value_259->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value_code_263 = come_decrement_ref_count2(left_value_code_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result171__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result171__;
    come_call_finalizer2(CVALUE_finalize,left_value_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,array_num_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
int __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = self->sline;
    return __result172__;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value325;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
    __result173__ = __result_obj__ = ((char*)(right_value325=__builtin_string(self->sname)));
    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
struct sNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    __result174__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result174__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result175__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result175__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional19;
_Bool range_array_267;
char* p_268;
int sline_269;
_Bool _if_conditional347;
_Bool no_comma_270;
_Bool no_output_err_271;
_Bool no_output_come_code_272;
void* right_value326;
struct sNode* exp_273;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool quote_274;
_Bool _if_conditional350;
void* right_value327;
void* right_value328;
struct list$1sNodeph* array_num_275;
void* right_value329;
struct sNode* node2_276;
_Bool _if_conditional353;
void* right_value333;
struct sNode* node3_280;
void* right_value334;
void* right_value335;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* right_value340;
struct sNode* __dec_obj152;
_Bool _if_conditional363;
_Bool quote_282;
_Bool _if_conditional364;
_Bool range_283;
void* right_value341;
void* right_value342;
struct list$1sNodeph* array_num_284;
_Bool _while_condtional20;
_Bool range_array2_285;
char* p_286;
int sline_287;
_Bool _if_conditional365;
_Bool no_comma_288;
_Bool no_output_err_289;
_Bool no_output_come_code_290;
void* right_value343;
struct sNode* exp_291;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value344;
struct sNode* node2_292;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value345;
struct sNode* right_node_293;
void* right_value346;
void* right_value347;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value353;
struct sNode* __dec_obj157;
void* right_value354;
void* right_value355;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value360;
struct sNode* __dec_obj161;
_Bool _if_conditional391;
_Bool no_comma_296;
void* right_value361;
struct sNode* begin_297;
void* right_value362;
struct sNode* end_298;
void* right_value363;
void* right_value364;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value370;
struct sNode* __dec_obj166;
_Bool _if_conditional402;
void* right_value371;
void* right_value372;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value376;
struct sNode* __dec_obj169;
_Bool _if_conditional410;
_Bool _if_conditional411;
void* right_value377;
void* right_value378;
void* right_value379;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* right_value383;
struct sNode* __dec_obj172;
void* right_value384;
char* field_name_302;
_Bool parse_method_generics_type_303;
char* p_304;
int sline_305;
_Bool _if_conditional419;
_Bool _if_conditional420;
void* right_value385;
char* word_306;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value386;
struct sNode* right_node_307;
void* right_value387;
void* right_value388;
struct sNode* _inf_value8;
struct sStoreFieldNode* _inf_obj_value8;
void* right_value394;
struct sNode* __dec_obj177;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value395;
void* right_value396;
struct sNode* __dec_obj178;
_Bool _if_conditional435;
void* right_value397;
void* right_value398;
struct sNode* __dec_obj179;
void* right_value399;
void* right_value400;
struct sNode* __dec_obj180;
void* right_value401;
void* right_value402;
struct sNode* _inf_value9;
struct sLoadFieldNode* _inf_obj_value9;
void* right_value407;
struct sNode* __dec_obj184;
void* right_value408;
struct sNode* node2_310;
_Bool _if_conditional444;
struct sNode* __dec_obj185;
struct sNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_267, 0, sizeof(_Bool));
memset(&p_268, 0, sizeof(char*));
memset(&sline_269, 0, sizeof(int));
memset(&no_comma_270, 0, sizeof(_Bool));
memset(&no_output_err_271, 0, sizeof(_Bool));
memset(&no_output_come_code_272, 0, sizeof(_Bool));
right_value326 = (void*)0;
memset(&exp_273, 0, sizeof(struct sNode*));
memset(&quote_274, 0, sizeof(_Bool));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&array_num_275, 0, sizeof(struct list$1sNodeph*));
right_value329 = (void*)0;
memset(&node2_276, 0, sizeof(struct sNode*));
right_value333 = (void*)0;
memset(&node3_280, 0, sizeof(struct sNode*));
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value340 = (void*)0;
memset(&quote_282, 0, sizeof(_Bool));
memset(&range_283, 0, sizeof(_Bool));
right_value341 = (void*)0;
right_value342 = (void*)0;
memset(&array_num_284, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_285, 0, sizeof(_Bool));
memset(&p_286, 0, sizeof(char*));
memset(&sline_287, 0, sizeof(int));
memset(&no_comma_288, 0, sizeof(_Bool));
memset(&no_output_err_289, 0, sizeof(_Bool));
memset(&no_output_come_code_290, 0, sizeof(_Bool));
right_value343 = (void*)0;
memset(&exp_291, 0, sizeof(struct sNode*));
right_value344 = (void*)0;
memset(&node2_292, 0, sizeof(struct sNode*));
right_value345 = (void*)0;
memset(&right_node_293, 0, sizeof(struct sNode*));
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value360 = (void*)0;
memset(&no_comma_296, 0, sizeof(_Bool));
right_value361 = (void*)0;
memset(&begin_297, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
memset(&end_298, 0, sizeof(struct sNode*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&field_name_302, 0, sizeof(char*));
memset(&parse_method_generics_type_303, 0, sizeof(_Bool));
memset(&p_304, 0, sizeof(char*));
memset(&sline_305, 0, sizeof(int));
right_value385 = (void*)0;
memset(&word_306, 0, sizeof(char*));
right_value386 = (void*)0;
memset(&right_node_307, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&node2_310, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        range_array_267=(_Bool)0;
        {
            p_268=info->p;
            sline_269=info->sline;
            if(_if_conditional347=*info->p==91,            _if_conditional347) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_270=info->no_comma;
                no_output_err_271=info->no_output_err;
                no_output_come_code_272=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=expression_v13(info))));
                if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_270;
                info->no_output_err=no_output_err_271;
                info->no_output_come_code=no_output_come_code_272;
                if(_if_conditional348=*info->p==46&&*(info->p+1)==46,                _if_conditional348) {
                    range_array_267=(_Bool)1;
                }
                if(exp_273) { exp_273 = come_decrement_ref_count2(exp_273, ((struct sNode*)exp_273)->finalize, ((struct sNode*)exp_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_268;
            info->sline=sline_269;
        }
        if(_if_conditional349=range_array_267&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional349) {
            quote_274=*info->p==92;
            if(quote_274) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_275=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value328=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value327=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1438, "list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            skip_pointer_attribute(info);
            node2_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=expression_v13(info))));
            if(right_value329) { right_value329 = come_decrement_ref_count2(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1sNodeph_push_back(array_num_275,(struct sNode*)come_increment_ref_count(node2_276));
            if(_if_conditional353=*info->p==46&&*(info->p+1)==46,            _if_conditional353) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=expression_v13(info))));
                if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(array_num_275,(struct sNode*)come_increment_ref_count(node3_280));
                expected_next_character(93,info);
                if(node3_280) { node3_280 = come_decrement_ref_count2(node3_280, ((struct sNode*)node3_280)->finalize, ((struct sNode*)node3_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1459, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value335=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value334=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1459, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_275),quote_274,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value2->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value2->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj152=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=_inf_value2)));
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer2(list$1sNodephp_finalize,array_num_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node2_276) { node2_276 = come_decrement_ref_count2(node2_276, ((struct sNode*)node2_276)->finalize, ((struct sNode*)node2_276)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional363=!range_array_267&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional363) {
                quote_282=*info->p==92;
                if(quote_282) {
                    info->p++;
                }
                range_283=(_Bool)0;
                array_num_284=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value342=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value341=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1468, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional20=1,                _while_condtional20) {
                    range_array2_285=(_Bool)0;
                    {
                        p_286=info->p;
                        sline_287=info->sline;
                        if(_if_conditional365=*info->p==91,                        _if_conditional365) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_288=info->no_comma;
                            no_output_err_289=info->no_output_err;
                            no_output_come_code_290=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=expression_v13(info))));
                            if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_288;
                            info->no_output_err=no_output_err_289;
                            info->no_output_come_code=no_output_come_code_290;
                            if(_if_conditional366=*info->p==46&&*(info->p+1)==46,                            _if_conditional366) {
                                range_array2_285=(_Bool)1;
                            }
                            if(exp_291) { exp_291 = come_decrement_ref_count2(exp_291, ((struct sNode*)exp_291)->finalize, ((struct sNode*)exp_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        info->p=p_286;
                        info->sline=sline_287;
                    }
                    if(range_array2_285) {
                        break;
                    }
                    else {
                        if(_if_conditional368=*info->p==91,                        _if_conditional368) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=expression_v13(info))));
                            if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            list$1sNodeph_push_back(array_num_284,(struct sNode*)come_increment_ref_count(node2_292));
                            if(_if_conditional369=*info->p==93,                            _if_conditional369) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_292) { node2_292 = come_decrement_ref_count2(node2_292, ((struct sNode*)node2_292)->finalize, ((struct sNode*)node2_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                if(_if_conditional370=*info->p==61&&*(info->p+1)!=61,                _if_conditional370) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=expression_v13(info))));
                    if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1536, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(right_value347=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value346=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1536, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_293),(struct list$1sNodeph*)come_increment_ref_count(array_num_284),quote_282,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sStoreArrayNode_sline;
                    _inf_value3->sname=(void*)sStoreArrayNode_sname;
                    _inf_value3->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj157=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=_inf_value3)));
                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sStoreArrayNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_293) { right_node_293 = come_decrement_ref_count2(right_node_293, ((struct sNode*)right_node_293)->finalize, ((struct sNode*)right_node_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1539, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(right_value355=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value354=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1539, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_284),quote_282,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sLoadArrayNode_sline;
                    _inf_value4->sname=(void*)sLoadArrayNode_sname;
                    _inf_value4->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj161=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=_inf_value4)));
                    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLoadArrayNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer2(list$1sNodephp_finalize,array_num_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional391=*info->p==33&&*(info->p+1)==123,                _if_conditional391) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_296=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=expression_v13(info))));
                    if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_296;
                    expected_next_character(44,info);
                    end_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=expression_v13(info))));
                    if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    expected_next_character(125,info);
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1559, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(right_value364=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value363=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1559, "sRangeCheckNode")))),node,begin_297,end_298,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sRangeCheckNode_sline;
                    _inf_value5->sname=(void*)sRangeCheckNode_sname;
                    _inf_value5->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj166=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=_inf_value5)));
                    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sRangeCheckNode_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value370) { right_value370 = come_decrement_ref_count2(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_297) { begin_297 = come_decrement_ref_count2(begin_297, ((struct sNode*)begin_297)->finalize, ((struct sNode*)begin_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_298) { end_298 = come_decrement_ref_count2(end_298, ((struct sNode*)end_298)->finalize, ((struct sNode*)end_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional402=*info->p==33&&*(info->p+1)!=61,                    _if_conditional402) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1567, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(right_value372=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value371=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1567, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNullCheckNode_sline;
                        _inf_value6->sname=(void*)sNullCheckNode_sname;
                        _inf_value6->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj169=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=_inf_value6)));
                        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer2(sNullCheckNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNullCheckNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        if(_if_conditional410=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                        _if_conditional410) {
                            if(_if_conditional411=*info->p==46,                            _if_conditional411) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1579, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullCheckNode*)(right_value379=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value377=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1579, "sNullCheckNode")))),((struct sNode*)(right_value378=sNode_clone(node))),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
                            _inf_value7->clone=(void*)sNullCheckNode_clone;
                            _inf_value7->compile=(void*)sNullCheckNode_compile;
                            _inf_value7->sline=(void*)sNullCheckNode_sline;
                            _inf_value7->sname=(void*)sNullCheckNode_sname;
                            _inf_value7->terminated=(void*)sNullCheckNode_terminated;
                            _inf_value7->kind=(void*)sNullCheckNode_kind;
                            __dec_obj172=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=_inf_value7)));
                            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer2(sNullCheckNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            come_call_finalizer2(sNullCheckNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            parse_sharp_v5(info);
                            field_name_302=(char*)come_increment_ref_count(((char*)(right_value384=parse_word(info))));
                            right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            parse_sharp_v5(info);
                            parse_method_generics_type_303=(_Bool)0;
                            {
                                p_304=info->p;
                                sline_305=info->sline;
                                if(_if_conditional419=*info->p==60,                                _if_conditional419) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional420=xisalpha(*info->p)||*info->p==95,                                    _if_conditional420) {
                                        word_306=(char*)come_increment_ref_count(((char*)(right_value385=parse_word(info))));
                                        right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional421=is_type_name(word_306,info),                                        _if_conditional421) {
                                            parse_method_generics_type_303=(_Bool)1;
                                        }
                                        word_306 = come_decrement_ref_count2(word_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                }
                                info->p=p_304;
                                info->sline=sline_305;
                            }
                            if(_if_conditional422=*info->p==61&&*(info->p+1)!=61,                            _if_conditional422) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                right_node_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=expression_v13(info))));
                                if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1617, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreFieldNode*)(right_value388=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value387=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1617, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_307),(char*)come_increment_ref_count(field_name_302),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreFieldNode_finalize;
                                _inf_value8->clone=(void*)sStoreFieldNode_clone;
                                _inf_value8->compile=(void*)sStoreFieldNode_compile;
                                _inf_value8->sline=(void*)sStoreFieldNode_sline;
                                _inf_value8->sname=(void*)sStoreFieldNode_sname;
                                _inf_value8->terminated=(void*)sStoreFieldNode_terminated;
                                _inf_value8->kind=(void*)sStoreFieldNode_kind;
                                __dec_obj177=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=_inf_value8)));
                                if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer2(sStoreFieldNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sStoreFieldNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(right_node_307) { right_node_307 = come_decrement_ref_count2(right_node_307, ((struct sNode*)right_node_307)->finalize, ((struct sNode*)right_node_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional433=*info->p==40||*info->p==123||parse_method_generics_type_303||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                _if_conditional433) {
                                    if(_if_conditional434=string_operator_equals(field_name_302,"if"),                                    _if_conditional434) {
                                        __dec_obj178=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=sNode_clone(node)))),info))));
                                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    else {
                                        if(_if_conditional435=string_operator_equals(field_name_302,"elif"),                                        _if_conditional435) {
                                            __dec_obj179=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=sNode_clone(node)))),info))));
                                            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            __dec_obj180=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_302),info))));
                                            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                    }
                                }
                                else {
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1631, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sLoadFieldNode*)(right_value402=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value401=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1631, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_302),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sLoadFieldNode_finalize;
                                    _inf_value9->clone=(void*)sLoadFieldNode_clone;
                                    _inf_value9->compile=(void*)sLoadFieldNode_compile;
                                    _inf_value9->sline=(void*)sLoadFieldNode_sline;
                                    _inf_value9->sname=(void*)sLoadFieldNode_sname;
                                    _inf_value9->terminated=(void*)sLoadFieldNode_terminated;
                                    _inf_value9->kind=(void*)sLoadFieldNode_kind;
                                    __dec_obj184=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=_inf_value9)));
                                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer2(sLoadFieldNode_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sLoadFieldNode_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                            field_name_302 = come_decrement_ref_count2(field_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            node2_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                            if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional444=node2_310==((void*)0),                            _if_conditional444) {
                                if(node2_310) { node2_310 = come_decrement_ref_count2(node2_310, ((struct sNode*)node2_310)->finalize, ((struct sNode*)node2_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                break;
                            }
                            __dec_obj185=node;
                            node=(struct sNode*)come_increment_ref_count(node2_310);
                            if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node2_310) { node2_310 = come_decrement_ref_count2(node2_310, ((struct sNode*)node2_310)->finalize, ((struct sNode*)node2_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    __result193__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result193__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional351;
void* right_value330;
struct list_item$1sNodeph* litem_277;
struct sNode* __dec_obj146;
_Bool _if_conditional352;
void* right_value331;
struct list_item$1sNodeph* litem_278;
struct sNode* __dec_obj147;
void* right_value332;
struct list_item$1sNodeph* litem_279;
struct sNode* __dec_obj148;
struct list$1sNodeph* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value330 = (void*)0;
memset(&litem_277, 0, sizeof(struct list_item$1sNodeph*));
right_value331 = (void*)0;
memset(&litem_278, 0, sizeof(struct list_item$1sNodeph*));
right_value332 = (void*)0;
memset(&litem_279, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional351=self->len==0,                _if_conditional351) {
                    litem_277=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value330=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_277->prev=((void*)0);
                    litem_277->next=((void*)0);
                    __dec_obj146=litem_277->item;
                    litem_277->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_277;
                    self->head=litem_277;
                }
                else {
                    if(_if_conditional352=self->len==1,                    _if_conditional352) {
                        litem_278=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value331=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 236, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_278->prev=self->head;
                        litem_278->next=((void*)0);
                        __dec_obj147=litem_278->item;
                        litem_278->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_278;
                        self->head->next=litem_278;
                    }
                    else {
                        litem_279=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value332=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 246, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_279->prev=self->tail;
                        litem_279->next=((void*)0);
                        __dec_obj148=litem_279->item;
                        litem_279->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_279;
                        self->tail=litem_279;
                    }
                }
                self->len++;
                __result176__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result176__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional354=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional354) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional355=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional355) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional356=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional356) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional357;
struct sLoadRangeArrayNode* __result177__;
void* right_value336;
struct sLoadRangeArrayNode* result_281;
_Bool _if_conditional358;
void* right_value337;
struct sNode* __dec_obj149;
_Bool _if_conditional359;
void* right_value338;
struct list$1sNodeph* __dec_obj150;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value339;
char* __dec_obj151;
struct sLoadRangeArrayNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value336 = (void*)0;
memset(&result_281, 0, sizeof(struct sLoadRangeArrayNode*));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
                if(_if_conditional357=self==(void*)0,                _if_conditional357) {
                    __result177__ = __result_obj__ = (void*)0;
                    return __result177__;
                }
                result_281=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value336=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer2(sLoadRangeArrayNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional358=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional358) {
                    __dec_obj149=result_281->mLeft;
                    result_281->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=sNode_clone(self->mLeft))));
                    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional359=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional359) {
                    __dec_obj150=result_281->mArrayNum;
                    result_281->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value338=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional360=self!=((void*)0),                _if_conditional360) {
                    result_281->mQuote=self->mQuote;
                }
                if(_if_conditional361=self!=((void*)0),                _if_conditional361) {
                    result_281->sline=self->sline;
                }
                if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional362) {
                    __dec_obj151=result_281->sname;
                    result_281->sname=(char*)come_increment_ref_count(((char*)(right_value339=string_clone(self->sname))));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result178__ = __result_obj__ = result_281;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result178__;
                come_call_finalizer2(sLoadRangeArrayNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional371=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional371) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional372=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional372) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional373=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional373) {
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional374=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional374) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional375;
struct sStoreArrayNode* __result179__;
void* right_value348;
struct sStoreArrayNode* result_294;
_Bool _if_conditional376;
void* right_value349;
struct sNode* __dec_obj153;
_Bool _if_conditional377;
void* right_value350;
struct sNode* __dec_obj154;
_Bool _if_conditional378;
void* right_value351;
struct list$1sNodeph* __dec_obj155;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
void* right_value352;
char* __dec_obj156;
struct sStoreArrayNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value348 = (void*)0;
memset(&result_294, 0, sizeof(struct sStoreArrayNode*));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
                        if(_if_conditional375=self==(void*)0,                        _if_conditional375) {
                            __result179__ = __result_obj__ = (void*)0;
                            return __result179__;
                        }
                        result_294=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value348=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer2(sStoreArrayNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional376=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional376) {
                            __dec_obj153=result_294->mLeft;
                            result_294->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=sNode_clone(self->mLeft))));
                            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value349) { right_value349 = come_decrement_ref_count2(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional377=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional377) {
                            __dec_obj154=result_294->mRight;
                            result_294->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=sNode_clone(self->mRight))));
                            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value350) { right_value350 = come_decrement_ref_count2(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional378=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional378) {
                            __dec_obj155=result_294->mArrayNum;
                            result_294->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value351=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional379=self!=((void*)0),                        _if_conditional379) {
                            result_294->mQuote=self->mQuote;
                        }
                        if(_if_conditional380=self!=((void*)0),                        _if_conditional380) {
                            result_294->sline=self->sline;
                        }
                        if(_if_conditional381=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional381) {
                            __dec_obj156=result_294->sname;
                            result_294->sname=(char*)come_increment_ref_count(((char*)(right_value352=string_clone(self->sname))));
                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result180__ = __result_obj__ = result_294;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_294, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result180__;
                        come_call_finalizer2(sStoreArrayNode_finalize,result_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional382=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional382) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional383=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional383) {
                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional384=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional384) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional385;
struct sLoadArrayNode* __result181__;
void* right_value356;
struct sLoadArrayNode* result_295;
_Bool _if_conditional386;
void* right_value357;
struct sNode* __dec_obj158;
_Bool _if_conditional387;
void* right_value358;
struct list$1sNodeph* __dec_obj159;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value359;
char* __dec_obj160;
struct sLoadArrayNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value356 = (void*)0;
memset(&result_295, 0, sizeof(struct sLoadArrayNode*));
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
                        if(_if_conditional385=self==(void*)0,                        _if_conditional385) {
                            __result181__ = __result_obj__ = (void*)0;
                            return __result181__;
                        }
                        result_295=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value356=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer2(sLoadArrayNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional386=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional386) {
                            __dec_obj158=result_295->mLeft;
                            result_295->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=sNode_clone(self->mLeft))));
                            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional387=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional387) {
                            __dec_obj159=result_295->mArrayNum;
                            result_295->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value358=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sNodephp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional388=self!=((void*)0),                        _if_conditional388) {
                            result_295->mQuote=self->mQuote;
                        }
                        if(_if_conditional389=self!=((void*)0),                        _if_conditional389) {
                            result_295->sline=self->sline;
                        }
                        if(_if_conditional390=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional390) {
                            __dec_obj160=result_295->sname;
                            result_295->sname=(char*)come_increment_ref_count(((char*)(right_value359=string_clone(self->sname))));
                            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result182__ = __result_obj__ = result_295;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result182__;
                        come_call_finalizer2(sLoadArrayNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional392=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional392) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional393=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional393) {
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional394=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional394) {
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional395=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional395) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional396;
struct sRangeCheckNode* __result183__;
void* right_value365;
struct sRangeCheckNode* result_299;
_Bool _if_conditional397;
void* right_value366;
struct sNode* __dec_obj162;
_Bool _if_conditional398;
void* right_value367;
struct sNode* __dec_obj163;
_Bool _if_conditional399;
void* right_value368;
struct sNode* __dec_obj164;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value369;
char* __dec_obj165;
struct sRangeCheckNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value365 = (void*)0;
memset(&result_299, 0, sizeof(struct sRangeCheckNode*));
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
                        if(_if_conditional396=self==(void*)0,                        _if_conditional396) {
                            __result183__ = __result_obj__ = (void*)0;
                            return __result183__;
                        }
                        result_299=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value365=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer2(sRangeCheckNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional397=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional397) {
                            __dec_obj162=result_299->mLeft;
                            result_299->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=sNode_clone(self->mLeft))));
                            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional398=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional398) {
                            __dec_obj163=result_299->mBegin;
                            result_299->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=sNode_clone(self->mBegin))));
                            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional399=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional399) {
                            __dec_obj164=result_299->mEnd;
                            result_299->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=sNode_clone(self->mEnd))));
                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional400=self!=((void*)0),                        _if_conditional400) {
                            result_299->sline=self->sline;
                        }
                        if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional401) {
                            __dec_obj165=result_299->sname;
                            result_299->sname=(char*)come_increment_ref_count(((char*)(right_value369=string_clone(self->sname))));
                            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result184__ = __result_obj__ = result_299;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result184__;
                        come_call_finalizer2(sRangeCheckNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional412;
_Bool _if_conditional413;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional412=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional412) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional413) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional414;
struct sNullCheckNode* __result187__;
void* right_value380;
struct sNullCheckNode* result_301;
_Bool _if_conditional415;
void* right_value381;
struct sNode* __dec_obj170;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value382;
char* __dec_obj171;
struct sNullCheckNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value380 = (void*)0;
memset(&result_301, 0, sizeof(struct sNullCheckNode*));
right_value381 = (void*)0;
right_value382 = (void*)0;
                                if(_if_conditional414=self==(void*)0,                                _if_conditional414) {
                                    __result187__ = __result_obj__ = (void*)0;
                                    return __result187__;
                                }
                                result_301=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value380=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                come_call_finalizer2(sNullCheckNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional415=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional415) {
                                    __dec_obj170=result_301->mLeft;
                                    result_301->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=sNode_clone(self->mLeft))));
                                    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional416=self!=((void*)0),                                _if_conditional416) {
                                    result_301->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                if(_if_conditional417=self!=((void*)0),                                _if_conditional417) {
                                    result_301->sline=self->sline;
                                }
                                if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional418) {
                                    __dec_obj171=result_301->sname;
                                    result_301->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result188__ = __result_obj__ = result_301;
                                come_call_finalizer2(sNullCheckNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result188__;
                                come_call_finalizer2(sNullCheckNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional423=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional423) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional424=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional424) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional425=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional425) {
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional426=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional426) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional427;
struct sStoreFieldNode* __result189__;
void* right_value389;
struct sStoreFieldNode* result_308;
_Bool _if_conditional428;
void* right_value390;
struct sNode* __dec_obj173;
_Bool _if_conditional429;
void* right_value391;
struct sNode* __dec_obj174;
_Bool _if_conditional430;
void* right_value392;
char* __dec_obj175;
_Bool _if_conditional431;
_Bool _if_conditional432;
void* right_value393;
char* __dec_obj176;
struct sStoreFieldNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&result_308, 0, sizeof(struct sStoreFieldNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
                                    if(_if_conditional427=self==(void*)0,                                    _if_conditional427) {
                                        __result189__ = __result_obj__ = (void*)0;
                                        return __result189__;
                                    }
                                    result_308=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value389=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                    come_call_finalizer2(sStoreFieldNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional428=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional428) {
                                        __dec_obj173=result_308->mLeft;
                                        result_308->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=sNode_clone(self->mLeft))));
                                        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value390) { right_value390 = come_decrement_ref_count2(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional429=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional429) {
                                        __dec_obj174=result_308->mRight;
                                        result_308->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=sNode_clone(self->mRight))));
                                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional430=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional430) {
                                        __dec_obj175=result_308->mName;
                                        result_308->mName=(char*)come_increment_ref_count(((char*)(right_value392=string_clone(self->mName))));
                                        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional431=self!=((void*)0),                                    _if_conditional431) {
                                        result_308->sline=self->sline;
                                    }
                                    if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional432) {
                                        __dec_obj176=result_308->sname;
                                        result_308->sname=(char*)come_increment_ref_count(((char*)(right_value393=string_clone(self->sname))));
                                        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result190__ = __result_obj__ = result_308;
                                    come_call_finalizer2(sStoreFieldNode_finalize,result_308, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result190__;
                                    come_call_finalizer2(sStoreFieldNode_finalize,result_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional436=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional436) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional437=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional437) {
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional438) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional439;
struct sLoadFieldNode* __result191__;
void* right_value403;
struct sLoadFieldNode* result_309;
_Bool _if_conditional440;
void* right_value404;
struct sNode* __dec_obj181;
_Bool _if_conditional441;
void* right_value405;
char* __dec_obj182;
_Bool _if_conditional442;
_Bool _if_conditional443;
void* right_value406;
char* __dec_obj183;
struct sLoadFieldNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value403 = (void*)0;
memset(&result_309, 0, sizeof(struct sLoadFieldNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
                                        if(_if_conditional439=self==(void*)0,                                        _if_conditional439) {
                                            __result191__ = __result_obj__ = (void*)0;
                                            return __result191__;
                                        }
                                        result_309=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value403=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                        come_call_finalizer2(sLoadFieldNode_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional440=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional440) {
                                            __dec_obj181=result_309->mLeft;
                                            result_309->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=sNode_clone(self->mLeft))));
                                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional441=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional441) {
                                            __dec_obj182=result_309->mName;
                                            result_309->mName=(char*)come_increment_ref_count(((char*)(right_value405=string_clone(self->mName))));
                                            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional442=self!=((void*)0),                                        _if_conditional442) {
                                            result_309->sline=self->sline;
                                        }
                                        if(_if_conditional443=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional443) {
                                            __dec_obj183=result_309->sname;
                                            result_309->sname=(char*)come_increment_ref_count(((char*)(right_value406=string_clone(self->sname))));
                                            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result192__ = __result_obj__ = result_309;
                                        come_call_finalizer2(sLoadFieldNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result192__;
                                        come_call_finalizer2(sLoadFieldNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

