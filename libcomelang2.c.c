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

char* dirname(char* anonymous_var_nameX582);

char* basename(char* anonymous_var_nameX583);

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
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value13;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value13 = (void*)0;
    __result8__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value13=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value10=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2156, "smart_pointer$1char")))),self,sizeof(char)*len)));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value14;
void* right_value17;
struct smart_pointer$1short* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
right_value17 = (void*)0;
    __result10__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value17=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value14=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2161, "smart_pointer$1short")))),self,sizeof(short short)*len)));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result10__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value18;
void* right_value21;
struct smart_pointer$1int* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
right_value21 = (void*)0;
    __result12__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value21=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2166, "smart_pointer$1int")))),self,sizeof(int)*len)));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result12__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1long* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value25=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value22=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2171, "smart_pointer$1long")))),self,sizeof(long)*len)));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1float* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value29=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value26=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang2.h", 2176, "smart_pointer$1float")))),self,sizeof(float)*len)));
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1floatp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1double* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value33=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value30=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2181, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value34;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
    __result19__ = __result_obj__ = ((char*)(right_value34=xsprintf(msg,self)));
    right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value35;
char* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
    __result20__ = __result_obj__ = ((char*)(right_value35=xsprintf(msg,self)));
    right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value36;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
    __result21__ = __result_obj__ = ((char*)(right_value36=xsprintf(msg,self)));
    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result21__;
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
void* right_value11;
void* right_value12;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
right_value12 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result7__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result7__;
        come_call_finalizer2(smart_pointer$1charp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value15;
void* right_value16;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
right_value16 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value16=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result9__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result9__;
        come_call_finalizer2(smart_pointer$1shortp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value19;
void* right_value20;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
right_value20 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result11__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result11__;
        come_call_finalizer2(smart_pointer$1intp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result13__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer2(smart_pointer$1longp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result15__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result15__;
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
void* right_value31;
void* right_value32;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2000, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result17__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result17__;
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




void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional7=gNumComeStackFrame<1024,    _if_conditional7) {
        (come_range_check(&gComeStackFrameSName[gNumComeStackFrame],gComeStackFrameSName,gComeStackFrameSName+(1024), "libcomelang2.c", 23), gComeStackFrameSName[gNumComeStackFrame]=sname);
        (come_range_check(&gComeStackFrameSLine[gNumComeStackFrame],gComeStackFrameSLine,gComeStackFrameSLine+(1024), "libcomelang2.c", 24), gComeStackFrameSLine[gNumComeStackFrame]=sline);
        (come_range_check(&gComeStackFrameID[gNumComeStackFrame],gComeStackFrameID,gComeStackFrameID+(1024), "libcomelang2.c", 25), gComeStackFrameID[gNumComeStackFrame]=id);
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional8=gNumComeStackFrame>0,    _if_conditional8) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
void* right_value37;
void* right_value38;
struct buffer* buf_5;
void* right_value39;
int i_6;
void* right_value40;
_Bool _if_conditional9;
void* right_value41;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
right_value38 = (void*)0;
memset(&buf_5, 0, sizeof(struct buffer*));
right_value39 = (void*)0;
memset(&i_6, 0, sizeof(int));
right_value40 = (void*)0;
right_value41 = (void*)0;
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value38=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 40, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_5,((char*)(right_value39=xsprintf("%s %d\n",sname,sline))));
    right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_6=gNumComeStackFrame-2;    i_6>=0;    i_6--    ){
        buffer_append_str(buf_5,((char*)(right_value40=xsprintf("%s %d #%d\n",*(char**)come_range_check(&gComeStackFrameSName[i_6],gComeStackFrameSName,gComeStackFrameSName+(1024), "libcomelang2.c", 43),*(int*)come_range_check(&gComeStackFrameSLine[i_6],gComeStackFrameSLine,gComeStackFrameSLine+(1024), "libcomelang2.c", 43),*(int*)come_range_check(&gComeStackFrameID[i_6],gComeStackFrameID,gComeStackFrameID+(1024), "libcomelang2.c", 43)))));
        right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(right_value41=buffer_to_string(buf_5))));
    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
void* __result_obj__;
int i_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_7, 0, sizeof(int));
    for(    i_7=gNumComeStackFrame-1;    i_7>=0;    i_7--    ){
        printf("%s %d #%d\n",*(char**)come_range_check(&gComeStackFrameSName[i_7],gComeStackFrameSName,gComeStackFrameSName+(1024), "libcomelang2.c", 55),*(int*)come_range_check(&gComeStackFrameSLine[i_7],gComeStackFrameSLine,gComeStackFrameSLine+(1024), "libcomelang2.c", 55),*(int*)come_range_check(&gComeStackFrameID[i_7],gComeStackFrameID,gComeStackFrameID+(1024), "libcomelang2.c", 55));
    }
}

char* come_get_stackframe(){
void* __result_obj__;
void* right_value42;
char* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
    __result22__ = __result_obj__ = ((char*)(right_value42=__builtin_string(gComeStackFrameBuffer)));
    right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result22__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional10;
void* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional10=mem==((void*)0),    _if_conditional10) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result23__ = __result_obj__ = mem;
    return __result23__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
void* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional11=mem==((void*)0),    _if_conditional11) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional12=mem<begin,    _if_conditional12) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional13=mem>=end,    _if_conditional13) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result24__ = __result_obj__ = mem;
    return __result24__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool __result25__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional14=!self,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            __result25__ = self;
            return __result25__;
        }
        stackframe();
        exit(1);
    }
    __result26__ = self;
    return __result26__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    __result27__ = self;
    return __result27__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional17;
int __result28__;
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional16=self<0,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            __result28__ = self;
            return __result28__;
        }
    }
    __result29__ = self;
    return __result29__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional18;
_Bool _if_conditional19;
int __result30__;
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional18=self<0,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            __result30__ = self;
            return __result30__;
        }
        stackframe();
        exit(1);
    }
    __result31__ = self;
    return __result31__;
}

int int_value(int self){
void* __result_obj__;
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __result32__ = self;
    return __result32__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
int __result33__;
int __result34__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional20=self<0,    _if_conditional20) {
        block(parent);
        if(_if_conditional21=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional21) {
            __result33__ = self;
            return __result33__;
        }
    }
    __result34__ = self;
    return __result34__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result35__;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional22=!self,    _if_conditional22) {
        block(parent);
        if(_if_conditional23=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional23) {
            __result35__ = self;
            return __result35__;
        }
    }
    __result36__ = self;
    return __result36__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool __result37__;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional24=!self,    _if_conditional24) {
        block(parent);
        if(_if_conditional25=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional25) {
            __result37__ = self;
            return __result37__;
        }
    }
    __result38__ = self;
    return __result38__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s...",msg);
    if(_if_conditional26=!test,    _if_conditional26) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
int i_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_8, 0, sizeof(int));
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*1024);
    memset(gComeStackFrameSLine,0,sizeof(int)*1024);
    memset(gComeStackFrameID,0,sizeof(int)*1024);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_8=0;    i_8<gHeapPages.mSizePages;    i_8++    ){
        gHeapPages.mPages[i_8]=calloc(1,sizeof(char)*4048);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(void**)*4048);
    memset(gHeapPages.mNumFreeMem,0,sizeof(int)*4048);
    memset(gHeapPages.mSizeFreeMem,0,sizeof(int)*4048);
    gAllocMem=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
struct sMemHeader* it_9;
int n_10;
_Bool flag_11;
_Bool _if_conditional30;
int i_12;
_Bool _if_conditional31;
_Bool _if_conditional32;
struct sMemHeaderTiny* it_13;
int n_14;
_Bool _if_conditional33;
int i_15;
int i_16;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_9, 0, sizeof(struct sMemHeader*));
memset(&n_10, 0, sizeof(int));
memset(&flag_11, 0, sizeof(_Bool));
memset(&i_12, 0, sizeof(int));
memset(&it_13, 0, sizeof(struct sMemHeaderTiny*));
memset(&n_14, 0, sizeof(int));
memset(&i_15, 0, sizeof(int));
memset(&i_16, 0, sizeof(int));
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(gComeGCLib) {
    }
    else {
        if(gComeDebugLib) {
            it_9=gAllocMem;
            n_10=0;
            while(it_9) {
                n_10++;
                flag_11=(_Bool)0;
                printf("#%d ",n_10);
                if(it_9->class_name) {
                    printf("%p (%s): ",(char*)it_9+sizeof(struct sMemHeader)+sizeof(unsigned long int)+sizeof(unsigned long int),it_9->class_name);
                }
                for(                i_12=0;                i_12<16;                i_12++                ){
                    if(_if_conditional31=it_9->sname[i_12],                    _if_conditional31) {
                        printf("%s %d #%d, ",it_9->sname[i_12],it_9->sline[i_12],it_9->id[i_12]);
                        flag_11=(_Bool)1;
                    }
                }
                if(flag_11) {
                    puts("");
                }
                it_9=it_9->next;
            }
            printf("%d memory leaks. %d alloc, %d free.\n",n_10,gNumAlloc,gNumFree);
        }
        else {
            it_13=(struct sMemHeaderTiny*)gAllocMem;
            n_14=0;
            while(it_13) {
                n_14++;
                it_13=it_13->next;
            }
            if(_if_conditional33=n_14>0,            _if_conditional33) {
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_14,gNumAlloc,gNumFree);
            }
        }
    }
    for(    i_15=0;    i_15<gHeapPages.mSizePages;    i_15++    ){
        free(gHeapPages.mPages[i_15]);
    }
    free(gHeapPages.mPages);
    for(    i_16=0;    i_16<4048;    i_16++    ){
        if(_if_conditional34=gHeapPages.mFreeMem[i_16],        _if_conditional34) {
            free(gHeapPages.mFreeMem[i_16]);
        }
    }
}

