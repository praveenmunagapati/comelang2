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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1943, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1993, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2003, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2013, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2023, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2033, "smart_pointer$1long"))));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2226, "smart_pointer$1double")))),self,sizeof(double)*len)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional7=gNumComeStackFrame<1024,    _if_conditional7) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
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
    buf_11=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value49=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 40, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_11,((char*)(right_value51=xsprintf("%s %d\n",sname,sline))));
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_12=gNumComeStackFrame-2;    i_12>=0;    i_12--    ){
        buffer_append_str(buf_11,((char*)(right_value52=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_12],gComeStackFrameSLine[i_12],gComeStackFrameID[i_12]))));
        right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(right_value53=buffer_to_string(buf_11))));
    right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,buf_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
void* __result_obj__;
int i_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_13, 0, sizeof(int));
    for(    i_13=gNumComeStackFrame-1;    i_13>=0;    i_13--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_13],gComeStackFrameSLine[i_13],gComeStackFrameID[i_13]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
void* right_value54;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
    __result34__ = __result_obj__ = ((char*)(right_value54=__builtin_string(gComeStackFrameBuffer)));
    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result34__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional10;
void* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional10=mem==((void*)0),    _if_conditional10) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
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
    if(_if_conditional14=!self,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            __result37__ = self;
            return __result37__;
        }
        stackframe();
        exit(1);
    }
    __result38__ = self;
    return __result38__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
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
    if(_if_conditional16=self<0,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            __result40__ = self;
            return __result40__;
        }
    }
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
    if(_if_conditional18=self<0,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            __result42__ = self;
            return __result42__;
        }
        stackframe();
        exit(1);
    }
    __result43__ = self;
    return __result43__;
}

