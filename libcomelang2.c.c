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
char* gComeStackFrameSName[1024];
int gComeStackFrameSLine[1024];
int gComeStackFrameID[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeaderTiny
{
    unsigned long int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    unsigned long int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};
struct sMemHeader* gAllocMem;
struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    void** mFreeMem[4048];
    int mNumFreeMem[4048];
    int mSizeFreeMem[4048];
};
struct sHeapPage gHeapPages;

// header function
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

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

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

char* dirname(char* anonymous_var_nameX597);

char* basename(char* anonymous_var_nameX598);

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

static void* alloc_from_pages(unsigned long int size);
static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

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

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(unsigned long int self, unsigned long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool string_equals(char* self, char* right);

_Bool charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(unsigned long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

unsigned long int size_t_clone(unsigned long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(unsigned int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

char* xrealpath(char* path);

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

int size_t_compare(unsigned long int left, unsigned long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

char* FILE_read(struct _IO_FILE* f);

int FILE_write(struct _IO_FILE* f, char* str);

int FILE_fclose(struct _IO_FILE* f);

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* string_read(char* file_name);

char* charp_read(char* file_name);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

char* charp_puts(char* self);

char* charp_print(char* self);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

char* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct integer* integer_initialize(struct integer* self, long value);

static void integer_finalize(struct integer* self);
int integer_to_int(struct integer* self);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_compare(struct integer* left, struct integer* right);

_Bool integer_equals(struct integer* self, struct integer* right);

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










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
    # 29 "libcomelang2.c"
    # 22 "libcomelang2.c"
    if(_if_conditional7=gNumComeStackFrame<1024,    _if_conditional7) {
        # 23 "libcomelang2.c"
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        # 24 "libcomelang2.c"
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        # 25 "libcomelang2.c"
        gComeStackFrameID[gNumComeStackFrame]=id;
        # 27 "libcomelang2.c"
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
    # 36 "libcomelang2.c"
    # 33 "libcomelang2.c"
    if(_if_conditional8=gNumComeStackFrame>0,    _if_conditional8) {
        # 34 "libcomelang2.c"
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
void* right_value49;
void* right_value50;
struct buffer* buf_11;
void* right_value51;
int i_12;
void* right_value52;
_Bool _if_conditional9;
void* right_value53;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&buf_11, 0, sizeof(struct buffer*));
right_value51 = (void*)0;
memset(&i_12, 0, sizeof(int));
right_value52 = (void*)0;
right_value53 = (void*)0;
    # 40 "libcomelang2.c"
    buf_11=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value49=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 40, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 41 "libcomelang2.c"
    buffer_append_str(buf_11,((char*)(right_value51=xsprintf("%s %d\n",sname,sline))));
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 46 "libcomelang2.c"
    for(    i_12=gNumComeStackFrame-2;    i_12>=0;    i_12--    ){
        # 43 "libcomelang2.c"
        buffer_append_str(buf_11,((char*)(right_value52=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_12],gComeStackFrameSLine[i_12],gComeStackFrameID[i_12]))));
        right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 49 "libcomelang2.c"
    # 46 "libcomelang2.c"
    if(gComeStackFrameBuffer) {
        # 47 "libcomelang2.c"
        free(gComeStackFrameBuffer);
    }
    # 49 "libcomelang2.c"
    gComeStackFrameBuffer=strdup(((char*)(right_value53=buffer_to_string(buf_11))));
    right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
void* __result_obj__;
int i_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_13, 0, sizeof(int));
    # 57 "libcomelang2.c"
    for(    i_13=gNumComeStackFrame-1;    i_13>=0;    i_13--    ){
        # 55 "libcomelang2.c"
        printf("%s %d #%d\n",gComeStackFrameSName[i_13],gComeStackFrameSLine[i_13],gComeStackFrameID[i_13]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
void* right_value54;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
    # 61 "libcomelang2.c"
    __result34__ = __result_obj__ = ((char*)(right_value54=__builtin_string(gComeStackFrameBuffer)));
    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result34__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional10;
void* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    # 72 "libcomelang2.c"
    # 66 "libcomelang2.c"
    if(_if_conditional10=mem==((void*)0),    _if_conditional10) {
        # 67 "libcomelang2.c"
        printf("%s %d #%d: null check error\n",sname,sline,id);
        # 68 "libcomelang2.c"
        stackframe();
        # 69 "libcomelang2.c"
        exit(2);
    }
    # 72 "libcomelang2.c"
    __result35__ = __result_obj__ = mem;
    return __result35__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
void* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    # 83 "libcomelang2.c"
    # 77 "libcomelang2.c"
    if(_if_conditional11=mem==((void*)0),    _if_conditional11) {
        # 78 "libcomelang2.c"
        printf("%s %d: null check error\n",sname,sline);
        # 79 "libcomelang2.c"
        stackframe();
        # 80 "libcomelang2.c"
        exit(2);
    }
    # 89 "libcomelang2.c"
    # 83 "libcomelang2.c"
    if(_if_conditional12=mem<begin,    _if_conditional12) {
        # 84 "libcomelang2.c"
        printf("%s %d: range check error\n",sname,sline);
        # 85 "libcomelang2.c"
        stackframe();
        # 86 "libcomelang2.c"
        exit(2);
    }
    # 95 "libcomelang2.c"
    # 89 "libcomelang2.c"
    if(_if_conditional13=mem>=end,    _if_conditional13) {
        # 90 "libcomelang2.c"
        printf("%s %d: range check error\n",sname,sline);
        # 91 "libcomelang2.c"
        stackframe();
        # 92 "libcomelang2.c"
        exit(2);
    }
    # 95 "libcomelang2.c"
    __result36__ = __result_obj__ = mem;
    return __result36__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool __result37__;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    # 109 "libcomelang2.c"
    # 100 "libcomelang2.c"
    if(_if_conditional14=!self,    _if_conditional14) {
        # 101 "libcomelang2.c"
        block(parent);
        # 105 "libcomelang2.c"
        # 102 "libcomelang2.c"
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            # 103 "libcomelang2.c"
            __result37__ = self;
            return __result37__;
        }
        # 105 "libcomelang2.c"
        stackframe();
        # 106 "libcomelang2.c"
        exit(1);
    }
    # 109 "libcomelang2.c"
    __result38__ = self;
    return __result38__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    # 114 "libcomelang2.c"
    __result39__ = self;
    return __result39__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional17;
int __result40__;
int __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    # 127 "libcomelang2.c"
    # 119 "libcomelang2.c"
    if(_if_conditional16=self<0,    _if_conditional16) {
        # 120 "libcomelang2.c"
        block(parent);
        # 125 "libcomelang2.c"
        # 122 "libcomelang2.c"
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            # 123 "libcomelang2.c"
            __result40__ = self;
            return __result40__;
        }
    }
    # 127 "libcomelang2.c"
    __result41__ = self;
    return __result41__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional18;
_Bool _if_conditional19;
int __result42__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    # 141 "libcomelang2.c"
    # 132 "libcomelang2.c"
    if(_if_conditional18=self<0,    _if_conditional18) {
        # 133 "libcomelang2.c"
        block(parent);
        # 137 "libcomelang2.c"
        # 134 "libcomelang2.c"
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            # 135 "libcomelang2.c"
            __result42__ = self;
            return __result42__;
        }
        # 137 "libcomelang2.c"
        stackframe();
        # 138 "libcomelang2.c"
        exit(1);
    }
    # 141 "libcomelang2.c"
    __result43__ = self;
    return __result43__;
}

int int_value(int self){
void* __result_obj__;
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    # 146 "libcomelang2.c"
    __result44__ = self;
    return __result44__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
int __result45__;
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    # 158 "libcomelang2.c"
    # 151 "libcomelang2.c"
    if(_if_conditional20=self<0,    _if_conditional20) {
        # 152 "libcomelang2.c"
        block(parent);
        # 156 "libcomelang2.c"
        # 153 "libcomelang2.c"
        if(_if_conditional21=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional21) {
            # 154 "libcomelang2.c"
            __result45__ = self;
            return __result45__;
        }
    }
    # 158 "libcomelang2.c"
    __result46__ = self;
    return __result46__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result47__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    # 170 "libcomelang2.c"
    # 163 "libcomelang2.c"
    if(_if_conditional22=!self,    _if_conditional22) {
        # 164 "libcomelang2.c"
        block(parent);
        # 168 "libcomelang2.c"
        # 165 "libcomelang2.c"
        if(_if_conditional23=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional23) {
            # 166 "libcomelang2.c"
            __result47__ = self;
            return __result47__;
        }
    }
    # 170 "libcomelang2.c"
    __result48__ = self;
    return __result48__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool __result49__;
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    # 183 "libcomelang2.c"
    # 175 "libcomelang2.c"
    if(_if_conditional24=!self,    _if_conditional24) {
        # 176 "libcomelang2.c"
        block(parent);
        # 181 "libcomelang2.c"
        # 178 "libcomelang2.c"
        if(_if_conditional25=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional25) {
            # 179 "libcomelang2.c"
            __result49__ = self;
            return __result49__;
        }
    }
    # 183 "libcomelang2.c"
    __result50__ = self;
    return __result50__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
    # 188 "libcomelang2.c"
    printf("%s...",msg);
    # 193 "libcomelang2.c"
    # 189 "libcomelang2.c"
    if(_if_conditional26=!test,    _if_conditional26) {
        # 190 "libcomelang2.c"
        puts("false");
        # 191 "libcomelang2.c"
        exit(2);
    }
    # 193 "libcomelang2.c"
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
int i_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_14, 0, sizeof(int));
    # 256 "libcomelang2.c"
    gComeMallocLib=come_malloc;
    # 258 "libcomelang2.c"
    gComeDebugLib=come_debug;
    # 258 "libcomelang2.c"
    gComeGCLib=come_gc;
    # 260 "libcomelang2.c"
    gComeStackFrameBuffer=((void*)0);
    # 261 "libcomelang2.c"
    memset(gComeStackFrameSName,0,sizeof(char*)*1024);
    # 262 "libcomelang2.c"
    memset(gComeStackFrameSLine,0,sizeof(int)*1024);
    # 263 "libcomelang2.c"
    memset(gComeStackFrameID,0,sizeof(int)*1024);
    # 265 "libcomelang2.c"
    gHeapPages.mSizePages=4;
    # 267 "libcomelang2.c"
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    # 272 "libcomelang2.c"
    for(    i_14=0;    i_14<gHeapPages.mSizePages;    i_14++    ){
        # 269 "libcomelang2.c"
        gHeapPages.mPages[i_14]=calloc(1,sizeof(char)*4048);
    }
    # 272 "libcomelang2.c"
    gHeapPages.mTop=gHeapPages.mPages[0];
    # 273 "libcomelang2.c"
    gHeapPages.mCurrentPages=0;
    # 275 "libcomelang2.c"
    memset(gHeapPages.mFreeMem,0,sizeof(void**)*4048);
    # 276 "libcomelang2.c"
    memset(gHeapPages.mNumFreeMem,0,sizeof(int)*4048);
    # 277 "libcomelang2.c"
    memset(gHeapPages.mSizeFreeMem,0,sizeof(int)*4048);
    # 279 "libcomelang2.c"
    gAllocMem=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
struct sMemHeader* it_15;
int n_16;
_Bool flag_17;
_Bool _if_conditional30;
int i_18;
_Bool _if_conditional31;
_Bool _if_conditional32;
struct sMemHeaderTiny* it_19;
int n_20;
_Bool _if_conditional33;
int i_21;
int i_22;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct sMemHeader*));
memset(&n_16, 0, sizeof(int));
memset(&flag_17, 0, sizeof(_Bool));
memset(&i_18, 0, sizeof(int));
memset(&it_19, 0, sizeof(struct sMemHeaderTiny*));
memset(&n_20, 0, sizeof(int));
memset(&i_21, 0, sizeof(int));
memset(&i_22, 0, sizeof(int));
    # 288 "libcomelang2.c"
    # 284 "libcomelang2.c"
    if(gComeStackFrameBuffer) {
        # 285 "libcomelang2.c"
        free(gComeStackFrameBuffer);
    }
    # 325 "libcomelang2.c"
    # 288 "libcomelang2.c"
    if(gComeGCLib) {
    }
    else {
        # 325 "libcomelang2.c"
        # 290 "libcomelang2.c"
        if(gComeDebugLib) {
            # 291 "libcomelang2.c"
            it_15=gAllocMem;
            # 292 "libcomelang2.c"
            n_16=0;
            # 312 "libcomelang2.c"
            while(it_15) {
                # 294 "libcomelang2.c"
                n_16++;
                # 296 "libcomelang2.c"
                flag_17=(_Bool)0;
                # 297 "libcomelang2.c"
                printf("#%d ",n_16);
                # 301 "libcomelang2.c"
                # 298 "libcomelang2.c"
                if(it_15->class_name) {
                    # 299 "libcomelang2.c"
                    printf("%p (%s): ",(char*)it_15+sizeof(struct sMemHeader)+sizeof(unsigned long int)+sizeof(unsigned long int),it_15->class_name);
                }
                # 307 "libcomelang2.c"
                for(                i_18=0;                i_18<16;                i_18++                ){
                    # 306 "libcomelang2.c"
                    # 302 "libcomelang2.c"
                    if(_if_conditional31=it_15->sname[i_18],                    _if_conditional31) {
                        # 303 "libcomelang2.c"
                        printf("%s %d #%d, ",it_15->sname[i_18],it_15->sline[i_18],it_15->id[i_18]);
                        # 304 "libcomelang2.c"
                        flag_17=(_Bool)1;
                    }
                }
                # 310 "libcomelang2.c"
                # 307 "libcomelang2.c"
                if(flag_17) {
                    # 308 "libcomelang2.c"
                    puts("");
                }
                # 310 "libcomelang2.c"
                it_15=it_15->next;
            }
            # 312 "libcomelang2.c"
            printf("%d memory leaks. %d alloc, %d free.\n",n_16,gNumAlloc,gNumFree);
        }
        else {
            # 315 "libcomelang2.c"
            it_19=(struct sMemHeaderTiny*)gAllocMem;
            # 316 "libcomelang2.c"
            n_20=0;
            # 321 "libcomelang2.c"
            while(it_19) {
                # 318 "libcomelang2.c"
                n_20++;
                # 319 "libcomelang2.c"
                it_19=it_19->next;
            }
            # 324 "libcomelang2.c"
            # 321 "libcomelang2.c"
            if(_if_conditional33=n_20>0,            _if_conditional33) {
                # 322 "libcomelang2.c"
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_20,gNumAlloc,gNumFree);
            }
        }
    }
    # 328 "libcomelang2.c"
    for(    i_21=0;    i_21<gHeapPages.mSizePages;    i_21++    ){
        # 326 "libcomelang2.c"
        free(gHeapPages.mPages[i_21]);
    }
    # 328 "libcomelang2.c"
    free(gHeapPages.mPages);
    # 335 "libcomelang2.c"
    for(    i_22=0;    i_22<4048;    i_22++    ){
        # 334 "libcomelang2.c"
        # 331 "libcomelang2.c"
        if(_if_conditional34=gHeapPages.mFreeMem[i_22],        _if_conditional34) {
            # 332 "libcomelang2.c"
            free(gHeapPages.mFreeMem[i_22]);
        }
    }
}