static void* alloc_from_pages(unsigned long int size){
void* __result_obj__;
void* result_17;
_Bool _if_conditional35;
_Bool _if_conditional36;
struct sMemHeaderTiny* it_18;
_Bool _if_conditional37;
unsigned long int free_area_19;
_Bool _if_conditional38;
_Bool _if_conditional39;
int new_size_pages_20;
void** new_pages_21;
int i_22;
void* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_17, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct sMemHeaderTiny*));
memset(&free_area_19, 0, sizeof(unsigned long int));
memset(&new_size_pages_20, 0, sizeof(int));
memset(&new_pages_21, 0, sizeof(void**));
memset(&i_22, 0, sizeof(int));
    result_17=((void*)0);
    if(_if_conditional35=size<4048,    _if_conditional35) {
        if(_if_conditional36=gHeapPages.mFreeMem[size]&&gHeapPages.mNumFreeMem[size]>0,        _if_conditional36) {
            it_18=gHeapPages.mFreeMem[size][gHeapPages.mNumFreeMem[size]-1];
            gHeapPages.mNumFreeMem[size]--;
        }
        if(_if_conditional37=result_17==((void*)0),        _if_conditional37) {
            free_area_19=gHeapPages.mPages[gHeapPages.mCurrentPages]+4048-gHeapPages.mTop;
            if(_if_conditional38=size>=free_area_19,            _if_conditional38) {
                gHeapPages.mCurrentPages++;
                if(_if_conditional39=gHeapPages.mCurrentPages==gHeapPages.mSizePages,                _if_conditional39) {
                    new_size_pages_20=gHeapPages.mSizePages*2;
                    new_pages_21=calloc(1,sizeof(char*)*new_size_pages_20);
                    i_22=0;
                    for(                    ;                    i_22<gHeapPages.mSizePages;                    i_22++                    ){
                        new_pages_21[i_22]=gHeapPages.mPages[i_22];
                    }
                    for(                    ;                    i_22<new_size_pages_20;                    i_22++                    ){
                        new_pages_21[i_22]=calloc(1,sizeof(char)*4048);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_21;
                    gHeapPages.mSizePages=new_size_pages_20;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_17=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_17=calloc(1,size);
    }
    __result39__ = __result_obj__ = result_17;
    return __result39__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional40;
void* result_23;
struct sMemHeader* it_24;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* __result40__;
void* result_25;
struct sMemHeaderTiny* it_26;
_Bool _if_conditional44;
void* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_23, 0, sizeof(void*));
memset(&it_24, 0, sizeof(struct sMemHeader*));
memset(&result_25, 0, sizeof(void*));
memset(&it_26, 0, sizeof(struct sMemHeaderTiny*));
    if(gComeDebugLib) {
        result_23=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_24=result_23;
        it_24->allocated=177783;
        it_24->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(_if_conditional41=gNumComeStackFrame<16,        _if_conditional41) {
            memcpy(it_24->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_24->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_24->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_24->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_24->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_24->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_24->next=gAllocMem;
        it_24->prev=((void*)0);
        if(class_name) {
            it_24->class_name=strdup(class_name);
        }
        else {
            it_24->class_name=((void*)0);
        }
        if(gAllocMem) {
            gAllocMem->prev=it_24;
        }
        gAllocMem=it_24;
        gNumAlloc++;
        __result40__ = __result_obj__ = (char*)result_23+sizeof(struct sMemHeader);
        return __result40__;
    }
    else {
        result_25=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_26=result_25;
        it_26->allocated=177783;
        it_26->size=size+sizeof(struct sMemHeaderTiny);
        it_26->next=(struct sMemHeaderTiny*)gAllocMem;
        it_26->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_26;
        }
        gAllocMem=(struct sMemHeader*)it_26;
        gNumAlloc++;
        __result41__ = __result_obj__ = (char*)result_25+sizeof(struct sMemHeaderTiny);
        return __result41__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
void* __result_obj__;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
struct sMemHeader* it_27;
_Bool _if_conditional48;
struct sMemHeader* prev_it_28;
struct sMemHeader* next_it_29;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
unsigned long int size_30;
_Bool _if_conditional54;
int num_free_mem_31;
int size_free_mem_32;
_Bool _if_conditional55;
int new_size_free_mem_33;
void** new_free_mem_34;
_Bool _if_conditional56;
int new_size_free_mem_35;
void** new_free_mem_36;
struct sMemHeaderTiny* it_37;
_Bool _if_conditional57;
struct sMemHeaderTiny* prev_it_38;
struct sMemHeaderTiny* next_it_39;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
unsigned long int size_40;
_Bool _if_conditional62;
int num_free_mem_41;
int size_free_mem_42;
_Bool _if_conditional63;
int new_size_free_mem_43;
void** new_free_mem_44;
_Bool _if_conditional64;
int new_size_free_mem_45;
void** new_free_mem_46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_27, 0, sizeof(struct sMemHeader*));
memset(&prev_it_28, 0, sizeof(struct sMemHeader*));
memset(&next_it_29, 0, sizeof(struct sMemHeader*));
memset(&size_30, 0, sizeof(unsigned long int));
memset(&num_free_mem_31, 0, sizeof(int));
memset(&size_free_mem_32, 0, sizeof(int));
memset(&new_size_free_mem_33, 0, sizeof(int));
memset(&new_free_mem_34, 0, sizeof(void**));
memset(&new_size_free_mem_35, 0, sizeof(int));
memset(&new_free_mem_36, 0, sizeof(void**));
memset(&it_37, 0, sizeof(struct sMemHeaderTiny*));
memset(&prev_it_38, 0, sizeof(struct sMemHeaderTiny*));
memset(&next_it_39, 0, sizeof(struct sMemHeaderTiny*));
memset(&size_40, 0, sizeof(unsigned long int));
memset(&num_free_mem_41, 0, sizeof(int));
memset(&size_free_mem_42, 0, sizeof(int));
memset(&new_size_free_mem_43, 0, sizeof(int));
memset(&new_free_mem_44, 0, sizeof(void**));
memset(&new_size_free_mem_45, 0, sizeof(int));
memset(&new_free_mem_46, 0, sizeof(void**));
    if(mem) {
        if(gComeGCLib) {
        }
        else {
            if(gComeDebugLib) {
                it_27=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                if(_if_conditional48=it_27->allocated!=177783,                _if_conditional48) {
                    return;
                }
                it_27->allocated=0;
                prev_it_28=it_27->prev;
                next_it_29=it_27->next;
                if(it_27->class_name) {
                    free(it_27->class_name);
                }
                if(_if_conditional50=gAllocMem==it_27,                _if_conditional50) {
                    gAllocMem=next_it_29;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_28) {
                        prev_it_28->next=next_it_29;
                    }
                    if(next_it_29) {
                        next_it_29->prev=prev_it_28;
                    }
                }
                size_30=it_27->size;
                if(_if_conditional54=size_30<4048,                _if_conditional54) {
                    num_free_mem_31=gHeapPages.mNumFreeMem[size_30];
                    size_free_mem_32=gHeapPages.mSizeFreeMem[size_30];
                    if(_if_conditional55=gHeapPages.mFreeMem[size_30]==((void*)0),                    _if_conditional55) {
                        new_size_free_mem_33=16;
                        new_free_mem_34=calloc(1,sizeof(void*)*new_size_free_mem_33);
                        gHeapPages.mSizeFreeMem[size_30]=new_size_free_mem_33;
                        gHeapPages.mFreeMem[size_30]=new_free_mem_34;
                    }
                    else {
                        if(_if_conditional56=num_free_mem_31==size_free_mem_32,                        _if_conditional56) {
                            new_size_free_mem_35=size_free_mem_32*2;
                            new_free_mem_36=calloc(1,sizeof(void*)*new_size_free_mem_35);
                            memcpy(new_free_mem_36,gHeapPages.mFreeMem[size_30],sizeof(void*)*num_free_mem_31);
                            free(gHeapPages.mFreeMem[size_30]);
                            gHeapPages.mSizeFreeMem[size_30]=new_size_free_mem_35;
                            gHeapPages.mFreeMem[size_30]=new_free_mem_36;
                        }
                    }
                    gHeapPages.mFreeMem[size_30][gHeapPages.mNumFreeMem[size_30]]=it_27;
                    gHeapPages.mNumFreeMem[size_30]++;
                }
                else {
                    free(it_27);
                }
                gNumFree++;
            }
            else {
                it_37=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                if(_if_conditional57=it_37->allocated!=177783,                _if_conditional57) {
                    return;
                }
                it_37->allocated=0;
                prev_it_38=it_37->prev;
                next_it_39=it_37->next;
                if(_if_conditional58=gAllocMem==it_37,                _if_conditional58) {
                    gAllocMem=(struct sMemHeader*)next_it_39;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_38) {
                        prev_it_38->next=next_it_39;
                    }
                    if(next_it_39) {
                        next_it_39->prev=prev_it_38;
                    }
                }
                size_40=it_37->size;
                if(_if_conditional62=size_40<4048,                _if_conditional62) {
                    num_free_mem_41=gHeapPages.mNumFreeMem[size_40];
                    size_free_mem_42=gHeapPages.mSizeFreeMem[size_40];
                    if(_if_conditional63=gHeapPages.mFreeMem[size_40]==((void*)0),                    _if_conditional63) {
                        new_size_free_mem_43=16;
                        new_free_mem_44=calloc(1,sizeof(void*)*new_size_free_mem_43);
                        gHeapPages.mSizeFreeMem[size_40]=new_size_free_mem_43;
                        gHeapPages.mFreeMem[size_40]=new_free_mem_44;
                    }
                    else {
                        if(_if_conditional64=num_free_mem_41==size_free_mem_42,                        _if_conditional64) {
                            new_size_free_mem_45=size_free_mem_42*2;
                            new_free_mem_46=calloc(1,sizeof(void*)*new_size_free_mem_45);
                            memcpy(new_free_mem_46,gHeapPages.mFreeMem[size_40],sizeof(void*)*num_free_mem_41);
                            free(gHeapPages.mFreeMem[size_40]);
                            gHeapPages.mSizeFreeMem[size_40]=new_size_free_mem_45;
                            gHeapPages.mFreeMem[size_40]=new_free_mem_46;
                        }
                    }
                    gHeapPages.mFreeMem[size_40][gHeapPages.mNumFreeMem[size_40]]=it_37;
                    gHeapPages.mNumFreeMem[size_40]++;
                }
                else {
                    free(it_37);
                }
                gNumFree++;
            }
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__;
struct sMemHeader* it_47;
_Bool _if_conditional65;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct sMemHeader*));
    it_47=(struct sMemHeader*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    if(_if_conditional65=it_47->allocated!=177783,    _if_conditional65) {
        printf("invalid heap object(%p)\n",it_47);
        exit(2);
    }
    __result42__ = __result_obj__ = it_47->class_name;
    return __result42__;
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_48;
unsigned long int* ref_count_49;
unsigned long int* size2_50;
void* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_48, 0, sizeof(char*));
memset(&ref_count_49, 0, sizeof(unsigned long int*));
memset(&size2_50, 0, sizeof(unsigned long int*));
    mem_48=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_49=(unsigned long int*)mem_48;
    *ref_count_49=0;
    size2_50=(unsigned long int*)(mem_48+sizeof(unsigned long int));
    *size2_50=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result43__ = __result_obj__ = mem_48+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result43__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional66;
unsigned long int* ref_count_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_51, 0, sizeof(unsigned long int*));
    if(_if_conditional66=mem==((void*)0),    _if_conditional66) {
        return;
    }
    ref_count_51=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_51);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional67;
unsigned long int* ref_count_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_52, 0, sizeof(unsigned long int*));
    if(_if_conditional67=mem==((void*)0),    _if_conditional67) {
        return;
    }
    ref_count_52=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_52);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional68;
void* __result44__;
char* mem_53;
unsigned long int* size_p_54;
unsigned long int size_55;
void* result_56;
void* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_53, 0, sizeof(char*));
memset(&size_p_54, 0, sizeof(unsigned long int*));
memset(&size_55, 0, sizeof(unsigned long int));
memset(&result_56, 0, sizeof(void*));
    if(_if_conditional68=!block,    _if_conditional68) {
        __result44__ = __result_obj__ = ((void*)0);
        return __result44__;
    }
    mem_53=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_54=(unsigned long int*)(mem_53+sizeof(unsigned long int));
    size_55=*size_p_54-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_56=come_calloc(1,size_55,sname,sline,class_name);
    memcpy(result_56,block,size_55);
    __result45__ = __result_obj__ = result_56;
    return __result45__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional69;
void* __result46__;
unsigned long int* ref_count_57;
void* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_57, 0, sizeof(unsigned long int*));
    if(_if_conditional69=mem==((void*)0),    _if_conditional69) {
        __result46__ = __result_obj__ = mem;
        return __result46__;
    }
    ref_count_57=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*ref_count_57)++;
    __result47__ = __result_obj__ = mem;
    return __result47__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional70;
void* __result48__;
unsigned long int* ref_count_58;
void* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_58, 0, sizeof(unsigned long int*));
    if(_if_conditional70=mem==((void*)0),    _if_conditional70) {
        __result48__ = __result_obj__ = mem;
        return __result48__;
    }
    ref_count_58=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    printf("ref_count %ld\n",*ref_count_58);
    __result49__ = __result_obj__ = mem;
    return __result49__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional71;