int int_value(int self){
void* __result_obj__;
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
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
    if(_if_conditional20=self<0,    _if_conditional20) {
        block(parent);
        if(_if_conditional21=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional21) {
            __result45__ = self;
            return __result45__;
        }
    }
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
    if(_if_conditional22=!self,    _if_conditional22) {
        block(parent);
        if(_if_conditional23=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional23) {
            __result47__ = self;
            return __result47__;
        }
    }
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
    if(_if_conditional24=!self,    _if_conditional24) {
        block(parent);
        if(_if_conditional25=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional25) {
            __result49__ = self;
            return __result49__;
        }
    }
    __result50__ = self;
    return __result50__;
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
int i_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_14, 0, sizeof(int));
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*1024);
    memset(gComeStackFrameSLine,0,sizeof(int)*1024);
    memset(gComeStackFrameID,0,sizeof(int)*1024);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_14=0;    i_14<gHeapPages.mSizePages;    i_14++    ){
        gHeapPages.mPages[i_14]=calloc(1,sizeof(char)*4048);
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
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(gComeGCLib) {
    }
    else {
        if(gComeDebugLib) {
            it_15=gAllocMem;
            n_16=0;
            while(it_15) {
                n_16++;
                flag_17=(_Bool)0;
                printf("#%d ",n_16);
                if(it_15->class_name) {
                    printf("%p (%s): ",(char*)it_15+sizeof(struct sMemHeader)+sizeof(unsigned long int)+sizeof(unsigned long int),it_15->class_name);
                }
                for(                i_18=0;                i_18<16;                i_18++                ){
                    if(_if_conditional31=it_15->sname[i_18],                    _if_conditional31) {
                        printf("%s %d #%d, ",it_15->sname[i_18],it_15->sline[i_18],it_15->id[i_18]);
                        flag_17=(_Bool)1;
                    }
                }
                if(flag_17) {
                    puts("");
                }
                it_15=it_15->next;
            }
            printf("%d memory leaks. %d alloc, %d free.\n",n_16,gNumAlloc,gNumFree);
        }
        else {
            it_19=(struct sMemHeaderTiny*)gAllocMem;
            n_20=0;
            while(it_19) {
                n_20++;
                it_19=it_19->next;
            }
            if(_if_conditional33=n_20>0,            _if_conditional33) {
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_20,gNumAlloc,gNumFree);
            }
        }
    }
    for(    i_21=0;    i_21<gHeapPages.mSizePages;    i_21++    ){
        free(gHeapPages.mPages[i_21]);
    }
    free(gHeapPages.mPages);
    for(    i_22=0;    i_22<4048;    i_22++    ){
        if(_if_conditional34=gHeapPages.mFreeMem[i_22],        _if_conditional34) {
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
    result_23=((void*)0);
    if(_if_conditional35=size<4048,    _if_conditional35) {
        if(_if_conditional36=gHeapPages.mFreeMem[size]&&gHeapPages.mNumFreeMem[size]>0,        _if_conditional36) {
            it_24=gHeapPages.mFreeMem[size][gHeapPages.mNumFreeMem[size]-1];
            gHeapPages.mNumFreeMem[size]--;
        }
        if(_if_conditional37=result_23==((void*)0),        _if_conditional37) {
            free_area_25=gHeapPages.mPages[gHeapPages.mCurrentPages]+4048-gHeapPages.mTop;
            if(_if_conditional38=size>=free_area_25,            _if_conditional38) {
                gHeapPages.mCurrentPages++;
                if(_if_conditional39=gHeapPages.mCurrentPages==gHeapPages.mSizePages,                _if_conditional39) {
                    new_size_pages_26=gHeapPages.mSizePages*2;
                    new_pages_27=calloc(1,sizeof(char*)*new_size_pages_26);
                    i_28=0;
                    for(                    ;                    i_28<gHeapPages.mSizePages;                    i_28++                    ){
                        new_pages_27[i_28]=gHeapPages.mPages[i_28];
                    }
                    for(                    ;                    i_28<new_size_pages_26;                    i_28++                    ){
                        new_pages_27[i_28]=calloc(1,sizeof(char)*4048);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_27;
                    gHeapPages.mSizePages=new_size_pages_26;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_23=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_23=calloc(1,size);
    }
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
    if(gComeDebugLib) {
        result_29=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_30=result_29;
        it_30->allocated=177783;
        it_30->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(_if_conditional41=gNumComeStackFrame<16,        _if_conditional41) {
            memcpy(it_30->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_30->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_30->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_30->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_30->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_30->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_30->next=gAllocMem;
        it_30->prev=((void*)0);
        if(class_name) {
            it_30->class_name=strdup(class_name);
        }
        else {
            it_30->class_name=((void*)0);
        }
        if(gAllocMem) {
            gAllocMem->prev=it_30;
        }
        gAllocMem=it_30;
        gNumAlloc++;
        __result52__ = __result_obj__ = (char*)result_29+sizeof(struct sMemHeader);
        return __result52__;
    }
    else {
        result_31=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_32=result_31;
        it_32->allocated=177783;
        it_32->size=size+sizeof(struct sMemHeaderTiny);
        it_32->next=(struct sMemHeaderTiny*)gAllocMem;
        it_32->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_32;
        }
        gAllocMem=(struct sMemHeader*)it_32;
        gNumAlloc++;
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
    if(mem) {
        if(gComeGCLib) {
        }
        else {
            if(gComeDebugLib) {
                it_33=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                if(_if_conditional48=it_33->allocated!=177783,                _if_conditional48) {
                    return;
                }
                it_33->allocated=0;
                prev_it_34=it_33->prev;
                next_it_35=it_33->next;
                if(it_33->class_name) {
                    free(it_33->class_name);
                }
                if(_if_conditional50=gAllocMem==it_33,                _if_conditional50) {
                    gAllocMem=next_it_35;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_34) {
                        prev_it_34->next=next_it_35;
                    }
                    if(next_it_35) {
                        next_it_35->prev=prev_it_34;
                    }
                }
                size_36=it_33->size;
                if(_if_conditional54=size_36<4048,                _if_conditional54) {
                    num_free_mem_37=gHeapPages.mNumFreeMem[size_36];
                    size_free_mem_38=gHeapPages.mSizeFreeMem[size_36];
                    if(_if_conditional55=gHeapPages.mFreeMem[size_36]==((void*)0),                    _if_conditional55) {
                        new_size_free_mem_39=16;
                        new_free_mem_40=calloc(1,sizeof(void*)*new_size_free_mem_39);
                        gHeapPages.mSizeFreeMem[size_36]=new_size_free_mem_39;
                        gHeapPages.mFreeMem[size_36]=new_free_mem_40;
                    }
                    else {
                        if(_if_conditional56=num_free_mem_37==size_free_mem_38,                        _if_conditional56) {
                            new_size_free_mem_41=size_free_mem_38*2;
                            new_free_mem_42=calloc(1,sizeof(void*)*new_size_free_mem_41);
                            memcpy(new_free_mem_42,gHeapPages.mFreeMem[size_36],sizeof(void*)*num_free_mem_37);
                            free(gHeapPages.mFreeMem[size_36]);
                            gHeapPages.mSizeFreeMem[size_36]=new_size_free_mem_41;
                            gHeapPages.mFreeMem[size_36]=new_free_mem_42;
                        }
                    }
                    gHeapPages.mFreeMem[size_36][gHeapPages.mNumFreeMem[size_36]]=it_33;
                    gHeapPages.mNumFreeMem[size_36]++;
                }
                else {
                    free(it_33);
                }
                gNumFree++;
            }
            else {
                it_43=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                if(_if_conditional57=it_43->allocated!=177783,                _if_conditional57) {
                    return;
                }
                it_43->allocated=0;
                prev_it_44=it_43->prev;
                next_it_45=it_43->next;
                if(_if_conditional58=gAllocMem==it_43,                _if_conditional58) {
                    gAllocMem=(struct sMemHeader*)next_it_45;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_44) {
                        prev_it_44->next=next_it_45;
                    }
                    if(next_it_45) {
                        next_it_45->prev=prev_it_44;
                    }
                }
                size_46=it_43->size;
                if(_if_conditional62=size_46<4048,                _if_conditional62) {
                    num_free_mem_47=gHeapPages.mNumFreeMem[size_46];
                    size_free_mem_48=gHeapPages.mSizeFreeMem[size_46];
                    if(_if_conditional63=gHeapPages.mFreeMem[size_46]==((void*)0),                    _if_conditional63) {
                        new_size_free_mem_49=16;
                        new_free_mem_50=calloc(1,sizeof(void*)*new_size_free_mem_49);
                        gHeapPages.mSizeFreeMem[size_46]=new_size_free_mem_49;
                        gHeapPages.mFreeMem[size_46]=new_free_mem_50;
                    }
                    else {
                        if(_if_conditional64=num_free_mem_47==size_free_mem_48,                        _if_conditional64) {
                            new_size_free_mem_51=size_free_mem_48*2;
                            new_free_mem_52=calloc(1,sizeof(void*)*new_size_free_mem_51);
                            memcpy(new_free_mem_52,gHeapPages.mFreeMem[size_46],sizeof(void*)*num_free_mem_47);
                            free(gHeapPages.mFreeMem[size_46]);
                            gHeapPages.mSizeFreeMem[size_46]=new_size_free_mem_51;
                            gHeapPages.mFreeMem[size_46]=new_free_mem_52;
                        }
                    }
                    gHeapPages.mFreeMem[size_46][gHeapPages.mNumFreeMem[size_46]]=it_43;
                    gHeapPages.mNumFreeMem[size_46]++;
                }
                else {
                    free(it_43);
                }
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
    it_53=(struct sMemHeader*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    if(_if_conditional65=it_53->allocated!=177783,    _if_conditional65) {
        printf("invalid heap object(%p)\n",it_53);
        exit(2);
    }
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
    mem_54=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_55=(unsigned long int*)mem_54;
    *ref_count_55=0;
    size2_56=(unsigned long int*)(mem_54+sizeof(unsigned long int));
    *size2_56=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result55__ = __result_obj__ = mem_54+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result55__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional66;
unsigned long int* ref_count_57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_57, 0, sizeof(unsigned long int*));
    if(_if_conditional66=mem==((void*)0),    _if_conditional66) {
        return;
    }
    ref_count_57=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_57);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional67;
unsigned long int* ref_count_58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_58, 0, sizeof(unsigned long int*));
    if(_if_conditional67=mem==((void*)0),    _if_conditional67) {
        return;
    }
    ref_count_58=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
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
    if(_if_conditional68=!block,    _if_conditional68) {
        __result56__ = __result_obj__ = ((void*)0);
        return __result56__;
    }
    mem_59=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_60=(unsigned long int*)(mem_59+sizeof(unsigned long int));
    size_61=*size_p_60-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_62=come_calloc(1,size_61,sname,sline,class_name);
    memcpy(result_62,block,size_61);
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
    if(_if_conditional69=mem==((void*)0),    _if_conditional69) {
        __result58__ = __result_obj__ = mem;
        return __result58__;
    }
    ref_count_63=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*ref_count_63)++;
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
    if(_if_conditional70=mem==((void*)0),    _if_conditional70) {
        __result60__ = __result_obj__ = mem;
        return __result60__;
    }
    ref_count_64=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    printf("ref_count %ld\n",*ref_count_64);
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
    if(_if_conditional71=mem==((void*)0),    _if_conditional71) {
        __result62__ = __result_obj__ = ((void*)0);
        return __result62__;
    }
    ref_count_65=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional72=!no_decrement,    _if_conditional72) {
        (*ref_count_65)--;
    }
    count_66=*ref_count_65;
    if(_if_conditional73=!no_free&&(count_66<=0||force_delete_),    _if_conditional73) {
        if(_if_conditional74=protocol_obj&&protocol_fun,        _if_conditional74) {
            finalizer_67=protocol_fun;
            finalizer_67(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result63__ = __result_obj__ = ((void*)0);
        return __result63__;
    }
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
    if(result_obj) {
        if(_if_conditional76=mem==result_obj,        _if_conditional76) {
            __result65__ = __result_obj__ = mem;
            return __result65__;
        }
    }
    if(_if_conditional77=mem==((void*)0),    _if_conditional77) {
        __result66__ = __result_obj__ = ((void*)0);
        return __result66__;
    }
    ref_count_68=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional78=!no_decrement,    _if_conditional78) {
        (*ref_count_68)--;
    }
    count_69=*ref_count_68;
    if(_if_conditional79=!no_free&&(count_69<=0||force_delete_),    _if_conditional79) {
        if(_if_conditional80=protocol_obj&&protocol_fun,        _if_conditional80) {
            finalizer_70=protocol_fun;
            finalizer_70(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result67__ = __result_obj__ = ((void*)0);
        return __result67__;
    }
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
    if(_if_conditional81=mem==((void*)0),    _if_conditional81) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional84=protocol_obj&&protocol_fun,            _if_conditional84) {
                finalizer_71=protocol_fun;
                finalizer_71(protocol_obj);
            }
            finalizer_72=fun;
            finalizer_72(mem);
        }
    }
    else {
        ref_count_73=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional85=!no_decrement,        _if_conditional85) {
            (*ref_count_73)--;
        }
        count_74=*ref_count_73;
        if(_if_conditional86=!no_free&&(count_74<=0||force_delete_),        _if_conditional86) {
            if(mem) {
                if(_if_conditional88=protocol_obj&&protocol_fun,                _if_conditional88) {
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
                finalizer_77=protocol_fun;
                finalizer_77(protocol_obj);
            }
            finalizer_78=fun;
            finalizer_78(mem);
        }
    }
    else {
        ref_count_79=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional96=!no_decrement,        _if_conditional96) {
            (*ref_count_79)--;
        }
        count_80=*ref_count_79;
        if(_if_conditional97=!no_free&&(count_80<=0||force_delete_),        _if_conditional97) {
            if(mem) {
                if(_if_conditional99=protocol_obj&&protocol_fun,                _if_conditional99) {
                    finalizer_81=protocol_fun;
                    finalizer_81(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_82=fun;
                    finalizer_82(mem);
                }
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
    if(_if_conditional101=str==((void*)0),    _if_conditional101) {
        __result69__ = __result_obj__ = ((void*)0);
        return __result69__;
    }
    len_83=strlen(str)+1;
    result_84=(char*)come_increment_ref_count(((char*)(right_value55=(char*)come_calloc(1, sizeof(char)*(1*(len_83)), "libcomelang2.c", 935, "char"))));
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_84,str,len_83);
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
    found_85=(_Bool)0;
    for(    i_86=0;    i_86<len;    i_86++    ){
        if(_if_conditional102=array[i_86]==element,        _if_conditional102) {
            found_85=(_Bool)1;
            break;
        }
    }
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
    self->size=128;
    __dec_obj12=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value56=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 960, "char"))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->buf[0]=0;
    self->len=0;
    __result72__ = __result_obj__ = self;
    come_call_finalizer2(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result72__;
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
    if(_if_conditional105=self==((void*)0),    _if_conditional105) {
        __result73__ = __result_obj__ = ((void*)0);
        return __result73__;
    }
    result_87=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value57=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 982, "buffer"))));
    come_call_finalizer2(buffer_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_87->size=self->size;
    __dec_obj13=result_87->buf;
    result_87->buf=(char*)come_increment_ref_count(((char*)(right_value58=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 985, "char"))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_87->len=self->len;
    memcpy(result_87->buf,self->buf,self->len);
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
    if(_if_conditional106=self==((void*)0),    _if_conditional106) {
        __result75__ = 0;
        return __result75__;
    }
    __result76__ = self->len;
    return __result76__;
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
    if(_if_conditional109=self==((void*)0)||mem==((void*)0),    _if_conditional109) {
        __result77__ = __result_obj__ = self;
        return __result77__;
    }
    if(_if_conditional110=self->len+size+1+1>=self->size,    _if_conditional110) {
        old_buf_88=(char*)come_increment_ref_count(((char*)(right_value59=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1024, "char"))));
        right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_88,self->buf,self->size);
        old_len_89=self->len;
        new_size_90=(self->size+size+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value60=(char*)come_calloc(1, sizeof(char)*(1*(new_size_90)), "libcomelang2.c", 1028, "char"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_88,old_len_89);
        self->buf[old_len_89]=0;
        self->size=new_size_90;
        old_buf_88 = come_decrement_ref_count2(old_buf_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
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
    if(_if_conditional111=self==((void*)0),    _if_conditional111) {
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
    if(_if_conditional112=self->len+1+1+1>=self->size,    _if_conditional112) {
        old_buf_91=(char*)come_increment_ref_count(((char*)(right_value61=charp_clone(self->buf))));
        right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        old_len_92=self->len;
        new_size_93=(self->size+10+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value62=(char*)come_calloc(1, sizeof(char)*(1*(new_size_93)), "libcomelang2.c", 1051, "char"))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_91,old_len_92);
        self->buf[old_len_92]=0;
        self->size=new_size_93;
        old_buf_91 = come_decrement_ref_count2(old_buf_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
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
    if(_if_conditional113=self==((void*)0)||mem==((void*)0),    _if_conditional113) {
        __result81__ = __result_obj__ = self;
        return __result81__;
    }
    size_94=strlen(mem);
    if(_if_conditional114=self->len+size_94+1+1>=self->size,    _if_conditional114) {
        old_buf_95=(char*)come_increment_ref_count(((char*)(right_value63=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1073, "char"))));
        right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_95,self->buf,self->size);
        old_len_96=self->len;
        new_size_97=(self->size+size_94+1)*2;
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value64=(char*)come_calloc(1, sizeof(char)*(1*(new_size_97)), "libcomelang2.c", 1077, "char"))));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_95,old_len_96);
        self->buf[old_len_96]=0;
        self->size=new_size_97;
        old_buf_95 = come_decrement_ref_count2(old_buf_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_94);
    self->len+=size_94;
    self->buf[self->len]=0;
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
    if(_if_conditional115=self==((void*)0)||mem==((void*)0),    _if_conditional115) {
        __result83__ = __result_obj__ = self;
        return __result83__;
    }
    size_98=strlen(mem)+1;
    if(_if_conditional116=self->len+size_98+1+1+1>=self->size,    _if_conditional116) {
        old_buf_99=(char*)come_increment_ref_count(((char*)(right_value65=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1097, "char"))));
        right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_99,self->buf,self->size);
        old_len_100=self->len;
        new_size_101=(self->size+size_98+1)*2;
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value66=(char*)come_calloc(1, sizeof(char)*(1*(new_size_101)), "libcomelang2.c", 1101, "char"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_99,old_len_100);
        self->buf[old_len_100]=0;
        self->size=new_size_101;
        old_buf_99 = come_decrement_ref_count2(old_buf_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_98);
    self->len+=size_98;
    self->buf[self->len]=0;
    self->len++;
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
    if(_if_conditional117=self==((void*)0),    _if_conditional117) {
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    mem_102=&value;
    size_103=sizeof(int);
    if(_if_conditional118=self->len+size_103+1+1>=self->size,    _if_conditional118) {
        old_buf_104=(char*)come_increment_ref_count(((char*)(right_value67=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1124, "char"))));
        right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_104,self->buf,self->size);
        old_len_105=self->len;
        new_size_106=(self->size+size_103+1)*2;
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value68=(char*)come_calloc(1, sizeof(char)*(1*(new_size_106)), "libcomelang2.c", 1128, "char"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_104,old_len_105);
        self->buf[old_len_105]=0;
        self->size=new_size_106;
        old_buf_104 = come_decrement_ref_count2(old_buf_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_102,size_103);
    self->len+=size_103;
    self->buf[self->len]=0;
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
    mem_107=&value;
    size_108=sizeof(long);
    if(_if_conditional119=self->len+size_108+1+1>=self->size,    _if_conditional119) {
        old_buf_109=(char*)come_increment_ref_count(((char*)(right_value69=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1147, "char"))));
        right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_109,self->buf,self->size);
        old_len_110=self->len;
        new_size_111=(self->size+size_108+1)*2;
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value70=(char*)come_calloc(1, sizeof(char)*(1*(new_size_111)), "libcomelang2.c", 1151, "char"))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_109,old_len_110);
        self->buf[old_len_110]=0;
        self->size=new_size_111;
        old_buf_109 = come_decrement_ref_count2(old_buf_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_107,size_108);
    self->len+=size_108;
    self->buf[self->len]=0;
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
    if(_if_conditional120=self==((void*)0),    _if_conditional120) {
        __result88__ = __result_obj__ = ((void*)0);
        return __result88__;
    }
    mem_112=&value;
    size_113=sizeof(short short);
    if(_if_conditional121=self->len+size_113+1+1>=self->size,    _if_conditional121) {
        old_buf_114=(char*)come_increment_ref_count(((char*)(right_value71=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1174, "char"))));
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_114,self->buf,self->size);
        old_len_115=self->len;
        new_size_116=(self->size+size_113+1)*2;
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value72=(char*)come_calloc(1, sizeof(char)*(1*(new_size_116)), "libcomelang2.c", 1178, "char"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_114,old_len_115);
        self->buf[old_len_115]=0;
        self->size=new_size_116;
        old_buf_114 = come_decrement_ref_count2(old_buf_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_112,size_113);
    self->len+=size_113;
    self->buf[self->len]=0;
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
    if(_if_conditional122=self==((void*)0),    _if_conditional122) {
        __result90__ = __result_obj__ = ((void*)0);
        return __result90__;
    }
    len_117=self->len;
    len_117=(len_117+3)&~3;
    if(_if_conditional123=len_117>=self->size,    _if_conditional123) {
        new_size_118=(self->size+1+1)*2;
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value73=(char*)come_calloc(1, sizeof(char)*(1*(new_size_118)), "libcomelang2.c", 1202, "char"))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->size=new_size_118;
    }
    for(    i_119=self->len;    i_119<len_117;    i_119++    ){
        self->buf[i_119]=0;
    }
    self->len=len_117;
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
    if(_if_conditional124=left==((void*)0)&&right==((void*)0),    _if_conditional124) {
        __result92__ = 0;
        return __result92__;
    }
    else {
        if(_if_conditional125=left==((void*)0),        _if_conditional125) {
            __result93__ = -1;
            return __result93__;
        }
        else {
            if(_if_conditional126=right==((void*)0),            _if_conditional126) {
                __result94__ = 1;
                return __result94__;
            }
        }
    }
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
    result_120=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1232, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional127=self==((void*)0),    _if_conditional127) {
        __result96__ = __result_obj__ = result_120;
        come_call_finalizer2(buffer_finalize,result_120, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result96__;
    }
    buffer_append_str(result_120,self);
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
    result_121=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value76=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1245, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional128=self==((void*)0),    _if_conditional128) {
        __result98__ = __result_obj__ = result_121;
        come_call_finalizer2(buffer_finalize,result_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result98__;
    }
    buffer_append_str(result_121,self);
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
    if(_if_conditional129=self==((void*)0),    _if_conditional129) {
        __result100__ = __result_obj__ = ((char*)(right_value78=__builtin_string("")));
        right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result100__;
    }
    __result101__ = __result_obj__ = ((char*)(right_value79=__builtin_string(self->buf)));
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = self==right;
    return __result102__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    __result103__ = self==right;
    return __result103__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    __result104__ = self==right;
    return __result104__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = self==right;
    return __result105__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = self==right;
    return __result106__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    __result107__ = self==right;
    return __result107__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    __result108__ = self==right;
    return __result108__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
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
    if(_if_conditional130=self==((void*)0)&&right==((void*)0),    _if_conditional130) {
        __result110__ = (_Bool)1;
        return __result110__;
    }
    else {
        if(_if_conditional131=self==((void*)0),        _if_conditional131) {
            __result111__ = (_Bool)0;
            return __result111__;
        }
        else {
            if(_if_conditional132=right==((void*)0),            _if_conditional132) {
                __result112__ = (_Bool)0;
                return __result112__;
            }
        }
    }
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
    if(_if_conditional133=self==((void*)0)&&right==((void*)0),    _if_conditional133) {
        __result114__ = (_Bool)1;
        return __result114__;
    }
    else {
        if(_if_conditional134=self==((void*)0),        _if_conditional134) {
            __result115__ = (_Bool)0;
            return __result115__;
        }
        else {
            if(_if_conditional135=right==((void*)0),            _if_conditional135) {
                __result116__ = (_Bool)0;
                return __result116__;
            }
        }
    }
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
    if(_if_conditional136=self==((void*)0)&&right==((void*)0),    _if_conditional136) {
        __result118__ = (_Bool)1;
        return __result118__;
    }
    else {
        if(_if_conditional137=self==((void*)0),        _if_conditional137) {
            __result119__ = (_Bool)0;
            return __result119__;
        }
        else {
            if(_if_conditional138=right==((void*)0),            _if_conditional138) {
                __result120__ = (_Bool)0;
                return __result120__;
            }
        }
    }
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
    if(_if_conditional139=self==((void*)0)&&right==((void*)0),    _if_conditional139) {
        __result122__ = (_Bool)1;
        return __result122__;
    }
    else {
        if(_if_conditional140=self==((void*)0),        _if_conditional140) {
            __result123__ = (_Bool)0;
            return __result123__;
        }
        else {
            if(_if_conditional141=right==((void*)0),            _if_conditional141) {
                __result124__ = (_Bool)0;
                return __result124__;
            }
        }
    }
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
    if(_if_conditional142=self==((void*)0)&&right==((void*)0),    _if_conditional142) {
        __result126__ = (_Bool)0;
        return __result126__;
    }
    else {
        if(_if_conditional143=self==((void*)0),        _if_conditional143) {
            __result127__ = (_Bool)1;
            return __result127__;
        }
        else {
            if(_if_conditional144=right==((void*)0),            _if_conditional144) {
                __result128__ = (_Bool)1;
                return __result128__;
            }
        }
    }
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
    if(_if_conditional145=self==((void*)0)&&right==((void*)0),    _if_conditional145) {
        __result130__ = (_Bool)0;
        return __result130__;
    }
    else {
        if(_if_conditional146=self==((void*)0),        _if_conditional146) {
            __result131__ = (_Bool)1;
            return __result131__;
        }
        else {
            if(_if_conditional147=right==((void*)0),            _if_conditional147) {
                __result132__ = (_Bool)1;
                return __result132__;
            }
        }
    }
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
    if(_if_conditional148=self==((void*)0)||right==((void*)0),    _if_conditional148) {
        __result134__ = __result_obj__ = ((char*)(right_value80=__builtin_string("")));
        right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result134__;
    }
    len_122=strlen(self)+strlen(right);
    result_123=(char*)come_increment_ref_count(((char*)(right_value81=(char*)come_calloc(1, sizeof(char)*(1*(len_122+1)), "libcomelang2.c", 1407, "char"))));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_123,self,len_122+1);
    strncat(result_123,right,len_122+1);
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
    if(_if_conditional149=self==((void*)0)||right==((void*)0),    _if_conditional149) {
        __result136__ = __result_obj__ = ((char*)(right_value82=__builtin_string("")));
        right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result136__;
    }
    len_124=strlen(self)+strlen(right);
    result_125=(char*)come_increment_ref_count(((char*)(right_value83=(char*)come_calloc(1, sizeof(char)*(1*(len_124+1)), "libcomelang2.c", 1422, "char"))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_125,self,len_124+1);
    strncat(result_125,right,len_124+1);
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
    if(_if_conditional150=self==((void*)0),    _if_conditional150) {
        __result138__ = __result_obj__ = ((char*)(right_value84=__builtin_string("")));
        right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result138__;
    }
    buf_126=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value86=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value85=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1435, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_127=0;    i_127<right;    i_127++    ){
        buffer_append_str(buf_126,self);
    }
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
    if(_if_conditional151=self==((void*)0),    _if_conditional151) {
        __result140__ = __result_obj__ = ((char*)(right_value88=__builtin_string("")));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result140__;
    }
    buf_128=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value89=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1449, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_129=0;    i_129<right;    i_129++    ){
        buffer_append_str(buf_128,self);
    }
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
    __result142__ = (int_get_hash_key(((int)value)));
    return __result142__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = value;
    return __result143__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    __result144__ = value;
    return __result144__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    __result145__ = value;
    return __result145__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    __result146__ = value;
    return __result146__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __result147__ = value;
    return __result147__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = (unsigned int)value;
    return __result148__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
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
    if(_if_conditional152=value==((void*)0),    _if_conditional152) {
        __result150__ = 0;
        return __result150__;
    }
    result_130=0;
    p_131=value;
    while(_while_condtional1=*p_131,    _while_condtional1) {
        result_130+=(*p_131);
        p_131++;
    }
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
    if(_if_conditional153=value==((void*)0),    _if_conditional153) {
        __result152__ = 0;
        return __result152__;
    }
    result_132=0;
    p_133=value;
    while(_while_condtional2=*p_133,    _while_condtional2) {
        result_132+=(*p_133);
        p_133++;
    }
    __result153__ = result_132;
    return __result153__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = self;
    return __result154__;
}