static void* alloc_from_pages(unsigned long int size){
void* __result_obj__;
void* result_23;
_Bool _if_conditional35;
_Bool _if_conditional36;
struct sMemHeaderTiny* it_24;
_Bool _if_conditional37;
unsigned long int free_area_25;
_Bool _if_conditional38;
_Bool _if_conditional39;
int new_size_pages_26;
void** new_pages_27;
int i_28;
void* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_23, 0, sizeof(void*));
memset(&it_24, 0, sizeof(struct sMemHeaderTiny*));
memset(&free_area_25, 0, sizeof(unsigned long int));
memset(&new_size_pages_26, 0, sizeof(int));
memset(&new_pages_27, 0, sizeof(void**));
memset(&i_28, 0, sizeof(int));
    # 339 "libcomelang2.c"
    result_23=((void*)0);
    # 382 "libcomelang2.c"
    # 340 "libcomelang2.c"
    if(_if_conditional35=size<4048,    _if_conditional35) {
        # 346 "libcomelang2.c"
        # 341 "libcomelang2.c"
        if(_if_conditional36=gHeapPages.mFreeMem[size]&&gHeapPages.mNumFreeMem[size]>0,        _if_conditional36) {
            # 342 "libcomelang2.c"
            it_24=gHeapPages.mFreeMem[size][gHeapPages.mNumFreeMem[size]-1];
            # 343 "libcomelang2.c"
            gHeapPages.mNumFreeMem[size]--;
        }
        # 377 "libcomelang2.c"
        # 346 "libcomelang2.c"
        if(_if_conditional37=result_23==((void*)0),        _if_conditional37) {
            # 347 "libcomelang2.c"
            free_area_25=gHeapPages.mPages[gHeapPages.mCurrentPages]+4048-gHeapPages.mTop;
            # 374 "libcomelang2.c"
            # 349 "libcomelang2.c"
            if(_if_conditional38=size>=free_area_25,            _if_conditional38) {
                # 350 "libcomelang2.c"
                gHeapPages.mCurrentPages++;
                # 371 "libcomelang2.c"
                # 352 "libcomelang2.c"
                if(_if_conditional39=gHeapPages.mCurrentPages==gHeapPages.mSizePages,                _if_conditional39) {
                    # 353 "libcomelang2.c"
                    new_size_pages_26=gHeapPages.mSizePages*2;
                    # 354 "libcomelang2.c"
                    new_pages_27=calloc(1,sizeof(char*)*new_size_pages_26);
                    # 356 "libcomelang2.c"
                    i_28=0;
                    # 361 "libcomelang2.c"
                    for(                    ;                    i_28<gHeapPages.mSizePages;                    i_28++                    ){
                        # 358 "libcomelang2.c"
                        new_pages_27[i_28]=gHeapPages.mPages[i_28];
                    }
                    # 365 "libcomelang2.c"
                    for(                    ;                    i_28<new_size_pages_26;                    i_28++                    ){
                        # 362 "libcomelang2.c"
                        new_pages_27[i_28]=calloc(1,sizeof(char)*4048);
                    }
                    # 365 "libcomelang2.c"
                    free(gHeapPages.mPages);
                    # 367 "libcomelang2.c"
                    gHeapPages.mPages=new_pages_27;
                    # 368 "libcomelang2.c"
                    gHeapPages.mSizePages=new_size_pages_26;
                }
                # 371 "libcomelang2.c"
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            # 374 "libcomelang2.c"
            result_23=gHeapPages.mTop;
            # 375 "libcomelang2.c"
            gHeapPages.mTop+=size;
        }
    }
    else {
        # 379 "libcomelang2.c"
        result_23=calloc(1,size);
    }
    # 382 "libcomelang2.c"
    __result51__ = __result_obj__ = result_23;
    return __result51__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional40;
void* result_29;
struct sMemHeader* it_30;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* __result52__;
void* result_31;
struct sMemHeaderTiny* it_32;
_Bool _if_conditional44;
void* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_29, 0, sizeof(void*));
memset(&it_30, 0, sizeof(struct sMemHeader*));
memset(&result_31, 0, sizeof(void*));
memset(&it_32, 0, sizeof(struct sMemHeaderTiny*));
    # 465 "libcomelang2.c"
    # 387 "libcomelang2.c"
    if(gComeDebugLib) {
        # 388 "libcomelang2.c"
        result_29=alloc_from_pages(size+sizeof(struct sMemHeader));
        # 390 "libcomelang2.c"
        it_30=result_29;
        # 392 "libcomelang2.c"
        it_30->allocated=177783;
        # 394 "libcomelang2.c"
        it_30->size=size+sizeof(struct sMemHeader);
        # 397 "libcomelang2.c"
        come_push_stackframe(sname,sline,0);
        # 411 "libcomelang2.c"
        # 400 "libcomelang2.c"
        if(_if_conditional41=gNumComeStackFrame<16,        _if_conditional41) {
            # 401 "libcomelang2.c"
            memcpy(it_30->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            # 402 "libcomelang2.c"
            memcpy(it_30->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            # 403 "libcomelang2.c"
            memcpy(it_30->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            # 406 "libcomelang2.c"
            memcpy(it_30->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            # 407 "libcomelang2.c"
            memcpy(it_30->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            # 408 "libcomelang2.c"
            memcpy(it_30->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        # 411 "libcomelang2.c"
        come_pop_stackframe();
        # 413 "libcomelang2.c"
        it_30->next=gAllocMem;
        # 414 "libcomelang2.c"
        it_30->prev=((void*)0);
        # 423 "libcomelang2.c"
        # 416 "libcomelang2.c"
        if(class_name) {
            # 417 "libcomelang2.c"
            it_30->class_name=strdup(class_name);
        }
        else {
            # 420 "libcomelang2.c"
            it_30->class_name=((void*)0);
        }
        # 427 "libcomelang2.c"
        # 423 "libcomelang2.c"
        if(gAllocMem) {
            # 424 "libcomelang2.c"
            gAllocMem->prev=it_30;
        }
        # 427 "libcomelang2.c"
        gAllocMem=it_30;
        # 429 "libcomelang2.c"
        gNumAlloc++;
        # 431 "libcomelang2.c"
        __result52__ = __result_obj__ = (char*)result_29+sizeof(struct sMemHeader);
        return __result52__;
    }
    else {
        # 434 "libcomelang2.c"
        result_31=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        # 436 "libcomelang2.c"
        it_32=result_31;
        # 438 "libcomelang2.c"
        it_32->allocated=177783;
        # 449 "libcomelang2.c"
        it_32->size=size+sizeof(struct sMemHeaderTiny);
        # 452 "libcomelang2.c"
        it_32->next=(struct sMemHeaderTiny*)gAllocMem;
        # 453 "libcomelang2.c"
        it_32->prev=((void*)0);
        # 459 "libcomelang2.c"
        # 455 "libcomelang2.c"
        if(gAllocMem) {
            # 456 "libcomelang2.c"
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_32;
        }
        # 459 "libcomelang2.c"
        gAllocMem=(struct sMemHeader*)it_32;
        # 461 "libcomelang2.c"
        gNumAlloc++;
        # 463 "libcomelang2.c"
        __result53__ = __result_obj__ = (char*)result_31+sizeof(struct sMemHeaderTiny);
        return __result53__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
void* __result_obj__;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
struct sMemHeader* it_33;
_Bool _if_conditional48;
struct sMemHeader* prev_it_34;
struct sMemHeader* next_it_35;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
unsigned long int size_36;
_Bool _if_conditional54;
int num_free_mem_37;
int size_free_mem_38;
_Bool _if_conditional55;
int new_size_free_mem_39;
void** new_free_mem_40;
_Bool _if_conditional56;
int new_size_free_mem_41;
void** new_free_mem_42;
struct sMemHeaderTiny* it_43;
_Bool _if_conditional57;
struct sMemHeaderTiny* prev_it_44;
struct sMemHeaderTiny* next_it_45;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
unsigned long int size_46;
_Bool _if_conditional62;
int num_free_mem_47;
int size_free_mem_48;
_Bool _if_conditional63;
int new_size_free_mem_49;
void** new_free_mem_50;
_Bool _if_conditional64;
int new_size_free_mem_51;
void** new_free_mem_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_33, 0, sizeof(struct sMemHeader*));
memset(&prev_it_34, 0, sizeof(struct sMemHeader*));
memset(&next_it_35, 0, sizeof(struct sMemHeader*));
memset(&size_36, 0, sizeof(unsigned long int));
memset(&num_free_mem_37, 0, sizeof(int));
memset(&size_free_mem_38, 0, sizeof(int));
memset(&new_size_free_mem_39, 0, sizeof(int));
memset(&new_free_mem_40, 0, sizeof(void**));
memset(&new_size_free_mem_41, 0, sizeof(int));
memset(&new_free_mem_42, 0, sizeof(void**));
memset(&it_43, 0, sizeof(struct sMemHeaderTiny*));
memset(&prev_it_44, 0, sizeof(struct sMemHeaderTiny*));
memset(&next_it_45, 0, sizeof(struct sMemHeaderTiny*));
memset(&size_46, 0, sizeof(unsigned long int));
memset(&num_free_mem_47, 0, sizeof(int));
memset(&size_free_mem_48, 0, sizeof(int));
memset(&new_size_free_mem_49, 0, sizeof(int));
memset(&new_free_mem_50, 0, sizeof(void**));
memset(&new_size_free_mem_51, 0, sizeof(int));
memset(&new_free_mem_52, 0, sizeof(void**));
    # 607 "libcomelang2.c"
    # 469 "libcomelang2.c"
    if(mem) {
        # 606 "libcomelang2.c"
        # 470 "libcomelang2.c"
        if(gComeGCLib) {
        }
        else {
            # 606 "libcomelang2.c"
            # 472 "libcomelang2.c"
            if(gComeDebugLib) {
                # 473 "libcomelang2.c"
                it_33=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                # 479 "libcomelang2.c"
                # 475 "libcomelang2.c"
                if(_if_conditional48=it_33->allocated!=177783,                _if_conditional48) {
                    # 476 "libcomelang2.c"
                    return;
                }
                # 479 "libcomelang2.c"
                it_33->allocated=0;
                # 481 "libcomelang2.c"
                prev_it_34=it_33->prev;
                # 482 "libcomelang2.c"
                next_it_35=it_33->next;
                # 488 "libcomelang2.c"
                # 484 "libcomelang2.c"
                if(it_33->class_name) {
                    # 485 "libcomelang2.c"
                    free(it_33->class_name);
                }
                # 504 "libcomelang2.c"
                # 488 "libcomelang2.c"
                if(_if_conditional50=gAllocMem==it_33,                _if_conditional50) {
                    # 489 "libcomelang2.c"
                    gAllocMem=next_it_35;
                    # 494 "libcomelang2.c"
                    # 491 "libcomelang2.c"
                    if(gAllocMem) {
                        # 492 "libcomelang2.c"
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    # 499 "libcomelang2.c"
                    # 496 "libcomelang2.c"
                    if(prev_it_34) {
                        # 497 "libcomelang2.c"
                        prev_it_34->next=next_it_35;
                    }
                    # 502 "libcomelang2.c"
                    # 499 "libcomelang2.c"
                    if(next_it_35) {
                        # 500 "libcomelang2.c"
                        next_it_35->prev=prev_it_34;
                    }
                }
                # 504 "libcomelang2.c"
                size_36=it_33->size;
                # 536 "libcomelang2.c"
                # 506 "libcomelang2.c"
                if(_if_conditional54=size_36<4048,                _if_conditional54) {
                    # 507 "libcomelang2.c"
                    num_free_mem_37=gHeapPages.mNumFreeMem[size_36];
                    # 508 "libcomelang2.c"
                    size_free_mem_38=gHeapPages.mSizeFreeMem[size_36];
                    # 529 "libcomelang2.c"
                    # 510 "libcomelang2.c"
                    if(_if_conditional55=gHeapPages.mFreeMem[size_36]==((void*)0),                    _if_conditional55) {
                        # 511 "libcomelang2.c"
                        new_size_free_mem_39=16;
                        # 512 "libcomelang2.c"
                        new_free_mem_40=calloc(1,sizeof(void*)*new_size_free_mem_39);
                        # 514 "libcomelang2.c"
                        gHeapPages.mSizeFreeMem[size_36]=new_size_free_mem_39;
                        # 515 "libcomelang2.c"
                        gHeapPages.mFreeMem[size_36]=new_free_mem_40;
                    }
                    else {
                        # 529 "libcomelang2.c"
                        # 517 "libcomelang2.c"
                        if(_if_conditional56=num_free_mem_37==size_free_mem_38,                        _if_conditional56) {
                            # 518 "libcomelang2.c"
                            new_size_free_mem_41=size_free_mem_38*2;
                            # 519 "libcomelang2.c"
                            new_free_mem_42=calloc(1,sizeof(void*)*new_size_free_mem_41);
                            # 521 "libcomelang2.c"
                            memcpy(new_free_mem_42,gHeapPages.mFreeMem[size_36],sizeof(void*)*num_free_mem_37);
                            # 523 "libcomelang2.c"
                            free(gHeapPages.mFreeMem[size_36]);
                            # 525 "libcomelang2.c"
                            gHeapPages.mSizeFreeMem[size_36]=new_size_free_mem_41;
                            # 526 "libcomelang2.c"
                            gHeapPages.mFreeMem[size_36]=new_free_mem_42;
                        }
                    }
                    # 529 "libcomelang2.c"
                    gHeapPages.mFreeMem[size_36][gHeapPages.mNumFreeMem[size_36]]=it_33;
                    # 530 "libcomelang2.c"
                    gHeapPages.mNumFreeMem[size_36]++;
                }
                else {
                    # 533 "libcomelang2.c"
                    free(it_33);
                }
                # 536 "libcomelang2.c"
                gNumFree++;
            }
            else {
                # 539 "libcomelang2.c"
                it_43=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                # 545 "libcomelang2.c"
                # 541 "libcomelang2.c"
                if(_if_conditional57=it_43->allocated!=177783,                _if_conditional57) {
                    # 542 "libcomelang2.c"
                    return;
                }
                # 545 "libcomelang2.c"
                it_43->allocated=0;
                # 553 "libcomelang2.c"
                prev_it_44=it_43->prev;
                # 554 "libcomelang2.c"
                next_it_45=it_43->next;
                # 572 "libcomelang2.c"
                # 556 "libcomelang2.c"
                if(_if_conditional58=gAllocMem==it_43,                _if_conditional58) {
                    # 557 "libcomelang2.c"
                    gAllocMem=(struct sMemHeader*)next_it_45;
                    # 562 "libcomelang2.c"
                    # 559 "libcomelang2.c"
                    if(gAllocMem) {
                        # 560 "libcomelang2.c"
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    # 567 "libcomelang2.c"
                    # 564 "libcomelang2.c"
                    if(prev_it_44) {
                        # 565 "libcomelang2.c"
                        prev_it_44->next=next_it_45;
                    }
                    # 570 "libcomelang2.c"
                    # 567 "libcomelang2.c"
                    if(next_it_45) {
                        # 568 "libcomelang2.c"
                        next_it_45->prev=prev_it_44;
                    }
                }
                # 572 "libcomelang2.c"
                size_46=it_43->size;
                # 604 "libcomelang2.c"
                # 574 "libcomelang2.c"
                if(_if_conditional62=size_46<4048,                _if_conditional62) {
                    # 575 "libcomelang2.c"
                    num_free_mem_47=gHeapPages.mNumFreeMem[size_46];
                    # 576 "libcomelang2.c"
                    size_free_mem_48=gHeapPages.mSizeFreeMem[size_46];
                    # 597 "libcomelang2.c"
                    # 578 "libcomelang2.c"
                    if(_if_conditional63=gHeapPages.mFreeMem[size_46]==((void*)0),                    _if_conditional63) {
                        # 579 "libcomelang2.c"
                        new_size_free_mem_49=16;
                        # 580 "libcomelang2.c"
                        new_free_mem_50=calloc(1,sizeof(void*)*new_size_free_mem_49);
                        # 582 "libcomelang2.c"
                        gHeapPages.mSizeFreeMem[size_46]=new_size_free_mem_49;
                        # 583 "libcomelang2.c"
                        gHeapPages.mFreeMem[size_46]=new_free_mem_50;
                    }
                    else {
                        # 597 "libcomelang2.c"
                        # 585 "libcomelang2.c"
                        if(_if_conditional64=num_free_mem_47==size_free_mem_48,                        _if_conditional64) {
                            # 586 "libcomelang2.c"
                            new_size_free_mem_51=size_free_mem_48*2;
                            # 587 "libcomelang2.c"
                            new_free_mem_52=calloc(1,sizeof(void*)*new_size_free_mem_51);
                            # 589 "libcomelang2.c"
                            memcpy(new_free_mem_52,gHeapPages.mFreeMem[size_46],sizeof(void*)*num_free_mem_47);
                            # 591 "libcomelang2.c"
                            free(gHeapPages.mFreeMem[size_46]);
                            # 593 "libcomelang2.c"
                            gHeapPages.mSizeFreeMem[size_46]=new_size_free_mem_51;
                            # 594 "libcomelang2.c"
                            gHeapPages.mFreeMem[size_46]=new_free_mem_52;
                        }
                    }
                    # 597 "libcomelang2.c"
                    gHeapPages.mFreeMem[size_46][gHeapPages.mNumFreeMem[size_46]]=it_43;
                    # 598 "libcomelang2.c"
                    gHeapPages.mNumFreeMem[size_46]++;
                }
                else {
                    # 601 "libcomelang2.c"
                    free(it_43);
                }
                # 604 "libcomelang2.c"
                gNumFree++;
            }
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__;
struct sMemHeader* it_53;
_Bool _if_conditional65;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct sMemHeader*));
    # 651 "libcomelang2.c"
    it_53=(struct sMemHeader*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    # 658 "libcomelang2.c"
    # 653 "libcomelang2.c"
    if(_if_conditional65=it_53->allocated!=177783,    _if_conditional65) {
        # 654 "libcomelang2.c"
        printf("invalid heap object(%p)\n",it_53);
        # 655 "libcomelang2.c"
        exit(2);
    }
    # 658 "libcomelang2.c"
    __result54__ = __result_obj__ = it_53->class_name;
    return __result54__;
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_54;
unsigned long int* ref_count_55;
unsigned long int* size2_56;
void* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_54, 0, sizeof(char*));
memset(&ref_count_55, 0, sizeof(unsigned long int*));
memset(&size2_56, 0, sizeof(unsigned long int*));
    # 665 "libcomelang2.c"
    mem_54=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    # 667 "libcomelang2.c"
    ref_count_55=(unsigned long int*)mem_54;
    # 669 "libcomelang2.c"
    *ref_count_55=0;
    # 671 "libcomelang2.c"
    size2_56=(unsigned long int*)(mem_54+sizeof(unsigned long int));
    # 673 "libcomelang2.c"
    *size2_56=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    # 675 "libcomelang2.c"
    __result55__ = __result_obj__ = mem_54+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result55__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional66;
unsigned long int* ref_count_57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_57, 0, sizeof(unsigned long int*));
    # 683 "libcomelang2.c"
    # 680 "libcomelang2.c"
    if(_if_conditional66=mem==((void*)0),    _if_conditional66) {
        # 681 "libcomelang2.c"
        return;
    }
    # 691 "libcomelang2.c"
    ref_count_57=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 693 "libcomelang2.c"
    come_free_mem_of_heap_pool((char*)ref_count_57);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional67;
unsigned long int* ref_count_58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_58, 0, sizeof(unsigned long int*));
    # 701 "libcomelang2.c"
    # 698 "libcomelang2.c"
    if(_if_conditional67=mem==((void*)0),    _if_conditional67) {
        # 699 "libcomelang2.c"
        return;
    }
    # 709 "libcomelang2.c"
    ref_count_58=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 711 "libcomelang2.c"
    come_free_mem_of_heap_pool((char*)ref_count_58);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional68;
void* __result56__;
char* mem_59;
unsigned long int* size_p_60;
unsigned long int size_61;
void* result_62;
void* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_59, 0, sizeof(char*));
memset(&size_p_60, 0, sizeof(unsigned long int*));
memset(&size_61, 0, sizeof(unsigned long int));
memset(&result_62, 0, sizeof(void*));
    # 720 "libcomelang2.c"
    # 717 "libcomelang2.c"
    if(_if_conditional68=!block,    _if_conditional68) {
        # 718 "libcomelang2.c"
        __result56__ = __result_obj__ = ((void*)0);
        return __result56__;
    }
    # 728 "libcomelang2.c"
    mem_59=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    # 730 "libcomelang2.c"
    size_p_60=(unsigned long int*)(mem_59+sizeof(unsigned long int));
    # 732 "libcomelang2.c"
    size_61=*size_p_60-sizeof(unsigned long int)-sizeof(unsigned long int);
    # 735 "libcomelang2.c"
    result_62=come_calloc(1,size_61,sname,sline,class_name);
    # 737 "libcomelang2.c"
    memcpy(result_62,block,size_61);
    # 739 "libcomelang2.c"
    __result57__ = __result_obj__ = result_62;
    return __result57__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional69;
void* __result58__;
unsigned long int* ref_count_63;
void* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_63, 0, sizeof(unsigned long int*));
    # 747 "libcomelang2.c"
    # 744 "libcomelang2.c"
    if(_if_conditional69=mem==((void*)0),    _if_conditional69) {
        # 745 "libcomelang2.c"
        __result58__ = __result_obj__ = mem;
        return __result58__;
    }
    # 755 "libcomelang2.c"
    ref_count_63=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 757 "libcomelang2.c"
    (*ref_count_63)++;
    # 759 "libcomelang2.c"
    __result59__ = __result_obj__ = mem;
    return __result59__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional70;
void* __result60__;
unsigned long int* ref_count_64;
void* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_64, 0, sizeof(unsigned long int*));
    # 767 "libcomelang2.c"
    # 764 "libcomelang2.c"
    if(_if_conditional70=mem==((void*)0),    _if_conditional70) {
        # 765 "libcomelang2.c"
        __result60__ = __result_obj__ = mem;
        return __result60__;
    }
    # 775 "libcomelang2.c"
    ref_count_64=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 777 "libcomelang2.c"
    printf("ref_count %ld\n",*ref_count_64);
    # 779 "libcomelang2.c"
    __result61__ = __result_obj__ = mem;
    return __result61__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional71;
void* __result62__;
unsigned long int* ref_count_65;
_Bool _if_conditional72;
unsigned long int count_66;
_Bool _if_conditional73;
_Bool _if_conditional74;
void (*finalizer_67)(void*);
void* __result63__;
void* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_65, 0, sizeof(unsigned long int*));
memset(&count_66, 0, sizeof(unsigned long int));
memset(&finalizer_67, 0, sizeof(void (*)(void*)));
    # 788 "libcomelang2.c"
    # 784 "libcomelang2.c"
    if(_if_conditional71=mem==((void*)0),    _if_conditional71) {
        # 785 "libcomelang2.c"
        __result62__ = __result_obj__ = ((void*)0);
        return __result62__;
    }
    # 788 "libcomelang2.c"
    ref_count_65=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 794 "libcomelang2.c"
    # 790 "libcomelang2.c"
    if(_if_conditional72=!no_decrement,    _if_conditional72) {
        # 791 "libcomelang2.c"
        (*ref_count_65)--;
    }
    # 794 "libcomelang2.c"
    count_66=*ref_count_65;
    # 806 "libcomelang2.c"
    # 795 "libcomelang2.c"
    if(_if_conditional73=!no_free&&(count_66<=0||force_delete_),    _if_conditional73) {
        # 802 "libcomelang2.c"
        # 796 "libcomelang2.c"
        if(_if_conditional74=protocol_obj&&protocol_fun,        _if_conditional74) {
            # 797 "libcomelang2.c"
            finalizer_67=protocol_fun;
            # 798 "libcomelang2.c"
            finalizer_67(protocol_obj);
            # 800 "libcomelang2.c"
            come_free_object(protocol_obj);
        }
        # 802 "libcomelang2.c"
        come_free_object(mem);
        # 803 "libcomelang2.c"
        __result63__ = __result_obj__ = ((void*)0);
        return __result63__;
    }
    # 806 "libcomelang2.c"
    __result64__ = __result_obj__ = mem;
    return __result64__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* __result65__;
_Bool _if_conditional77;
void* __result66__;
unsigned long int* ref_count_68;
_Bool _if_conditional78;
unsigned long int count_69;
_Bool _if_conditional79;
_Bool _if_conditional80;
void (*finalizer_70)(void*);
void* __result67__;
void* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_68, 0, sizeof(unsigned long int*));
memset(&count_69, 0, sizeof(unsigned long int));
memset(&finalizer_70, 0, sizeof(void (*)(void*)));
    # 816 "libcomelang2.c"
    # 811 "libcomelang2.c"
    if(result_obj) {
        # 815 "libcomelang2.c"
        # 812 "libcomelang2.c"
        if(_if_conditional76=mem==result_obj,        _if_conditional76) {
            # 813 "libcomelang2.c"
            __result65__ = __result_obj__ = mem;
            return __result65__;
        }
    }
    # 820 "libcomelang2.c"
    # 816 "libcomelang2.c"
    if(_if_conditional77=mem==((void*)0),    _if_conditional77) {
        # 817 "libcomelang2.c"
        __result66__ = __result_obj__ = ((void*)0);
        return __result66__;
    }
    # 820 "libcomelang2.c"
    ref_count_68=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 826 "libcomelang2.c"
    # 822 "libcomelang2.c"
    if(_if_conditional78=!no_decrement,    _if_conditional78) {
        # 823 "libcomelang2.c"
        (*ref_count_68)--;
    }
    # 826 "libcomelang2.c"
    count_69=*ref_count_68;
    # 838 "libcomelang2.c"
    # 827 "libcomelang2.c"
    if(_if_conditional79=!no_free&&(count_69<=0||force_delete_),    _if_conditional79) {
        # 834 "libcomelang2.c"
        # 828 "libcomelang2.c"
        if(_if_conditional80=protocol_obj&&protocol_fun,        _if_conditional80) {
            # 829 "libcomelang2.c"
            finalizer_70=protocol_fun;
            # 830 "libcomelang2.c"
            finalizer_70(protocol_obj);
            # 832 "libcomelang2.c"
            come_free_object(protocol_obj);
        }
        # 834 "libcomelang2.c"
        come_free_object(mem);
        # 835 "libcomelang2.c"
        __result67__ = __result_obj__ = ((void*)0);
        return __result67__;
    }
    # 838 "libcomelang2.c"
    __result68__ = __result_obj__ = mem;
    return __result68__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
void (*finalizer_71)(void*);
void (*finalizer_72)(void*);
unsigned long int* ref_count_73;
_Bool _if_conditional85;
unsigned long int count_74;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void (*finalizer_75)(void*);
_Bool _if_conditional89;
void (*finalizer_76)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_71, 0, sizeof(void (*)(void*)));
memset(&finalizer_72, 0, sizeof(void (*)(void*)));
memset(&ref_count_73, 0, sizeof(unsigned long int*));
memset(&count_74, 0, sizeof(unsigned long int));
memset(&finalizer_75, 0, sizeof(void (*)(void*)));
memset(&finalizer_76, 0, sizeof(void (*)(void*)));
    # 847 "libcomelang2.c"
    # 843 "libcomelang2.c"
    if(_if_conditional81=mem==((void*)0),    _if_conditional81) {
        # 844 "libcomelang2.c"
        return;
    }
    # 880 "libcomelang2.c"
    # 847 "libcomelang2.c"
    if(call_finalizer_only) {
        # 856 "libcomelang2.c"
        # 848 "libcomelang2.c"
        if(fun) {
            # 853 "libcomelang2.c"
            # 849 "libcomelang2.c"
            if(_if_conditional84=protocol_obj&&protocol_fun,            _if_conditional84) {
                # 850 "libcomelang2.c"
                finalizer_71=protocol_fun;
                # 851 "libcomelang2.c"
                finalizer_71(protocol_obj);
            }
            # 853 "libcomelang2.c"
            finalizer_72=fun;
            # 854 "libcomelang2.c"
            finalizer_72(mem);
        }
    }
    else {
        # 858 "libcomelang2.c"
        ref_count_73=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        # 864 "libcomelang2.c"
        # 860 "libcomelang2.c"
        if(_if_conditional85=!no_decrement,        _if_conditional85) {
            # 861 "libcomelang2.c"
            (*ref_count_73)--;
        }
        # 864 "libcomelang2.c"
        count_74=*ref_count_73;
        # 879 "libcomelang2.c"
        # 865 "libcomelang2.c"
        if(_if_conditional86=!no_free&&(count_74<=0||force_delete_),        _if_conditional86) {
            # 878 "libcomelang2.c"
            # 866 "libcomelang2.c"
            if(mem) {
                # 872 "libcomelang2.c"
                # 867 "libcomelang2.c"
                if(_if_conditional88=protocol_obj&&protocol_fun,                _if_conditional88) {
                    # 868 "libcomelang2.c"
                    finalizer_75=protocol_fun;
                    # 869 "libcomelang2.c"
                    finalizer_75(protocol_obj);
                    # 870 "libcomelang2.c"
                    come_free_object(protocol_obj);
                }
                # 876 "libcomelang2.c"
                # 872 "libcomelang2.c"
                if(fun) {
                    # 873 "libcomelang2.c"
                    finalizer_76=fun;
                    # 874 "libcomelang2.c"
                    finalizer_76(mem);
                }
                # 876 "libcomelang2.c"
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
void (*finalizer_77)(void*);
void (*finalizer_78)(void*);
unsigned long int* ref_count_79;
_Bool _if_conditional96;
unsigned long int count_80;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void (*finalizer_81)(void*);
_Bool _if_conditional100;
void (*finalizer_82)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_77, 0, sizeof(void (*)(void*)));
memset(&finalizer_78, 0, sizeof(void (*)(void*)));
memset(&ref_count_79, 0, sizeof(unsigned long int*));
memset(&count_80, 0, sizeof(unsigned long int));
memset(&finalizer_81, 0, sizeof(void (*)(void*)));
memset(&finalizer_82, 0, sizeof(void (*)(void*)));
    # 889 "libcomelang2.c"
    # 884 "libcomelang2.c"
    if(result_obj) {
        # 888 "libcomelang2.c"
        # 885 "libcomelang2.c"
        if(_if_conditional91=mem==result_obj,        _if_conditional91) {
            # 886 "libcomelang2.c"
            return;
        }
    }
    # 893 "libcomelang2.c"
    # 889 "libcomelang2.c"
    if(_if_conditional92=mem==((void*)0),    _if_conditional92) {
        # 890 "libcomelang2.c"
        return;
    }
    # 926 "libcomelang2.c"
    # 893 "libcomelang2.c"
    if(call_finalizer_only) {
        # 902 "libcomelang2.c"
        # 894 "libcomelang2.c"
        if(fun) {
            # 899 "libcomelang2.c"
            # 895 "libcomelang2.c"
            if(_if_conditional95=protocol_obj&&protocol_fun,            _if_conditional95) {
                # 896 "libcomelang2.c"
                finalizer_77=protocol_fun;
                # 897 "libcomelang2.c"
                finalizer_77(protocol_obj);
            }
            # 899 "libcomelang2.c"
            finalizer_78=fun;
            # 900 "libcomelang2.c"
            finalizer_78(mem);
        }
    }
    else {
        # 904 "libcomelang2.c"
        ref_count_79=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        # 910 "libcomelang2.c"
        # 906 "libcomelang2.c"
        if(_if_conditional96=!no_decrement,        _if_conditional96) {
            # 907 "libcomelang2.c"
            (*ref_count_79)--;
        }
        # 910 "libcomelang2.c"
        count_80=*ref_count_79;
        # 925 "libcomelang2.c"
        # 911 "libcomelang2.c"
        if(_if_conditional97=!no_free&&(count_80<=0||force_delete_),        _if_conditional97) {
            # 924 "libcomelang2.c"
            # 912 "libcomelang2.c"
            if(mem) {
                # 918 "libcomelang2.c"
                # 913 "libcomelang2.c"
                if(_if_conditional99=protocol_obj&&protocol_fun,                _if_conditional99) {
                    # 914 "libcomelang2.c"
                    finalizer_81=protocol_fun;
                    # 915 "libcomelang2.c"
                    finalizer_81(protocol_obj);
                    # 916 "libcomelang2.c"
                    come_free_object(protocol_obj);
                }
                # 922 "libcomelang2.c"
                # 918 "libcomelang2.c"
                if(fun) {
                    # 919 "libcomelang2.c"
                    finalizer_82=fun;
                    # 920 "libcomelang2.c"
                    finalizer_82(mem);
                }
                # 922 "libcomelang2.c"
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional101;
char* __result69__;
int len_83;
void* right_value55;
char* result_84;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_83, 0, sizeof(int));
right_value55 = (void*)0;
memset(&result_84, 0, sizeof(char*));
    # 933 "libcomelang2.c"
    # 930 "libcomelang2.c"
    if(_if_conditional101=str==((void*)0),    _if_conditional101) {
        # 931 "libcomelang2.c"
        __result69__ = __result_obj__ = ((void*)0);
        return __result69__;
    }
    # 933 "libcomelang2.c"
    len_83=strlen(str)+1;
    # 935 "libcomelang2.c"
    result_84=(char*)come_increment_ref_count(((char*)(right_value55=(char*)come_calloc(1, sizeof(char)*(1*(len_83)), "libcomelang2.c", 935, "char"))));
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 937 "libcomelang2.c"
    strncpy(result_84,str,len_83);
    # 939 "libcomelang2.c"
    __result70__ = __result_obj__ = result_84;
    result_84 = come_decrement_ref_count2(result_84, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result70__;
    result_84 = come_decrement_ref_count2(result_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_85;
int i_86;
_Bool _if_conditional102;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_85, 0, sizeof(_Bool));
memset(&i_86, 0, sizeof(int));
    # 944 "libcomelang2.c"
    found_85=(_Bool)0;
    # 951 "libcomelang2.c"
    for(    i_86=0;    i_86<len;    i_86++    ){
        # 950 "libcomelang2.c"
        # 946 "libcomelang2.c"
        if(_if_conditional102=array[i_86]==element,        _if_conditional102) {
            # 947 "libcomelang2.c"
            found_85=(_Bool)1;
            # 948 "libcomelang2.c"
            break;
        }
    }
    # 951 "libcomelang2.c"
    __result71__ = found_85;
    return __result71__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
void* right_value56;
char* __dec_obj12;
struct buffer* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
    # 959 "libcomelang2.c"
    self->size=128;
    # 960 "libcomelang2.c"
    __dec_obj12=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value56=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 960, "char"))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 961 "libcomelang2.c"
    self->buf[0]=0;
    # 962 "libcomelang2.c"
    self->len=0;
    # 964 "libcomelang2.c"
    __result72__ = __result_obj__ = self;
    come_call_finalizer2(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result72__;
    come_call_finalizer2(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
    # 969 "libcomelang2.c"
    # 969 "libcomelang2.c"
    if(_if_conditional103=self&&self->buf,    _if_conditional103) {
        # 969 "libcomelang2.c"
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
    # 973 "libcomelang2.c"
    # 973 "libcomelang2.c"
    if(_if_conditional104=self&&self->buf,    _if_conditional104) {
        # 973 "libcomelang2.c"
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional105;
struct buffer* __result73__;
void* right_value57;
struct buffer* result_87;
void* right_value58;
char* __dec_obj13;
struct buffer* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&result_87, 0, sizeof(struct buffer*));
right_value58 = (void*)0;
    # 982 "libcomelang2.c"
    # 978 "libcomelang2.c"
    if(_if_conditional105=self==((void*)0),    _if_conditional105) {
        # 979 "libcomelang2.c"
        __result73__ = __result_obj__ = ((void*)0);
        return __result73__;
    }
    # 982 "libcomelang2.c"
    result_87=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value57=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 982, "buffer"))));
    come_call_finalizer2(buffer_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 984 "libcomelang2.c"
    result_87->size=self->size;
    # 985 "libcomelang2.c"
    __dec_obj13=result_87->buf;
    result_87->buf=(char*)come_increment_ref_count(((char*)(right_value58=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 985, "char"))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 986 "libcomelang2.c"
    result_87->len=self->len;
    # 987 "libcomelang2.c"
    memcpy(result_87->buf,self->buf,self->len);
    # 989 "libcomelang2.c"
    __result74__ = __result_obj__ = result_87;
    come_call_finalizer2(buffer_finalize,result_87, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result74__;
    come_call_finalizer2(buffer_finalize,result_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional106;
int __result75__;
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    # 997 "libcomelang2.c"
    # 994 "libcomelang2.c"
    if(_if_conditional106=self==((void*)0),    _if_conditional106) {
        # 995 "libcomelang2.c"
        __result75__ = 0;
        return __result75__;
    }
    # 997 "libcomelang2.c"
    __result76__ = self->len;
    return __result76__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional107;
memset(&__result_obj__, 0, sizeof(void*));
    # 1005 "libcomelang2.c"
    # 1002 "libcomelang2.c"
    if(_if_conditional107=self==((void*)0),    _if_conditional107) {
        # 1003 "libcomelang2.c"
        return;
    }
    # 1005 "libcomelang2.c"
    self->buf[0]=0;
    # 1006 "libcomelang2.c"
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional108;
memset(&__result_obj__, 0, sizeof(void*));
    # 1014 "libcomelang2.c"
    # 1011 "libcomelang2.c"
    if(_if_conditional108=self==((void*)0),    _if_conditional108) {
        # 1012 "libcomelang2.c"
        return;
    }
    # 1014 "libcomelang2.c"
    self->len-=len;
    # 1015 "libcomelang2.c"
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool _if_conditional109;
struct buffer* __result77__;
_Bool _if_conditional110;
void* right_value59;
char* old_buf_88;
int old_len_89;
int new_size_90;
void* right_value60;
char* __dec_obj14;
struct buffer* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&old_buf_88, 0, sizeof(char*));
memset(&old_len_89, 0, sizeof(int));
memset(&new_size_90, 0, sizeof(int));
right_value60 = (void*)0;
    # 1023 "libcomelang2.c"
    # 1020 "libcomelang2.c"
    if(_if_conditional109=self==((void*)0)||mem==((void*)0),    _if_conditional109) {
        # 1021 "libcomelang2.c"
        __result77__ = __result_obj__ = self;
        return __result77__;
    }
    # 1034 "libcomelang2.c"
    # 1023 "libcomelang2.c"
    if(_if_conditional110=self->len+size+1+1>=self->size,    _if_conditional110) {
        # 1024 "libcomelang2.c"
        old_buf_88=(char*)come_increment_ref_count(((char*)(right_value59=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1024, "char"))));
        right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1025 "libcomelang2.c"
        memcpy(old_buf_88,self->buf,self->size);
        # 1026 "libcomelang2.c"
        old_len_89=self->len;
        # 1027 "libcomelang2.c"
        new_size_90=(self->size+size+1)*2;
        # 1028 "libcomelang2.c"
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value60=(char*)come_calloc(1, sizeof(char)*(1*(new_size_90)), "libcomelang2.c", 1028, "char"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1029 "libcomelang2.c"
        memcpy(self->buf,old_buf_88,old_len_89);
        # 1030 "libcomelang2.c"
        self->buf[old_len_89]=0;
        # 1031 "libcomelang2.c"
        self->size=new_size_90;
        old_buf_88 = come_decrement_ref_count2(old_buf_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1034 "libcomelang2.c"
    memcpy(self->buf+self->len,mem,size);
    # 1035 "libcomelang2.c"
    self->len+=size;
    # 1036 "libcomelang2.c"
    self->buf[self->len]=0;
    # 1038 "libcomelang2.c"
    __result78__ = __result_obj__ = self;
    return __result78__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional111;
struct buffer* __result79__;
_Bool _if_conditional112;
void* right_value61;
char* old_buf_91;
int old_len_92;
int new_size_93;
void* right_value62;
char* __dec_obj15;
struct buffer* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
memset(&old_buf_91, 0, sizeof(char*));
memset(&old_len_92, 0, sizeof(int));
memset(&new_size_93, 0, sizeof(int));
right_value62 = (void*)0;
    # 1046 "libcomelang2.c"
    # 1043 "libcomelang2.c"
    if(_if_conditional111=self==((void*)0),    _if_conditional111) {
        # 1044 "libcomelang2.c"
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
    # 1057 "libcomelang2.c"
    # 1046 "libcomelang2.c"
    if(_if_conditional112=self->len+1+1+1>=self->size,    _if_conditional112) {
        # 1047 "libcomelang2.c"
        old_buf_91=(char*)come_increment_ref_count(((char*)(right_value61=charp_clone(self->buf))));
        right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1048 "libcomelang2.c"
        old_len_92=self->len;
        # 1050 "libcomelang2.c"
        new_size_93=(self->size+10+1)*2;
        # 1051 "libcomelang2.c"
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value62=(char*)come_calloc(1, sizeof(char)*(1*(new_size_93)), "libcomelang2.c", 1051, "char"))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1052 "libcomelang2.c"
        memcpy(self->buf,old_buf_91,old_len_92);
        # 1053 "libcomelang2.c"
        self->buf[old_len_92]=0;
        # 1054 "libcomelang2.c"
        self->size=new_size_93;
        old_buf_91 = come_decrement_ref_count2(old_buf_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1057 "libcomelang2.c"
    self->buf[self->len]=c;
    # 1058 "libcomelang2.c"
    self->len++;
    # 1060 "libcomelang2.c"
    self->buf[self->len]=0;
    # 1062 "libcomelang2.c"
    __result80__ = __result_obj__ = self;
    return __result80__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional113;
struct buffer* __result81__;
int size_94;
_Bool _if_conditional114;
void* right_value63;
char* old_buf_95;
int old_len_96;
int new_size_97;
void* right_value64;
char* __dec_obj16;
struct buffer* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_94, 0, sizeof(int));
right_value63 = (void*)0;
memset(&old_buf_95, 0, sizeof(char*));
memset(&old_len_96, 0, sizeof(int));
memset(&new_size_97, 0, sizeof(int));
right_value64 = (void*)0;
    # 1071 "libcomelang2.c"
    # 1067 "libcomelang2.c"
    if(_if_conditional113=self==((void*)0)||mem==((void*)0),    _if_conditional113) {
        # 1068 "libcomelang2.c"
        __result81__ = __result_obj__ = self;
        return __result81__;
    }
    # 1071 "libcomelang2.c"
    size_94=strlen(mem);
    # 1083 "libcomelang2.c"
    # 1072 "libcomelang2.c"
    if(_if_conditional114=self->len+size_94+1+1>=self->size,    _if_conditional114) {
        # 1073 "libcomelang2.c"
        old_buf_95=(char*)come_increment_ref_count(((char*)(right_value63=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1073, "char"))));
        right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1074 "libcomelang2.c"
        memcpy(old_buf_95,self->buf,self->size);
        # 1075 "libcomelang2.c"
        old_len_96=self->len;
        # 1076 "libcomelang2.c"
        new_size_97=(self->size+size_94+1)*2;
        # 1077 "libcomelang2.c"
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value64=(char*)come_calloc(1, sizeof(char)*(1*(new_size_97)), "libcomelang2.c", 1077, "char"))));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1078 "libcomelang2.c"
        memcpy(self->buf,old_buf_95,old_len_96);
        # 1079 "libcomelang2.c"
        self->buf[old_len_96]=0;
        # 1080 "libcomelang2.c"
        self->size=new_size_97;
        old_buf_95 = come_decrement_ref_count2(old_buf_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1083 "libcomelang2.c"
    memcpy(self->buf+self->len,mem,size_94);
    # 1084 "libcomelang2.c"
    self->len+=size_94;
    # 1085 "libcomelang2.c"
    self->buf[self->len]=0;
    # 1087 "libcomelang2.c"
    __result82__ = __result_obj__ = self;
    return __result82__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional115;
struct buffer* __result83__;
int size_98;
_Bool _if_conditional116;
void* right_value65;
char* old_buf_99;
int old_len_100;
int new_size_101;
void* right_value66;
char* __dec_obj17;
struct buffer* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_98, 0, sizeof(int));
right_value65 = (void*)0;
memset(&old_buf_99, 0, sizeof(char*));
memset(&old_len_100, 0, sizeof(int));
memset(&new_size_101, 0, sizeof(int));
right_value66 = (void*)0;
    # 1095 "libcomelang2.c"
    # 1092 "libcomelang2.c"
    if(_if_conditional115=self==((void*)0)||mem==((void*)0),    _if_conditional115) {
        # 1093 "libcomelang2.c"
        __result83__ = __result_obj__ = self;
        return __result83__;
    }
    # 1095 "libcomelang2.c"
    size_98=strlen(mem)+1;
    # 1107 "libcomelang2.c"
    # 1096 "libcomelang2.c"
    if(_if_conditional116=self->len+size_98+1+1+1>=self->size,    _if_conditional116) {
        # 1097 "libcomelang2.c"
        old_buf_99=(char*)come_increment_ref_count(((char*)(right_value65=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1097, "char"))));
        right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1098 "libcomelang2.c"
        memcpy(old_buf_99,self->buf,self->size);
        # 1099 "libcomelang2.c"
        old_len_100=self->len;
        # 1100 "libcomelang2.c"
        new_size_101=(self->size+size_98+1)*2;
        # 1101 "libcomelang2.c"
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value66=(char*)come_calloc(1, sizeof(char)*(1*(new_size_101)), "libcomelang2.c", 1101, "char"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1102 "libcomelang2.c"
        memcpy(self->buf,old_buf_99,old_len_100);
        # 1103 "libcomelang2.c"
        self->buf[old_len_100]=0;
        # 1104 "libcomelang2.c"
        self->size=new_size_101;
        old_buf_99 = come_decrement_ref_count2(old_buf_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1107 "libcomelang2.c"
    memcpy(self->buf+self->len,mem,size_98);
    # 1108 "libcomelang2.c"
    self->len+=size_98;
    # 1109 "libcomelang2.c"
    self->buf[self->len]=0;
    # 1110 "libcomelang2.c"
    self->len++;
    # 1112 "libcomelang2.c"
    __result84__ = __result_obj__ = self;
    return __result84__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional117;
struct buffer* __result85__;
int* mem_102;
int size_103;
_Bool _if_conditional118;
void* right_value67;
char* old_buf_104;
int old_len_105;
int new_size_106;
void* right_value68;
char* __dec_obj18;
struct buffer* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_102, 0, sizeof(int*));
memset(&size_103, 0, sizeof(int));
right_value67 = (void*)0;
memset(&old_buf_104, 0, sizeof(char*));
memset(&old_len_105, 0, sizeof(int));
memset(&new_size_106, 0, sizeof(int));
right_value68 = (void*)0;
    # 1120 "libcomelang2.c"
    # 1117 "libcomelang2.c"
    if(_if_conditional117=self==((void*)0),    _if_conditional117) {
        # 1118 "libcomelang2.c"
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    # 1120 "libcomelang2.c"
    mem_102=&value;
    # 1121 "libcomelang2.c"
    size_103=sizeof(int);
    # 1134 "libcomelang2.c"
    # 1123 "libcomelang2.c"
    if(_if_conditional118=self->len+size_103+1+1>=self->size,    _if_conditional118) {
        # 1124 "libcomelang2.c"
        old_buf_104=(char*)come_increment_ref_count(((char*)(right_value67=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1124, "char"))));
        right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1125 "libcomelang2.c"
        memcpy(old_buf_104,self->buf,self->size);
        # 1126 "libcomelang2.c"
        old_len_105=self->len;
        # 1127 "libcomelang2.c"
        new_size_106=(self->size+size_103+1)*2;
        # 1128 "libcomelang2.c"
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value68=(char*)come_calloc(1, sizeof(char)*(1*(new_size_106)), "libcomelang2.c", 1128, "char"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1129 "libcomelang2.c"
        memcpy(self->buf,old_buf_104,old_len_105);
        # 1130 "libcomelang2.c"
        self->buf[old_len_105]=0;
        # 1131 "libcomelang2.c"
        self->size=new_size_106;
        old_buf_104 = come_decrement_ref_count2(old_buf_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1134 "libcomelang2.c"
    memcpy(self->buf+self->len,mem_102,size_103);
    # 1135 "libcomelang2.c"
    self->len+=size_103;
    # 1136 "libcomelang2.c"
    self->buf[self->len]=0;
    # 1138 "libcomelang2.c"
    __result86__ = __result_obj__ = self;
    return __result86__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_107;
int size_108;
_Bool _if_conditional119;
void* right_value69;
char* old_buf_109;
int old_len_110;
int new_size_111;
void* right_value70;
char* __dec_obj19;
struct buffer* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_107, 0, sizeof(long*));
memset(&size_108, 0, sizeof(int));
right_value69 = (void*)0;
memset(&old_buf_109, 0, sizeof(char*));
memset(&old_len_110, 0, sizeof(int));
memset(&new_size_111, 0, sizeof(int));
right_value70 = (void*)0;
    # 1143 "libcomelang2.c"
    mem_107=&value;
    # 1144 "libcomelang2.c"
    size_108=sizeof(long);
    # 1157 "libcomelang2.c"
    # 1146 "libcomelang2.c"
    if(_if_conditional119=self->len+size_108+1+1>=self->size,    _if_conditional119) {
        # 1147 "libcomelang2.c"
        old_buf_109=(char*)come_increment_ref_count(((char*)(right_value69=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1147, "char"))));
        right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1148 "libcomelang2.c"
        memcpy(old_buf_109,self->buf,self->size);
        # 1149 "libcomelang2.c"
        old_len_110=self->len;
        # 1150 "libcomelang2.c"
        new_size_111=(self->size+size_108+1)*2;
        # 1151 "libcomelang2.c"
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value70=(char*)come_calloc(1, sizeof(char)*(1*(new_size_111)), "libcomelang2.c", 1151, "char"))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1152 "libcomelang2.c"
        memcpy(self->buf,old_buf_109,old_len_110);
        # 1153 "libcomelang2.c"
        self->buf[old_len_110]=0;
        # 1154 "libcomelang2.c"
        self->size=new_size_111;
        old_buf_109 = come_decrement_ref_count2(old_buf_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1157 "libcomelang2.c"
    memcpy(self->buf+self->len,mem_107,size_108);
    # 1158 "libcomelang2.c"
    self->len+=size_108;
    # 1159 "libcomelang2.c"
    self->buf[self->len]=0;
    # 1161 "libcomelang2.c"
    __result87__ = __result_obj__ = self;
    return __result87__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional120;
struct buffer* __result88__;
short short* mem_112;
int size_113;
_Bool _if_conditional121;
void* right_value71;
char* old_buf_114;
int old_len_115;
int new_size_116;
void* right_value72;
char* __dec_obj20;
struct buffer* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_112, 0, sizeof(short short*));
memset(&size_113, 0, sizeof(int));
right_value71 = (void*)0;
memset(&old_buf_114, 0, sizeof(char*));
memset(&old_len_115, 0, sizeof(int));
memset(&new_size_116, 0, sizeof(int));
right_value72 = (void*)0;
    # 1170 "libcomelang2.c"
    # 1166 "libcomelang2.c"
    if(_if_conditional120=self==((void*)0),    _if_conditional120) {
        # 1167 "libcomelang2.c"
        __result88__ = __result_obj__ = ((void*)0);
        return __result88__;
    }
    # 1170 "libcomelang2.c"
    mem_112=&value;
    # 1171 "libcomelang2.c"
    size_113=sizeof(short short);
    # 1184 "libcomelang2.c"
    # 1173 "libcomelang2.c"
    if(_if_conditional121=self->len+size_113+1+1>=self->size,    _if_conditional121) {
        # 1174 "libcomelang2.c"
        old_buf_114=(char*)come_increment_ref_count(((char*)(right_value71=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1174, "char"))));
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1175 "libcomelang2.c"
        memcpy(old_buf_114,self->buf,self->size);
        # 1176 "libcomelang2.c"
        old_len_115=self->len;
        # 1177 "libcomelang2.c"
        new_size_116=(self->size+size_113+1)*2;
        # 1178 "libcomelang2.c"
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value72=(char*)come_calloc(1, sizeof(char)*(1*(new_size_116)), "libcomelang2.c", 1178, "char"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1179 "libcomelang2.c"
        memcpy(self->buf,old_buf_114,old_len_115);
        # 1180 "libcomelang2.c"
        self->buf[old_len_115]=0;
        # 1181 "libcomelang2.c"
        self->size=new_size_116;
        old_buf_114 = come_decrement_ref_count2(old_buf_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1184 "libcomelang2.c"
    memcpy(self->buf+self->len,mem_112,size_113);
    # 1185 "libcomelang2.c"
    self->len+=size_113;
    # 1186 "libcomelang2.c"
    self->buf[self->len]=0;
    # 1188 "libcomelang2.c"
    __result89__ = __result_obj__ = self;
    return __result89__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional122;
struct buffer* __result90__;
int len_117;
_Bool _if_conditional123;
int new_size_118;
void* right_value73;
char* __dec_obj21;
int i_119;
struct buffer* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_117, 0, sizeof(int));
memset(&new_size_118, 0, sizeof(int));
right_value73 = (void*)0;
memset(&i_119, 0, sizeof(int));
    # 1197 "libcomelang2.c"
    # 1193 "libcomelang2.c"
    if(_if_conditional122=self==((void*)0),    _if_conditional122) {
        # 1194 "libcomelang2.c"
        __result90__ = __result_obj__ = ((void*)0);
        return __result90__;
    }
    # 1197 "libcomelang2.c"
    len_117=self->len;
    # 1198 "libcomelang2.c"
    len_117=(len_117+3)&~3;
    # 1206 "libcomelang2.c"
    # 1200 "libcomelang2.c"
    if(_if_conditional123=len_117>=self->size,    _if_conditional123) {
        # 1201 "libcomelang2.c"
        new_size_118=(self->size+1+1)*2;
        # 1202 "libcomelang2.c"
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value73=(char*)come_calloc(1, sizeof(char)*(1*(new_size_118)), "libcomelang2.c", 1202, "char"))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1203 "libcomelang2.c"
        self->size=new_size_118;
    }
    # 1210 "libcomelang2.c"
    for(    i_119=self->len;    i_119<len_117;    i_119++    ){
        # 1207 "libcomelang2.c"
        self->buf[i_119]=0;
    }
    # 1210 "libcomelang2.c"
    self->len=len_117;
    # 1212 "libcomelang2.c"
    __result91__ = __result_obj__ = self;
    return __result91__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional124;
int __result92__;
_Bool _if_conditional125;
int __result93__;
_Bool _if_conditional126;
int __result94__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1227 "libcomelang2.c"
    # 1217 "libcomelang2.c"
    if(_if_conditional124=left==((void*)0)&&right==((void*)0),    _if_conditional124) {
        # 1218 "libcomelang2.c"
        __result92__ = 0;
        return __result92__;
    }
    else {
        # 1227 "libcomelang2.c"
        # 1220 "libcomelang2.c"
        if(_if_conditional125=left==((void*)0),        _if_conditional125) {
            # 1221 "libcomelang2.c"
            __result93__ = -1;
            return __result93__;
        }
        else {
            # 1227 "libcomelang2.c"
            # 1223 "libcomelang2.c"
            if(_if_conditional126=right==((void*)0),            _if_conditional126) {
                # 1224 "libcomelang2.c"
                __result94__ = 1;
                return __result94__;
            }
        }
    }
    # 1227 "libcomelang2.c"
    __result95__ = strcmp(left->buf,right->buf);
    return __result95__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
void* right_value74;
void* right_value75;
struct buffer* result_120;
_Bool _if_conditional127;
struct buffer* __result96__;
struct buffer* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&result_120, 0, sizeof(struct buffer*));
    # 1232 "libcomelang2.c"
    result_120=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1232, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1238 "libcomelang2.c"
    # 1234 "libcomelang2.c"
    if(_if_conditional127=self==((void*)0),    _if_conditional127) {
        # 1235 "libcomelang2.c"
        __result96__ = __result_obj__ = result_120;
        come_call_finalizer2(buffer_finalize,result_120, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result96__;
    }
    # 1238 "libcomelang2.c"
    buffer_append_str(result_120,self);
    # 1240 "libcomelang2.c"
    __result97__ = __result_obj__ = result_120;
    come_call_finalizer2(buffer_finalize,result_120, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result97__;
    come_call_finalizer2(buffer_finalize,result_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
void* right_value76;
void* right_value77;
struct buffer* result_121;
_Bool _if_conditional128;
struct buffer* __result98__;
struct buffer* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
right_value77 = (void*)0;
memset(&result_121, 0, sizeof(struct buffer*));
    # 1245 "libcomelang2.c"
    result_121=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value76=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1245, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1251 "libcomelang2.c"
    # 1247 "libcomelang2.c"
    if(_if_conditional128=self==((void*)0),    _if_conditional128) {
        # 1248 "libcomelang2.c"
        __result98__ = __result_obj__ = result_121;
        come_call_finalizer2(buffer_finalize,result_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result98__;
    }
    # 1251 "libcomelang2.c"
    buffer_append_str(result_121,self);
    # 1253 "libcomelang2.c"
    __result99__ = __result_obj__ = result_121;
    come_call_finalizer2(buffer_finalize,result_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result99__;
    come_call_finalizer2(buffer_finalize,result_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional129;
void* right_value78;
char* __result100__;
void* right_value79;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
right_value79 = (void*)0;
    # 1262 "libcomelang2.c"
    # 1258 "libcomelang2.c"
    if(_if_conditional129=self==((void*)0),    _if_conditional129) {
        # 1259 "libcomelang2.c"
        __result100__ = __result_obj__ = ((char*)(right_value78=__builtin_string("")));
        right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result100__;
    }
    # 1262 "libcomelang2.c"
    __result101__ = __result_obj__ = ((char*)(right_value79=__builtin_string(self->buf)));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1271 "libcomelang2.c"
    __result102__ = self==right;
    return __result102__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1276 "libcomelang2.c"
    __result103__ = self==right;
    return __result103__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1281 "libcomelang2.c"
    __result104__ = self==right;
    return __result104__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1286 "libcomelang2.c"
    __result105__ = self==right;
    return __result105__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1291 "libcomelang2.c"
    __result106__ = self==right;
    return __result106__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1296 "libcomelang2.c"
    __result107__ = self==right;
    return __result107__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1301 "libcomelang2.c"
    __result108__ = self==right;
    return __result108__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1306 "libcomelang2.c"
    __result109__ = self==right;
    return __result109__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional130;
_Bool __result110__;
_Bool _if_conditional131;
_Bool __result111__;
_Bool _if_conditional132;
_Bool __result112__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1321 "libcomelang2.c"
    # 1311 "libcomelang2.c"
    if(_if_conditional130=self==((void*)0)&&right==((void*)0),    _if_conditional130) {
        # 1312 "libcomelang2.c"
        __result110__ = (_Bool)1;
        return __result110__;
    }
    else {
        # 1321 "libcomelang2.c"
        # 1314 "libcomelang2.c"
        if(_if_conditional131=self==((void*)0),        _if_conditional131) {
            # 1315 "libcomelang2.c"
            __result111__ = (_Bool)0;
            return __result111__;
        }
        else {
            # 1321 "libcomelang2.c"
            # 1317 "libcomelang2.c"
            if(_if_conditional132=right==((void*)0),            _if_conditional132) {
                # 1318 "libcomelang2.c"
                __result112__ = (_Bool)0;
                return __result112__;
            }
        }
    }
    # 1321 "libcomelang2.c"
    __result113__ = strcmp(self,right)==0;
    return __result113__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional133;
_Bool __result114__;
_Bool _if_conditional134;
_Bool __result115__;
_Bool _if_conditional135;
_Bool __result116__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1336 "libcomelang2.c"
    # 1326 "libcomelang2.c"
    if(_if_conditional133=self==((void*)0)&&right==((void*)0),    _if_conditional133) {
        # 1327 "libcomelang2.c"
        __result114__ = (_Bool)1;
        return __result114__;
    }
    else {
        # 1336 "libcomelang2.c"
        # 1329 "libcomelang2.c"
        if(_if_conditional134=self==((void*)0),        _if_conditional134) {
            # 1330 "libcomelang2.c"
            __result115__ = (_Bool)0;
            return __result115__;
        }
        else {
            # 1336 "libcomelang2.c"
            # 1332 "libcomelang2.c"
            if(_if_conditional135=right==((void*)0),            _if_conditional135) {
                # 1333 "libcomelang2.c"
                __result116__ = (_Bool)0;
                return __result116__;
            }
        }
    }
    # 1336 "libcomelang2.c"
    __result117__ = strcmp(self,right)==0;
    return __result117__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional136;
_Bool __result118__;
_Bool _if_conditional137;
_Bool __result119__;
_Bool _if_conditional138;
_Bool __result120__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1351 "libcomelang2.c"
    # 1341 "libcomelang2.c"
    if(_if_conditional136=self==((void*)0)&&right==((void*)0),    _if_conditional136) {
        # 1342 "libcomelang2.c"
        __result118__ = (_Bool)1;
        return __result118__;
    }
    else {
        # 1351 "libcomelang2.c"
        # 1344 "libcomelang2.c"
        if(_if_conditional137=self==((void*)0),        _if_conditional137) {
            # 1345 "libcomelang2.c"
            __result119__ = (_Bool)0;
            return __result119__;
        }
        else {
            # 1351 "libcomelang2.c"
            # 1347 "libcomelang2.c"
            if(_if_conditional138=right==((void*)0),            _if_conditional138) {
                # 1348 "libcomelang2.c"
                __result120__ = (_Bool)0;
                return __result120__;
            }
        }
    }
    # 1351 "libcomelang2.c"
    __result121__ = strcmp(self,right)==0;
    return __result121__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional139;
_Bool __result122__;
_Bool _if_conditional140;
_Bool __result123__;
_Bool _if_conditional141;
_Bool __result124__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1366 "libcomelang2.c"
    # 1356 "libcomelang2.c"
    if(_if_conditional139=self==((void*)0)&&right==((void*)0),    _if_conditional139) {
        # 1357 "libcomelang2.c"
        __result122__ = (_Bool)1;
        return __result122__;
    }
    else {
        # 1366 "libcomelang2.c"
        # 1359 "libcomelang2.c"
        if(_if_conditional140=self==((void*)0),        _if_conditional140) {
            # 1360 "libcomelang2.c"
            __result123__ = (_Bool)0;
            return __result123__;
        }
        else {
            # 1366 "libcomelang2.c"
            # 1362 "libcomelang2.c"
            if(_if_conditional141=right==((void*)0),            _if_conditional141) {
                # 1363 "libcomelang2.c"
                __result124__ = (_Bool)0;
                return __result124__;
            }
        }
    }
    # 1366 "libcomelang2.c"
    __result125__ = strcmp(self,right)==0;
    return __result125__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional142;
_Bool __result126__;
_Bool _if_conditional143;
_Bool __result127__;
_Bool _if_conditional144;
_Bool __result128__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1381 "libcomelang2.c"
    # 1371 "libcomelang2.c"
    if(_if_conditional142=self==((void*)0)&&right==((void*)0),    _if_conditional142) {
        # 1372 "libcomelang2.c"
        __result126__ = (_Bool)0;
        return __result126__;
    }
    else {
        # 1381 "libcomelang2.c"
        # 1374 "libcomelang2.c"
        if(_if_conditional143=self==((void*)0),        _if_conditional143) {
            # 1375 "libcomelang2.c"
            __result127__ = (_Bool)1;
            return __result127__;
        }
        else {
            # 1381 "libcomelang2.c"
            # 1377 "libcomelang2.c"
            if(_if_conditional144=right==((void*)0),            _if_conditional144) {
                # 1378 "libcomelang2.c"
                __result128__ = (_Bool)1;
                return __result128__;
            }
        }
    }
    # 1381 "libcomelang2.c"
    __result129__ = strcmp(self,right)!=0;
    return __result129__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional145;
_Bool __result130__;
_Bool _if_conditional146;
_Bool __result131__;
_Bool _if_conditional147;
_Bool __result132__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1396 "libcomelang2.c"
    # 1386 "libcomelang2.c"
    if(_if_conditional145=self==((void*)0)&&right==((void*)0),    _if_conditional145) {
        # 1387 "libcomelang2.c"
        __result130__ = (_Bool)0;
        return __result130__;
    }
    else {
        # 1396 "libcomelang2.c"
        # 1389 "libcomelang2.c"
        if(_if_conditional146=self==((void*)0),        _if_conditional146) {
            # 1390 "libcomelang2.c"
            __result131__ = (_Bool)1;
            return __result131__;
        }
        else {
            # 1396 "libcomelang2.c"
            # 1392 "libcomelang2.c"
            if(_if_conditional147=right==((void*)0),            _if_conditional147) {
                # 1393 "libcomelang2.c"
                __result132__ = (_Bool)1;
                return __result132__;
            }
        }
    }
    # 1396 "libcomelang2.c"
    __result133__ = strcmp(self,right)!=0;
    return __result133__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional148;
void* right_value80;
char* __result134__;
int len_122;
void* right_value81;
char* result_123;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&len_122, 0, sizeof(int));
right_value81 = (void*)0;
memset(&result_123, 0, sizeof(char*));
    # 1405 "libcomelang2.c"
    # 1402 "libcomelang2.c"
    if(_if_conditional148=self==((void*)0)||right==((void*)0),    _if_conditional148) {
        # 1403 "libcomelang2.c"
        __result134__ = __result_obj__ = ((char*)(right_value80=__builtin_string("")));
        right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result134__;
    }
    # 1405 "libcomelang2.c"
    len_122=strlen(self)+strlen(right);
    # 1407 "libcomelang2.c"
    result_123=(char*)come_increment_ref_count(((char*)(right_value81=(char*)come_calloc(1, sizeof(char)*(1*(len_122+1)), "libcomelang2.c", 1407, "char"))));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1409 "libcomelang2.c"
    strncpy(result_123,self,len_122+1);
    # 1410 "libcomelang2.c"
    strncat(result_123,right,len_122+1);
    # 1412 "libcomelang2.c"
    __result135__ = __result_obj__ = result_123;
    result_123 = come_decrement_ref_count2(result_123, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result135__;
    result_123 = come_decrement_ref_count2(result_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional149;
void* right_value82;
char* __result136__;
int len_124;
void* right_value83;
char* result_125;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&len_124, 0, sizeof(int));
right_value83 = (void*)0;
memset(&result_125, 0, sizeof(char*));
    # 1420 "libcomelang2.c"
    # 1417 "libcomelang2.c"
    if(_if_conditional149=self==((void*)0)||right==((void*)0),    _if_conditional149) {
        # 1418 "libcomelang2.c"
        __result136__ = __result_obj__ = ((char*)(right_value82=__builtin_string("")));
        right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result136__;
    }
    # 1420 "libcomelang2.c"
    len_124=strlen(self)+strlen(right);
    # 1422 "libcomelang2.c"
    result_125=(char*)come_increment_ref_count(((char*)(right_value83=(char*)come_calloc(1, sizeof(char)*(1*(len_124+1)), "libcomelang2.c", 1422, "char"))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1424 "libcomelang2.c"
    strncpy(result_125,self,len_124+1);
    # 1425 "libcomelang2.c"
    strncat(result_125,right,len_124+1);
    # 1427 "libcomelang2.c"
    __result137__ = __result_obj__ = result_125;
    result_125 = come_decrement_ref_count2(result_125, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result137__;
    result_125 = come_decrement_ref_count2(result_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional150;
void* right_value84;
char* __result138__;
void* right_value85;
void* right_value86;
struct buffer* buf_126;
int i_127;
void* right_value87;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&buf_126, 0, sizeof(struct buffer*));
memset(&i_127, 0, sizeof(int));
right_value87 = (void*)0;
    # 1435 "libcomelang2.c"
    # 1432 "libcomelang2.c"
    if(_if_conditional150=self==((void*)0),    _if_conditional150) {
        # 1433 "libcomelang2.c"
        __result138__ = __result_obj__ = ((char*)(right_value84=__builtin_string("")));
        right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result138__;
    }
    # 1435 "libcomelang2.c"
    buf_126=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value86=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value85=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1435, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1441 "libcomelang2.c"
    for(    i_127=0;    i_127<right;    i_127++    ){
        # 1438 "libcomelang2.c"
        buffer_append_str(buf_126,self);
    }
    # 1441 "libcomelang2.c"
    __result139__ = __result_obj__ = ((char*)(right_value87=buffer_to_string(buf_126)));
    come_call_finalizer2(buffer_finalize,buf_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result139__;
    come_call_finalizer2(buffer_finalize,buf_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional151;
void* right_value88;
char* __result140__;
void* right_value89;
void* right_value90;
struct buffer* buf_128;
int i_129;
void* right_value91;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&buf_128, 0, sizeof(struct buffer*));
memset(&i_129, 0, sizeof(int));
right_value91 = (void*)0;
    # 1449 "libcomelang2.c"
    # 1446 "libcomelang2.c"
    if(_if_conditional151=self==((void*)0),    _if_conditional151) {
        # 1447 "libcomelang2.c"
        __result140__ = __result_obj__ = ((char*)(right_value88=__builtin_string("")));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result140__;
    }
    # 1449 "libcomelang2.c"
    buf_128=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value89=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1449, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1455 "libcomelang2.c"
    for(    i_129=0;    i_129<right;    i_129++    ){
        # 1452 "libcomelang2.c"
        buffer_append_str(buf_128,self);
    }
    # 1455 "libcomelang2.c"
    __result141__ = __result_obj__ = ((char*)(right_value91=buffer_to_string(buf_128)));
    come_call_finalizer2(buffer_finalize,buf_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
    come_call_finalizer2(buffer_finalize,buf_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1463 "libcomelang2.c"
    __result142__ = (int_get_hash_key(((int)value)));
    return __result142__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1468 "libcomelang2.c"
    __result143__ = value;
    return __result143__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1473 "libcomelang2.c"
    __result144__ = value;
    return __result144__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1478 "libcomelang2.c"
    __result145__ = value;
    return __result145__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1483 "libcomelang2.c"
    __result146__ = value;
    return __result146__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1488 "libcomelang2.c"
    __result147__ = value;
    return __result147__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1493 "libcomelang2.c"
    __result148__ = (unsigned int)value;
    return __result148__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1498 "libcomelang2.c"
    __result149__ = (unsigned int)value;
    return __result149__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional152;
unsigned int __result150__;
int result_130;
char* p_131;
_Bool _while_condtional1;
unsigned int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_130, 0, sizeof(int));
memset(&p_131, 0, sizeof(char*));
    # 1506 "libcomelang2.c"
    # 1503 "libcomelang2.c"
    if(_if_conditional152=value==((void*)0),    _if_conditional152) {
        # 1504 "libcomelang2.c"
        __result150__ = 0;
        return __result150__;
    }
    # 1506 "libcomelang2.c"
    result_130=0;
    # 1507 "libcomelang2.c"
    p_131=value;
    # 1512 "libcomelang2.c"
    while(_while_condtional1=*p_131,    _while_condtional1) {
        # 1509 "libcomelang2.c"
        result_130+=(*p_131);
        # 1510 "libcomelang2.c"
        p_131++;
    }
    # 1512 "libcomelang2.c"
    __result151__ = result_130;
    return __result151__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional153;
unsigned int __result152__;
int result_132;
char* p_133;
_Bool _while_condtional2;
unsigned int __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_132, 0, sizeof(int));
memset(&p_133, 0, sizeof(char*));
    # 1520 "libcomelang2.c"
    # 1517 "libcomelang2.c"
    if(_if_conditional153=value==((void*)0),    _if_conditional153) {
        # 1518 "libcomelang2.c"
        __result152__ = 0;
        return __result152__;
    }
    # 1520 "libcomelang2.c"
    result_132=0;
    # 1521 "libcomelang2.c"
    p_133=value;
    # 1526 "libcomelang2.c"
    while(_while_condtional2=*p_133,    _while_condtional2) {
        # 1523 "libcomelang2.c"
        result_132+=(*p_133);
        # 1524 "libcomelang2.c"
        p_133++;
    }
    # 1526 "libcomelang2.c"
    __result153__ = result_132;
    return __result153__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1534 "libcomelang2.c"
    __result154__ = self;
    return __result154__;
}

char char_clone(char self){
void* __result_obj__;
char __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1539 "libcomelang2.c"
    __result155__ = self;
    return __result155__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1544 "libcomelang2.c"
    __result156__ = self;
    return __result156__;
}

int int_clone(int self){
void* __result_obj__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1549 "libcomelang2.c"
    __result157__ = self;
    return __result157__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1554 "libcomelang2.c"
    __result158__ = self;
    return __result158__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1559 "libcomelang2.c"
    __result159__ = self;
    return __result159__;
}

double double_clone(double self){
void* __result_obj__;
double __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1564 "libcomelang2.c"
    __result160__ = self;
    return __result160__;
}

float float_clone(float self){
void* __result_obj__;
float __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1569 "libcomelang2.c"
    __result161__ = self;
    return __result161__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional154;
char* __result162__;
void* right_value92;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    # 1575 "libcomelang2.c"
    # 1574 "libcomelang2.c"
    if(_if_conditional154=self==((void*)0),    _if_conditional154) {
        # 1574 "libcomelang2.c"
        __result162__ = __result_obj__ = ((void*)0);
        return __result162__;
    }
    # 1575 "libcomelang2.c"
    __result163__ = __result_obj__ = ((char*)(right_value92=__builtin_string(self)));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional155;
char* __result164__;
void* right_value93;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    # 1582 "libcomelang2.c"
    # 1580 "libcomelang2.c"
    if(_if_conditional155=self==((void*)0),    _if_conditional155) {
        # 1580 "libcomelang2.c"
        __result164__ = __result_obj__ = ((void*)0);
        return __result164__;
    }
    # 1582 "libcomelang2.c"
    __result165__ = __result_obj__ = ((char*)(right_value93=__builtin_string(self)));
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result165__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_134;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_134, 0, sizeof(_Bool));
    # 1590 "libcomelang2.c"
    result_134=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1591 "libcomelang2.c"
    __result166__ = result_134;
    return __result166__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1596 "libcomelang2.c"
    __result167__ = c==32||c==9;
    return __result167__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1601 "libcomelang2.c"
    __result168__ = (c>=48&&c<=57);
    return __result168__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1606 "libcomelang2.c"
    __result169__ = xiswalpha(c)||xiswdigit(c);
    return __result169__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_135;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_135, 0, sizeof(_Bool));
    # 1611 "libcomelang2.c"
    result_135=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1612 "libcomelang2.c"
    __result170__ = result_135;
    return __result170__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1617 "libcomelang2.c"
    __result171__ = c==32||c==9;
    return __result171__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1622 "libcomelang2.c"
    __result172__ = (c>=48&&c<=57);
    return __result172__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1627 "libcomelang2.c"
    __result173__ = xisalpha(c)||xisdigit(c);
    return __result173__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_136;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_136, 0, sizeof(_Bool));
    # 1632 "libcomelang2.c"
    result_136=(c>=32&&c<=126);
    # 1633 "libcomelang2.c"
    __result174__ = result_136;
    return __result174__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_137;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(_Bool));
    # 1638 "libcomelang2.c"
    result_137=(c>=32&&c<=126);
    # 1639 "libcomelang2.c"
    __result175__ = result_137;
    return __result175__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional156;
int __result176__;
int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1650 "libcomelang2.c"
    # 1647 "libcomelang2.c"
    if(_if_conditional156=str==((void*)0),    _if_conditional156) {
        # 1648 "libcomelang2.c"
        __result176__ = 0;
        return __result176__;
    }
    # 1650 "libcomelang2.c"
    __result177__ = strlen(str);
    return __result177__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional157;
int __result178__;
int __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1657 "libcomelang2.c"
    # 1654 "libcomelang2.c"
    if(_if_conditional157=str==((void*)0),    _if_conditional157) {
        # 1655 "libcomelang2.c"
        __result178__ = 0;
        return __result178__;
    }
    # 1657 "libcomelang2.c"
    __result179__ = strlen(str);
    return __result179__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional158;
void* right_value94;
char* __result180__;
int len_138;
void* right_value95;
char* result_139;
int i_140;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&len_138, 0, sizeof(int));
right_value95 = (void*)0;
memset(&result_139, 0, sizeof(char*));
memset(&i_140, 0, sizeof(int));
    # 1665 "libcomelang2.c"
    # 1662 "libcomelang2.c"
    if(_if_conditional158=str==((void*)0),    _if_conditional158) {
        # 1663 "libcomelang2.c"
        __result180__ = __result_obj__ = ((char*)(right_value94=__builtin_string("")));
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result180__;
    }
    # 1665 "libcomelang2.c"
    len_138=strlen(str);
    # 1666 "libcomelang2.c"
    result_139=(char*)come_increment_ref_count(((char*)(right_value95=(char*)come_calloc(1, sizeof(char)*(1*(len_138+1)), "libcomelang2.c", 1666, "char"))));
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1672 "libcomelang2.c"
    for(    i_140=0;    i_140<len_138;    i_140++    ){
        # 1669 "libcomelang2.c"
        result_139[i_140]=str[len_138-i_140-1];
    }
    # 1672 "libcomelang2.c"
    result_139[len_138]=0;
    # 1674 "libcomelang2.c"
    __result181__ = __result_obj__ = result_139;
    result_139 = come_decrement_ref_count2(result_139, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result181__;
    result_139 = come_decrement_ref_count2(result_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional159;
void* right_value96;
char* __result182__;
int len_141;
void* right_value97;
char* result_142;
int i_143;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&len_141, 0, sizeof(int));
right_value97 = (void*)0;
memset(&result_142, 0, sizeof(char*));
memset(&i_143, 0, sizeof(int));
    # 1682 "libcomelang2.c"
    # 1679 "libcomelang2.c"
    if(_if_conditional159=str==((void*)0),    _if_conditional159) {
        # 1680 "libcomelang2.c"
        __result182__ = __result_obj__ = ((char*)(right_value96=__builtin_string("")));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result182__;
    }
    # 1682 "libcomelang2.c"
    len_141=strlen(str);
    # 1683 "libcomelang2.c"
    result_142=(char*)come_increment_ref_count(((char*)(right_value97=(char*)come_calloc(1, sizeof(char)*(1*(len_141+1)), "libcomelang2.c", 1683, "char"))));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1689 "libcomelang2.c"
    for(    i_143=0;    i_143<len_141;    i_143++    ){
        # 1686 "libcomelang2.c"
        result_142[i_143]=str[len_141-i_143-1];
    }
    # 1689 "libcomelang2.c"
    result_142[len_141]=0;
    # 1691 "libcomelang2.c"
    __result183__ = __result_obj__ = result_142;
    result_142 = come_decrement_ref_count2(result_142, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result183__;
    result_142 = come_decrement_ref_count2(result_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value98;
char* __result184__;
int len_144;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value99;
void* right_value100;
char* __result185__;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value101;
char* __result186__;
_Bool _if_conditional167;
void* right_value102;
char* __result187__;
void* right_value103;
char* result_145;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&len_144, 0, sizeof(int));
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_145, 0, sizeof(char*));
    # 1699 "libcomelang2.c"
    # 1695 "libcomelang2.c"
    if(_if_conditional160=str==((void*)0),    _if_conditional160) {
        # 1696 "libcomelang2.c"
        __result184__ = __result_obj__ = ((char*)(right_value98=__builtin_string("")));
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result184__;
    }
    # 1699 "libcomelang2.c"
    len_144=strlen(str);
    # 1704 "libcomelang2.c"
    # 1701 "libcomelang2.c"
    if(_if_conditional161=head<0,    _if_conditional161) {
        # 1702 "libcomelang2.c"
        head+=len_144;
    }
    # 1708 "libcomelang2.c"
    # 1704 "libcomelang2.c"
    if(_if_conditional162=tail<0,    _if_conditional162) {
        # 1705 "libcomelang2.c"
        tail+=len_144+1;
    }
    # 1712 "libcomelang2.c"
    # 1708 "libcomelang2.c"
    if(_if_conditional163=head>tail,    _if_conditional163) {
        # 1709 "libcomelang2.c"
        __result185__ = __result_obj__ = ((char*)(right_value100=string_reverse(((char*)(right_value99=charp_substring(str,tail,head))))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result185__;
    }
    # 1716 "libcomelang2.c"
    # 1712 "libcomelang2.c"
    if(_if_conditional164=head<0,    _if_conditional164) {
        # 1713 "libcomelang2.c"
        head=0;
    }
    # 1720 "libcomelang2.c"
    # 1716 "libcomelang2.c"
    if(_if_conditional165=tail>=len_144,    _if_conditional165) {
        # 1717 "libcomelang2.c"
        tail=len_144;
    }
    # 1724 "libcomelang2.c"
    # 1720 "libcomelang2.c"
    if(_if_conditional166=head==tail,    _if_conditional166) {
        # 1721 "libcomelang2.c"
        __result186__ = __result_obj__ = ((char*)(right_value101=__builtin_string("")));
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result186__;
    }
    # 1728 "libcomelang2.c"
    # 1724 "libcomelang2.c"
    if(_if_conditional167=tail-head+1<1,    _if_conditional167) {
        # 1725 "libcomelang2.c"
        __result187__ = __result_obj__ = ((char*)(right_value102=__builtin_string("")));
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result187__;
    }
    # 1728 "libcomelang2.c"
    result_145=(char*)come_increment_ref_count(((char*)(right_value103=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1728, "char"))));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1730 "libcomelang2.c"
    memcpy(result_145,str+head,tail-head);
    # 1731 "libcomelang2.c"
    result_145[tail-head]=0;
    # 1733 "libcomelang2.c"
    __result188__ = __result_obj__ = result_145;
    result_145 = come_decrement_ref_count2(result_145, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result188__;
    result_145 = come_decrement_ref_count2(result_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional168;
void* right_value104;
char* __result189__;
int len_146;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
void* right_value105;
void* right_value106;
char* __result190__;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value107;
char* __result191__;
_Bool _if_conditional175;
void* right_value108;
char* __result192__;
void* right_value109;
char* result_147;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&len_146, 0, sizeof(int));
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&result_147, 0, sizeof(char*));
    # 1742 "libcomelang2.c"
    # 1738 "libcomelang2.c"
    if(_if_conditional168=str==((void*)0),    _if_conditional168) {
        # 1739 "libcomelang2.c"
        __result189__ = __result_obj__ = ((char*)(right_value104=__builtin_string("")));
        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result189__;
    }
    # 1742 "libcomelang2.c"
    len_146=strlen(str);
    # 1747 "libcomelang2.c"
    # 1744 "libcomelang2.c"
    if(_if_conditional169=head<0,    _if_conditional169) {
        # 1745 "libcomelang2.c"
        head+=len_146;
    }
    # 1751 "libcomelang2.c"
    # 1747 "libcomelang2.c"
    if(_if_conditional170=tail<0,    _if_conditional170) {
        # 1748 "libcomelang2.c"
        tail+=len_146+1;
    }
    # 1755 "libcomelang2.c"
    # 1751 "libcomelang2.c"
    if(_if_conditional171=head>tail,    _if_conditional171) {
        # 1752 "libcomelang2.c"
        __result190__ = __result_obj__ = ((char*)(right_value106=string_reverse(((char*)(right_value105=charp_substring(str,tail,head))))));
        right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result190__;
    }
    # 1759 "libcomelang2.c"
    # 1755 "libcomelang2.c"
    if(_if_conditional172=head<0,    _if_conditional172) {
        # 1756 "libcomelang2.c"
        head=0;
    }
    # 1763 "libcomelang2.c"
    # 1759 "libcomelang2.c"
    if(_if_conditional173=tail>=len_146,    _if_conditional173) {
        # 1760 "libcomelang2.c"
        tail=len_146;
    }
    # 1767 "libcomelang2.c"
    # 1763 "libcomelang2.c"
    if(_if_conditional174=head==tail,    _if_conditional174) {
        # 1764 "libcomelang2.c"
        __result191__ = __result_obj__ = ((char*)(right_value107=__builtin_string("")));
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result191__;
    }
    # 1771 "libcomelang2.c"
    # 1767 "libcomelang2.c"
    if(_if_conditional175=tail-head+1<1,    _if_conditional175) {
        # 1768 "libcomelang2.c"
        __result192__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result192__;
    }
    # 1771 "libcomelang2.c"
    result_147=(char*)come_increment_ref_count(((char*)(right_value109=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1771, "char"))));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1773 "libcomelang2.c"
    memcpy(result_147,str+head,tail-head);
    # 1774 "libcomelang2.c"
    result_147[tail-head]=0;
    # 1776 "libcomelang2.c"
    __result193__ = __result_obj__ = result_147;
    result_147 = come_decrement_ref_count2(result_147, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result193__;
    result_147 = come_decrement_ref_count2(result_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional176;
void* right_value110;
char* __result194__;
int len_148;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value111;
void* right_value112;
char* __result195__;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value113;
char* __result196__;
_Bool _if_conditional183;
void* right_value114;
char* __result197__;
void* right_value115;
char* result_149;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&len_148, 0, sizeof(int));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&result_149, 0, sizeof(char*));
    # 1785 "libcomelang2.c"
    # 1781 "libcomelang2.c"
    if(_if_conditional176=str==((void*)0),    _if_conditional176) {
        # 1782 "libcomelang2.c"
        __result194__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result194__;
    }
    # 1785 "libcomelang2.c"
    len_148=strlen(str);
    # 1790 "libcomelang2.c"
    # 1787 "libcomelang2.c"
    if(_if_conditional177=head<0,    _if_conditional177) {
        # 1788 "libcomelang2.c"
        head+=len_148;
    }
    # 1794 "libcomelang2.c"
    # 1790 "libcomelang2.c"
    if(_if_conditional178=tail<0,    _if_conditional178) {
        # 1791 "libcomelang2.c"
        tail+=len_148+1;
    }
    # 1798 "libcomelang2.c"
    # 1794 "libcomelang2.c"
    if(_if_conditional179=head>tail,    _if_conditional179) {
        # 1795 "libcomelang2.c"
        __result195__ = __result_obj__ = ((char*)(right_value112=string_reverse(((char*)(right_value111=charp_substring(str,tail,head))))));
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result195__;
    }
    # 1802 "libcomelang2.c"
    # 1798 "libcomelang2.c"
    if(_if_conditional180=head<0,    _if_conditional180) {
        # 1799 "libcomelang2.c"
        head=0;
    }
    # 1806 "libcomelang2.c"
    # 1802 "libcomelang2.c"
    if(_if_conditional181=tail>=len_148,    _if_conditional181) {
        # 1803 "libcomelang2.c"
        tail=len_148;
    }
    # 1810 "libcomelang2.c"
    # 1806 "libcomelang2.c"
    if(_if_conditional182=head==tail,    _if_conditional182) {
        # 1807 "libcomelang2.c"
        __result196__ = __result_obj__ = ((char*)(right_value113=__builtin_string("")));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result196__;
    }
    # 1814 "libcomelang2.c"
    # 1810 "libcomelang2.c"
    if(_if_conditional183=tail-head+1<1,    _if_conditional183) {
        # 1811 "libcomelang2.c"
        __result197__ = __result_obj__ = ((char*)(right_value114=__builtin_string("")));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result197__;
    }
    # 1814 "libcomelang2.c"
    result_149=(char*)come_increment_ref_count(((char*)(right_value115=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1814, "char"))));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1816 "libcomelang2.c"
    memcpy(result_149,str+head,tail-head);
    # 1817 "libcomelang2.c"
    result_149[tail-head]=0;
    # 1819 "libcomelang2.c"
    __result198__ = __result_obj__ = result_149;
    result_149 = come_decrement_ref_count2(result_149, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result198__;
    result_149 = come_decrement_ref_count2(result_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional184;
void* right_value116;
char* __result199__;
int len_150;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value117;
void* right_value118;
char* __result200__;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value119;
char* __result201__;
_Bool _if_conditional191;
void* right_value120;
char* __result202__;
void* right_value121;
char* result_151;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&len_150, 0, sizeof(int));
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&result_151, 0, sizeof(char*));
    # 1828 "libcomelang2.c"
    # 1824 "libcomelang2.c"
    if(_if_conditional184=str==((void*)0),    _if_conditional184) {
        # 1825 "libcomelang2.c"
        __result199__ = __result_obj__ = ((char*)(right_value116=__builtin_string("")));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result199__;
    }
    # 1828 "libcomelang2.c"
    len_150=strlen(str);
    # 1833 "libcomelang2.c"
    # 1830 "libcomelang2.c"
    if(_if_conditional185=head<0,    _if_conditional185) {
        # 1831 "libcomelang2.c"
        head+=len_150;
    }
    # 1837 "libcomelang2.c"
    # 1833 "libcomelang2.c"
    if(_if_conditional186=tail<0,    _if_conditional186) {
        # 1834 "libcomelang2.c"
        tail+=len_150+1;
    }
    # 1841 "libcomelang2.c"
    # 1837 "libcomelang2.c"
    if(_if_conditional187=head>tail,    _if_conditional187) {
        # 1838 "libcomelang2.c"
        __result200__ = __result_obj__ = ((char*)(right_value118=string_reverse(((char*)(right_value117=charp_substring(str,tail,head))))));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result200__;
    }
    # 1845 "libcomelang2.c"
    # 1841 "libcomelang2.c"
    if(_if_conditional188=head<0,    _if_conditional188) {
        # 1842 "libcomelang2.c"
        head=0;
    }
    # 1849 "libcomelang2.c"
    # 1845 "libcomelang2.c"
    if(_if_conditional189=tail>=len_150,    _if_conditional189) {
        # 1846 "libcomelang2.c"
        tail=len_150;
    }
    # 1853 "libcomelang2.c"
    # 1849 "libcomelang2.c"
    if(_if_conditional190=head==tail,    _if_conditional190) {
        # 1850 "libcomelang2.c"
        __result201__ = __result_obj__ = ((char*)(right_value119=__builtin_string("")));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result201__;
    }
    # 1857 "libcomelang2.c"
    # 1853 "libcomelang2.c"
    if(_if_conditional191=tail-head+1<1,    _if_conditional191) {
        # 1854 "libcomelang2.c"
        __result202__ = __result_obj__ = ((char*)(right_value120=__builtin_string("")));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result202__;
    }
    # 1857 "libcomelang2.c"
    result_151=(char*)come_increment_ref_count(((char*)(right_value121=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1857, "char"))));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1859 "libcomelang2.c"
    memcpy(result_151,str+head,tail-head);
    # 1860 "libcomelang2.c"
    result_151[tail-head]=0;
    # 1862 "libcomelang2.c"
    __result203__ = __result_obj__ = result_151;
    result_151 = come_decrement_ref_count2(result_151, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result203__;
    result_151 = come_decrement_ref_count2(result_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional192;
void* right_value122;
char* __result204__;
va_list args_152;
char* result_153;
int len_154;
_Bool _if_conditional193;
void* right_value123;
char* __result205__;
void* right_value124;
char* result2_155;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&args_152, 0, sizeof(va_list));
memset(&result_153, 0, sizeof(char*));
memset(&len_154, 0, sizeof(int));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&result2_155, 0, sizeof(char*));
    # 1870 "libcomelang2.c"
    # 1867 "libcomelang2.c"
    if(_if_conditional192=msg==((void*)0),    _if_conditional192) {
        # 1868 "libcomelang2.c"
        __result204__ = __result_obj__ = ((char*)(right_value122=__builtin_string("")));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result204__;
    }
    # 1870 "libcomelang2.c"
    # 1871 "libcomelang2.c"
    __builtin_va_start(args_152,msg);
    # 1872 "libcomelang2.c"
    # 1873 "libcomelang2.c"
    len_154=vasprintf(&result_153,msg,args_152);
    # 1874 "libcomelang2.c"
    __builtin_va_end(args_152);
    # 1880 "libcomelang2.c"
    # 1876 "libcomelang2.c"
    if(_if_conditional193=len_154<0,    _if_conditional193) {
        # 1877 "libcomelang2.c"
        __result205__ = __result_obj__ = ((char*)(right_value123=__builtin_string("")));
        come_call_finalizer2(va_list_finalize,(&args_152), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result205__;
    }
    # 1880 "libcomelang2.c"
    result2_155=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(result_153))));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1882 "libcomelang2.c"
    free(result_153);
    # 1884 "libcomelang2.c"
    __result206__ = __result_obj__ = result2_155;
    come_call_finalizer2(va_list_finalize,(&args_152), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    result2_155 = come_decrement_ref_count2(result2_155, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result206__;
    come_call_finalizer2(va_list_finalize,(&args_152), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    result2_155 = come_decrement_ref_count2(result2_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional194;
void* right_value125;
char* __result207__;
int len_156;
_Bool _if_conditional195;
void* right_value126;
char* __result208__;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value127;
char* __result209__;
_Bool _if_conditional200;
void* right_value128;
char* sub_str_157;
void* right_value129;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&len_156, 0, sizeof(int));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&sub_str_157, 0, sizeof(char*));
right_value129 = (void*)0;
    # 1893 "libcomelang2.c"
    # 1889 "libcomelang2.c"
    if(_if_conditional194=str==((void*)0),    _if_conditional194) {
        # 1890 "libcomelang2.c"
        __result207__ = __result_obj__ = ((char*)(right_value125=__builtin_string("")));
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result207__;
    }
    # 1893 "libcomelang2.c"
    len_156=strlen(str);
    # 1899 "libcomelang2.c"
    # 1895 "libcomelang2.c"
    if(_if_conditional195=strcmp(str,"")==0,    _if_conditional195) {
        # 1896 "libcomelang2.c"
        __result208__ = __result_obj__ = ((char*)(right_value126=__builtin_string(str)));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result208__;
    }
    # 1903 "libcomelang2.c"
    # 1899 "libcomelang2.c"
    if(_if_conditional196=head<0,    _if_conditional196) {
        # 1900 "libcomelang2.c"
        head+=len_156;
    }
    # 1907 "libcomelang2.c"
    # 1903 "libcomelang2.c"
    if(_if_conditional197=tail<0,    _if_conditional197) {
        # 1904 "libcomelang2.c"
        tail+=len_156+1;
    }
    # 1911 "libcomelang2.c"
    # 1907 "libcomelang2.c"
    if(_if_conditional198=head<0,    _if_conditional198) {
        # 1908 "libcomelang2.c"
        head=0;
    }
    # 1915 "libcomelang2.c"
    # 1911 "libcomelang2.c"
    if(_if_conditional199=tail<0,    _if_conditional199) {
        # 1912 "libcomelang2.c"
        __result209__ = __result_obj__ = ((char*)(right_value127=__builtin_string(str)));
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result209__;
    }
    # 1919 "libcomelang2.c"
    # 1915 "libcomelang2.c"
    if(_if_conditional200=tail>=len_156,    _if_conditional200) {
        # 1916 "libcomelang2.c"
        tail=len_156;
    }
    # 1919 "libcomelang2.c"
    sub_str_157=(char*)come_increment_ref_count(((char*)(right_value128=charp_substring(str,tail,-1))));
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1921 "libcomelang2.c"
    memcpy(str+head,sub_str_157,string_length(sub_str_157)+1);
    # 1923 "libcomelang2.c"
    __result210__ = __result_obj__ = ((char*)(right_value129=__builtin_string(str)));
    sub_str_157 = come_decrement_ref_count2(sub_str_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result210__;
    sub_str_157 = come_decrement_ref_count2(sub_str_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional201;
void* right_value130;
char* __result211__;
int len_158;
_Bool _if_conditional202;
void* right_value131;
char* __result212__;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value132;
char* __result213__;
_Bool _if_conditional207;
void* right_value133;
char* sub_str_159;
void* right_value134;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&len_158, 0, sizeof(int));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&sub_str_159, 0, sizeof(char*));
right_value134 = (void*)0;
    # 1932 "libcomelang2.c"
    # 1928 "libcomelang2.c"
    if(_if_conditional201=str==((void*)0),    _if_conditional201) {
        # 1929 "libcomelang2.c"
        __result211__ = __result_obj__ = ((char*)(right_value130=__builtin_string("")));
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result211__;
    }
    # 1932 "libcomelang2.c"
    len_158=strlen(str);
    # 1938 "libcomelang2.c"
    # 1934 "libcomelang2.c"
    if(_if_conditional202=strcmp(str,"")==0,    _if_conditional202) {
        # 1935 "libcomelang2.c"
        __result212__ = __result_obj__ = ((char*)(right_value131=__builtin_string(str)));
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result212__;
    }
    # 1942 "libcomelang2.c"
    # 1938 "libcomelang2.c"
    if(_if_conditional203=head<0,    _if_conditional203) {
        # 1939 "libcomelang2.c"
        head+=len_158;
    }
    # 1946 "libcomelang2.c"
    # 1942 "libcomelang2.c"
    if(_if_conditional204=tail<0,    _if_conditional204) {
        # 1943 "libcomelang2.c"
        tail+=len_158+1;
    }
    # 1950 "libcomelang2.c"
    # 1946 "libcomelang2.c"
    if(_if_conditional205=head<0,    _if_conditional205) {
        # 1947 "libcomelang2.c"
        head=0;
    }
    # 1954 "libcomelang2.c"
    # 1950 "libcomelang2.c"
    if(_if_conditional206=tail<0,    _if_conditional206) {
        # 1951 "libcomelang2.c"
        __result213__ = __result_obj__ = ((char*)(right_value132=__builtin_string(str)));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result213__;
    }
    # 1958 "libcomelang2.c"
    # 1954 "libcomelang2.c"
    if(_if_conditional207=tail>=len_158,    _if_conditional207) {
        # 1955 "libcomelang2.c"
        tail=len_158;
    }
    # 1958 "libcomelang2.c"
    sub_str_159=(char*)come_increment_ref_count(((char*)(right_value133=charp_substring(str,tail,-1))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1960 "libcomelang2.c"
    memcpy(str+head,sub_str_159,string_length(sub_str_159)+1);
    # 1962 "libcomelang2.c"
    __result214__ = __result_obj__ = ((char*)(right_value134=__builtin_string(str)));
    sub_str_159 = come_decrement_ref_count2(sub_str_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result214__;
    sub_str_159 = come_decrement_ref_count2(sub_str_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional208;
void* right_value135;
void* right_value136;
struct list$1charph* __result216__;
void* right_value137;
void* right_value138;
struct list$1charph* result_162;
void* right_value139;
void* right_value140;
struct buffer* str_163;
int i_164;
_Bool _if_conditional210;
void* right_value144;
_Bool _if_conditional213;
void* right_value145;
struct list$1charph* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&result_162, 0, sizeof(struct list$1charph*));
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&str_163, 0, sizeof(struct buffer*));
memset(&i_164, 0, sizeof(int));
right_value144 = (void*)0;
right_value145 = (void*)0;
    # 1971 "libcomelang2.c"
    # 1967 "libcomelang2.c"
    if(_if_conditional208=self==((void*)0),    _if_conditional208) {
        # 1968 "libcomelang2.c"
        __result216__ = __result_obj__ = ((struct list$1charph*)(right_value136=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1968, "list$1charph")))))));
        come_call_finalizer2(list$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        return __result216__;
    }
    # 1971 "libcomelang2.c"
    result_162=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value138=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value137=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1971, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1973 "libcomelang2.c"
    str_163=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value140=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value139=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1973, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1984 "libcomelang2.c"
    for(    i_164=0;    i_164<charp_length(self);    i_164++    ){
        # 1983 "libcomelang2.c"
        # 1976 "libcomelang2.c"
        if(_if_conditional210=self[i_164]==c,        _if_conditional210) {
            # 1977 "libcomelang2.c"
            list$1charph_push_back(result_162,(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(str_163->buf)))));
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1978 "libcomelang2.c"
            buffer_reset(str_163);
        }
        else {
            # 1981 "libcomelang2.c"
            buffer_append_char(str_163,self[i_164]);
        }
    }
    # 1988 "libcomelang2.c"
    # 1984 "libcomelang2.c"
    if(_if_conditional213=buffer_length(str_163)!=0,    _if_conditional213) {
        # 1985 "libcomelang2.c"
        list$1charph_push_back(result_162,(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string(str_163->buf)))));
        right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1988 "libcomelang2.c"
    __result218__ = __result_obj__ = result_162;
    come_call_finalizer2(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result218__;
    come_call_finalizer2(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
            # 104 "./comelang2.h"
            self->head=((void*)0);
            # 105 "./comelang2.h"
            self->tail=((void*)0);
            # 106 "./comelang2.h"
            self->len=0;
            # 108 "./comelang2.h"
            __result215__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result215__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_160;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_161;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_160, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_161, 0, sizeof(struct list_item$1charph*));
                # 123 "./comelang2.h"
                it_160=self->head;
                # 129 "./comelang2.h"
                while(_while_condtional3=it_160!=((void*)0),                _while_condtional3) {
                    # 125 "./comelang2.h"
                    prev_it_161=it_160;
                    # 126 "./comelang2.h"
                    it_160=it_160->next;
                    # 127 "./comelang2.h"
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1charphp_finalize"
                        # 0 "list_item$1charphp_finalize"
                        if(_if_conditional209=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional209) {
                            # 0 "list_item$1charphp_finalize"
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional211;
void* right_value141;
struct list_item$1charph* litem_165;
char* __dec_obj22;
_Bool _if_conditional212;
void* right_value142;
struct list_item$1charph* litem_166;
char* __dec_obj23;
void* right_value143;
struct list_item$1charph* litem_167;
char* __dec_obj24;
struct list$1charph* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
memset(&litem_165, 0, sizeof(struct list_item$1charph*));
right_value142 = (void*)0;
memset(&litem_166, 0, sizeof(struct list_item$1charph*));
right_value143 = (void*)0;
memset(&litem_167, 0, sizeof(struct list_item$1charph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional211=self->len==0,                _if_conditional211) {
                    # 226 "./comelang2.h"
                    litem_165=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_165->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_165->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj22=litem_165->item;
                    litem_165->item=(char*)come_increment_ref_count(item);
                    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_165;
                    # 233 "./comelang2.h"
                    self->head=litem_165;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional212=self->len==1,                    _if_conditional212) {
                        # 236 "./comelang2.h"
                        litem_166=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_166->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_166->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj23=litem_166->item;
                        litem_166->item=(char*)come_increment_ref_count(item);
                        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_166;
                        # 243 "./comelang2.h"
                        self->head->next=litem_166;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_167=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_167->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_167->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj24=litem_167->item;
                        litem_167->item=(char*)come_increment_ref_count(item);
                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_167;
                        # 253 "./comelang2.h"
                        self->tail=litem_167;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result217__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result217__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional214;
void* right_value146;
void* right_value147;
struct list$1charph* __result219__;
void* right_value148;
void* right_value149;
struct list$1charph* result_168;
void* right_value150;
void* right_value151;
struct buffer* str_169;
int i_170;
_Bool _if_conditional215;
void* right_value152;
_Bool _if_conditional216;
void* right_value153;
struct list$1charph* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&result_168, 0, sizeof(struct list$1charph*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&str_169, 0, sizeof(struct buffer*));
memset(&i_170, 0, sizeof(int));
right_value152 = (void*)0;
right_value153 = (void*)0;
    # 1997 "libcomelang2.c"
    # 1993 "libcomelang2.c"
    if(_if_conditional214=self==((void*)0),    _if_conditional214) {
        # 1994 "libcomelang2.c"
        __result219__ = __result_obj__ = ((struct list$1charph*)(right_value147=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value146=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1994, "list$1charph")))))));
        come_call_finalizer2(list$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        return __result219__;
    }
    # 1997 "libcomelang2.c"
    result_168=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value148=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1997, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1999 "libcomelang2.c"
    str_169=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value151=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1999, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2010 "libcomelang2.c"
    for(    i_170=0;    i_170<charp_length(self);    i_170++    ){
        # 2009 "libcomelang2.c"
        # 2002 "libcomelang2.c"
        if(_if_conditional215=self[i_170]==c,        _if_conditional215) {
            # 2003 "libcomelang2.c"
            list$1charph_push_back(result_168,(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(str_169->buf)))));
            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2004 "libcomelang2.c"
            buffer_reset(str_169);
        }
        else {
            # 2007 "libcomelang2.c"
            buffer_append_char(str_169,self[i_170]);
        }
    }
    # 2014 "libcomelang2.c"
    # 2010 "libcomelang2.c"
    if(_if_conditional216=buffer_length(str_169)!=0,    _if_conditional216) {
        # 2011 "libcomelang2.c"
        list$1charph_push_back(result_168,(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(str_169->buf)))));
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 2014 "libcomelang2.c"
    __result220__ = __result_obj__ = result_168;
    come_call_finalizer2(list$1charphp_finalize,result_168, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result220__;
    come_call_finalizer2(list$1charphp_finalize,result_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional217;
void* right_value154;
char* __result221__;
char* p_171;
_Bool _while_condtional4;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value155;
char* __result222__;
void* right_value156;
char* __result223__;
void* right_value157;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
memset(&p_171, 0, sizeof(char*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
    # 2025 "libcomelang2.c"
    # 2022 "libcomelang2.c"
    if(_if_conditional217=path==((void*)0),    _if_conditional217) {
        # 2023 "libcomelang2.c"
        __result221__ = __result_obj__ = ((char*)(right_value154=__builtin_string("")));
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result221__;
    }
    # 2025 "libcomelang2.c"
    p_171=path+strlen(path);
    # 2036 "libcomelang2.c"
    while(_while_condtional4=p_171>=path,    _while_condtional4) {
        # 2034 "libcomelang2.c"
        # 2028 "libcomelang2.c"
        if(_if_conditional218=*p_171==47,        _if_conditional218) {
            # 2029 "libcomelang2.c"
            break;
        }
        else {
            # 2032 "libcomelang2.c"
            p_171--;
        }
    }
    # 2043 "libcomelang2.c"
    # 2036 "libcomelang2.c"
    if(_if_conditional219=p_171<path,    _if_conditional219) {
        # 2037 "libcomelang2.c"
        __result222__ = __result_obj__ = ((char*)(right_value155=__builtin_string(path)));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result222__;
    }
    else {
        # 2040 "libcomelang2.c"
        __result223__ = __result_obj__ = ((char*)(right_value156=__builtin_string(p_171+1)));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result223__;
    }
    # 2043 "libcomelang2.c"
    __result224__ = __result_obj__ = ((char*)(right_value157=__builtin_string("")));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result224__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional220;
void* right_value158;
char* __result225__;
void* right_value159;
void* right_value160;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
    # 2051 "libcomelang2.c"
    # 2048 "libcomelang2.c"
    if(_if_conditional220=path==((void*)0),    _if_conditional220) {
        # 2049 "libcomelang2.c"
        __result225__ = __result_obj__ = ((char*)(right_value158=__builtin_string("")));
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result225__;
    }
    # 2051 "libcomelang2.c"
    __result226__ = __result_obj__ = ((char*)(right_value160=__builtin_string(dirname(((char*)(right_value159=__builtin_string(path)))))));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result226__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional221;
void* right_value161;
char* __result227__;
void* right_value162;
char* path2_172;
char* p_173;
_Bool _while_condtional5;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value163;
char* __result228__;
void* right_value164;
char* __result229__;
void* right_value165;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&path2_172, 0, sizeof(char*));
memset(&p_173, 0, sizeof(char*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
    # 2059 "libcomelang2.c"
    # 2056 "libcomelang2.c"
    if(_if_conditional221=path==((void*)0),    _if_conditional221) {
        # 2057 "libcomelang2.c"
        __result227__ = __result_obj__ = ((char*)(right_value161=__builtin_string("")));
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result227__;
    }
    # 2059 "libcomelang2.c"
    path2_172=(char*)come_increment_ref_count(((char*)(right_value162=xbasename(path))));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2061 "libcomelang2.c"
    p_173=path2_172+strlen(path2_172);
    # 2072 "libcomelang2.c"
    while(_while_condtional5=p_173>=path2_172,    _while_condtional5) {
        # 2070 "libcomelang2.c"
        # 2064 "libcomelang2.c"
        if(_if_conditional222=*p_173==46,        _if_conditional222) {
            # 2065 "libcomelang2.c"
            break;
        }
        else {
            # 2068 "libcomelang2.c"
            p_173--;
        }
    }
    # 2079 "libcomelang2.c"
    # 2072 "libcomelang2.c"
    if(_if_conditional223=p_173<path2_172,    _if_conditional223) {
        # 2073 "libcomelang2.c"
        __result228__ = __result_obj__ = ((char*)(right_value163=__builtin_string(path2_172)));
        path2_172 = come_decrement_ref_count2(path2_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result228__;
    }
    else {
        # 2076 "libcomelang2.c"
        __result229__ = __result_obj__ = ((char*)(right_value164=string_substring(path2_172,0,p_173-path2_172)));
        path2_172 = come_decrement_ref_count2(path2_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result229__;
    }
    # 2079 "libcomelang2.c"
    __result230__ = __result_obj__ = ((char*)(right_value165=__builtin_string("")));
    path2_172 = come_decrement_ref_count2(path2_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result230__;
    path2_172 = come_decrement_ref_count2(path2_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional224;
void* right_value166;
char* __result231__;
char* p_174;
_Bool _while_condtional6;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value167;
char* __result232__;
void* right_value168;
char* __result233__;
void* right_value169;
char* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&p_174, 0, sizeof(char*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
    # 2087 "libcomelang2.c"
    # 2084 "libcomelang2.c"
    if(_if_conditional224=path==((void*)0),    _if_conditional224) {
        # 2085 "libcomelang2.c"
        __result231__ = __result_obj__ = ((char*)(right_value166=__builtin_string("")));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result231__;
    }
    # 2087 "libcomelang2.c"
    p_174=path+strlen(path);
    # 2098 "libcomelang2.c"
    while(_while_condtional6=p_174>=path,    _while_condtional6) {
        # 2096 "libcomelang2.c"
        # 2090 "libcomelang2.c"
        if(_if_conditional225=*p_174==46,        _if_conditional225) {
            # 2091 "libcomelang2.c"
            break;
        }
        else {
            # 2094 "libcomelang2.c"
            p_174--;
        }
    }
    # 2105 "libcomelang2.c"
    # 2098 "libcomelang2.c"
    if(_if_conditional226=p_174<path,    _if_conditional226) {
        # 2099 "libcomelang2.c"
        __result232__ = __result_obj__ = ((char*)(right_value167=__builtin_string(path)));
        right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result232__;
    }
    else {
        # 2102 "libcomelang2.c"
        __result233__ = __result_obj__ = ((char*)(right_value168=__builtin_string(p_174+1)));
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result233__;
    }
    # 2105 "libcomelang2.c"
    __result234__ = __result_obj__ = ((char*)(right_value169=__builtin_string("")));
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result234__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional227;
void* right_value170;
char* __result235__;
char* result_175;
void* right_value171;
char* result2_176;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
memset(&result_175, 0, sizeof(char*));
right_value171 = (void*)0;
memset(&result2_176, 0, sizeof(char*));
    # 2113 "libcomelang2.c"
    # 2110 "libcomelang2.c"
    if(_if_conditional227=path==((void*)0),    _if_conditional227) {
        # 2111 "libcomelang2.c"
        __result235__ = __result_obj__ = ((char*)(right_value170=__builtin_string("")));
        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result235__;
    }
    # 2113 "libcomelang2.c"
    result_175=realpath(path,((void*)0));
    # 2115 "libcomelang2.c"
    result2_176=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(result_175))));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2117 "libcomelang2.c"
    free(result_175);
    # 2119 "libcomelang2.c"
    __result236__ = __result_obj__ = result2_176;
    result2_176 = come_decrement_ref_count2(result2_176, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result236__;
    result2_176 = come_decrement_ref_count2(result2_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional228;
void* right_value172;
char* __result237__;
void* right_value173;
char* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
right_value173 = (void*)0;
    # 2133 "libcomelang2.c"
    # 2127 "libcomelang2.c"
    if(self) {
        # 2128 "libcomelang2.c"
        __result237__ = __result_obj__ = ((char*)(right_value172=__builtin_string("true")));
        right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result237__;
    }
    else {
        # 2131 "libcomelang2.c"
        __result238__ = __result_obj__ = ((char*)(right_value173=__builtin_string("false")));
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result238__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
void* right_value174;
char* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
    # 2137 "libcomelang2.c"
    __result239__ = __result_obj__ = ((char*)(right_value174=xsprintf("%c",self)));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result239__;
}

char* short_to_string(short short self){
void* __result_obj__;
void* right_value175;
char* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
    # 2142 "libcomelang2.c"
    __result240__ = __result_obj__ = ((char*)(right_value175=xsprintf("%d",self)));
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result240__;
}

char* int_to_string(int self){
void* __result_obj__;
void* right_value176;
char* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
    # 2147 "libcomelang2.c"
    __result241__ = __result_obj__ = ((char*)(right_value176=xsprintf("%d",self)));
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result241__;
}

char* long_to_string(long self){
void* __result_obj__;
void* right_value177;
char* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
    # 2152 "libcomelang2.c"
    __result242__ = __result_obj__ = ((char*)(right_value177=xsprintf("%ld",self)));
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result242__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
void* right_value178;
char* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
    # 2157 "libcomelang2.c"
    __result243__ = __result_obj__ = ((char*)(right_value178=xsprintf("%ld",self)));
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result243__;
}

char* float_to_string(float self){
void* __result_obj__;
void* right_value179;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    # 2162 "libcomelang2.c"
    __result244__ = __result_obj__ = ((char*)(right_value179=xsprintf("%f",self)));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result244__;
}

char* double_to_string(double self){
void* __result_obj__;
void* right_value180;
char* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
    # 2167 "libcomelang2.c"
    __result245__ = __result_obj__ = ((char*)(right_value180=xsprintf("%lf",self)));
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result245__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional229;
void* right_value181;
char* __result246__;
void* right_value182;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
right_value182 = (void*)0;
    # 2175 "libcomelang2.c"
    # 2172 "libcomelang2.c"
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        # 2173 "libcomelang2.c"
        __result246__ = __result_obj__ = ((char*)(right_value181=__builtin_string("")));
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result246__;
    }
    # 2175 "libcomelang2.c"
    __result247__ = __result_obj__ = ((char*)(right_value182=__builtin_string(self)));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result247__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional230;
void* right_value183;
char* __result248__;
void* right_value184;
char* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
right_value184 = (void*)0;
    # 2183 "libcomelang2.c"
    # 2180 "libcomelang2.c"
    if(_if_conditional230=self==((void*)0),    _if_conditional230) {
        # 2181 "libcomelang2.c"
        __result248__ = __result_obj__ = ((char*)(right_value183=__builtin_string("")));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result248__;
    }
    # 2183 "libcomelang2.c"
    __result249__ = __result_obj__ = ((char*)(right_value184=__builtin_string(self)));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result249__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional231;
int __result250__;
_Bool _if_conditional232;
int __result251__;
_Bool _if_conditional233;
int __result252__;
int __result253__;
int __result254__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2204 "libcomelang2.c"
    # 2191 "libcomelang2.c"
    if(_if_conditional231=!left&&right,    _if_conditional231) {
        # 2192 "libcomelang2.c"
        __result250__ = -1;
        return __result250__;
    }
    else {
        # 2204 "libcomelang2.c"
        # 2194 "libcomelang2.c"
        if(_if_conditional232=left&&right,        _if_conditional232) {
            # 2195 "libcomelang2.c"
            __result251__ = 0;
            return __result251__;
        }
        else {
            # 2204 "libcomelang2.c"
            # 2197 "libcomelang2.c"
            if(_if_conditional233=!left&&!right,            _if_conditional233) {
                # 2198 "libcomelang2.c"
                __result252__ = 0;
                return __result252__;
            }
            else {
                # 2201 "libcomelang2.c"
                __result253__ = 1;
                return __result253__;
            }
        }
    }
    # 2204 "libcomelang2.c"
    __result254__ = 0;
    return __result254__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional234;
int __result255__;
_Bool _if_conditional235;
int __result256__;
int __result257__;
int __result258__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2219 "libcomelang2.c"
    # 2209 "libcomelang2.c"
    if(_if_conditional234=left<right,    _if_conditional234) {
        # 2210 "libcomelang2.c"
        __result255__ = -1;
        return __result255__;
    }
    else {
        # 2219 "libcomelang2.c"
        # 2212 "libcomelang2.c"
        if(_if_conditional235=left>right,        _if_conditional235) {
            # 2213 "libcomelang2.c"
            __result256__ = 1;
            return __result256__;
        }
        else {
            # 2216 "libcomelang2.c"
            __result257__ = 0;
            return __result257__;
        }
    }
    # 2219 "libcomelang2.c"
    __result258__ = 0;
    return __result258__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional236;
int __result259__;
_Bool _if_conditional237;
int __result260__;
int __result261__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2234 "libcomelang2.c"
    # 2224 "libcomelang2.c"
    if(_if_conditional236=left<right,    _if_conditional236) {
        # 2225 "libcomelang2.c"
        __result259__ = -1;
        return __result259__;
    }
    else {
        # 2234 "libcomelang2.c"
        # 2227 "libcomelang2.c"
        if(_if_conditional237=left>right,        _if_conditional237) {
            # 2228 "libcomelang2.c"
            __result260__ = 1;
            return __result260__;
        }
        else {
            # 2231 "libcomelang2.c"
            __result261__ = 0;
            return __result261__;
        }
    }
    # 2234 "libcomelang2.c"
    __result262__ = 0;
    return __result262__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional238;
int __result263__;
_Bool _if_conditional239;
int __result264__;
int __result265__;
int __result266__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2249 "libcomelang2.c"
    # 2239 "libcomelang2.c"
    if(_if_conditional238=left<right,    _if_conditional238) {
        # 2240 "libcomelang2.c"
        __result263__ = -1;
        return __result263__;
    }
    else {
        # 2249 "libcomelang2.c"
        # 2242 "libcomelang2.c"
        if(_if_conditional239=left>right,        _if_conditional239) {
            # 2243 "libcomelang2.c"
            __result264__ = 1;
            return __result264__;
        }
        else {
            # 2246 "libcomelang2.c"
            __result265__ = 0;
            return __result265__;
        }
    }
    # 2249 "libcomelang2.c"
    __result266__ = 0;
    return __result266__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional240;
int __result267__;
_Bool _if_conditional241;
int __result268__;
int __result269__;
int __result270__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2264 "libcomelang2.c"
    # 2254 "libcomelang2.c"
    if(_if_conditional240=left<right,    _if_conditional240) {
        # 2255 "libcomelang2.c"
        __result267__ = -1;
        return __result267__;
    }
    else {
        # 2264 "libcomelang2.c"
        # 2257 "libcomelang2.c"
        if(_if_conditional241=left>right,        _if_conditional241) {
            # 2258 "libcomelang2.c"
            __result268__ = 1;
            return __result268__;
        }
        else {
            # 2261 "libcomelang2.c"
            __result269__ = 0;
            return __result269__;
        }
    }
    # 2264 "libcomelang2.c"
    __result270__ = 0;
    return __result270__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool _if_conditional242;
int __result271__;
_Bool _if_conditional243;
int __result272__;
int __result273__;
int __result274__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2279 "libcomelang2.c"
    # 2269 "libcomelang2.c"
    if(_if_conditional242=left<right,    _if_conditional242) {
        # 2270 "libcomelang2.c"
        __result271__ = -1;
        return __result271__;
    }
    else {
        # 2279 "libcomelang2.c"
        # 2272 "libcomelang2.c"
        if(_if_conditional243=left>right,        _if_conditional243) {
            # 2273 "libcomelang2.c"
            __result272__ = 1;
            return __result272__;
        }
        else {
            # 2276 "libcomelang2.c"
            __result273__ = 0;
            return __result273__;
        }
    }
    # 2279 "libcomelang2.c"
    __result274__ = 0;
    return __result274__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional244;
int __result275__;
_Bool _if_conditional245;
int __result276__;
int __result277__;
int __result278__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2294 "libcomelang2.c"
    # 2284 "libcomelang2.c"
    if(_if_conditional244=left<right,    _if_conditional244) {
        # 2285 "libcomelang2.c"
        __result275__ = -1;
        return __result275__;
    }
    else {
        # 2294 "libcomelang2.c"
        # 2287 "libcomelang2.c"
        if(_if_conditional245=left>right,        _if_conditional245) {
            # 2288 "libcomelang2.c"
            __result276__ = 1;
            return __result276__;
        }
        else {
            # 2291 "libcomelang2.c"
            __result277__ = 0;
            return __result277__;
        }
    }
    # 2294 "libcomelang2.c"
    __result278__ = 0;
    return __result278__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional246;
int __result279__;
_Bool _if_conditional247;
int __result280__;
int __result281__;
int __result282__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2309 "libcomelang2.c"
    # 2299 "libcomelang2.c"
    if(_if_conditional246=left<right,    _if_conditional246) {
        # 2300 "libcomelang2.c"
        __result279__ = -1;
        return __result279__;
    }
    else {
        # 2309 "libcomelang2.c"
        # 2302 "libcomelang2.c"
        if(_if_conditional247=left>right,        _if_conditional247) {
            # 2303 "libcomelang2.c"
            __result280__ = 1;
            return __result280__;
        }
        else {
            # 2306 "libcomelang2.c"
            __result281__ = 0;
            return __result281__;
        }
    }
    # 2309 "libcomelang2.c"
    __result282__ = 0;
    return __result282__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional248;
int __result283__;
_Bool _if_conditional249;
int __result284__;
_Bool _if_conditional250;
int __result285__;
int __result286__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2324 "libcomelang2.c"
    # 2314 "libcomelang2.c"
    if(_if_conditional248=left==((void*)0)&&right==((void*)0),    _if_conditional248) {
        # 2315 "libcomelang2.c"
        __result283__ = 0;
        return __result283__;
    }
    else {
        # 2324 "libcomelang2.c"
        # 2317 "libcomelang2.c"
        if(_if_conditional249=left==((void*)0),        _if_conditional249) {
            # 2318 "libcomelang2.c"
            __result284__ = -1;
            return __result284__;
        }
        else {
            # 2324 "libcomelang2.c"
            # 2320 "libcomelang2.c"
            if(_if_conditional250=right==((void*)0),            _if_conditional250) {
                # 2321 "libcomelang2.c"
                __result285__ = 1;
                return __result285__;
            }
        }
    }
    # 2324 "libcomelang2.c"
    __result286__ = strcmp(left,right);
    return __result286__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional251;
int __result287__;
_Bool _if_conditional252;
int __result288__;
_Bool _if_conditional253;
int __result289__;
int __result290__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2339 "libcomelang2.c"
    # 2329 "libcomelang2.c"
    if(_if_conditional251=left==((void*)0)&&right==((void*)0),    _if_conditional251) {
        # 2330 "libcomelang2.c"
        __result287__ = 0;
        return __result287__;
    }
    else {
        # 2339 "libcomelang2.c"
        # 2332 "libcomelang2.c"
        if(_if_conditional252=left==((void*)0),        _if_conditional252) {
            # 2333 "libcomelang2.c"
            __result288__ = -1;
            return __result288__;
        }
        else {
            # 2339 "libcomelang2.c"
            # 2335 "libcomelang2.c"
            if(_if_conditional253=right==((void*)0),            _if_conditional253) {
                # 2336 "libcomelang2.c"
                __result289__ = 1;
                return __result289__;
            }
        }
    }
    # 2339 "libcomelang2.c"
    __result290__ = strcmp(left,right);
    return __result290__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional254;
void* right_value185;
char* __result291__;
void* right_value186;
void* right_value187;
struct buffer* buf_177;
_Bool _while_condtional7;
int size_179;
_Bool _if_conditional255;
void* right_value188;
char* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&buf_177, 0, sizeof(struct buffer*));
memset(&size_179, 0, sizeof(int));
right_value188 = (void*)0;
    # 2350 "libcomelang2.c"
    # 2347 "libcomelang2.c"
    if(_if_conditional254=f==((void*)0),    _if_conditional254) {
        # 2348 "libcomelang2.c"
        __result291__ = __result_obj__ = ((char*)(right_value185=__builtin_string("")));
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result291__;
    }
    # 2350 "libcomelang2.c"
    buf_177=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value187=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value186=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2350, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2364 "libcomelang2.c"
    while(_while_condtional7=1,    _while_condtional7) {
        # 2353 "libcomelang2.c"
        char buf2_178[1024];
        memset(&buf2_178, 0, sizeof(char)        *(1024)        );
        # 2355 "libcomelang2.c"
        size_179=fread(buf2_178,1,1024,f);
        # 2357 "libcomelang2.c"
        buffer_append(buf_177,buf2_178,size_179);
        # 2362 "libcomelang2.c"
        # 2359 "libcomelang2.c"
        if(_if_conditional255=size_179<1024,        _if_conditional255) {
            # 2360 "libcomelang2.c"
            break;
        }
    }
    # 2364 "libcomelang2.c"
    __result292__ = __result_obj__ = ((char*)(right_value188=buffer_to_string(buf_177)));
    come_call_finalizer2(buffer_finalize,buf_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result292__;
    come_call_finalizer2(buffer_finalize,buf_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional256;
int __result293__;
int __result294__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2373 "libcomelang2.c"
    # 2369 "libcomelang2.c"
    if(_if_conditional256=f==((void*)0)||str==((void*)0),    _if_conditional256) {
        # 2370 "libcomelang2.c"
        __result293__ = -1;
        return __result293__;
    }
    # 2373 "libcomelang2.c"
    __result294__ = fwrite(str,strlen(str),1,f);
    return __result294__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional257;
int __result295__;
int result_180;
_Bool _if_conditional258;
int __result296__;
int __result297__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_180, 0, sizeof(int));
    # 2382 "libcomelang2.c"
    # 2378 "libcomelang2.c"
    if(_if_conditional257=f==((void*)0),    _if_conditional257) {
        # 2379 "libcomelang2.c"
        __result295__ = -1;
        return __result295__;
    }
    # 2382 "libcomelang2.c"
    result_180=fclose(f);
    # 2388 "libcomelang2.c"
    # 2384 "libcomelang2.c"
    if(_if_conditional258=result_180<0,    _if_conditional258) {
        # 2385 "libcomelang2.c"
        __result296__ = result_180;
        return __result296__;
    }
    # 2388 "libcomelang2.c"
    __result297__ = result_180;
    return __result297__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional259;
struct _IO_FILE* __result298__;
va_list args_182;
int result_183;
_Bool _if_conditional260;
struct _IO_FILE* __result299__;
struct _IO_FILE* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_182, 0, sizeof(va_list));
memset(&result_183, 0, sizeof(int));
    # 2396 "libcomelang2.c"
    # 2393 "libcomelang2.c"
    if(_if_conditional259=f==((void*)0)||msg==((void*)0),    _if_conditional259) {
        # 2394 "libcomelang2.c"
        __result298__ = __result_obj__ = f;
        return __result298__;
    }
    # 2396 "libcomelang2.c"
    char msg2_181[1024*2*2*2];
    memset(&msg2_181, 0, sizeof(char)    *(1024*2*2*2)    );
    # 2398 "libcomelang2.c"
    # 2399 "libcomelang2.c"
    __builtin_va_start(args_182,msg);
    # 2400 "libcomelang2.c"
    vsnprintf(msg2_181,1024*2*2*2,msg,args_182);
    # 2401 "libcomelang2.c"
    __builtin_va_end(args_182);
    # 2403 "libcomelang2.c"
    result_183=fprintf(f,"%s",msg2_181);
    # 2409 "libcomelang2.c"
    # 2405 "libcomelang2.c"
    if(_if_conditional260=result_183<0,    _if_conditional260) {
        # 2406 "libcomelang2.c"
        __result299__ = __result_obj__ = f;
        come_call_finalizer2(va_list_finalize,(&args_182), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        return __result299__;
    }
    # 2409 "libcomelang2.c"
    __result300__ = __result_obj__ = f;
    come_call_finalizer2(va_list_finalize,(&args_182), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    return __result300__;
    come_call_finalizer2(va_list_finalize,(&args_182), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional261;
int __result301__;
struct _IO_FILE* f_184;
_Bool _if_conditional262;
_Bool _if_conditional263;
int __result302__;
int result_185;
_Bool _if_conditional264;
int __result303__;
int result2_186;
_Bool _if_conditional265;
int __result304__;
int __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_184, 0, sizeof(struct _IO_FILE*));
memset(&result_185, 0, sizeof(int));
memset(&result2_186, 0, sizeof(int));
    # 2418 "libcomelang2.c"
    # 2414 "libcomelang2.c"
    if(_if_conditional261=self==((void*)0)||file_name==((void*)0),    _if_conditional261) {
        # 2415 "libcomelang2.c"
        __result301__ = -1;
        return __result301__;
    }
    # 2418 "libcomelang2.c"
    # 2426 "libcomelang2.c"
    # 2419 "libcomelang2.c"
    if(append) {
        # 2420 "libcomelang2.c"
        f_184=fopen(file_name,"a");
    }
    else {
        # 2423 "libcomelang2.c"
        f_184=fopen(file_name,"w");
    }
    # 2430 "libcomelang2.c"
    # 2426 "libcomelang2.c"
    if(_if_conditional263=f_184==((void*)0),    _if_conditional263) {
        # 2427 "libcomelang2.c"
        __result302__ = -1;
        return __result302__;
    }
    # 2430 "libcomelang2.c"
    result_185=fwrite(self,strlen(self),1,f_184);
    # 2436 "libcomelang2.c"
    # 2432 "libcomelang2.c"
    if(_if_conditional264=result_185<0,    _if_conditional264) {
        # 2433 "libcomelang2.c"
        __result303__ = result_185;
        return __result303__;
    }
    # 2438 "libcomelang2.c"
    result2_186=fclose(f_184);
    # 2442 "libcomelang2.c"
    # 2438 "libcomelang2.c"
    if(_if_conditional265=result2_186<0,    _if_conditional265) {
        # 2439 "libcomelang2.c"
        __result304__ = result2_186;
        return __result304__;
    }
    # 2442 "libcomelang2.c"
    __result305__ = result_185;
    return __result305__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional266;
int __result306__;
struct _IO_FILE* f_187;
_Bool _if_conditional267;
_Bool _if_conditional268;
int __result307__;
int result_188;
_Bool _if_conditional269;
int __result308__;
int result2_189;
_Bool _if_conditional270;
int __result309__;
int __result310__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_187, 0, sizeof(struct _IO_FILE*));
memset(&result_188, 0, sizeof(int));
memset(&result2_189, 0, sizeof(int));
    # 2451 "libcomelang2.c"
    # 2447 "libcomelang2.c"
    if(_if_conditional266=self==((void*)0)||file_name==((void*)0),    _if_conditional266) {
        # 2448 "libcomelang2.c"
        __result306__ = -1;
        return __result306__;
    }
    # 2451 "libcomelang2.c"
    # 2459 "libcomelang2.c"
    # 2452 "libcomelang2.c"
    if(append) {
        # 2453 "libcomelang2.c"
        f_187=fopen(file_name,"a");
    }
    else {
        # 2456 "libcomelang2.c"
        f_187=fopen(file_name,"w");
    }
    # 2463 "libcomelang2.c"
    # 2459 "libcomelang2.c"
    if(_if_conditional268=f_187==((void*)0),    _if_conditional268) {
        # 2460 "libcomelang2.c"
        __result307__ = -1;
        return __result307__;
    }
    # 2463 "libcomelang2.c"
    result_188=fwrite(self,strlen(self),1,f_187);
    # 2469 "libcomelang2.c"
    # 2465 "libcomelang2.c"
    if(_if_conditional269=result_188<0,    _if_conditional269) {
        # 2466 "libcomelang2.c"
        __result308__ = result_188;
        return __result308__;
    }
    # 2471 "libcomelang2.c"
    result2_189=fclose(f_187);
    # 2475 "libcomelang2.c"
    # 2471 "libcomelang2.c"
    if(_if_conditional270=result2_189<0,    _if_conditional270) {
        # 2472 "libcomelang2.c"
        __result309__ = result2_189;
        return __result309__;
    }
    # 2475 "libcomelang2.c"
    __result310__ = result_188;
    return __result310__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional271;
void* right_value189;
char* __result311__;
struct _IO_FILE* f_190;
_Bool _if_conditional272;
void* right_value190;
char* __result312__;
void* right_value191;
void* right_value192;
struct buffer* buf_191;
_Bool _while_condtional8;
int size_193;
_Bool _if_conditional273;
void* right_value193;
char* result_194;
int result2_195;
_Bool _if_conditional274;
void* right_value194;
char* __result313__;
char* __result314__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
memset(&f_190, 0, sizeof(struct _IO_FILE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&buf_191, 0, sizeof(struct buffer*));
memset(&size_193, 0, sizeof(int));
right_value193 = (void*)0;
memset(&result_194, 0, sizeof(char*));
memset(&result2_195, 0, sizeof(int));
right_value194 = (void*)0;
    # 2484 "libcomelang2.c"
    # 2480 "libcomelang2.c"
    if(_if_conditional271=file_name==((void*)0),    _if_conditional271) {
        # 2481 "libcomelang2.c"
        __result311__ = __result_obj__ = ((char*)(right_value189=__builtin_string("")));
        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result311__;
    }
    # 2484 "libcomelang2.c"
    f_190=fopen(file_name,"r");
    # 2490 "libcomelang2.c"
    # 2486 "libcomelang2.c"
    if(_if_conditional272=f_190==((void*)0),    _if_conditional272) {
        # 2487 "libcomelang2.c"
        __result312__ = __result_obj__ = ((char*)(right_value190=__builtin_string("")));
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result312__;
    }
    # 2490 "libcomelang2.c"
    buf_191=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value192=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value191=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2490, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2504 "libcomelang2.c"
    while(_while_condtional8=1,    _while_condtional8) {
        # 2493 "libcomelang2.c"
        char buf2_192[1024];
        memset(&buf2_192, 0, sizeof(char)        *(1024)        );
        # 2495 "libcomelang2.c"
        size_193=fread(buf2_192,1,1024,f_190);
        # 2497 "libcomelang2.c"
        buffer_append(buf_191,buf2_192,size_193);
        # 2502 "libcomelang2.c"
        # 2499 "libcomelang2.c"
        if(_if_conditional273=size_193<1024,        _if_conditional273) {
            # 2500 "libcomelang2.c"
            break;
        }
    }
    # 2504 "libcomelang2.c"
    result_194=(char*)come_increment_ref_count(((char*)(right_value193=buffer_to_string(buf_191))));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2508 "libcomelang2.c"
    result2_195=fclose(f_190);
    # 2512 "libcomelang2.c"
    # 2508 "libcomelang2.c"
    if(_if_conditional274=result2_195<0,    _if_conditional274) {
        # 2509 "libcomelang2.c"
        __result313__ = __result_obj__ = ((char*)(right_value194=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        result_194 = come_decrement_ref_count2(result_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result313__;
    }
    # 2512 "libcomelang2.c"
    __result314__ = __result_obj__ = result_194;
    come_call_finalizer2(buffer_finalize,buf_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_194 = come_decrement_ref_count2(result_194, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result314__;
    come_call_finalizer2(buffer_finalize,buf_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_194 = come_decrement_ref_count2(result_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional275;
void* right_value195;
char* __result315__;
struct _IO_FILE* f_196;
_Bool _if_conditional276;
void* right_value196;
char* __result316__;
void* right_value197;
void* right_value198;
struct buffer* buf_197;
_Bool _while_condtional9;
int size_199;
_Bool _if_conditional277;
void* right_value199;
char* result_200;
int result2_201;
_Bool _if_conditional278;
void* right_value200;
char* __result317__;
char* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&f_196, 0, sizeof(struct _IO_FILE*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&buf_197, 0, sizeof(struct buffer*));
memset(&size_199, 0, sizeof(int));
right_value199 = (void*)0;
memset(&result_200, 0, sizeof(char*));
memset(&result2_201, 0, sizeof(int));
right_value200 = (void*)0;
    # 2521 "libcomelang2.c"
    # 2517 "libcomelang2.c"
    if(_if_conditional275=file_name==((void*)0),    _if_conditional275) {
        # 2518 "libcomelang2.c"
        __result315__ = __result_obj__ = ((char*)(right_value195=__builtin_string("")));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result315__;
    }
    # 2521 "libcomelang2.c"
    f_196=fopen(file_name,"r");
    # 2527 "libcomelang2.c"
    # 2523 "libcomelang2.c"
    if(_if_conditional276=f_196==((void*)0),    _if_conditional276) {
        # 2524 "libcomelang2.c"
        __result316__ = __result_obj__ = ((char*)(right_value196=__builtin_string("")));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result316__;
    }
    # 2527 "libcomelang2.c"
    buf_197=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2527, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2541 "libcomelang2.c"
    while(_while_condtional9=1,    _while_condtional9) {
        # 2530 "libcomelang2.c"
        char buf2_198[1024];
        memset(&buf2_198, 0, sizeof(char)        *(1024)        );
        # 2532 "libcomelang2.c"
        size_199=fread(buf2_198,1,1024,f_196);
        # 2534 "libcomelang2.c"
        buffer_append(buf_197,buf2_198,size_199);
        # 2539 "libcomelang2.c"
        # 2536 "libcomelang2.c"
        if(_if_conditional277=size_199<1024,        _if_conditional277) {
            # 2537 "libcomelang2.c"
            break;
        }
    }
    # 2541 "libcomelang2.c"
    result_200=(char*)come_increment_ref_count(((char*)(right_value199=buffer_to_string(buf_197))));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2545 "libcomelang2.c"
    result2_201=fclose(f_196);
    # 2549 "libcomelang2.c"
    # 2545 "libcomelang2.c"
    if(_if_conditional278=result2_201<0,    _if_conditional278) {
        # 2546 "libcomelang2.c"
        __result317__ = __result_obj__ = ((char*)(right_value200=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        result_200 = come_decrement_ref_count2(result_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result317__;
    }
    # 2549 "libcomelang2.c"
    __result318__ = __result_obj__ = result_200;
    come_call_finalizer2(buffer_finalize,buf_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_200 = come_decrement_ref_count2(result_200, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result318__;
    come_call_finalizer2(buffer_finalize,buf_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_200 = come_decrement_ref_count2(result_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
void* right_value201;
void* right_value202;
struct list$1charph* result_202;
_Bool _if_conditional279;
struct list$1charph* __result319__;
_Bool _while_condtional10;
_Bool _if_conditional280;
void* right_value203;
struct list$1charph* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&result_202, 0, sizeof(struct list$1charph*));
right_value203 = (void*)0;
    # 2554 "libcomelang2.c"
    result_202=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value202=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2554, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2560 "libcomelang2.c"
    # 2556 "libcomelang2.c"
    if(_if_conditional279=f==((void*)0),    _if_conditional279) {
        # 2557 "libcomelang2.c"
        __result319__ = __result_obj__ = result_202;
        come_call_finalizer2(list$1charphp_finalize,result_202, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result319__;
    }
    # 2570 "libcomelang2.c"
    while(_while_condtional10=1,    _while_condtional10) {
        # 2561 "libcomelang2.c"
        char buf_203[1024];
        memset(&buf_203, 0, sizeof(char)        *(1024)        );
        # 2567 "libcomelang2.c"
        # 2563 "libcomelang2.c"
        if(_if_conditional280=fgets(buf_203,1024,f)==((void*)0),        _if_conditional280) {
            # 2564 "libcomelang2.c"
            break;
        }
        # 2567 "libcomelang2.c"
        list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(buf_203)))));
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 2570 "libcomelang2.c"
    __result320__ = __result_obj__ = result_202;
    come_call_finalizer2(list$1charphp_finalize,result_202, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result320__;
    come_call_finalizer2(list$1charphp_finalize,result_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional281;
int __result321__;
struct _IO_FILE* f_204;
_Bool _if_conditional282;
_Bool _if_conditional283;
int __result322__;
int __result323__;
int __result324__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_204, 0, sizeof(struct _IO_FILE*));
    # 2578 "libcomelang2.c"
    # 2575 "libcomelang2.c"
    if(_if_conditional281=path==((void*)0)||mode==((void*)0),    _if_conditional281) {
        # 2576 "libcomelang2.c"
        __result321__ = -1;
        return __result321__;
    }
    # 2578 "libcomelang2.c"
    f_204=fopen(path,mode);
    # 2592 "libcomelang2.c"
    # 2580 "libcomelang2.c"
    if(f_204) {
        # 2581 "libcomelang2.c"
        block(parent,f_204);
        # 2587 "libcomelang2.c"
        # 2582 "libcomelang2.c"
        if(_if_conditional283=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional283) {
            # 2583 "libcomelang2.c"
            fclose(f_204);
            # 2584 "libcomelang2.c"
            __result322__ = 0;
            return __result322__;
        }
        # 2587 "libcomelang2.c"
        fclose(f_204);
        # 2589 "libcomelang2.c"
        __result323__ = 0;
        return __result323__;
    }
    # 2592 "libcomelang2.c"
    __result324__ = -1;
    return __result324__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional284;
void* right_value204;
char* __result325__;
void* right_value205;
char* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
right_value205 = (void*)0;
    # 2603 "libcomelang2.c"
    # 2600 "libcomelang2.c"
    if(_if_conditional284=self==((void*)0),    _if_conditional284) {
        # 2601 "libcomelang2.c"
        __result325__ = __result_obj__ = ((char*)(right_value204=__builtin_string("")));
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result325__;
    }
    # 2603 "libcomelang2.c"
    puts(self);
    # 2605 "libcomelang2.c"
    __result326__ = __result_obj__ = ((char*)(right_value205=__builtin_string(self)));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result326__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional285;
void* right_value206;
char* __result327__;
void* right_value207;
char* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
right_value207 = (void*)0;
    # 2613 "libcomelang2.c"
    # 2610 "libcomelang2.c"
    if(_if_conditional285=self==((void*)0),    _if_conditional285) {
        # 2611 "libcomelang2.c"
        __result327__ = __result_obj__ = ((char*)(right_value206=__builtin_string("")));
        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result327__;
    }
    # 2613 "libcomelang2.c"
    printf("%s",self);
    # 2615 "libcomelang2.c"
    __result328__ = __result_obj__ = ((char*)(right_value207=__builtin_string(self)));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result328__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional286;
void* right_value208;
char* __result329__;
char* msg2_205;
va_list args_206;
void* right_value209;
char* __result330__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
memset(&msg2_205, 0, sizeof(char*));
memset(&args_206, 0, sizeof(va_list));
right_value209 = (void*)0;
    # 2624 "libcomelang2.c"
    # 2621 "libcomelang2.c"
    if(_if_conditional286=self==((void*)0),    _if_conditional286) {
        # 2622 "libcomelang2.c"
        __result329__ = __result_obj__ = ((char*)(right_value208=__builtin_string("")));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result329__;
    }
    # 2624 "libcomelang2.c"
    # 2626 "libcomelang2.c"
    # 2627 "libcomelang2.c"
    __builtin_va_start(args_206,self);
    # 2628 "libcomelang2.c"
    vasprintf(&msg2_205,self,args_206);
    # 2629 "libcomelang2.c"
    __builtin_va_end(args_206);
    # 2631 "libcomelang2.c"
    printf("%s",msg2_205);
    # 2633 "libcomelang2.c"
    free(msg2_205);
    # 2635 "libcomelang2.c"
    __result330__ = __result_obj__ = ((char*)(right_value209=__builtin_string(self)));
    come_call_finalizer2(va_list_finalize,(&args_206), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result330__;
    come_call_finalizer2(va_list_finalize,(&args_206), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional287;
void* right_value210;
char* __result331__;
char* msg2_207;
va_list args_208;
void* right_value211;
char* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
memset(&msg2_207, 0, sizeof(char*));
memset(&args_208, 0, sizeof(va_list));
right_value211 = (void*)0;
    # 2643 "libcomelang2.c"
    # 2640 "libcomelang2.c"
    if(_if_conditional287=self==((void*)0),    _if_conditional287) {
        # 2641 "libcomelang2.c"
        __result331__ = __result_obj__ = ((char*)(right_value210=__builtin_string("")));
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result331__;
    }
    # 2643 "libcomelang2.c"
    # 2645 "libcomelang2.c"
    # 2646 "libcomelang2.c"
    __builtin_va_start(args_208,self);
    # 2647 "libcomelang2.c"
    vasprintf(&msg2_207,self,args_208);
    # 2648 "libcomelang2.c"
    __builtin_va_end(args_208);
    # 2650 "libcomelang2.c"
    printf("%s",msg2_207);
    # 2652 "libcomelang2.c"
    free(msg2_207);
    # 2654 "libcomelang2.c"
    __result332__ = __result_obj__ = ((char*)(right_value211=__builtin_string(self)));
    come_call_finalizer2(va_list_finalize,(&args_208), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result332__;
    come_call_finalizer2(va_list_finalize,(&args_208), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result333__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2659 "libcomelang2.c"
    printf(msg,self);
    # 2661 "libcomelang2.c"
    __result333__ = self;
    return __result333__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional288;
void* right_value212;
char* __result334__;
void* right_value213;
char* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
right_value213 = (void*)0;
    # 2669 "libcomelang2.c"
    # 2666 "libcomelang2.c"
    if(_if_conditional288=self==((void*)0),    _if_conditional288) {
        # 2667 "libcomelang2.c"
        __result334__ = __result_obj__ = ((char*)(right_value212=__builtin_string("")));
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result334__;
    }
    # 2669 "libcomelang2.c"
    puts(self);
    # 2671 "libcomelang2.c"
    __result335__ = __result_obj__ = ((char*)(right_value213=__builtin_string(self)));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result335__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_209;
_Bool _if_conditional289;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_209, 0, sizeof(int));
    # 2686 "libcomelang2.c"
    for(    i_209=0;    i_209<self;    i_209++    ){
        # 2680 "libcomelang2.c"
        block(parent,i_209);
        # 2685 "libcomelang2.c"
        # 2682 "libcomelang2.c"
        if(_if_conditional289=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional289) {
            # 2683 "libcomelang2.c"
            return;
        }
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2693 "libcomelang2.c"
    self->value=value;
    # 2695 "libcomelang2.c"
    __result336__ = __result_obj__ = self;
    come_call_finalizer2(integer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result336__;
    come_call_finalizer2(integer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void integer_finalize(struct integer* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result337__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2700 "libcomelang2.c"
    __result337__ = self->value;
    return __result337__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
void* right_value214;
void* right_value215;
struct integer* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
right_value215 = (void*)0;
    # 2705 "libcomelang2.c"
    __result338__ = __result_obj__ = ((struct integer*)(right_value215=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value214=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2705, "integer")))),self)));
    come_call_finalizer2(integer_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result338__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
void* right_value216;
void* right_value217;
struct integer* __result339__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
right_value217 = (void*)0;
    # 2710 "libcomelang2.c"
    __result339__ = __result_obj__ = ((struct integer*)(right_value217=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value216=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2710, "integer")))),self)));
    come_call_finalizer2(integer_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result339__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
void* right_value218;
void* right_value219;
struct integer* __result340__;
memset(&__result_obj__, 0, sizeof(void*));
right_value218 = (void*)0;
right_value219 = (void*)0;
    # 2715 "libcomelang2.c"
    __result340__ = __result_obj__ = ((struct integer*)(right_value219=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value218=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2715, "integer")))),self)));
    come_call_finalizer2(integer_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result340__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
void* right_value220;
void* right_value221;
struct integer* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
right_value221 = (void*)0;
    # 2720 "libcomelang2.c"
    __result341__ = __result_obj__ = ((struct integer*)(right_value221=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value220=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2720, "integer")))),self)));
    come_call_finalizer2(integer_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result341__;
}

int integer_compare(struct integer* left, struct integer* right){
void* __result_obj__;
_Bool _if_conditional290;
int __result342__;
_Bool _if_conditional291;
int __result343__;
int __result344__;
int __result345__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2735 "libcomelang2.c"
    # 2725 "libcomelang2.c"
    if(_if_conditional290=left->value<right->value,    _if_conditional290) {
        # 2726 "libcomelang2.c"
        __result342__ = -1;
        return __result342__;
    }
    else {
        # 2735 "libcomelang2.c"
        # 2728 "libcomelang2.c"
        if(_if_conditional291=left->value>right->value,        _if_conditional291) {
            # 2729 "libcomelang2.c"
            __result343__ = 1;
            return __result343__;
        }
        else {
            # 2732 "libcomelang2.c"
            __result344__ = 0;
            return __result344__;
        }
    }
    # 2735 "libcomelang2.c"
    __result345__ = 0;
    return __result345__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result346__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2740 "libcomelang2.c"
    __result346__ = self->value==right->value;
    return __result346__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result347__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2745 "libcomelang2.c"
    __result347__ = self->value==right->value;
    return __result347__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result348__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2750 "libcomelang2.c"
    __result348__ = self->value!=right->value;
    return __result348__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value222;
void* right_value223;
struct integer* __result349__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
right_value223 = (void*)0;
    # 2755 "libcomelang2.c"
    __result349__ = __result_obj__ = ((struct integer*)(right_value223=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value222=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2755, "integer")))),left->value+right->value)));
    come_call_finalizer2(integer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result349__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value224;
void* right_value225;
struct integer* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
right_value225 = (void*)0;
    # 2760 "libcomelang2.c"
    __result350__ = __result_obj__ = ((struct integer*)(right_value225=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value224=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2760, "integer")))),left->value-right->value)));
    come_call_finalizer2(integer_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result350__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value226;
void* right_value227;
struct integer* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
right_value227 = (void*)0;
    # 2765 "libcomelang2.c"
    __result351__ = __result_obj__ = ((struct integer*)(right_value227=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value226=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2765, "integer")))),left->value*right->value)));
    come_call_finalizer2(integer_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result351__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value228;
void* right_value229;
struct integer* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    # 2770 "libcomelang2.c"
    __result352__ = __result_obj__ = ((struct integer*)(right_value229=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value228=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2770, "integer")))),left->value/right->value)));
    come_call_finalizer2(integer_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result352__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value230;
void* right_value231;
struct integer* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
right_value231 = (void*)0;
    # 2775 "libcomelang2.c"
    __result353__ = __result_obj__ = ((struct integer*)(right_value231=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value230=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2775, "integer")))),left->value%right->value)));
    come_call_finalizer2(integer_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result353__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value232;
void* right_value233;
struct integer* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
right_value233 = (void*)0;
    # 2780 "libcomelang2.c"
    __result354__ = __result_obj__ = ((struct integer*)(right_value233=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value232=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2780, "integer")))),left->value<<right->value)));
    come_call_finalizer2(integer_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result354__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value234;
void* right_value235;
struct integer* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
    # 2785 "libcomelang2.c"
    __result355__ = __result_obj__ = ((struct integer*)(right_value235=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value234=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2785, "integer")))),left->value>>right->value)));
    come_call_finalizer2(integer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result355__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value236;
void* right_value237;
struct integer* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
    # 2790 "libcomelang2.c"
    __result356__ = __result_obj__ = ((struct integer*)(right_value237=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value236=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2790, "integer")))),left->value>=right->value)));
    come_call_finalizer2(integer_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result356__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value238;
void* right_value239;
struct integer* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
right_value239 = (void*)0;
    # 2795 "libcomelang2.c"
    __result357__ = __result_obj__ = ((struct integer*)(right_value239=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value238=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2795, "integer")))),left->value<=right->value)));
    come_call_finalizer2(integer_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result357__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value240;
void* right_value241;
struct integer* __result358__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
right_value241 = (void*)0;
    # 2800 "libcomelang2.c"
    __result358__ = __result_obj__ = ((struct integer*)(right_value241=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value240=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2800, "integer")))),left->value<right->value)));
    come_call_finalizer2(integer_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result358__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value242;
void* right_value243;
struct integer* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    # 2805 "libcomelang2.c"
    __result359__ = __result_obj__ = ((struct integer*)(right_value243=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value242=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2805, "integer")))),left->value>right->value)));
    come_call_finalizer2(integer_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result359__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value244;
void* right_value245;
struct integer* __result360__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
    # 2810 "libcomelang2.c"
    __result360__ = __result_obj__ = ((struct integer*)(right_value245=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value244=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2810, "integer")))),left->value&right->value)));
    come_call_finalizer2(integer_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result360__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value246;
void* right_value247;
struct integer* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
right_value247 = (void*)0;
    # 2815 "libcomelang2.c"
    __result361__ = __result_obj__ = ((struct integer*)(right_value247=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value246=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2815, "integer")))),left->value^right->value)));
    come_call_finalizer2(integer_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result361__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value248;
void* right_value249;
struct integer* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
    # 2820 "libcomelang2.c"
    __result362__ = __result_obj__ = ((struct integer*)(right_value249=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value248=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2820, "integer")))),left->value|right->value)));
    come_call_finalizer2(integer_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result362__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value250;
void* right_value251;
struct integer* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value250 = (void*)0;
right_value251 = (void*)0;
    # 2825 "libcomelang2.c"
    __result363__ = __result_obj__ = ((struct integer*)(right_value251=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value250=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2825, "integer")))),left->value&&right->value)));
    come_call_finalizer2(integer_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result363__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value252;
void* right_value253;
struct integer* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    # 2830 "libcomelang2.c"
    __result364__ = __result_obj__ = ((struct integer*)(right_value253=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value252=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2830, "integer")))),left->value||right->value)));
    come_call_finalizer2(integer_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result364__;
}