void* __result50__;
unsigned long int* ref_count_59;
_Bool _if_conditional72;
unsigned long int count_60;
_Bool _if_conditional73;
_Bool _if_conditional74;
void (*finalizer_61)(void*);
void* __result51__;
void* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_59, 0, sizeof(unsigned long int*));
memset(&count_60, 0, sizeof(unsigned long int));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
    if(_if_conditional71=mem==((void*)0),    _if_conditional71) {
        __result50__ = __result_obj__ = ((void*)0);
        return __result50__;
    }
    ref_count_59=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional72=!no_decrement,    _if_conditional72) {
        (*ref_count_59)--;
    }
    count_60=*ref_count_59;
    if(_if_conditional73=!no_free&&(count_60<=0||force_delete_),    _if_conditional73) {
        if(_if_conditional74=protocol_obj&&protocol_fun,        _if_conditional74) {
            finalizer_61=protocol_fun;
            finalizer_61(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result51__ = __result_obj__ = ((void*)0);
        return __result51__;
    }
    __result52__ = __result_obj__ = mem;
    return __result52__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* __result53__;
_Bool _if_conditional77;
void* __result54__;
unsigned long int* ref_count_62;
_Bool _if_conditional78;
unsigned long int count_63;
_Bool _if_conditional79;
_Bool _if_conditional80;
void (*finalizer_64)(void*);
void* __result55__;
void* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_62, 0, sizeof(unsigned long int*));
memset(&count_63, 0, sizeof(unsigned long int));
memset(&finalizer_64, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(_if_conditional76=mem==result_obj,        _if_conditional76) {
            __result53__ = __result_obj__ = mem;
            return __result53__;
        }
    }
    if(_if_conditional77=mem==((void*)0),    _if_conditional77) {
        __result54__ = __result_obj__ = ((void*)0);
        return __result54__;
    }
    ref_count_62=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional78=!no_decrement,    _if_conditional78) {
        (*ref_count_62)--;
    }
    count_63=*ref_count_62;
    if(_if_conditional79=!no_free&&(count_63<=0||force_delete_),    _if_conditional79) {
        if(_if_conditional80=protocol_obj&&protocol_fun,        _if_conditional80) {
            finalizer_64=protocol_fun;
            finalizer_64(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result55__ = __result_obj__ = ((void*)0);
        return __result55__;
    }
    __result56__ = __result_obj__ = mem;
    return __result56__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
void (*finalizer_65)(void*);
void (*finalizer_66)(void*);
unsigned long int* ref_count_67;
_Bool _if_conditional85;
unsigned long int count_68;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void (*finalizer_69)(void*);
_Bool _if_conditional89;
void (*finalizer_70)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_65, 0, sizeof(void (*)(void*)));
memset(&finalizer_66, 0, sizeof(void (*)(void*)));
memset(&ref_count_67, 0, sizeof(unsigned long int*));
memset(&count_68, 0, sizeof(unsigned long int));
memset(&finalizer_69, 0, sizeof(void (*)(void*)));
memset(&finalizer_70, 0, sizeof(void (*)(void*)));
    if(_if_conditional81=mem==((void*)0),    _if_conditional81) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional84=protocol_obj&&protocol_fun,            _if_conditional84) {
                finalizer_65=protocol_fun;
                finalizer_65(protocol_obj);
            }
            finalizer_66=fun;
            finalizer_66(mem);
        }
    }
    else {
        ref_count_67=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional85=!no_decrement,        _if_conditional85) {
            (*ref_count_67)--;
        }
        count_68=*ref_count_67;
        if(_if_conditional86=!no_free&&(count_68<=0||force_delete_),        _if_conditional86) {
            if(mem) {
                if(_if_conditional88=protocol_obj&&protocol_fun,                _if_conditional88) {
                    finalizer_69=protocol_fun;
                    finalizer_69(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_70=fun;
                    finalizer_70(mem);
                }
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
void (*finalizer_71)(void*);
void (*finalizer_72)(void*);
unsigned long int* ref_count_73;
_Bool _if_conditional96;
unsigned long int count_74;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void (*finalizer_75)(void*);
_Bool _if_conditional100;
void (*finalizer_76)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_71, 0, sizeof(void (*)(void*)));
memset(&finalizer_72, 0, sizeof(void (*)(void*)));
memset(&ref_count_73, 0, sizeof(unsigned long int*));
memset(&count_74, 0, sizeof(unsigned long int));
memset(&finalizer_75, 0, sizeof(void (*)(void*)));
memset(&finalizer_76, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(_if_conditional91=mem==result_obj,        _if_conditional91) {
            return;
        }
    }
    if(_if_conditional92=mem==((void*)0),    _if_conditional92) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional95=protocol_obj&&protocol_fun,            _if_conditional95) {
                finalizer_71=protocol_fun;
                finalizer_71(protocol_obj);
            }
            finalizer_72=fun;
            finalizer_72(mem);
        }
    }
    else {
        ref_count_73=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional96=!no_decrement,        _if_conditional96) {
            (*ref_count_73)--;
        }
        count_74=*ref_count_73;
        if(_if_conditional97=!no_free&&(count_74<=0||force_delete_),        _if_conditional97) {
            if(mem) {
                if(_if_conditional99=protocol_obj&&protocol_fun,                _if_conditional99) {
                    finalizer_75=protocol_fun;
                    finalizer_75(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_76=fun;
                    finalizer_76(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional101;
char* __result57__;
int len_77;
void* right_value43;
char* result_78;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_77, 0, sizeof(int));
right_value43 = (void*)0;
memset(&result_78, 0, sizeof(char*));
    if(_if_conditional101=str==((void*)0),    _if_conditional101) {
        __result57__ = __result_obj__ = ((void*)0);
        return __result57__;
    }
    len_77=strlen(str)+1;
    result_78=(char*)come_increment_ref_count(((char*)(right_value43=(char*)come_calloc(1, sizeof(char)*(1*(len_77)), "libcomelang2.c", 935, "char"))));
    right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_78,str,len_77);
    __result58__ = __result_obj__ = result_78;
    result_78 = come_decrement_ref_count2(result_78, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result58__;
    result_78 = come_decrement_ref_count2(result_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_79;
int i_80;
_Bool _if_conditional102;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_79, 0, sizeof(_Bool));
memset(&i_80, 0, sizeof(int));
    found_79=(_Bool)0;
    for(    i_80=0;    i_80<len;    i_80++    ){
        if(_if_conditional102=array[i_80]==element,        _if_conditional102) {
            found_79=(_Bool)1;
            break;
        }
    }
    __result59__ = found_79;
    return __result59__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
void* right_value44;
char* __dec_obj12;
struct buffer* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
    self->size=128;
    __dec_obj12=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value44=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 960, "char"))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->buf[0]=0;
    self->len=0;
    __result60__ = __result_obj__ = self;
    come_call_finalizer2(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result60__;
    come_call_finalizer2(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional103=self&&self->buf,    _if_conditional103) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional104=self&&self->buf,    _if_conditional104) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional105;
struct buffer* __result61__;
void* right_value45;
struct buffer* result_81;
void* right_value46;
char* __dec_obj13;
struct buffer* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value45 = (void*)0;
memset(&result_81, 0, sizeof(struct buffer*));
right_value46 = (void*)0;
    if(_if_conditional105=self==((void*)0),    _if_conditional105) {
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    result_81=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value45=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 982, "buffer"))));
    come_call_finalizer2(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_81->size=self->size;
    __dec_obj13=result_81->buf;
    result_81->buf=(char*)come_increment_ref_count(((char*)(right_value46=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 985, "char"))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_81->len=self->len;
    memcpy(result_81->buf,self->buf,self->len);
    __result62__ = __result_obj__ = result_81;
    come_call_finalizer2(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result62__;
    come_call_finalizer2(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional106;
int __result63__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional106=self==((void*)0),    _if_conditional106) {
        __result63__ = 0;
        return __result63__;
    }
    __result64__ = self->len;
    return __result64__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional107;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional107=self==((void*)0),    _if_conditional107) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional108;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional108=self==((void*)0),    _if_conditional108) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool _if_conditional109;
struct buffer* __result65__;
_Bool _if_conditional110;
void* right_value47;
char* old_buf_82;
int old_len_83;
int new_size_84;
void* right_value48;
char* __dec_obj14;
struct buffer* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&old_buf_82, 0, sizeof(char*));
memset(&old_len_83, 0, sizeof(int));
memset(&new_size_84, 0, sizeof(int));
right_value48 = (void*)0;
    if(_if_conditional109=self==((void*)0)||mem==((void*)0),    _if_conditional109) {
        __result65__ = __result_obj__ = self;
        return __result65__;
    }
    if(_if_conditional110=self->len+size+1+1>=self->size,    _if_conditional110) {
        old_buf_82=(char*)come_increment_ref_count(((char*)(right_value47=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1024, "char"))));
        right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_82,self->buf,self->size);
        old_len_83=self->len;
        new_size_84=(self->size+size+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value48=(char*)come_calloc(1, sizeof(char)*(1*(new_size_84)), "libcomelang2.c", 1028, "char"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_82,old_len_83);
        self->buf[old_len_83]=0;
        self->size=new_size_84;
        old_buf_82 = come_decrement_ref_count2(old_buf_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result66__ = __result_obj__ = self;
    return __result66__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional111;
struct buffer* __result67__;
_Bool _if_conditional112;
void* right_value49;
char* old_buf_85;
int old_len_86;
int new_size_87;
void* right_value50;
char* __dec_obj15;
struct buffer* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
memset(&old_buf_85, 0, sizeof(char*));
memset(&old_len_86, 0, sizeof(int));
memset(&new_size_87, 0, sizeof(int));
right_value50 = (void*)0;
    if(_if_conditional111=self==((void*)0),    _if_conditional111) {
        __result67__ = __result_obj__ = ((void*)0);
        return __result67__;
    }
    if(_if_conditional112=self->len+1+1+1>=self->size,    _if_conditional112) {
        old_buf_85=(char*)come_increment_ref_count(((char*)(right_value49=charp_clone(self->buf))));
        right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        old_len_86=self->len;
        new_size_87=(self->size+10+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value50=(char*)come_calloc(1, sizeof(char)*(1*(new_size_87)), "libcomelang2.c", 1051, "char"))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_85,old_len_86);
        self->buf[old_len_86]=0;
        self->size=new_size_87;
        old_buf_85 = come_decrement_ref_count2(old_buf_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result68__ = __result_obj__ = self;
    return __result68__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional113;
struct buffer* __result69__;
int size_88;
_Bool _if_conditional114;
void* right_value51;
char* old_buf_89;
int old_len_90;
int new_size_91;
void* right_value52;
char* __dec_obj16;
struct buffer* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_88, 0, sizeof(int));
right_value51 = (void*)0;
memset(&old_buf_89, 0, sizeof(char*));
memset(&old_len_90, 0, sizeof(int));
memset(&new_size_91, 0, sizeof(int));
right_value52 = (void*)0;
    if(_if_conditional113=self==((void*)0)||mem==((void*)0),    _if_conditional113) {
        __result69__ = __result_obj__ = self;
        return __result69__;
    }
    size_88=strlen(mem);
    if(_if_conditional114=self->len+size_88+1+1>=self->size,    _if_conditional114) {
        old_buf_89=(char*)come_increment_ref_count(((char*)(right_value51=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1073, "char"))));
        right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_89,self->buf,self->size);
        old_len_90=self->len;
        new_size_91=(self->size+size_88+1)*2;
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value52=(char*)come_calloc(1, sizeof(char)*(1*(new_size_91)), "libcomelang2.c", 1077, "char"))));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_89,old_len_90);
        self->buf[old_len_90]=0;
        self->size=new_size_91;
        old_buf_89 = come_decrement_ref_count2(old_buf_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_88);
    self->len+=size_88;
    self->buf[self->len]=0;
    __result70__ = __result_obj__ = self;
    return __result70__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional115;
struct buffer* __result71__;
int size_92;
_Bool _if_conditional116;
void* right_value53;
char* old_buf_93;
int old_len_94;
int new_size_95;
void* right_value54;
char* __dec_obj17;
struct buffer* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_92, 0, sizeof(int));
right_value53 = (void*)0;
memset(&old_buf_93, 0, sizeof(char*));
memset(&old_len_94, 0, sizeof(int));
memset(&new_size_95, 0, sizeof(int));
right_value54 = (void*)0;
    if(_if_conditional115=self==((void*)0)||mem==((void*)0),    _if_conditional115) {
        __result71__ = __result_obj__ = self;
        return __result71__;
    }
    size_92=strlen(mem)+1;
    if(_if_conditional116=self->len+size_92+1+1+1>=self->size,    _if_conditional116) {
        old_buf_93=(char*)come_increment_ref_count(((char*)(right_value53=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1097, "char"))));
        right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_93,self->buf,self->size);
        old_len_94=self->len;
        new_size_95=(self->size+size_92+1)*2;
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value54=(char*)come_calloc(1, sizeof(char)*(1*(new_size_95)), "libcomelang2.c", 1101, "char"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_93,old_len_94);
        self->buf[old_len_94]=0;
        self->size=new_size_95;
        old_buf_93 = come_decrement_ref_count2(old_buf_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_92);
    self->len+=size_92;
    self->buf[self->len]=0;
    self->len++;
    __result72__ = __result_obj__ = self;
    return __result72__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional117;
struct buffer* __result73__;
int* mem_96;
int size_97;
_Bool _if_conditional118;
void* right_value55;
char* old_buf_98;
int old_len_99;
int new_size_100;
void* right_value56;
char* __dec_obj18;
struct buffer* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_96, 0, sizeof(int*));
memset(&size_97, 0, sizeof(int));
right_value55 = (void*)0;
memset(&old_buf_98, 0, sizeof(char*));
memset(&old_len_99, 0, sizeof(int));
memset(&new_size_100, 0, sizeof(int));
right_value56 = (void*)0;
    if(_if_conditional117=self==((void*)0),    _if_conditional117) {
        __result73__ = __result_obj__ = ((void*)0);
        return __result73__;
    }
    mem_96=&value;
    size_97=sizeof(int);
    if(_if_conditional118=self->len+size_97+1+1>=self->size,    _if_conditional118) {
        old_buf_98=(char*)come_increment_ref_count(((char*)(right_value55=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1124, "char"))));
        right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_98,self->buf,self->size);
        old_len_99=self->len;
        new_size_100=(self->size+size_97+1)*2;
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value56=(char*)come_calloc(1, sizeof(char)*(1*(new_size_100)), "libcomelang2.c", 1128, "char"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_98,old_len_99);
        self->buf[old_len_99]=0;
        self->size=new_size_100;
        old_buf_98 = come_decrement_ref_count2(old_buf_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_96,size_97);
    self->len+=size_97;
    self->buf[self->len]=0;
    __result74__ = __result_obj__ = self;
    return __result74__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_101;
int size_102;
_Bool _if_conditional119;
void* right_value57;
char* old_buf_103;
int old_len_104;
int new_size_105;
void* right_value58;
char* __dec_obj19;
struct buffer* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_101, 0, sizeof(long*));
memset(&size_102, 0, sizeof(int));
right_value57 = (void*)0;
memset(&old_buf_103, 0, sizeof(char*));
memset(&old_len_104, 0, sizeof(int));
memset(&new_size_105, 0, sizeof(int));
right_value58 = (void*)0;
    mem_101=&value;
    size_102=sizeof(long);
    if(_if_conditional119=self->len+size_102+1+1>=self->size,    _if_conditional119) {
        old_buf_103=(char*)come_increment_ref_count(((char*)(right_value57=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1147, "char"))));
        right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_103,self->buf,self->size);
        old_len_104=self->len;
        new_size_105=(self->size+size_102+1)*2;
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value58=(char*)come_calloc(1, sizeof(char)*(1*(new_size_105)), "libcomelang2.c", 1151, "char"))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_103,old_len_104);
        self->buf[old_len_104]=0;
        self->size=new_size_105;
        old_buf_103 = come_decrement_ref_count2(old_buf_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_101,size_102);
    self->len+=size_102;
    self->buf[self->len]=0;
    __result75__ = __result_obj__ = self;
    return __result75__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional120;
struct buffer* __result76__;
short short* mem_106;
int size_107;
_Bool _if_conditional121;
void* right_value59;
char* old_buf_108;
int old_len_109;
int new_size_110;
void* right_value60;
char* __dec_obj20;
struct buffer* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_106, 0, sizeof(short short*));
memset(&size_107, 0, sizeof(int));
right_value59 = (void*)0;
memset(&old_buf_108, 0, sizeof(char*));
memset(&old_len_109, 0, sizeof(int));
memset(&new_size_110, 0, sizeof(int));
right_value60 = (void*)0;
    if(_if_conditional120=self==((void*)0),    _if_conditional120) {
        __result76__ = __result_obj__ = ((void*)0);
        return __result76__;
    }
    mem_106=&value;
    size_107=sizeof(short short);
    if(_if_conditional121=self->len+size_107+1+1>=self->size,    _if_conditional121) {
        old_buf_108=(char*)come_increment_ref_count(((char*)(right_value59=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1174, "char"))));
        right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_108,self->buf,self->size);
        old_len_109=self->len;
        new_size_110=(self->size+size_107+1)*2;
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value60=(char*)come_calloc(1, sizeof(char)*(1*(new_size_110)), "libcomelang2.c", 1178, "char"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_108,old_len_109);
        self->buf[old_len_109]=0;
        self->size=new_size_110;
        old_buf_108 = come_decrement_ref_count2(old_buf_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_106,size_107);
    self->len+=size_107;
    self->buf[self->len]=0;
    __result77__ = __result_obj__ = self;
    return __result77__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional122;