char char_clone(char self){
void* __result_obj__;
char __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = self;
    return __result155__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = self;
    return __result156__;
}

int int_clone(int self){
void* __result_obj__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = self;
    return __result157__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = self;
    return __result158__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = self;
    return __result159__;
}

double double_clone(double self){
void* __result_obj__;
double __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    __result160__ = self;
    return __result160__;
}

float float_clone(float self){
void* __result_obj__;
float __result161__;
memset(&__result_obj__, 0, sizeof(void*));
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
    if(_if_conditional154=self==((void*)0),    _if_conditional154) {
        __result162__ = __result_obj__ = ((void*)0);
        return __result162__;
    }
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
    if(_if_conditional155=self==((void*)0),    _if_conditional155) {
        __result164__ = __result_obj__ = ((void*)0);
        return __result164__;
    }
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
    result_134=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result166__ = result_134;
    return __result166__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = c==32||c==9;
    return __result167__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = (c>=48&&c<=57);
    return __result168__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    __result169__ = xiswalpha(c)||xiswdigit(c);
    return __result169__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_135;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_135, 0, sizeof(_Bool));
    result_135=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result170__ = result_135;
    return __result170__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    __result171__ = c==32||c==9;
    return __result171__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = (c>=48&&c<=57);
    return __result172__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    __result173__ = xisalpha(c)||xisdigit(c);
    return __result173__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_136;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_136, 0, sizeof(_Bool));
    result_136=(c>=32&&c<=126);
    __result174__ = result_136;
    return __result174__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_137;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(_Bool));
    result_137=(c>=32&&c<=126);
    __result175__ = result_137;
    return __result175__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional156;