struct buffer* __result78__;
int len_111;
_Bool _if_conditional123;
int new_size_112;
void* right_value61;
char* __dec_obj21;
int i_113;
struct buffer* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_111, 0, sizeof(int));
memset(&new_size_112, 0, sizeof(int));
right_value61 = (void*)0;
memset(&i_113, 0, sizeof(int));
    if(_if_conditional122=self==((void*)0),    _if_conditional122) {
        __result78__ = __result_obj__ = ((void*)0);
        return __result78__;
    }
    len_111=self->len;
    len_111=(len_111+3)&~3;
    if(_if_conditional123=len_111>=self->size,    _if_conditional123) {
        new_size_112=(self->size+1+1)*2;
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value61=(char*)come_calloc(1, sizeof(char)*(1*(new_size_112)), "libcomelang2.c", 1202, "char"))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->size=new_size_112;
    }
    for(    i_113=self->len;    i_113<len_111;    i_113++    ){
        self->buf[i_113]=0;
    }
    self->len=len_111;
    __result79__ = __result_obj__ = self;
    return __result79__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional124;
int __result80__;
_Bool _if_conditional125;
int __result81__;
_Bool _if_conditional126;
int __result82__;
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional124=left==((void*)0)&&right==((void*)0),    _if_conditional124) {
        __result80__ = 0;
        return __result80__;
    }
    else {
        if(_if_conditional125=left==((void*)0),        _if_conditional125) {
            __result81__ = -1;
            return __result81__;
        }
        else {
            if(_if_conditional126=right==((void*)0),            _if_conditional126) {
                __result82__ = 1;
                return __result82__;
            }
        }
    }
    __result83__ = strcmp(left->buf,right->buf);
    return __result83__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
void* right_value62;
void* right_value63;
struct buffer* result_114;
_Bool _if_conditional127;
struct buffer* __result84__;
struct buffer* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
right_value63 = (void*)0;
memset(&result_114, 0, sizeof(struct buffer*));
    result_114=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value63=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value62=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1232, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional127=self==((void*)0),    _if_conditional127) {
        __result84__ = __result_obj__ = result_114;
        come_call_finalizer2(buffer_finalize,result_114, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result84__;
    }
    buffer_append_str(result_114,self);
    __result85__ = __result_obj__ = result_114;
    come_call_finalizer2(buffer_finalize,result_114, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(buffer_finalize,result_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
void* right_value64;
void* right_value65;
struct buffer* result_115;
_Bool _if_conditional128;
struct buffer* __result86__;
struct buffer* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
right_value65 = (void*)0;
memset(&result_115, 0, sizeof(struct buffer*));
    result_115=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value65=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value64=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1245, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional128=self==((void*)0),    _if_conditional128) {
        __result86__ = __result_obj__ = result_115;
        come_call_finalizer2(buffer_finalize,result_115, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result86__;
    }
    buffer_append_str(result_115,self);
    __result87__ = __result_obj__ = result_115;
    come_call_finalizer2(buffer_finalize,result_115, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result87__;
    come_call_finalizer2(buffer_finalize,result_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional129;
void* right_value66;
char* __result88__;
void* right_value67;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value67 = (void*)0;
    if(_if_conditional129=self==((void*)0),    _if_conditional129) {
        __result88__ = __result_obj__ = ((char*)(right_value66=__builtin_string("")));
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result88__;
    }
    __result89__ = __result_obj__ = ((char*)(right_value67=__builtin_string(self->buf)));
    right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = self==right;
    return __result90__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    __result91__ = self==right;
    return __result91__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    __result92__ = self==right;
    return __result92__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    __result93__ = self==right;
    return __result93__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = self==right;
    return __result94__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = self==right;
    return __result95__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    __result96__ = self==right;
    return __result96__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = self==right;
    return __result97__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional130;
_Bool __result98__;
_Bool _if_conditional131;
_Bool __result99__;
_Bool _if_conditional132;
_Bool __result100__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional130=self==((void*)0)&&right==((void*)0),    _if_conditional130) {
        __result98__ = (_Bool)1;
        return __result98__;
    }
    else {
        if(_if_conditional131=self==((void*)0),        _if_conditional131) {
            __result99__ = (_Bool)0;
            return __result99__;
        }
        else {
            if(_if_conditional132=right==((void*)0),            _if_conditional132) {
                __result100__ = (_Bool)0;
                return __result100__;
            }
        }
    }
    __result101__ = strcmp(self,right)==0;
    return __result101__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional133;
_Bool __result102__;
_Bool _if_conditional134;
_Bool __result103__;
_Bool _if_conditional135;
_Bool __result104__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional133=self==((void*)0)&&right==((void*)0),    _if_conditional133) {
        __result102__ = (_Bool)1;
        return __result102__;
    }
    else {
        if(_if_conditional134=self==((void*)0),        _if_conditional134) {
            __result103__ = (_Bool)0;
            return __result103__;
        }
        else {
            if(_if_conditional135=right==((void*)0),            _if_conditional135) {
                __result104__ = (_Bool)0;
                return __result104__;
            }
        }
    }
    __result105__ = strcmp(self,right)==0;
    return __result105__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional136;
_Bool __result106__;
_Bool _if_conditional137;
_Bool __result107__;
_Bool _if_conditional138;
_Bool __result108__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional136=self==((void*)0)&&right==((void*)0),    _if_conditional136) {
        __result106__ = (_Bool)1;
        return __result106__;
    }
    else {
        if(_if_conditional137=self==((void*)0),        _if_conditional137) {
            __result107__ = (_Bool)0;
            return __result107__;
        }
        else {
            if(_if_conditional138=right==((void*)0),            _if_conditional138) {
                __result108__ = (_Bool)0;
                return __result108__;
            }
        }
    }
    __result109__ = strcmp(self,right)==0;
    return __result109__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional139;
_Bool __result110__;
_Bool _if_conditional140;
_Bool __result111__;
_Bool _if_conditional141;
_Bool __result112__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional139=self==((void*)0)&&right==((void*)0),    _if_conditional139) {
        __result110__ = (_Bool)1;
        return __result110__;
    }
    else {
        if(_if_conditional140=self==((void*)0),        _if_conditional140) {
            __result111__ = (_Bool)0;
            return __result111__;
        }
        else {
            if(_if_conditional141=right==((void*)0),            _if_conditional141) {
                __result112__ = (_Bool)0;
                return __result112__;
            }
        }
    }
    __result113__ = strcmp(self,right)==0;
    return __result113__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional142;
_Bool __result114__;
_Bool _if_conditional143;
_Bool __result115__;
_Bool _if_conditional144;
_Bool __result116__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional142=self==((void*)0)&&right==((void*)0),    _if_conditional142) {
        __result114__ = (_Bool)0;
        return __result114__;
    }
    else {
        if(_if_conditional143=self==((void*)0),        _if_conditional143) {
            __result115__ = (_Bool)1;
            return __result115__;
        }
        else {
            if(_if_conditional144=right==((void*)0),            _if_conditional144) {
                __result116__ = (_Bool)1;
                return __result116__;
            }
        }
    }
    __result117__ = strcmp(self,right)!=0;
    return __result117__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional145;
_Bool __result118__;
_Bool _if_conditional146;
_Bool __result119__;
_Bool _if_conditional147;
_Bool __result120__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional145=self==((void*)0)&&right==((void*)0),    _if_conditional145) {
        __result118__ = (_Bool)0;
        return __result118__;
    }
    else {
        if(_if_conditional146=self==((void*)0),        _if_conditional146) {
            __result119__ = (_Bool)1;
            return __result119__;
        }
        else {
            if(_if_conditional147=right==((void*)0),            _if_conditional147) {
                __result120__ = (_Bool)1;
                return __result120__;
            }
        }
    }
    __result121__ = strcmp(self,right)!=0;
    return __result121__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional148;
void* right_value68;
char* __result122__;
int len_116;
void* right_value69;
char* result_117;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&len_116, 0, sizeof(int));
right_value69 = (void*)0;
memset(&result_117, 0, sizeof(char*));
    if(_if_conditional148=self==((void*)0)||right==((void*)0),    _if_conditional148) {
        __result122__ = __result_obj__ = ((char*)(right_value68=__builtin_string("")));
        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result122__;
    }
    len_116=strlen(self)+strlen(right);
    result_117=(char*)come_increment_ref_count(((char*)(right_value69=(char*)come_calloc(1, sizeof(char)*(1*(len_116+1)), "libcomelang2.c", 1407, "char"))));
    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_117,self,len_116+1);
    strncat(result_117,right,len_116+1);
    __result123__ = __result_obj__ = result_117;
    result_117 = come_decrement_ref_count2(result_117, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result123__;
    result_117 = come_decrement_ref_count2(result_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional149;
void* right_value70;
char* __result124__;
int len_118;
void* right_value71;
char* result_119;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&len_118, 0, sizeof(int));
right_value71 = (void*)0;
memset(&result_119, 0, sizeof(char*));
    if(_if_conditional149=self==((void*)0)||right==((void*)0),    _if_conditional149) {
        __result124__ = __result_obj__ = ((char*)(right_value70=__builtin_string("")));
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result124__;
    }
    len_118=strlen(self)+strlen(right);
    result_119=(char*)come_increment_ref_count(((char*)(right_value71=(char*)come_calloc(1, sizeof(char)*(1*(len_118+1)), "libcomelang2.c", 1422, "char"))));
    right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_119,self,len_118+1);
    strncat(result_119,right,len_118+1);
    __result125__ = __result_obj__ = result_119;
    result_119 = come_decrement_ref_count2(result_119, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result125__;
    result_119 = come_decrement_ref_count2(result_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional150;
void* right_value72;
char* __result126__;
void* right_value73;
void* right_value74;
struct buffer* buf_120;
int i_121;
void* right_value75;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
memset(&buf_120, 0, sizeof(struct buffer*));
memset(&i_121, 0, sizeof(int));
right_value75 = (void*)0;
    if(_if_conditional150=self==((void*)0),    _if_conditional150) {
        __result126__ = __result_obj__ = ((char*)(right_value72=__builtin_string("")));
        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result126__;
    }
    buf_120=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value73=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1435, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_121=0;    i_121<right;    i_121++    ){
        buffer_append_str(buf_120,self);
    }
    __result127__ = __result_obj__ = ((char*)(right_value75=buffer_to_string(buf_120)));
    come_call_finalizer2(buffer_finalize,buf_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
    come_call_finalizer2(buffer_finalize,buf_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional151;
void* right_value76;
char* __result128__;
void* right_value77;
void* right_value78;
struct buffer* buf_122;
int i_123;
void* right_value79;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
memset(&buf_122, 0, sizeof(struct buffer*));
memset(&i_123, 0, sizeof(int));
right_value79 = (void*)0;
    if(_if_conditional151=self==((void*)0),    _if_conditional151) {
        __result128__ = __result_obj__ = ((char*)(right_value76=__builtin_string("")));
        right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result128__;
    }
    buf_122=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value78=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1449, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_123=0;    i_123<right;    i_123++    ){
        buffer_append_str(buf_122,self);
    }
    __result129__ = __result_obj__ = ((char*)(right_value79=buffer_to_string(buf_122)));
    come_call_finalizer2(buffer_finalize,buf_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
    come_call_finalizer2(buffer_finalize,buf_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = (int_get_hash_key(((int)value)));
    return __result130__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = value;
    return __result131__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    __result132__ = value;
    return __result132__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = value;
    return __result133__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    __result134__ = value;
    return __result134__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    __result135__ = value;
    return __result135__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = (unsigned int)value;
    return __result136__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    __result137__ = (unsigned int)value;
    return __result137__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional152;
unsigned int __result138__;
int result_124;
char* p_125;
_Bool _while_condtional1;
unsigned int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(int));
memset(&p_125, 0, sizeof(char*));
    if(_if_conditional152=value==((void*)0),    _if_conditional152) {
        __result138__ = 0;
        return __result138__;
    }
    result_124=0;
    p_125=value;
    while(_while_condtional1=*p_125,    _while_condtional1) {
        result_124+=(*p_125);
        p_125++;
    }
    __result139__ = result_124;
    return __result139__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional153;
unsigned int __result140__;
int result_126;
char* p_127;
_Bool _while_condtional2;
unsigned int __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(int));
memset(&p_127, 0, sizeof(char*));
    if(_if_conditional153=value==((void*)0),    _if_conditional153) {
        __result140__ = 0;
        return __result140__;
    }
    result_126=0;
    p_127=value;
    while(_while_condtional2=*p_127,    _while_condtional2) {
        result_126+=(*p_127);
        p_127++;
    }
    __result141__ = result_126;
    return __result141__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = self;
    return __result142__;
}

char char_clone(char self){
void* __result_obj__;
char __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = self;
    return __result143__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    __result144__ = self;
    return __result144__;
}

int int_clone(int self){
void* __result_obj__;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    __result145__ = self;
    return __result145__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    __result146__ = self;
    return __result146__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __result147__ = self;
    return __result147__;
}

double double_clone(double self){
void* __result_obj__;
double __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = self;
    return __result148__;
}

float float_clone(float self){
void* __result_obj__;
float __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = self;
    return __result149__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional154;
char* __result150__;
void* right_value80;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    if(_if_conditional154=self==((void*)0),    _if_conditional154) {
        __result150__ = __result_obj__ = ((void*)0);
        return __result150__;
    }
    __result151__ = __result_obj__ = ((char*)(right_value80=__builtin_string(self)));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional155;
char* __result152__;
void* right_value81;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    if(_if_conditional155=self==((void*)0),    _if_conditional155) {
        __result152__ = __result_obj__ = ((void*)0);
        return __result152__;
    }
    __result153__ = __result_obj__ = ((char*)(right_value81=__builtin_string(self)));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result153__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_128;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(_Bool));
    result_128=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result154__ = result_128;
    return __result154__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = c==32||c==9;
    return __result155__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = (c>=48&&c<=57);
    return __result156__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = xiswalpha(c)||xiswdigit(c);
    return __result157__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_129;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_129, 0, sizeof(_Bool));
    result_129=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result158__ = result_129;
    return __result158__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = c==32||c==9;
    return __result159__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    __result160__ = (c>=48&&c<=57);
    return __result160__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = xisalpha(c)||xisdigit(c);
    return __result161__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_130;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_130, 0, sizeof(_Bool));
    result_130=(c>=32&&c<=126);
    __result162__ = result_130;
    return __result162__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_131;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_131, 0, sizeof(_Bool));
    result_131=(c>=32&&c<=126);
    __result163__ = result_131;
    return __result163__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional156;