int __result176__;
int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional156=str==((void*)0),    _if_conditional156) {
        __result176__ = 0;
        return __result176__;
    }
    __result177__ = strlen(str);
    return __result177__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional157;
int __result178__;
int __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional157=str==((void*)0),    _if_conditional157) {
        __result178__ = 0;
        return __result178__;
    }
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
    if(_if_conditional158=str==((void*)0),    _if_conditional158) {
        __result180__ = __result_obj__ = ((char*)(right_value94=__builtin_string("")));
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result180__;
    }
    len_138=strlen(str);
    result_139=(char*)come_increment_ref_count(((char*)(right_value95=(char*)come_calloc(1, sizeof(char)*(1*(len_138+1)), "libcomelang2.c", 1666, "char"))));
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_140=0;    i_140<len_138;    i_140++    ){
        result_139[i_140]=str[len_138-i_140-1];
    }
    result_139[len_138]=0;
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
    if(_if_conditional159=str==((void*)0),    _if_conditional159) {
        __result182__ = __result_obj__ = ((char*)(right_value96=__builtin_string("")));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result182__;
    }
    len_141=strlen(str);
    result_142=(char*)come_increment_ref_count(((char*)(right_value97=(char*)come_calloc(1, sizeof(char)*(1*(len_141+1)), "libcomelang2.c", 1683, "char"))));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_143=0;    i_143<len_141;    i_143++    ){
        result_142[i_143]=str[len_141-i_143-1];
    }
    result_142[len_141]=0;
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
    if(_if_conditional160=str==((void*)0),    _if_conditional160) {
        __result184__ = __result_obj__ = ((char*)(right_value98=__builtin_string("")));
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result184__;
    }
    len_144=strlen(str);
    if(_if_conditional161=head<0,    _if_conditional161) {
        head+=len_144;
    }
    if(_if_conditional162=tail<0,    _if_conditional162) {
        tail+=len_144+1;
    }
    if(_if_conditional163=head>tail,    _if_conditional163) {
        __result185__ = __result_obj__ = ((char*)(right_value100=string_reverse(((char*)(right_value99=charp_substring(str,tail,head))))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result185__;
    }
    if(_if_conditional164=head<0,    _if_conditional164) {
        head=0;
    }
    if(_if_conditional165=tail>=len_144,    _if_conditional165) {
        tail=len_144;
    }
    if(_if_conditional166=head==tail,    _if_conditional166) {
        __result186__ = __result_obj__ = ((char*)(right_value101=__builtin_string("")));
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result186__;
    }
    if(_if_conditional167=tail-head+1<1,    _if_conditional167) {
        __result187__ = __result_obj__ = ((char*)(right_value102=__builtin_string("")));
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result187__;
    }
    result_145=(char*)come_increment_ref_count(((char*)(right_value103=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1728, "char"))));
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_145,str+head,tail-head);
    result_145[tail-head]=0;
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
    if(_if_conditional168=str==((void*)0),    _if_conditional168) {
        __result189__ = __result_obj__ = ((char*)(right_value104=__builtin_string("")));
        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result189__;
    }
    len_146=strlen(str);
    if(_if_conditional169=head<0,    _if_conditional169) {
        head+=len_146;
    }
    if(_if_conditional170=tail<0,    _if_conditional170) {
        tail+=len_146+1;
    }
    if(_if_conditional171=head>tail,    _if_conditional171) {
        __result190__ = __result_obj__ = ((char*)(right_value106=string_reverse(((char*)(right_value105=charp_substring(str,tail,head))))));
        right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result190__;
    }
    if(_if_conditional172=head<0,    _if_conditional172) {
        head=0;
    }
    if(_if_conditional173=tail>=len_146,    _if_conditional173) {
        tail=len_146;
    }
    if(_if_conditional174=head==tail,    _if_conditional174) {
        __result191__ = __result_obj__ = ((char*)(right_value107=__builtin_string("")));
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result191__;
    }
    if(_if_conditional175=tail-head+1<1,    _if_conditional175) {
        __result192__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result192__;
    }
    result_147=(char*)come_increment_ref_count(((char*)(right_value109=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1771, "char"))));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_147,str+head,tail-head);
    result_147[tail-head]=0;
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
    if(_if_conditional176=str==((void*)0),    _if_conditional176) {
        __result194__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result194__;
    }
    len_148=strlen(str);
    if(_if_conditional177=head<0,    _if_conditional177) {
        head+=len_148;
    }
    if(_if_conditional178=tail<0,    _if_conditional178) {
        tail+=len_148+1;
    }
    if(_if_conditional179=head>tail,    _if_conditional179) {
        __result195__ = __result_obj__ = ((char*)(right_value112=string_reverse(((char*)(right_value111=charp_substring(str,tail,head))))));
        right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result195__;
    }
    if(_if_conditional180=head<0,    _if_conditional180) {
        head=0;
    }
    if(_if_conditional181=tail>=len_148,    _if_conditional181) {
        tail=len_148;
    }
    if(_if_conditional182=head==tail,    _if_conditional182) {
        __result196__ = __result_obj__ = ((char*)(right_value113=__builtin_string("")));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result196__;
    }
    if(_if_conditional183=tail-head+1<1,    _if_conditional183) {
        __result197__ = __result_obj__ = ((char*)(right_value114=__builtin_string("")));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result197__;
    }
    result_149=(char*)come_increment_ref_count(((char*)(right_value115=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1814, "char"))));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_149,str+head,tail-head);
    result_149[tail-head]=0;
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
    if(_if_conditional184=str==((void*)0),    _if_conditional184) {
        __result199__ = __result_obj__ = ((char*)(right_value116=__builtin_string("")));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result199__;
    }
    len_150=strlen(str);
    if(_if_conditional185=head<0,    _if_conditional185) {
        head+=len_150;
    }
    if(_if_conditional186=tail<0,    _if_conditional186) {
        tail+=len_150+1;
    }
    if(_if_conditional187=head>tail,    _if_conditional187) {
        __result200__ = __result_obj__ = ((char*)(right_value118=string_reverse(((char*)(right_value117=charp_substring(str,tail,head))))));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result200__;
    }
    if(_if_conditional188=head<0,    _if_conditional188) {
        head=0;
    }
    if(_if_conditional189=tail>=len_150,    _if_conditional189) {
        tail=len_150;
    }
    if(_if_conditional190=head==tail,    _if_conditional190) {
        __result201__ = __result_obj__ = ((char*)(right_value119=__builtin_string("")));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result201__;
    }
    if(_if_conditional191=tail-head+1<1,    _if_conditional191) {
        __result202__ = __result_obj__ = ((char*)(right_value120=__builtin_string("")));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result202__;
    }
    result_151=(char*)come_increment_ref_count(((char*)(right_value121=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1857, "char"))));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_151,str+head,tail-head);
    result_151[tail-head]=0;
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
    if(_if_conditional192=msg==((void*)0),    _if_conditional192) {
        __result204__ = __result_obj__ = ((char*)(right_value122=__builtin_string("")));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result204__;
    }
    __builtin_va_start(args_152,msg);
    len_154=vasprintf(&result_153,msg,args_152);
    __builtin_va_end(args_152);
    if(_if_conditional193=len_154<0,    _if_conditional193) {
        __result205__ = __result_obj__ = ((char*)(right_value123=__builtin_string("")));
        come_call_finalizer2(va_list_finalize,(&args_152), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result205__;
    }
    result2_155=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(result_153))));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(result_153);
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
    if(_if_conditional194=str==((void*)0),    _if_conditional194) {
        __result207__ = __result_obj__ = ((char*)(right_value125=__builtin_string("")));
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result207__;
    }
    len_156=strlen(str);
    if(_if_conditional195=strcmp(str,"")==0,    _if_conditional195) {
        __result208__ = __result_obj__ = ((char*)(right_value126=__builtin_string(str)));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result208__;
    }
    if(_if_conditional196=head<0,    _if_conditional196) {
        head+=len_156;
    }
    if(_if_conditional197=tail<0,    _if_conditional197) {
        tail+=len_156+1;
    }
    if(_if_conditional198=head<0,    _if_conditional198) {
        head=0;
    }
    if(_if_conditional199=tail<0,    _if_conditional199) {
        __result209__ = __result_obj__ = ((char*)(right_value127=__builtin_string(str)));
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result209__;
    }
    if(_if_conditional200=tail>=len_156,    _if_conditional200) {
        tail=len_156;
    }
    sub_str_157=(char*)come_increment_ref_count(((char*)(right_value128=charp_substring(str,tail,-1))));
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_157,string_length(sub_str_157)+1);
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
    if(_if_conditional201=str==((void*)0),    _if_conditional201) {
        __result211__ = __result_obj__ = ((char*)(right_value130=__builtin_string("")));
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result211__;
    }
    len_158=strlen(str);
    if(_if_conditional202=strcmp(str,"")==0,    _if_conditional202) {
        __result212__ = __result_obj__ = ((char*)(right_value131=__builtin_string(str)));
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result212__;
    }
    if(_if_conditional203=head<0,    _if_conditional203) {
        head+=len_158;
    }
    if(_if_conditional204=tail<0,    _if_conditional204) {
        tail+=len_158+1;
    }
    if(_if_conditional205=head<0,    _if_conditional205) {
        head=0;
    }
    if(_if_conditional206=tail<0,    _if_conditional206) {
        __result213__ = __result_obj__ = ((char*)(right_value132=__builtin_string(str)));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result213__;
    }
    if(_if_conditional207=tail>=len_158,    _if_conditional207) {
        tail=len_158;
    }
    sub_str_159=(char*)come_increment_ref_count(((char*)(right_value133=charp_substring(str,tail,-1))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_159,string_length(sub_str_159)+1);
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
    if(_if_conditional208=self==((void*)0),    _if_conditional208) {
        __result216__ = __result_obj__ = ((struct list$1charph*)(right_value136=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1968, "list$1charph")))))));
        come_call_finalizer2(list$1charphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        return __result216__;
    }
    result_162=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value138=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value137=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1971, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    str_163=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value140=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value139=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1973, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_164=0;    i_164<charp_length(self);    i_164++    ){
        if(_if_conditional210=self[i_164]==c,        _if_conditional210) {
            list$1charph_push_back(result_162,(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(str_163->buf)))));
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_163);
        }
        else {
            buffer_append_char(str_163,self[i_164]);
        }
    }
    if(_if_conditional213=buffer_length(str_163)!=0,    _if_conditional213) {
        list$1charph_push_back(result_162,(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string(str_163->buf)))));
        right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
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
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
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
                it_160=self->head;
                while(_while_condtional3=it_160!=((void*)0),                _while_condtional3) {
                    prev_it_161=it_160;
                    it_160=it_160->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                if(_if_conditional211=self->len==0,                _if_conditional211) {
                    litem_165=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_165->prev=((void*)0);
                    litem_165->next=((void*)0);
                    __dec_obj22=litem_165->item;
                    litem_165->item=(char*)come_increment_ref_count(item);
                    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_165;
                    self->head=litem_165;
                }
                else {
                    if(_if_conditional212=self->len==1,                    _if_conditional212) {
                        litem_166=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_166->prev=self->head;
                        litem_166->next=((void*)0);
                        __dec_obj23=litem_166->item;
                        litem_166->item=(char*)come_increment_ref_count(item);
                        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_166;
                        self->head->next=litem_166;
                    }
                    else {
                        litem_167=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_167->prev=self->tail;
                        litem_167->next=((void*)0);
                        __dec_obj24=litem_167->item;
                        litem_167->item=(char*)come_increment_ref_count(item);
                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_167;
                        self->tail=litem_167;
                    }
                }
                self->len++;
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
    if(_if_conditional214=self==((void*)0),    _if_conditional214) {
        __result219__ = __result_obj__ = ((struct list$1charph*)(right_value147=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value146=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1994, "list$1charph")))))));
        come_call_finalizer2(list$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        return __result219__;
    }
    result_168=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value148=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1997, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    str_169=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value151=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value150=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1999, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_170=0;    i_170<charp_length(self);    i_170++    ){
        if(_if_conditional215=self[i_170]==c,        _if_conditional215) {
            list$1charph_push_back(result_168,(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(str_169->buf)))));
            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_169);
        }
        else {
            buffer_append_char(str_169,self[i_170]);
        }
    }
    if(_if_conditional216=buffer_length(str_169)!=0,    _if_conditional216) {
        list$1charph_push_back(result_168,(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(str_169->buf)))));
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
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
    if(_if_conditional217=path==((void*)0),    _if_conditional217) {
        __result221__ = __result_obj__ = ((char*)(right_value154=__builtin_string("")));
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result221__;
    }
    p_171=path+strlen(path);
    while(_while_condtional4=p_171>=path,    _while_condtional4) {
        if(_if_conditional218=*p_171==47,        _if_conditional218) {
            break;
        }
        else {
            p_171--;
        }
    }
    if(_if_conditional219=p_171<path,    _if_conditional219) {
        __result222__ = __result_obj__ = ((char*)(right_value155=__builtin_string(path)));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result222__;
    }
    else {
        __result223__ = __result_obj__ = ((char*)(right_value156=__builtin_string(p_171+1)));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result223__;
    }
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
    if(_if_conditional220=path==((void*)0),    _if_conditional220) {
        __result225__ = __result_obj__ = ((char*)(right_value158=__builtin_string("")));
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result225__;
    }
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
    if(_if_conditional221=path==((void*)0),    _if_conditional221) {
        __result227__ = __result_obj__ = ((char*)(right_value161=__builtin_string("")));
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result227__;
    }
    path2_172=(char*)come_increment_ref_count(((char*)(right_value162=xbasename(path))));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    p_173=path2_172+strlen(path2_172);
    while(_while_condtional5=p_173>=path2_172,    _while_condtional5) {
        if(_if_conditional222=*p_173==46,        _if_conditional222) {
            break;
        }
        else {
            p_173--;
        }
    }
    if(_if_conditional223=p_173<path2_172,    _if_conditional223) {
        __result228__ = __result_obj__ = ((char*)(right_value163=__builtin_string(path2_172)));
        path2_172 = come_decrement_ref_count2(path2_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result228__;
    }
    else {
        __result229__ = __result_obj__ = ((char*)(right_value164=string_substring(path2_172,0,p_173-path2_172)));
        path2_172 = come_decrement_ref_count2(path2_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result229__;
    }
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
    if(_if_conditional224=path==((void*)0),    _if_conditional224) {
        __result231__ = __result_obj__ = ((char*)(right_value166=__builtin_string("")));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result231__;
    }
    p_174=path+strlen(path);
    while(_while_condtional6=p_174>=path,    _while_condtional6) {
        if(_if_conditional225=*p_174==46,        _if_conditional225) {
            break;
        }
        else {
            p_174--;
        }
    }
    if(_if_conditional226=p_174<path,    _if_conditional226) {
        __result232__ = __result_obj__ = ((char*)(right_value167=__builtin_string(path)));
        right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result232__;
    }
    else {
        __result233__ = __result_obj__ = ((char*)(right_value168=__builtin_string(p_174+1)));
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result233__;
    }
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
    if(_if_conditional227=path==((void*)0),    _if_conditional227) {
        __result235__ = __result_obj__ = ((char*)(right_value170=__builtin_string("")));
        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result235__;
    }
    result_175=realpath(path,((void*)0));
    result2_176=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(result_175))));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(result_175);
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
    if(self) {
        __result237__ = __result_obj__ = ((char*)(right_value172=__builtin_string("true")));
        right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result237__;
    }
    else {
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
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        __result246__ = __result_obj__ = ((char*)(right_value181=__builtin_string("")));
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result246__;
    }
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
    if(_if_conditional230=self==((void*)0),    _if_conditional230) {
        __result248__ = __result_obj__ = ((char*)(right_value183=__builtin_string("")));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result248__;
    }
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
    if(_if_conditional231=!left&&right,    _if_conditional231) {
        __result250__ = -1;
        return __result250__;
    }
    else {
        if(_if_conditional232=left&&right,        _if_conditional232) {
            __result251__ = 0;
            return __result251__;
        }
        else {
            if(_if_conditional233=!left&&!right,            _if_conditional233) {
                __result252__ = 0;
                return __result252__;
            }
            else {
                __result253__ = 1;
                return __result253__;
            }
        }
    }
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
    if(_if_conditional234=left<right,    _if_conditional234) {
        __result255__ = -1;
        return __result255__;
    }
    else {
        if(_if_conditional235=left>right,        _if_conditional235) {
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

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional236;
int __result259__;
_Bool _if_conditional237;
int __result260__;
int __result261__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional236=left<right,    _if_conditional236) {
        __result259__ = -1;
        return __result259__;
    }
    else {
        if(_if_conditional237=left>right,        _if_conditional237) {
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

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional238;
int __result263__;
_Bool _if_conditional239;
int __result264__;
int __result265__;
int __result266__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional238=left<right,    _if_conditional238) {
        __result263__ = -1;
        return __result263__;
    }
    else {
        if(_if_conditional239=left>right,        _if_conditional239) {
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

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional240;
int __result267__;
_Bool _if_conditional241;
int __result268__;
int __result269__;
int __result270__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional240=left<right,    _if_conditional240) {
        __result267__ = -1;
        return __result267__;
    }
    else {
        if(_if_conditional241=left>right,        _if_conditional241) {
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

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool _if_conditional242;
int __result271__;
_Bool _if_conditional243;
int __result272__;
int __result273__;
int __result274__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional242=left<right,    _if_conditional242) {
        __result271__ = -1;
        return __result271__;
    }
    else {
        if(_if_conditional243=left>right,        _if_conditional243) {
            __result272__ = 1;
            return __result272__;
        }
        else {
            __result273__ = 0;
            return __result273__;
        }
    }
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
    if(_if_conditional244=left<right,    _if_conditional244) {
        __result275__ = -1;
        return __result275__;
    }
    else {
        if(_if_conditional245=left>right,        _if_conditional245) {
            __result276__ = 1;
            return __result276__;
        }
        else {
            __result277__ = 0;
            return __result277__;
        }
    }
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
    if(_if_conditional246=left<right,    _if_conditional246) {
        __result279__ = -1;
        return __result279__;
    }
    else {
        if(_if_conditional247=left>right,        _if_conditional247) {
            __result280__ = 1;
            return __result280__;
        }
        else {
            __result281__ = 0;
            return __result281__;
        }
    }
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
    if(_if_conditional248=left==((void*)0)&&right==((void*)0),    _if_conditional248) {
        __result283__ = 0;
        return __result283__;
    }
    else {
        if(_if_conditional249=left==((void*)0),        _if_conditional249) {
            __result284__ = -1;
            return __result284__;
        }
        else {
            if(_if_conditional250=right==((void*)0),            _if_conditional250) {
                __result285__ = 1;
                return __result285__;
            }
        }
    }
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
    if(_if_conditional251=left==((void*)0)&&right==((void*)0),    _if_conditional251) {
        __result287__ = 0;
        return __result287__;
    }
    else {
        if(_if_conditional252=left==((void*)0),        _if_conditional252) {
            __result288__ = -1;
            return __result288__;
        }
        else {
            if(_if_conditional253=right==((void*)0),            _if_conditional253) {
                __result289__ = 1;
                return __result289__;
            }
        }
    }
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
    if(_if_conditional254=f==((void*)0),    _if_conditional254) {
        __result291__ = __result_obj__ = ((char*)(right_value185=__builtin_string("")));
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result291__;
    }
    buf_177=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value187=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value186=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2350, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional7=1,    _while_condtional7) {
        char buf2_178[1024];
        memset(&buf2_178, 0, sizeof(char)        *(1024)        );
        size_179=fread(buf2_178,1,1024,f);
        buffer_append(buf_177,buf2_178,size_179);
        if(_if_conditional255=size_179<1024,        _if_conditional255) {
            break;
        }
    }
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
    if(_if_conditional256=f==((void*)0)||str==((void*)0),    _if_conditional256) {
        __result293__ = -1;
        return __result293__;
    }
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
    if(_if_conditional257=f==((void*)0),    _if_conditional257) {
        __result295__ = -1;
        return __result295__;
    }
    result_180=fclose(f);
    if(_if_conditional258=result_180<0,    _if_conditional258) {
        __result296__ = result_180;
        return __result296__;
    }
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
    if(_if_conditional259=f==((void*)0)||msg==((void*)0),    _if_conditional259) {
        __result298__ = __result_obj__ = f;
        return __result298__;
    }
    char msg2_181[1024*2*2*2];
    memset(&msg2_181, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_182,msg);
    vsnprintf(msg2_181,1024*2*2*2,msg,args_182);
    __builtin_va_end(args_182);
    result_183=fprintf(f,"%s",msg2_181);
    if(_if_conditional260=result_183<0,    _if_conditional260) {
        __result299__ = __result_obj__ = f;
        come_call_finalizer2(va_list_finalize,(&args_182), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        return __result299__;
    }
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
    if(_if_conditional261=self==((void*)0)||file_name==((void*)0),    _if_conditional261) {
        __result301__ = -1;
        return __result301__;
    }
    if(append) {
        f_184=fopen(file_name,"a");
    }
    else {
        f_184=fopen(file_name,"w");
    }
    if(_if_conditional263=f_184==((void*)0),    _if_conditional263) {
        __result302__ = -1;
        return __result302__;
    }
    result_185=fwrite(self,strlen(self),1,f_184);
    if(_if_conditional264=result_185<0,    _if_conditional264) {
        __result303__ = result_185;
        return __result303__;
    }
    result2_186=fclose(f_184);
    if(_if_conditional265=result2_186<0,    _if_conditional265) {
        __result304__ = result2_186;
        return __result304__;
    }
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
    if(_if_conditional266=self==((void*)0)||file_name==((void*)0),    _if_conditional266) {
        __result306__ = -1;
        return __result306__;
    }
    if(append) {
        f_187=fopen(file_name,"a");
    }
    else {
        f_187=fopen(file_name,"w");
    }
    if(_if_conditional268=f_187==((void*)0),    _if_conditional268) {
        __result307__ = -1;
        return __result307__;
    }
    result_188=fwrite(self,strlen(self),1,f_187);
    if(_if_conditional269=result_188<0,    _if_conditional269) {
        __result308__ = result_188;
        return __result308__;
    }
    result2_189=fclose(f_187);
    if(_if_conditional270=result2_189<0,    _if_conditional270) {
        __result309__ = result2_189;
        return __result309__;
    }
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
    if(_if_conditional271=file_name==((void*)0),    _if_conditional271) {
        __result311__ = __result_obj__ = ((char*)(right_value189=__builtin_string("")));
        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result311__;
    }
    f_190=fopen(file_name,"r");
    if(_if_conditional272=f_190==((void*)0),    _if_conditional272) {
        __result312__ = __result_obj__ = ((char*)(right_value190=__builtin_string("")));
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result312__;
    }
    buf_191=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value192=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value191=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2490, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional8=1,    _while_condtional8) {
        char buf2_192[1024];
        memset(&buf2_192, 0, sizeof(char)        *(1024)        );
        size_193=fread(buf2_192,1,1024,f_190);
        buffer_append(buf_191,buf2_192,size_193);
        if(_if_conditional273=size_193<1024,        _if_conditional273) {
            break;
        }
    }
    result_194=(char*)come_increment_ref_count(((char*)(right_value193=buffer_to_string(buf_191))));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_195=fclose(f_190);
    if(_if_conditional274=result2_195<0,    _if_conditional274) {
        __result313__ = __result_obj__ = ((char*)(right_value194=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        result_194 = come_decrement_ref_count2(result_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result313__;
    }
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
    if(_if_conditional275=file_name==((void*)0),    _if_conditional275) {
        __result315__ = __result_obj__ = ((char*)(right_value195=__builtin_string("")));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result315__;
    }
    f_196=fopen(file_name,"r");
    if(_if_conditional276=f_196==((void*)0),    _if_conditional276) {
        __result316__ = __result_obj__ = ((char*)(right_value196=__builtin_string("")));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result316__;
    }
    buf_197=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2527, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional9=1,    _while_condtional9) {
        char buf2_198[1024];
        memset(&buf2_198, 0, sizeof(char)        *(1024)        );
        size_199=fread(buf2_198,1,1024,f_196);
        buffer_append(buf_197,buf2_198,size_199);
        if(_if_conditional277=size_199<1024,        _if_conditional277) {
            break;
        }
    }
    result_200=(char*)come_increment_ref_count(((char*)(right_value199=buffer_to_string(buf_197))));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_201=fclose(f_196);
    if(_if_conditional278=result2_201<0,    _if_conditional278) {
        __result317__ = __result_obj__ = ((char*)(right_value200=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        result_200 = come_decrement_ref_count2(result_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result317__;
    }
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
    result_202=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value202=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2554, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional279=f==((void*)0),    _if_conditional279) {
        __result319__ = __result_obj__ = result_202;
        come_call_finalizer2(list$1charphp_finalize,result_202, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result319__;
    }
    while(_while_condtional10=1,    _while_condtional10) {
        char buf_203[1024];
        memset(&buf_203, 0, sizeof(char)        *(1024)        );
        if(_if_conditional280=fgets(buf_203,1024,f)==((void*)0),        _if_conditional280) {
            break;
        }
        list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(buf_203)))));
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
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
    if(_if_conditional281=path==((void*)0)||mode==((void*)0),    _if_conditional281) {
        __result321__ = -1;
        return __result321__;
    }
    f_204=fopen(path,mode);
    if(f_204) {
        block(parent,f_204);
        if(_if_conditional283=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional283) {
            fclose(f_204);
            __result322__ = 0;
            return __result322__;
        }
        fclose(f_204);
        __result323__ = 0;
        return __result323__;
    }
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
    if(_if_conditional284=self==((void*)0),    _if_conditional284) {
        __result325__ = __result_obj__ = ((char*)(right_value204=__builtin_string("")));
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result325__;
    }
    puts(self);
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
    if(_if_conditional285=self==((void*)0),    _if_conditional285) {
        __result327__ = __result_obj__ = ((char*)(right_value206=__builtin_string("")));
        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result327__;
    }
    printf("%s",self);
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
    if(_if_conditional286=self==((void*)0),    _if_conditional286) {
        __result329__ = __result_obj__ = ((char*)(right_value208=__builtin_string("")));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result329__;
    }
    __builtin_va_start(args_206,self);
    vasprintf(&msg2_205,self,args_206);
    __builtin_va_end(args_206);
    printf("%s",msg2_205);
    free(msg2_205);
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
    if(_if_conditional287=self==((void*)0),    _if_conditional287) {
        __result331__ = __result_obj__ = ((char*)(right_value210=__builtin_string("")));
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result331__;
    }
    __builtin_va_start(args_208,self);
    vasprintf(&msg2_207,self,args_208);
    __builtin_va_end(args_208);
    printf("%s",msg2_207);
    free(msg2_207);
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
    printf(msg,self);
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
    if(_if_conditional288=self==((void*)0),    _if_conditional288) {
        __result334__ = __result_obj__ = ((char*)(right_value212=__builtin_string("")));
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result334__;
    }
    puts(self);
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
    for(    i_209=0;    i_209<self;    i_209++    ){
        block(parent,i_209);
        if(_if_conditional289=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional289) {
            return;
        }
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
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
    if(_if_conditional290=left->value<right->value,    _if_conditional290) {
        __result342__ = -1;
        return __result342__;
    }
    else {
        if(_if_conditional291=left->value>right->value,        _if_conditional291) {
            __result343__ = 1;
            return __result343__;
        }
        else {
            __result344__ = 0;
            return __result344__;
        }
    }
    __result345__ = 0;
    return __result345__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result346__;
memset(&__result_obj__, 0, sizeof(void*));
    __result346__ = self->value==right->value;
    return __result346__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result347__;
memset(&__result_obj__, 0, sizeof(void*));
    __result347__ = self->value==right->value;
    return __result347__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result348__;
memset(&__result_obj__, 0, sizeof(void*));
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
    __result364__ = __result_obj__ = ((struct integer*)(right_value253=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value252=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2.c", 2830, "integer")))),left->value||right->value)));
    come_call_finalizer2(integer_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(integer_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result364__;
}