int __result164__;
int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional156=str==((void*)0),    _if_conditional156) {
        __result164__ = 0;
        return __result164__;
    }
    __result165__ = strlen(str);
    return __result165__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional157;
int __result166__;
int __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional157=str==((void*)0),    _if_conditional157) {
        __result166__ = 0;
        return __result166__;
    }
    __result167__ = strlen(str);
    return __result167__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional158;
void* right_value82;
char* __result168__;
int len_132;
void* right_value83;
char* result_133;
int i_134;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&len_132, 0, sizeof(int));
right_value83 = (void*)0;
memset(&result_133, 0, sizeof(char*));
memset(&i_134, 0, sizeof(int));
    if(_if_conditional158=str==((void*)0),    _if_conditional158) {
        __result168__ = __result_obj__ = ((char*)(right_value82=__builtin_string("")));
        right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result168__;
    }
    len_132=strlen(str);
    result_133=(char*)come_increment_ref_count(((char*)(right_value83=(char*)come_calloc(1, sizeof(char)*(1*(len_132+1)), "libcomelang2.c", 1666, "char"))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_134=0;    i_134<len_132;    i_134++    ){
        result_133[i_134]=str[len_132-i_134-1];
    }
    result_133[len_132]=0;
    __result169__ = __result_obj__ = result_133;
    result_133 = come_decrement_ref_count2(result_133, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result169__;
    result_133 = come_decrement_ref_count2(result_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional159;
void* right_value84;
char* __result170__;
int len_135;
void* right_value85;
char* result_136;
int i_137;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&len_135, 0, sizeof(int));
right_value85 = (void*)0;
memset(&result_136, 0, sizeof(char*));
memset(&i_137, 0, sizeof(int));
    if(_if_conditional159=str==((void*)0),    _if_conditional159) {
        __result170__ = __result_obj__ = ((char*)(right_value84=__builtin_string("")));
        right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result170__;
    }
    len_135=strlen(str);
    result_136=(char*)come_increment_ref_count(((char*)(right_value85=(char*)come_calloc(1, sizeof(char)*(1*(len_135+1)), "libcomelang2.c", 1683, "char"))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_137=0;    i_137<len_135;    i_137++    ){
        result_136[i_137]=str[len_135-i_137-1];
    }
    result_136[len_135]=0;
    __result171__ = __result_obj__ = result_136;
    result_136 = come_decrement_ref_count2(result_136, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result171__;
    result_136 = come_decrement_ref_count2(result_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value86;
char* __result172__;
int len_138;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value87;
void* right_value88;
char* __result173__;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value89;
char* __result174__;
_Bool _if_conditional167;
void* right_value90;
char* __result175__;
void* right_value91;
char* result_139;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&len_138, 0, sizeof(int));
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&result_139, 0, sizeof(char*));
    if(_if_conditional160=str==((void*)0),    _if_conditional160) {
        __result172__ = __result_obj__ = ((char*)(right_value86=__builtin_string("")));
        right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result172__;
    }
    len_138=strlen(str);
    if(_if_conditional161=head<0,    _if_conditional161) {
        head+=len_138;
    }
    if(_if_conditional162=tail<0,    _if_conditional162) {
        tail+=len_138+1;
    }
    if(_if_conditional163=head>tail,    _if_conditional163) {
        __result173__ = __result_obj__ = ((char*)(right_value88=string_reverse(((char*)(right_value87=charp_substring(str,tail,head))))));
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result173__;
    }
    if(_if_conditional164=head<0,    _if_conditional164) {
        head=0;
    }
    if(_if_conditional165=tail>=len_138,    _if_conditional165) {
        tail=len_138;
    }
    if(_if_conditional166=head==tail,    _if_conditional166) {
        __result174__ = __result_obj__ = ((char*)(right_value89=__builtin_string("")));
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result174__;
    }
    if(_if_conditional167=tail-head+1<1,    _if_conditional167) {
        __result175__ = __result_obj__ = ((char*)(right_value90=__builtin_string("")));
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result175__;
    }
    result_139=(char*)come_increment_ref_count(((char*)(right_value91=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1728, "char"))));
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_139,str+head,tail-head);
    result_139[tail-head]=0;
    __result176__ = __result_obj__ = result_139;
    result_139 = come_decrement_ref_count2(result_139, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result176__;
    result_139 = come_decrement_ref_count2(result_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional168;
void* right_value92;
char* __result177__;
int len_140;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
void* right_value93;
void* right_value94;
char* __result178__;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value95;
char* __result179__;
_Bool _if_conditional175;
void* right_value96;
char* __result180__;
void* right_value97;
char* result_141;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&len_140, 0, sizeof(int));
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_141, 0, sizeof(char*));
    if(_if_conditional168=str==((void*)0),    _if_conditional168) {
        __result177__ = __result_obj__ = ((char*)(right_value92=__builtin_string("")));
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result177__;
    }
    len_140=strlen(str);
    if(_if_conditional169=head<0,    _if_conditional169) {
        head+=len_140;
    }
    if(_if_conditional170=tail<0,    _if_conditional170) {
        tail+=len_140+1;
    }
    if(_if_conditional171=head>tail,    _if_conditional171) {
        __result178__ = __result_obj__ = ((char*)(right_value94=string_reverse(((char*)(right_value93=charp_substring(str,tail,head))))));
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result178__;
    }
    if(_if_conditional172=head<0,    _if_conditional172) {
        head=0;
    }
    if(_if_conditional173=tail>=len_140,    _if_conditional173) {
        tail=len_140;
    }
    if(_if_conditional174=head==tail,    _if_conditional174) {
        __result179__ = __result_obj__ = ((char*)(right_value95=__builtin_string("")));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result179__;
    }
    if(_if_conditional175=tail-head+1<1,    _if_conditional175) {
        __result180__ = __result_obj__ = ((char*)(right_value96=__builtin_string("")));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result180__;
    }
    result_141=(char*)come_increment_ref_count(((char*)(right_value97=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1771, "char"))));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_141,str+head,tail-head);
    result_141[tail-head]=0;
    __result181__ = __result_obj__ = result_141;
    result_141 = come_decrement_ref_count2(result_141, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result181__;
    result_141 = come_decrement_ref_count2(result_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional176;
void* right_value98;
char* __result182__;
int len_142;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value99;
void* right_value100;
char* __result183__;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value101;
char* __result184__;
_Bool _if_conditional183;
void* right_value102;
char* __result185__;
void* right_value103;
char* result_143;
char* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&len_142, 0, sizeof(int));
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_143, 0, sizeof(char*));
    if(_if_conditional176=str==((void*)0),    _if_conditional176) {
        __result182__ = __result_obj__ = ((char*)(right_value98=__builtin_string("")));
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result182__;
    }
    len_142=strlen(str);
    if(_if_conditional177=head<0,    _if_conditional177) {
        head+=len_142;
    }
    if(_if_conditional178=tail<0,    _if_conditional178) {
        tail+=len_142+1;
    }
    if(_if_conditional179=head>tail,    _if_conditional179) {
        __result183__ = __result_obj__ = ((char*)(right_value100=string_reverse(((char*)(right_value99=charp_substring(str,tail,head))))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result183__;
    }
    if(_if_conditional180=head<0,    _if_conditional180) {
        head=0;
    }
    if(_if_conditional181=tail>=len_142,    _if_conditional181) {
        tail=len_142;
    }
    if(_if_conditional182=head==tail,    _if_conditional182) {
        __result184__ = __result_obj__ = ((char*)(right_value101=__builtin_string("")));
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result184__;
    }
    if(_if_conditional183=tail-head+1<1,    _if_conditional183) {
        __result185__ = __result_obj__ = ((char*)(right_value102=__builtin_string("")));
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result185__;
    }
    result_143=(char*)come_increment_ref_count(((char*)(right_value103=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1814, "char"))));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_143,str+head,tail-head);
    result_143[tail-head]=0;
    __result186__ = __result_obj__ = result_143;
    result_143 = come_decrement_ref_count2(result_143, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result186__;
    result_143 = come_decrement_ref_count2(result_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional184;
void* right_value104;
char* __result187__;
int len_144;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value105;
void* right_value106;
char* __result188__;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value107;
char* __result189__;
_Bool _if_conditional191;
void* right_value108;
char* __result190__;
void* right_value109;
char* result_145;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&len_144, 0, sizeof(int));
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&result_145, 0, sizeof(char*));
    if(_if_conditional184=str==((void*)0),    _if_conditional184) {
        __result187__ = __result_obj__ = ((char*)(right_value104=__builtin_string("")));
        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result187__;
    }
    len_144=strlen(str);
    if(_if_conditional185=head<0,    _if_conditional185) {
        head+=len_144;
    }
    if(_if_conditional186=tail<0,    _if_conditional186) {
        tail+=len_144+1;
    }
    if(_if_conditional187=head>tail,    _if_conditional187) {
        __result188__ = __result_obj__ = ((char*)(right_value106=string_reverse(((char*)(right_value105=charp_substring(str,tail,head))))));
        right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result188__;
    }
    if(_if_conditional188=head<0,    _if_conditional188) {
        head=0;
    }
    if(_if_conditional189=tail>=len_144,    _if_conditional189) {
        tail=len_144;
    }
    if(_if_conditional190=head==tail,    _if_conditional190) {
        __result189__ = __result_obj__ = ((char*)(right_value107=__builtin_string("")));
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result189__;
    }
    if(_if_conditional191=tail-head+1<1,    _if_conditional191) {
        __result190__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result190__;
    }
    result_145=(char*)come_increment_ref_count(((char*)(right_value109=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1857, "char"))));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_145,str+head,tail-head);
    result_145[tail-head]=0;
    __result191__ = __result_obj__ = result_145;
    result_145 = come_decrement_ref_count2(result_145, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result191__;
    result_145 = come_decrement_ref_count2(result_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional192;
void* right_value110;
char* __result192__;
va_list args_146;
char* result_147;
int len_148;
_Bool _if_conditional193;
void* right_value111;
char* __result193__;
void* right_value112;
char* result2_149;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&args_146, 0, sizeof(va_list));
memset(&result_147, 0, sizeof(char*));
memset(&len_148, 0, sizeof(int));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&result2_149, 0, sizeof(char*));
    if(_if_conditional192=msg==((void*)0),    _if_conditional192) {
        __result192__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result192__;
    }
    __builtin_va_start(args_146,msg);
    len_148=vasprintf(&result_147,msg,args_146);
    __builtin_va_end(args_146);
    if(_if_conditional193=len_148<0,    _if_conditional193) {
        __result193__ = __result_obj__ = ((char*)(right_value111=__builtin_string("")));
        come_call_finalizer2(va_list_finalize,(&args_146), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result193__;
    }
    result2_149=(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string(result_147))));
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(result_147);
    __result194__ = __result_obj__ = result2_149;
    come_call_finalizer2(va_list_finalize,(&args_146), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    result2_149 = come_decrement_ref_count2(result2_149, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result194__;
    come_call_finalizer2(va_list_finalize,(&args_146), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    result2_149 = come_decrement_ref_count2(result2_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional194;
void* right_value113;
char* __result195__;
int len_150;
_Bool _if_conditional195;
void* right_value114;
char* __result196__;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value115;
char* __result197__;
_Bool _if_conditional200;
void* right_value116;
char* sub_str_151;
void* right_value117;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&len_150, 0, sizeof(int));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&sub_str_151, 0, sizeof(char*));
right_value117 = (void*)0;
    if(_if_conditional194=str==((void*)0),    _if_conditional194) {
        __result195__ = __result_obj__ = ((char*)(right_value113=__builtin_string("")));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result195__;
    }
    len_150=strlen(str);
    if(_if_conditional195=strcmp(str,"")==0,    _if_conditional195) {
        __result196__ = __result_obj__ = ((char*)(right_value114=__builtin_string(str)));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result196__;
    }
    if(_if_conditional196=head<0,    _if_conditional196) {
        head+=len_150;
    }
    if(_if_conditional197=tail<0,    _if_conditional197) {
        tail+=len_150+1;
    }
    if(_if_conditional198=head<0,    _if_conditional198) {
        head=0;
    }
    if(_if_conditional199=tail<0,    _if_conditional199) {
        __result197__ = __result_obj__ = ((char*)(right_value115=__builtin_string(str)));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result197__;
    }
    if(_if_conditional200=tail>=len_150,    _if_conditional200) {
        tail=len_150;
    }
    sub_str_151=(char*)come_increment_ref_count(((char*)(right_value116=charp_substring(str,tail,-1))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_151,string_length(sub_str_151)+1);
    __result198__ = __result_obj__ = ((char*)(right_value117=__builtin_string(str)));
    sub_str_151 = come_decrement_ref_count2(sub_str_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result198__;
    sub_str_151 = come_decrement_ref_count2(sub_str_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional201;
void* right_value118;
char* __result199__;
int len_152;
_Bool _if_conditional202;
void* right_value119;
char* __result200__;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value120;
char* __result201__;
_Bool _if_conditional207;
void* right_value121;
char* sub_str_153;
void* right_value122;
char* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&len_152, 0, sizeof(int));
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&sub_str_153, 0, sizeof(char*));
right_value122 = (void*)0;
    if(_if_conditional201=str==((void*)0),    _if_conditional201) {
        __result199__ = __result_obj__ = ((char*)(right_value118=__builtin_string("")));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result199__;
    }
    len_152=strlen(str);
    if(_if_conditional202=strcmp(str,"")==0,    _if_conditional202) {
        __result200__ = __result_obj__ = ((char*)(right_value119=__builtin_string(str)));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result200__;
    }
    if(_if_conditional203=head<0,    _if_conditional203) {
        head+=len_152;
    }
    if(_if_conditional204=tail<0,    _if_conditional204) {
        tail+=len_152+1;
    }
    if(_if_conditional205=head<0,    _if_conditional205) {
        head=0;
    }
    if(_if_conditional206=tail<0,    _if_conditional206) {
        __result201__ = __result_obj__ = ((char*)(right_value120=__builtin_string(str)));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result201__;
    }
    if(_if_conditional207=tail>=len_152,    _if_conditional207) {
        tail=len_152;
    }
    sub_str_153=(char*)come_increment_ref_count(((char*)(right_value121=charp_substring(str,tail,-1))));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_153,string_length(sub_str_153)+1);
    __result202__ = __result_obj__ = ((char*)(right_value122=__builtin_string(str)));
    sub_str_153 = come_decrement_ref_count2(sub_str_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result202__;
    sub_str_153 = come_decrement_ref_count2(sub_str_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional208;
void* right_value123;
void* right_value124;
struct list$1charph* __result204__;
void* right_value125;
void* right_value126;
struct list$1charph* result_156;
void* right_value127;
void* right_value128;
struct buffer* str_157;
int i_158;
_Bool _if_conditional210;
void* right_value132;
_Bool _if_conditional213;
void* right_value133;
struct list$1charph* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&result_156, 0, sizeof(struct list$1charph*));
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&str_157, 0, sizeof(struct buffer*));
memset(&i_158, 0, sizeof(int));
right_value132 = (void*)0;
right_value133 = (void*)0;
    if(_if_conditional208=self==((void*)0),    _if_conditional208) {
        __result204__ = __result_obj__ = ((struct list$1charph*)(right_value124=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1968, "list$1charph")))))));
        come_call_finalizer2(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        return __result204__;
    }
    result_156=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value125=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1971, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    str_157=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value128=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value127=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1973, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_158=0;    i_158<charp_length(self);    i_158++    ){
        if(_if_conditional210=self[i_158]==c,        _if_conditional210) {
            list$1charph_push_back(result_156,(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(str_157->buf)))));
            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_157);
        }
        else {
            buffer_append_char(str_157,self[i_158]);
        }
    }
    if(_if_conditional213=buffer_length(str_157)!=0,    _if_conditional213) {
        list$1charph_push_back(result_156,(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(str_157->buf)))));
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result206__ = __result_obj__ = result_156;
    come_call_finalizer2(list$1charphp_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result206__;
    come_call_finalizer2(list$1charphp_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result203__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result203__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_154;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_155;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_154, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_155, 0, sizeof(struct list_item$1charph*));
                it_154=self->head;
                while(_while_condtional3=it_154!=((void*)0),                _while_condtional3) {
                    prev_it_155=it_154;
                    it_154=it_154->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional209=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional209) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional211;
void* right_value129;
struct list_item$1charph* litem_159;
char* __dec_obj22;
_Bool _if_conditional212;
void* right_value130;
struct list_item$1charph* litem_160;
char* __dec_obj23;
void* right_value131;
struct list_item$1charph* litem_161;
char* __dec_obj24;
struct list$1charph* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1charph*));
right_value130 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1charph*));
right_value131 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional211=self->len==0,                _if_conditional211) {
                    litem_159=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value129=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_159->prev=((void*)0);
                    litem_159->next=((void*)0);
                    __dec_obj22=litem_159->item;
                    litem_159->item=(char*)come_increment_ref_count(item);
                    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_159;
                    self->head=litem_159;
                }
                else {
                    if(_if_conditional212=self->len==1,                    _if_conditional212) {
                        litem_160=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value130=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_160->prev=self->head;
                        litem_160->next=((void*)0);
                        __dec_obj23=litem_160->item;
                        litem_160->item=(char*)come_increment_ref_count(item);
                        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_160;
                        self->head->next=litem_160;
                    }
                    else {
                        litem_161=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value131=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_161->prev=self->tail;
                        litem_161->next=((void*)0);
                        __dec_obj24=litem_161->item;
                        litem_161->item=(char*)come_increment_ref_count(item);
                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_161;
                        self->tail=litem_161;
                    }
                }
                self->len++;
                __result205__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result205__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional214;
void* right_value134;
void* right_value135;
struct list$1charph* __result207__;
void* right_value136;
void* right_value137;
struct list$1charph* result_162;
void* right_value138;
void* right_value139;
struct buffer* str_163;
int i_164;
_Bool _if_conditional215;
void* right_value140;
_Bool _if_conditional216;
void* right_value141;
struct list$1charph* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&result_162, 0, sizeof(struct list$1charph*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&str_163, 0, sizeof(struct buffer*));
memset(&i_164, 0, sizeof(int));
right_value140 = (void*)0;
right_value141 = (void*)0;
    if(_if_conditional214=self==((void*)0),    _if_conditional214) {
        __result207__ = __result_obj__ = ((struct list$1charph*)(right_value135=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1994, "list$1charph")))))));
        come_call_finalizer2(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        return __result207__;
    }
    result_162=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value137=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1997, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    str_163=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value139=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value138=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1999, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_164=0;    i_164<charp_length(self);    i_164++    ){
        if(_if_conditional215=self[i_164]==c,        _if_conditional215) {
            list$1charph_push_back(result_162,(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(str_163->buf)))));
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_163);
        }
        else {
            buffer_append_char(str_163,self[i_164]);
        }
    }
    if(_if_conditional216=buffer_length(str_163)!=0,    _if_conditional216) {
        list$1charph_push_back(result_162,(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(str_163->buf)))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result208__ = __result_obj__ = result_162;
    come_call_finalizer2(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result208__;
    come_call_finalizer2(list$1charphp_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional217;
void* right_value142;
char* __result209__;
char* p_165;
_Bool _while_condtional4;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value143;
char* __result210__;
void* right_value144;
char* __result211__;
void* right_value145;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&p_165, 0, sizeof(char*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
    if(_if_conditional217=path==((void*)0),    _if_conditional217) {
        __result209__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result209__;
    }
    p_165=path+strlen(path);
    while(_while_condtional4=p_165>=path,    _while_condtional4) {
        if(_if_conditional218=*p_165==47,        _if_conditional218) {
            break;
        }
        else {
            p_165--;
        }
    }
    if(_if_conditional219=p_165<path,    _if_conditional219) {
        __result210__ = __result_obj__ = ((char*)(right_value143=__builtin_string(path)));
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result210__;
    }
    else {
        __result211__ = __result_obj__ = ((char*)(right_value144=__builtin_string(p_165+1)));
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result211__;
    }
    __result212__ = __result_obj__ = ((char*)(right_value145=__builtin_string("")));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result212__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional220;
void* right_value146;
char* __result213__;
void* right_value147;
void* right_value148;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    if(_if_conditional220=path==((void*)0),    _if_conditional220) {
        __result213__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result213__;
    }
    __result214__ = __result_obj__ = ((char*)(right_value148=__builtin_string(dirname(((char*)(right_value147=__builtin_string(path)))))));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result214__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional221;
void* right_value149;
char* __result215__;
void* right_value150;
char* path2_166;
char* p_167;
_Bool _while_condtional5;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value151;
char* __result216__;
void* right_value152;
char* __result217__;
void* right_value153;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&path2_166, 0, sizeof(char*));
memset(&p_167, 0, sizeof(char*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
    if(_if_conditional221=path==((void*)0),    _if_conditional221) {
        __result215__ = __result_obj__ = ((char*)(right_value149=__builtin_string("")));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result215__;
    }
    path2_166=(char*)come_increment_ref_count(((char*)(right_value150=xbasename(path))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    p_167=path2_166+strlen(path2_166);
    while(_while_condtional5=p_167>=path2_166,    _while_condtional5) {
        if(_if_conditional222=*p_167==46,        _if_conditional222) {
            break;
        }
        else {
            p_167--;
        }
    }
    if(_if_conditional223=p_167<path2_166,    _if_conditional223) {
        __result216__ = __result_obj__ = ((char*)(right_value151=__builtin_string(path2_166)));
        path2_166 = come_decrement_ref_count2(path2_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result216__;
    }
    else {
        __result217__ = __result_obj__ = ((char*)(right_value152=string_substring(path2_166,0,p_167-path2_166)));
        path2_166 = come_decrement_ref_count2(path2_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result217__;
    }
    __result218__ = __result_obj__ = ((char*)(right_value153=__builtin_string("")));
    path2_166 = come_decrement_ref_count2(path2_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result218__;
    path2_166 = come_decrement_ref_count2(path2_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional224;
void* right_value154;
char* __result219__;
char* p_168;
_Bool _while_condtional6;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value155;
char* __result220__;
void* right_value156;
char* __result221__;
void* right_value157;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
memset(&p_168, 0, sizeof(char*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
    if(_if_conditional224=path==((void*)0),    _if_conditional224) {
        __result219__ = __result_obj__ = ((char*)(right_value154=__builtin_string("")));
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result219__;
    }
    p_168=path+strlen(path);
    while(_while_condtional6=p_168>=path,    _while_condtional6) {
        if(_if_conditional225=*p_168==46,        _if_conditional225) {
            break;
        }
        else {
            p_168--;
        }
    }
    if(_if_conditional226=p_168<path,    _if_conditional226) {
        __result220__ = __result_obj__ = ((char*)(right_value155=__builtin_string(path)));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result220__;
    }
    else {
        __result221__ = __result_obj__ = ((char*)(right_value156=__builtin_string(p_168+1)));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result221__;
    }
    __result222__ = __result_obj__ = ((char*)(right_value157=__builtin_string("")));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result222__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional227;
void* right_value158;
char* __result223__;
char* result_169;
void* right_value159;
char* result2_170;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
memset(&result_169, 0, sizeof(char*));
right_value159 = (void*)0;
memset(&result2_170, 0, sizeof(char*));
    if(_if_conditional227=path==((void*)0),    _if_conditional227) {
        __result223__ = __result_obj__ = ((char*)(right_value158=__builtin_string("")));
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result223__;
    }
    result_169=realpath(path,((void*)0));
    result2_170=(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string(result_169))));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(result_169);
    __result224__ = __result_obj__ = result2_170;
    result2_170 = come_decrement_ref_count2(result2_170, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result224__;
    result2_170 = come_decrement_ref_count2(result2_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional228;
void* right_value160;
char* __result225__;
void* right_value161;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
right_value161 = (void*)0;
    if(self) {
        __result225__ = __result_obj__ = ((char*)(right_value160=__builtin_string("true")));
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result225__;
    }
    else {
        __result226__ = __result_obj__ = ((char*)(right_value161=__builtin_string("false")));
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result226__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
void* right_value162;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    __result227__ = __result_obj__ = ((char*)(right_value162=xsprintf("%c",self)));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result227__;
}

char* short_to_string(short short self){
void* __result_obj__;
void* right_value163;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    __result228__ = __result_obj__ = ((char*)(right_value163=xsprintf("%d",self)));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
}

char* int_to_string(int self){
void* __result_obj__;
void* right_value164;
char* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    __result229__ = __result_obj__ = ((char*)(right_value164=xsprintf("%d",self)));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result229__;
}

char* long_to_string(long self){
void* __result_obj__;
void* right_value165;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    __result230__ = __result_obj__ = ((char*)(right_value165=xsprintf("%ld",self)));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result230__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
void* right_value166;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    __result231__ = __result_obj__ = ((char*)(right_value166=xsprintf("%ld",self)));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result231__;
}

char* float_to_string(float self){
void* __result_obj__;
void* right_value167;
char* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    __result232__ = __result_obj__ = ((char*)(right_value167=xsprintf("%f",self)));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result232__;
}

char* double_to_string(double self){
void* __result_obj__;
void* right_value168;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
    __result233__ = __result_obj__ = ((char*)(right_value168=xsprintf("%lf",self)));
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result233__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional229;
void* right_value169;
char* __result234__;
void* right_value170;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
right_value170 = (void*)0;
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        __result234__ = __result_obj__ = ((char*)(right_value169=__builtin_string("")));
        right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result234__;
    }
    __result235__ = __result_obj__ = ((char*)(right_value170=__builtin_string(self)));
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result235__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional230;
void* right_value171;
char* __result236__;
void* right_value172;
char* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
right_value172 = (void*)0;
    if(_if_conditional230=self==((void*)0),    _if_conditional230) {
        __result236__ = __result_obj__ = ((char*)(right_value171=__builtin_string("")));
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result236__;
    }
    __result237__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self)));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result237__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional231;
int __result238__;
_Bool _if_conditional232;
int __result239__;
_Bool _if_conditional233;
int __result240__;
int __result241__;
int __result242__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional231=!left&&right,    _if_conditional231) {
        __result238__ = -1;
        return __result238__;
    }
    else {
        if(_if_conditional232=left&&right,        _if_conditional232) {
            __result239__ = 0;
            return __result239__;
        }
        else {
            if(_if_conditional233=!left&&!right,            _if_conditional233) {
                __result240__ = 0;
                return __result240__;
            }
            else {
                __result241__ = 1;
                return __result241__;
            }
        }
    }
    __result242__ = 0;
    return __result242__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional234;
int __result243__;
_Bool _if_conditional235;
int __result244__;
int __result245__;
int __result246__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional234=left<right,    _if_conditional234) {
        __result243__ = -1;
        return __result243__;
    }
    else {
        if(_if_conditional235=left>right,        _if_conditional235) {
            __result244__ = 1;
            return __result244__;
        }
        else {
            __result245__ = 0;
            return __result245__;
        }
    }
    __result246__ = 0;
    return __result246__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional236;
int __result247__;
_Bool _if_conditional237;
int __result248__;
int __result249__;
int __result250__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional236=left<right,    _if_conditional236) {
        __result247__ = -1;
        return __result247__;
    }
    else {
        if(_if_conditional237=left>right,        _if_conditional237) {
            __result248__ = 1;
            return __result248__;
        }
        else {
            __result249__ = 0;
            return __result249__;
        }
    }
    __result250__ = 0;
    return __result250__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional238;
int __result251__;
_Bool _if_conditional239;
int __result252__;
int __result253__;
int __result254__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional238=left<right,    _if_conditional238) {
        __result251__ = -1;
        return __result251__;
    }
    else {
        if(_if_conditional239=left>right,        _if_conditional239) {
            __result252__ = 1;
            return __result252__;
        }
        else {
            __result253__ = 0;
            return __result253__;
        }
    }
    __result254__ = 0;
    return __result254__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional240;
int __result255__;
_Bool _if_conditional241;
int __result256__;
int __result257__;
int __result258__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional240=left<right,    _if_conditional240) {
        __result255__ = -1;
        return __result255__;
    }
    else {
        if(_if_conditional241=left>right,        _if_conditional241) {
            __result256__ = 1;
            return __result256__;
        }
        else {
            __result257__ = 0;
            return __result257__;
        }
    }
    __result258__ = 0;
    return __result258__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool _if_conditional242;
int __result259__;
_Bool _if_conditional243;
int __result260__;
int __result261__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional242=left<right,    _if_conditional242) {
        __result259__ = -1;
        return __result259__;
    }
    else {
        if(_if_conditional243=left>right,        _if_conditional243) {
            __result260__ = 1;
            return __result260__;
        }
        else {
            __result261__ = 0;
            return __result261__;
        }
    }
    __result262__ = 0;
    return __result262__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional244;
int __result263__;
_Bool _if_conditional245;
int __result264__;
int __result265__;
int __result266__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional244=left<right,    _if_conditional244) {
        __result263__ = -1;
        return __result263__;
    }
    else {
        if(_if_conditional245=left>right,        _if_conditional245) {
            __result264__ = 1;
            return __result264__;
        }
        else {
            __result265__ = 0;
            return __result265__;
        }
    }
    __result266__ = 0;
    return __result266__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional246;
int __result267__;
_Bool _if_conditional247;
int __result268__;
int __result269__;
int __result270__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional246=left<right,    _if_conditional246) {
        __result267__ = -1;
        return __result267__;
    }
    else {
        if(_if_conditional247=left>right,        _if_conditional247) {
            __result268__ = 1;
            return __result268__;
        }
        else {
            __result269__ = 0;
            return __result269__;
        }
    }
    __result270__ = 0;
    return __result270__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional248;
int __result271__;
_Bool _if_conditional249;
int __result272__;
_Bool _if_conditional250;
int __result273__;
int __result274__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional248=left==((void*)0)&&right==((void*)0),    _if_conditional248) {
        __result271__ = 0;
        return __result271__;
    }
    else {
        if(_if_conditional249=left==((void*)0),        _if_conditional249) {
            __result272__ = -1;
            return __result272__;
        }
        else {
            if(_if_conditional250=right==((void*)0),            _if_conditional250) {
                __result273__ = 1;
                return __result273__;
            }
        }
    }
    __result274__ = strcmp(left,right);
    return __result274__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional251;
int __result275__;
_Bool _if_conditional252;
int __result276__;
_Bool _if_conditional253;
int __result277__;
int __result278__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional251=left==((void*)0)&&right==((void*)0),    _if_conditional251) {
        __result275__ = 0;
        return __result275__;
    }
    else {
        if(_if_conditional252=left==((void*)0),        _if_conditional252) {
            __result276__ = -1;
            return __result276__;
        }
        else {
            if(_if_conditional253=right==((void*)0),            _if_conditional253) {
                __result277__ = 1;
                return __result277__;
            }
        }
    }
    __result278__ = strcmp(left,right);
    return __result278__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional254;
void* right_value173;
char* __result279__;
void* right_value174;
void* right_value175;
struct buffer* buf_171;
_Bool _while_condtional7;
int size_173;
_Bool _if_conditional255;
void* right_value176;
char* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&buf_171, 0, sizeof(struct buffer*));
memset(&size_173, 0, sizeof(int));
right_value176 = (void*)0;
    if(_if_conditional254=f==((void*)0),    _if_conditional254) {
        __result279__ = __result_obj__ = ((char*)(right_value173=__builtin_string("")));
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result279__;
    }
    buf_171=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value175=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2350, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional7=1,    _while_condtional7) {
        char buf2_172[1024];
        memset(&buf2_172, 0, sizeof(char)        *(1024)        );
        size_173=fread(buf2_172,1,1024,f);
        buffer_append(buf_171,buf2_172,size_173);
        if(_if_conditional255=size_173<1024,        _if_conditional255) {
            break;
        }
    }
    __result280__ = __result_obj__ = ((char*)(right_value176=buffer_to_string(buf_171)));
    come_call_finalizer2(buffer_finalize,buf_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result280__;
    come_call_finalizer2(buffer_finalize,buf_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional256;
int __result281__;
int __result282__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional256=f==((void*)0)||str==((void*)0),    _if_conditional256) {
        __result281__ = -1;
        return __result281__;
    }
    __result282__ = fwrite(str,strlen(str),1,f);
    return __result282__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional257;
int __result283__;
int result_174;
_Bool _if_conditional258;
int __result284__;
int __result285__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_174, 0, sizeof(int));
    if(_if_conditional257=f==((void*)0),    _if_conditional257) {
        __result283__ = -1;
        return __result283__;
    }
    result_174=fclose(f);
    if(_if_conditional258=result_174<0,    _if_conditional258) {
        __result284__ = result_174;
        return __result284__;
    }
    __result285__ = result_174;
    return __result285__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional259;
struct _IO_FILE* __result286__;
va_list args_176;
int result_177;
_Bool _if_conditional260;
struct _IO_FILE* __result287__;
struct _IO_FILE* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_176, 0, sizeof(va_list));
memset(&result_177, 0, sizeof(int));
    if(_if_conditional259=f==((void*)0)||msg==((void*)0),    _if_conditional259) {
        __result286__ = __result_obj__ = f;
        return __result286__;
    }
    char msg2_175[1024*2*2*2];
    memset(&msg2_175, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_176,msg);
    vsnprintf(msg2_175,1024*2*2*2,msg,args_176);
    __builtin_va_end(args_176);
    result_177=fprintf(f,"%s",msg2_175);
    if(_if_conditional260=result_177<0,    _if_conditional260) {
        __result287__ = __result_obj__ = f;
        come_call_finalizer2(va_list_finalize,(&args_176), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        return __result287__;
    }
    __result288__ = __result_obj__ = f;
    come_call_finalizer2(va_list_finalize,(&args_176), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    return __result288__;
    come_call_finalizer2(va_list_finalize,(&args_176), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional261;
int __result289__;
struct _IO_FILE* f_178;
_Bool _if_conditional262;
_Bool _if_conditional263;
int __result290__;
int result_179;
_Bool _if_conditional264;
int __result291__;
int result2_180;
_Bool _if_conditional265;
int __result292__;
int __result293__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_178, 0, sizeof(struct _IO_FILE*));
memset(&result_179, 0, sizeof(int));
memset(&result2_180, 0, sizeof(int));
    if(_if_conditional261=self==((void*)0)||file_name==((void*)0),    _if_conditional261) {
        __result289__ = -1;
        return __result289__;
    }
    if(append) {
        f_178=fopen(file_name,"a");
    }
    else {
        f_178=fopen(file_name,"w");
    }
    if(_if_conditional263=f_178==((void*)0),    _if_conditional263) {
        __result290__ = -1;
        return __result290__;
    }
    result_179=fwrite(self,strlen(self),1,f_178);
    if(_if_conditional264=result_179<0,    _if_conditional264) {
        __result291__ = result_179;
        return __result291__;
    }
    result2_180=fclose(f_178);
    if(_if_conditional265=result2_180<0,    _if_conditional265) {
        __result292__ = result2_180;
        return __result292__;
    }
    __result293__ = result_179;
    return __result293__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional266;
int __result294__;
struct _IO_FILE* f_181;
_Bool _if_conditional267;
_Bool _if_conditional268;
int __result295__;
int result_182;
_Bool _if_conditional269;
int __result296__;
int result2_183;
_Bool _if_conditional270;
int __result297__;
int __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_181, 0, sizeof(struct _IO_FILE*));
memset(&result_182, 0, sizeof(int));
memset(&result2_183, 0, sizeof(int));
    if(_if_conditional266=self==((void*)0)||file_name==((void*)0),    _if_conditional266) {
        __result294__ = -1;
        return __result294__;
    }
    if(append) {
        f_181=fopen(file_name,"a");
    }
    else {
        f_181=fopen(file_name,"w");
    }
    if(_if_conditional268=f_181==((void*)0),    _if_conditional268) {
        __result295__ = -1;
        return __result295__;
    }
    result_182=fwrite(self,strlen(self),1,f_181);
    if(_if_conditional269=result_182<0,    _if_conditional269) {
        __result296__ = result_182;
        return __result296__;
    }
    result2_183=fclose(f_181);
    if(_if_conditional270=result2_183<0,    _if_conditional270) {
        __result297__ = result2_183;
        return __result297__;
    }
    __result298__ = result_182;
    return __result298__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional271;
void* right_value177;
char* __result299__;
struct _IO_FILE* f_184;
_Bool _if_conditional272;
void* right_value178;
char* __result300__;
void* right_value179;
void* right_value180;
struct buffer* buf_185;
_Bool _while_condtional8;
int size_187;
_Bool _if_conditional273;
void* right_value181;
char* result_188;
int result2_189;
_Bool _if_conditional274;
void* right_value182;
char* __result301__;
char* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
memset(&f_184, 0, sizeof(struct _IO_FILE*));
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&buf_185, 0, sizeof(struct buffer*));
memset(&size_187, 0, sizeof(int));
right_value181 = (void*)0;
memset(&result_188, 0, sizeof(char*));
memset(&result2_189, 0, sizeof(int));
right_value182 = (void*)0;
    if(_if_conditional271=file_name==((void*)0),    _if_conditional271) {
        __result299__ = __result_obj__ = ((char*)(right_value177=__builtin_string("")));
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result299__;
    }
    f_184=fopen(file_name,"r");
    if(_if_conditional272=f_184==((void*)0),    _if_conditional272) {
        __result300__ = __result_obj__ = ((char*)(right_value178=__builtin_string("")));
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result300__;
    }
    buf_185=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value179=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2490, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional8=1,    _while_condtional8) {
        char buf2_186[1024];
        memset(&buf2_186, 0, sizeof(char)        *(1024)        );
        size_187=fread(buf2_186,1,1024,f_184);
        buffer_append(buf_185,buf2_186,size_187);
        if(_if_conditional273=size_187<1024,        _if_conditional273) {
            break;
        }
    }
    result_188=(char*)come_increment_ref_count(((char*)(right_value181=buffer_to_string(buf_185))));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_189=fclose(f_184);
    if(_if_conditional274=result2_189<0,    _if_conditional274) {
        __result301__ = __result_obj__ = ((char*)(right_value182=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        result_188 = come_decrement_ref_count2(result_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result301__;
    }
    __result302__ = __result_obj__ = result_188;
    come_call_finalizer2(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_188 = come_decrement_ref_count2(result_188, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result302__;
    come_call_finalizer2(buffer_finalize,buf_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_188 = come_decrement_ref_count2(result_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional275;
void* right_value183;
char* __result303__;
struct _IO_FILE* f_190;
_Bool _if_conditional276;
void* right_value184;
char* __result304__;
void* right_value185;
void* right_value186;
struct buffer* buf_191;
_Bool _while_condtional9;
int size_193;
_Bool _if_conditional277;
void* right_value187;
char* result_194;
int result2_195;
_Bool _if_conditional278;
void* right_value188;
char* __result305__;
char* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
memset(&f_190, 0, sizeof(struct _IO_FILE*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&buf_191, 0, sizeof(struct buffer*));
memset(&size_193, 0, sizeof(int));
right_value187 = (void*)0;
memset(&result_194, 0, sizeof(char*));
memset(&result2_195, 0, sizeof(int));
right_value188 = (void*)0;
    if(_if_conditional275=file_name==((void*)0),    _if_conditional275) {
        __result303__ = __result_obj__ = ((char*)(right_value183=__builtin_string("")));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result303__;
    }
    f_190=fopen(file_name,"r");
    if(_if_conditional276=f_190==((void*)0),    _if_conditional276) {
        __result304__ = __result_obj__ = ((char*)(right_value184=__builtin_string("")));
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result304__;
    }
    buf_191=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value186=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value185=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2527, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional9=1,    _while_condtional9) {
        char buf2_192[1024];
        memset(&buf2_192, 0, sizeof(char)        *(1024)        );
        size_193=fread(buf2_192,1,1024,f_190);
        buffer_append(buf_191,buf2_192,size_193);
        if(_if_conditional277=size_193<1024,        _if_conditional277) {
            break;
        }
    }
    result_194=(char*)come_increment_ref_count(((char*)(right_value187=buffer_to_string(buf_191))));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_195=fclose(f_190);
    if(_if_conditional278=result2_195<0,    _if_conditional278) {
        __result305__ = __result_obj__ = ((char*)(right_value188=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        result_194 = come_decrement_ref_count2(result_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result305__;
    }
    __result306__ = __result_obj__ = result_194;
    come_call_finalizer2(buffer_finalize,buf_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_194 = come_decrement_ref_count2(result_194, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result306__;
    come_call_finalizer2(buffer_finalize,buf_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_194 = come_decrement_ref_count2(result_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
void* right_value189;
void* right_value190;
struct list$1charph* result_196;
_Bool _if_conditional279;
struct list$1charph* __result307__;
_Bool _while_condtional10;
_Bool _if_conditional280;
void* right_value191;
struct list$1charph* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&result_196, 0, sizeof(struct list$1charph*));
right_value191 = (void*)0;
    result_196=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value190=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value189=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2554, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional279=f==((void*)0),    _if_conditional279) {
        __result307__ = __result_obj__ = result_196;
        come_call_finalizer2(list$1charphp_finalize,result_196, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result307__;
    }
    while(_while_condtional10=1,    _while_condtional10) {
        char buf_197[1024];
        memset(&buf_197, 0, sizeof(char)        *(1024)        );
        if(_if_conditional280=fgets(buf_197,1024,f)==((void*)0),        _if_conditional280) {
            break;
        }
        list$1charph_push_back(result_196,(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string(buf_197)))));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result308__ = __result_obj__ = result_196;
    come_call_finalizer2(list$1charphp_finalize,result_196, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result308__;
    come_call_finalizer2(list$1charphp_finalize,result_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional281;
int __result309__;
struct _IO_FILE* f_198;
_Bool _if_conditional282;
_Bool _if_conditional283;
int __result310__;
int __result311__;
int __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_198, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional281=path==((void*)0)||mode==((void*)0),    _if_conditional281) {
        __result309__ = -1;
        return __result309__;
    }
    f_198=fopen(path,mode);
    if(f_198) {
        block(parent,f_198);
        if(_if_conditional283=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional283) {
            fclose(f_198);
            __result310__ = 0;
            return __result310__;
        }
        fclose(f_198);
        __result311__ = 0;
        return __result311__;
    }
    __result312__ = -1;
    return __result312__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional284;
void* right_value192;
char* __result313__;
void* right_value193;
char* __result314__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    if(_if_conditional284=self==((void*)0),    _if_conditional284) {
        __result313__ = __result_obj__ = ((char*)(right_value192=__builtin_string("")));
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result313__;
    }
    puts(self);
    __result314__ = __result_obj__ = ((char*)(right_value193=__builtin_string(self)));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result314__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional285;
void* right_value194;
char* __result315__;
void* right_value195;
char* __result316__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value195 = (void*)0;
    if(_if_conditional285=self==((void*)0),    _if_conditional285) {
        __result315__ = __result_obj__ = ((char*)(right_value194=__builtin_string("")));
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result315__;
    }
    printf("%s",self);
    __result316__ = __result_obj__ = ((char*)(right_value195=__builtin_string(self)));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result316__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional286;
void* right_value196;
char* __result317__;
char* msg2_199;
va_list args_200;
void* right_value197;
char* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
memset(&msg2_199, 0, sizeof(char*));
memset(&args_200, 0, sizeof(va_list));
right_value197 = (void*)0;
    if(_if_conditional286=self==((void*)0),    _if_conditional286) {
        __result317__ = __result_obj__ = ((char*)(right_value196=__builtin_string("")));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result317__;
    }
    __builtin_va_start(args_200,self);
    vasprintf(&msg2_199,self,args_200);
    __builtin_va_end(args_200);
    printf("%s",msg2_199);
    free(msg2_199);
    __result318__ = __result_obj__ = ((char*)(right_value197=__builtin_string(self)));
    come_call_finalizer2(va_list_finalize,(&args_200), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result318__;
    come_call_finalizer2(va_list_finalize,(&args_200), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional287;
void* right_value198;
char* __result319__;
char* msg2_201;
va_list args_202;
void* right_value199;
char* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
memset(&msg2_201, 0, sizeof(char*));
memset(&args_202, 0, sizeof(va_list));
right_value199 = (void*)0;
    if(_if_conditional287=self==((void*)0),    _if_conditional287) {
        __result319__ = __result_obj__ = ((char*)(right_value198=__builtin_string("")));
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result319__;
    }
    __builtin_va_start(args_202,self);
    vasprintf(&msg2_201,self,args_202);
    __builtin_va_end(args_202);
    printf("%s",msg2_201);
    free(msg2_201);
    __result320__ = __result_obj__ = ((char*)(right_value199=__builtin_string(self)));
    come_call_finalizer2(va_list_finalize,(&args_202), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result320__;
    come_call_finalizer2(va_list_finalize,(&args_202), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result321__;
memset(&__result_obj__, 0, sizeof(void*));
    printf(msg,self);
    __result321__ = self;
    return __result321__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional288;
void* right_value200;
char* __result322__;
void* right_value201;
char* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
right_value201 = (void*)0;
    if(_if_conditional288=self==((void*)0),    _if_conditional288) {
        __result322__ = __result_obj__ = ((char*)(right_value200=__builtin_string("")));
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result322__;
    }
    puts(self);
    __result323__ = __result_obj__ = ((char*)(right_value201=__builtin_string(self)));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result323__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_203;
_Bool _if_conditional289;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_203, 0, sizeof(int));
    for(    i_203=0;    i_203<self;    i_203++    ){
        block(parent,i_203);
        if(_if_conditional289=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional289) {
            return;
        }
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    __result324__ = __result_obj__ = self;
    come_call_finalizer2(integer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result324__;
    come_call_finalizer2(integer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void integer_finalize(struct integer* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result325__;
memset(&__result_obj__, 0, sizeof(void*));
    __result325__ = self->value;
    return __result325__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
void* right_value202;
void* right_value203;
struct integer* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
right_value203 = (void*)0;
    __result326__ = __result_obj__ = ((struct integer*)(right_value203=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value202=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2705, "integer")))),self)));
    come_call_finalizer2(integer_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result326__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
void* right_value204;
void* right_value205;
struct integer* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
right_value205 = (void*)0;
    __result327__ = __result_obj__ = ((struct integer*)(right_value205=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value204=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2710, "integer")))),self)));
    come_call_finalizer2(integer_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result327__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
void* right_value206;
void* right_value207;
struct integer* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
right_value207 = (void*)0;
    __result328__ = __result_obj__ = ((struct integer*)(right_value207=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value206=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2715, "integer")))),self)));
    come_call_finalizer2(integer_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result328__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
void* right_value208;
void* right_value209;
struct integer* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
right_value209 = (void*)0;
    __result329__ = __result_obj__ = ((struct integer*)(right_value209=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value208=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2720, "integer")))),self)));
    come_call_finalizer2(integer_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result329__;
}

int integer_compare(struct integer* left, struct integer* right){
void* __result_obj__;
_Bool _if_conditional290;
int __result330__;
_Bool _if_conditional291;
int __result331__;
int __result332__;
int __result333__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional290=left->value<right->value,    _if_conditional290) {
        __result330__ = -1;
        return __result330__;
    }
    else {
        if(_if_conditional291=left->value>right->value,        _if_conditional291) {
            __result331__ = 1;
            return __result331__;
        }
        else {
            __result332__ = 0;
            return __result332__;
        }
    }
    __result333__ = 0;
    return __result333__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result334__;
memset(&__result_obj__, 0, sizeof(void*));
    __result334__ = self->value==right->value;
    return __result334__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result335__;
memset(&__result_obj__, 0, sizeof(void*));
    __result335__ = self->value==right->value;
    return __result335__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result336__;
memset(&__result_obj__, 0, sizeof(void*));
    __result336__ = self->value!=right->value;
    return __result336__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value210;
void* right_value211;
struct integer* __result337__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
right_value211 = (void*)0;
    __result337__ = __result_obj__ = ((struct integer*)(right_value211=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value210=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2755, "integer")))),left->value+right->value)));
    come_call_finalizer2(integer_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result337__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value212;
void* right_value213;
struct integer* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
right_value213 = (void*)0;
    __result338__ = __result_obj__ = ((struct integer*)(right_value213=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value212=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2760, "integer")))),left->value-right->value)));
    come_call_finalizer2(integer_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result338__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value214;
void* right_value215;
struct integer* __result339__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
right_value215 = (void*)0;
    __result339__ = __result_obj__ = ((struct integer*)(right_value215=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value214=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2765, "integer")))),left->value*right->value)));
    come_call_finalizer2(integer_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result339__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value216;
void* right_value217;
struct integer* __result340__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
right_value217 = (void*)0;
    __result340__ = __result_obj__ = ((struct integer*)(right_value217=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value216=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2770, "integer")))),left->value/right->value)));
    come_call_finalizer2(integer_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result340__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value218;
void* right_value219;
struct integer* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value218 = (void*)0;
right_value219 = (void*)0;
    __result341__ = __result_obj__ = ((struct integer*)(right_value219=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value218=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2775, "integer")))),left->value%right->value)));
    come_call_finalizer2(integer_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result341__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value220;
void* right_value221;
struct integer* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
right_value221 = (void*)0;
    __result342__ = __result_obj__ = ((struct integer*)(right_value221=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value220=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2780, "integer")))),left->value<<right->value)));
    come_call_finalizer2(integer_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result342__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value222;
void* right_value223;
struct integer* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
right_value223 = (void*)0;
    __result343__ = __result_obj__ = ((struct integer*)(right_value223=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value222=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2785, "integer")))),left->value>>right->value)));
    come_call_finalizer2(integer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result343__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value224;
void* right_value225;
struct integer* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
right_value225 = (void*)0;
    __result344__ = __result_obj__ = ((struct integer*)(right_value225=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value224=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2790, "integer")))),left->value>=right->value)));
    come_call_finalizer2(integer_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result344__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value226;
void* right_value227;
struct integer* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
right_value227 = (void*)0;
    __result345__ = __result_obj__ = ((struct integer*)(right_value227=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value226=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2795, "integer")))),left->value<=right->value)));
    come_call_finalizer2(integer_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result345__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value228;
void* right_value229;
struct integer* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    __result346__ = __result_obj__ = ((struct integer*)(right_value229=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value228=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2800, "integer")))),left->value<right->value)));
    come_call_finalizer2(integer_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result346__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value230;
void* right_value231;
struct integer* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
right_value231 = (void*)0;
    __result347__ = __result_obj__ = ((struct integer*)(right_value231=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value230=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2805, "integer")))),left->value>right->value)));
    come_call_finalizer2(integer_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result347__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value232;
void* right_value233;
struct integer* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
right_value233 = (void*)0;
    __result348__ = __result_obj__ = ((struct integer*)(right_value233=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value232=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2810, "integer")))),left->value&right->value)));
    come_call_finalizer2(integer_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result348__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value234;
void* right_value235;
struct integer* __result349__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
    __result349__ = __result_obj__ = ((struct integer*)(right_value235=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value234=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2815, "integer")))),left->value^right->value)));
    come_call_finalizer2(integer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result349__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value236;
void* right_value237;
struct integer* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
    __result350__ = __result_obj__ = ((struct integer*)(right_value237=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value236=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2820, "integer")))),left->value|right->value)));
    come_call_finalizer2(integer_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result350__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value238;
void* right_value239;
struct integer* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
right_value239 = (void*)0;
    __result351__ = __result_obj__ = ((struct integer*)(right_value239=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value238=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2825, "integer")))),left->value&&right->value)));
    come_call_finalizer2(integer_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result351__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value240;
void* right_value241;
struct integer* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
right_value241 = (void*)0;
    __result352__ = __result_obj__ = ((struct integer*)(right_value241=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value240=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2830, "integer")))),left->value||right->value)));
    come_call_finalizer2(integer_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result352__;
}

