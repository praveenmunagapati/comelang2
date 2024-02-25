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
struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};
struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

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

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

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

char* dirname(char* anonymous_var_nameX540);

char* basename(char* anonymous_var_nameX541);

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline);

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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1951, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1961, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1971, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1981, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1991, "struct smart_pointer$1long"))));
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

void come_push_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional5=gNumComeStackFrame<1024,    _if_conditional5) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional6=gNumComeStackFrame>0,    _if_conditional6) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* buf_5;
void* right_value12;
int i_6;
void* right_value13;
_Bool _if_conditional7;
void* right_value14;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&buf_5, 0, sizeof(struct buffer*));
right_value12 = (void*)0;
memset(&i_6, 0, sizeof(int));
right_value13 = (void*)0;
right_value14 = (void*)0;
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 38, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_5,((char*)(right_value12=xsprintf("%s %d\n",sname,sline))));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_6=gNumComeStackFrame-2;    i_6>=0;    i_6--    ){
        buffer_append_str(buf_5,((char*)(right_value13=xsprintf("%s %d\n",gComeStackFrameSName[i_6],gComeStackFrameSLine[i_6]))));
        right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(right_value14=buffer_to_string(buf_5))));
    right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
void* __result_obj__;
int i_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_7, 0, sizeof(int));
    for(    i_7=gNumComeStackFrame-1;    i_7>=0;    i_7--    ){
        printf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
void* right_value15;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
    __result7__ = __result_obj__ = ((char*)(right_value15=__builtin_string(gComeStackFrameBuffer)));
    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result7__;
}

void* come_null_check(void* mem, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional8;
void* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional8=mem==((void*)0),    _if_conditional8) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result8__ = __result_obj__ = mem;
    return __result8__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
void* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional9=mem==((void*)0),    _if_conditional9) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional10=mem<begin,    _if_conditional10) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional11=mem>=end,    _if_conditional11) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result9__ = __result_obj__ = mem;
    return __result9__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool __result10__;
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional12=!self,    _if_conditional12) {
        block(parent);
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional13) {
            __result10__ = self;
            return __result10__;
        }
        stackframe();
        exit(1);
    }
    __result11__ = self;
    return __result11__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result12__;
memset(&__result_obj__, 0, sizeof(void*));
    __result12__ = self;
    return __result12__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result13__;
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional14=self<0,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            __result13__ = self;
            return __result13__;
        }
    }
    __result14__ = self;
    return __result14__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional17;
int __result15__;
int __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional16=self<0,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            __result15__ = self;
            return __result15__;
        }
        stackframe();
        exit(1);
    }
    __result16__ = self;
    return __result16__;
}

int int_value(int self){
void* __result_obj__;
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
    __result17__ = self;
    return __result17__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional18;
_Bool _if_conditional19;
int __result18__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional18=self<0,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            __result18__ = self;
            return __result18__;
        }
    }
    __result19__ = self;
    return __result19__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool __result20__;
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional20=!self,    _if_conditional20) {
        block(parent);
        if(_if_conditional21=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional21) {
            __result20__ = self;
            return __result20__;
        }
    }
    __result21__ = self;
    return __result21__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result22__;
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional22=!self,    _if_conditional22) {
        block(parent);
        if(_if_conditional23=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional23) {
            __result22__ = self;
            return __result22__;
        }
    }
    __result23__ = self;
    return __result23__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s...",msg);
    if(_if_conditional24=!test,    _if_conditional24) {
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
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
struct sMemHeader* it_9;
int n_10;
_Bool flag_11;
_Bool _if_conditional28;
int i_12;
_Bool _if_conditional29;
_Bool _if_conditional30;
struct sMemHeaderTiny* it_13;
int n_14;
_Bool _if_conditional31;
int i_15;
int i_16;
_Bool _if_conditional32;
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
                    printf("(%s): ",it_9->class_name);
                }
                for(                i_12=0;                i_12<16;                i_12++                ){
                    if(_if_conditional29=it_9->sname[i_12],                    _if_conditional29) {
                        printf("%s %d, ",it_9->sname[i_12],it_9->sline[i_12]);
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
            if(_if_conditional31=n_14>0,            _if_conditional31) {
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_14,gNumAlloc,gNumFree);
            }
        }
    }
    for(    i_15=0;    i_15<gHeapPages.mSizePages;    i_15++    ){
        free(gHeapPages.mPages[i_15]);
    }
    free(gHeapPages.mPages);
    for(    i_16=0;    i_16<4048;    i_16++    ){
        if(_if_conditional32=gHeapPages.mFreeMem[i_16],        _if_conditional32) {
            free(gHeapPages.mFreeMem[i_16]);
        }
    }
}

static void* alloc_from_pages(unsigned long int size){
void* __result_obj__;
void* result_17;
_Bool _if_conditional33;
_Bool _if_conditional34;
struct sMemHeaderTiny* it_18;
_Bool _if_conditional35;
unsigned long int free_area_19;
_Bool _if_conditional36;
_Bool _if_conditional37;
int new_size_pages_20;
void** new_pages_21;
int i_22;
void* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_17, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct sMemHeaderTiny*));
memset(&free_area_19, 0, sizeof(unsigned long int));
memset(&new_size_pages_20, 0, sizeof(int));
memset(&new_pages_21, 0, sizeof(void**));
memset(&i_22, 0, sizeof(int));
    result_17=((void*)0);
    if(_if_conditional33=size<4048,    _if_conditional33) {
        if(_if_conditional34=gHeapPages.mFreeMem[size]&&gHeapPages.mNumFreeMem[size]>0,        _if_conditional34) {
            it_18=gHeapPages.mFreeMem[size][gHeapPages.mNumFreeMem[size]-1];
            gHeapPages.mNumFreeMem[size]--;
        }
        if(_if_conditional35=result_17==((void*)0),        _if_conditional35) {
            free_area_19=gHeapPages.mPages[gHeapPages.mCurrentPages]+4048-gHeapPages.mTop;
            if(_if_conditional36=size>=free_area_19,            _if_conditional36) {
                gHeapPages.mCurrentPages++;
                if(_if_conditional37=gHeapPages.mCurrentPages==gHeapPages.mSizePages,                _if_conditional37) {
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
    __result24__ = __result_obj__ = result_17;
    return __result24__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional38;
void* result_23;
struct sMemHeader* it_24;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
void* __result25__;
void* result_25;
struct sMemHeaderTiny* it_26;
_Bool _if_conditional42;
void* __result26__;
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
        come_push_stackframe(sname,sline);
        if(_if_conditional39=gNumComeStackFrame<16,        _if_conditional39) {
            memcpy(it_24->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_24->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_24->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_24->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
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
        __result25__ = __result_obj__ = (char*)result_23+sizeof(struct sMemHeader);
        return __result25__;
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
        __result26__ = __result_obj__ = (char*)result_25+sizeof(struct sMemHeaderTiny);
        return __result26__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
void* __result_obj__;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sMemHeader* it_27;
_Bool _if_conditional46;
struct sMemHeader* prev_it_28;
struct sMemHeader* next_it_29;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
unsigned long int size_30;
_Bool _if_conditional52;
int num_free_mem_31;
int size_free_mem_32;
_Bool _if_conditional53;
int new_size_free_mem_33;
void** new_free_mem_34;
_Bool _if_conditional54;
int new_size_free_mem_35;
void** new_free_mem_36;
struct sMemHeaderTiny* it_37;
_Bool _if_conditional55;
struct sMemHeaderTiny* prev_it_38;
struct sMemHeaderTiny* next_it_39;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
unsigned long int size_40;
_Bool _if_conditional60;
int num_free_mem_41;
int size_free_mem_42;
_Bool _if_conditional61;
int new_size_free_mem_43;
void** new_free_mem_44;
_Bool _if_conditional62;
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
                if(_if_conditional46=it_27->allocated!=177783,                _if_conditional46) {
                    return;
                }
                it_27->allocated=0;
                prev_it_28=it_27->prev;
                next_it_29=it_27->next;
                if(it_27->class_name) {
                    free(it_27->class_name);
                }
                if(_if_conditional48=gAllocMem==it_27,                _if_conditional48) {
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
                if(_if_conditional52=size_30<4048,                _if_conditional52) {
                    num_free_mem_31=gHeapPages.mNumFreeMem[size_30];
                    size_free_mem_32=gHeapPages.mSizeFreeMem[size_30];
                    if(_if_conditional53=gHeapPages.mFreeMem[size_30]==((void*)0),                    _if_conditional53) {
                        new_size_free_mem_33=16;
                        new_free_mem_34=calloc(1,sizeof(void*)*new_size_free_mem_33);
                        gHeapPages.mSizeFreeMem[size_30]=new_size_free_mem_33;
                        gHeapPages.mFreeMem[size_30]=new_free_mem_34;
                    }
                    else {
                        if(_if_conditional54=num_free_mem_31==size_free_mem_32,                        _if_conditional54) {
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
                if(_if_conditional55=it_37->allocated!=177783,                _if_conditional55) {
                    return;
                }
                it_37->allocated=0;
                prev_it_38=it_37->prev;
                next_it_39=it_37->next;
                if(_if_conditional56=gAllocMem==it_37,                _if_conditional56) {
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
                if(_if_conditional60=size_40<4048,                _if_conditional60) {
                    num_free_mem_41=gHeapPages.mNumFreeMem[size_40];
                    size_free_mem_42=gHeapPages.mSizeFreeMem[size_40];
                    if(_if_conditional61=gHeapPages.mFreeMem[size_40]==((void*)0),                    _if_conditional61) {
                        new_size_free_mem_43=16;
                        new_free_mem_44=calloc(1,sizeof(void*)*new_size_free_mem_43);
                        gHeapPages.mSizeFreeMem[size_40]=new_size_free_mem_43;
                        gHeapPages.mFreeMem[size_40]=new_free_mem_44;
                    }
                    else {
                        if(_if_conditional62=num_free_mem_41==size_free_mem_42,                        _if_conditional62) {
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

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_47;
unsigned long int* ref_count_48;
unsigned long int* size2_49;
void* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_47, 0, sizeof(char*));
memset(&ref_count_48, 0, sizeof(unsigned long int*));
memset(&size2_49, 0, sizeof(unsigned long int*));
    mem_47=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_48=(unsigned long int*)mem_47;
    *ref_count_48=0;
    size2_49=(unsigned long int*)(mem_47+sizeof(unsigned long int));
    *size2_49=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result27__ = __result_obj__ = mem_47+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result27__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional63;
unsigned long int* ref_count_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_50, 0, sizeof(unsigned long int*));
    if(_if_conditional63=mem==((void*)0),    _if_conditional63) {
        return;
    }
    ref_count_50=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_50);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional64;
unsigned long int* ref_count_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_51, 0, sizeof(unsigned long int*));
    if(_if_conditional64=mem==((void*)0),    _if_conditional64) {
        return;
    }
    ref_count_51=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_51);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional65;
void* __result28__;
char* mem_52;
unsigned long int* size_p_53;
unsigned long int size_54;
void* result_55;
void* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_52, 0, sizeof(char*));
memset(&size_p_53, 0, sizeof(unsigned long int*));
memset(&size_54, 0, sizeof(unsigned long int));
memset(&result_55, 0, sizeof(void*));
    if(_if_conditional65=!block,    _if_conditional65) {
        __result28__ = __result_obj__ = ((void*)0);
        return __result28__;
    }
    mem_52=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_53=(unsigned long int*)(mem_52+sizeof(unsigned long int));
    size_54=*size_p_53-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_55=come_calloc(1,size_54,sname,sline,class_name);
    memcpy(result_55,block,size_54);
    __result29__ = __result_obj__ = result_55;
    return __result29__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional66;
void* __result30__;
unsigned long int* ref_count_56;
void* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_56, 0, sizeof(unsigned long int*));
    if(_if_conditional66=mem==((void*)0),    _if_conditional66) {
        __result30__ = __result_obj__ = mem;
        return __result30__;
    }
    ref_count_56=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*ref_count_56)++;
    __result31__ = __result_obj__ = mem;
    return __result31__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional67;
void* __result32__;
unsigned long int* ref_count_57;
void* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_57, 0, sizeof(unsigned long int*));
    if(_if_conditional67=mem==((void*)0),    _if_conditional67) {
        __result32__ = __result_obj__ = mem;
        return __result32__;
    }
    ref_count_57=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    printf("ref_count %ld\n",*ref_count_57);
    __result33__ = __result_obj__ = mem;
    return __result33__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional68;
void* __result34__;
unsigned long int* ref_count_58;
_Bool _if_conditional69;
unsigned long int count_59;
_Bool _if_conditional70;
_Bool _if_conditional71;
void (*finalizer_60)(void*);
void* __result35__;
void* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_58, 0, sizeof(unsigned long int*));
memset(&count_59, 0, sizeof(unsigned long int));
memset(&finalizer_60, 0, sizeof(void (*)(void*)));
    if(_if_conditional68=mem==((void*)0),    _if_conditional68) {
        __result34__ = __result_obj__ = ((void*)0);
        return __result34__;
    }
    ref_count_58=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional69=!no_decrement,    _if_conditional69) {
        (*ref_count_58)--;
    }
    count_59=*ref_count_58;
    if(_if_conditional70=!no_free&&(count_59<=0||force_delete_),    _if_conditional70) {
        if(_if_conditional71=protocol_obj&&protocol_fun,        _if_conditional71) {
            finalizer_60=protocol_fun;
            finalizer_60(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result35__ = __result_obj__ = ((void*)0);
        return __result35__;
    }
    __result36__ = __result_obj__ = mem;
    return __result36__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional72;
_Bool _if_conditional73;
void* __result37__;
_Bool _if_conditional74;
void* __result38__;
unsigned long int* ref_count_61;
_Bool _if_conditional75;
unsigned long int count_62;
_Bool _if_conditional76;
_Bool _if_conditional77;
void (*finalizer_63)(void*);
void* __result39__;
void* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_61, 0, sizeof(unsigned long int*));
memset(&count_62, 0, sizeof(unsigned long int));
memset(&finalizer_63, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(_if_conditional73=mem==result_obj,        _if_conditional73) {
            __result37__ = __result_obj__ = mem;
            return __result37__;
        }
    }
    if(_if_conditional74=mem==((void*)0),    _if_conditional74) {
        __result38__ = __result_obj__ = ((void*)0);
        return __result38__;
    }
    ref_count_61=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional75=!no_decrement,    _if_conditional75) {
        (*ref_count_61)--;
    }
    count_62=*ref_count_61;
    if(_if_conditional76=!no_free&&(count_62<=0||force_delete_),    _if_conditional76) {
        if(_if_conditional77=protocol_obj&&protocol_fun,        _if_conditional77) {
            finalizer_63=protocol_fun;
            finalizer_63(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result39__ = __result_obj__ = ((void*)0);
        return __result39__;
    }
    __result40__ = __result_obj__ = mem;
    return __result40__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void (*finalizer_64)(void*);
void (*finalizer_65)(void*);
unsigned long int* ref_count_66;
_Bool _if_conditional82;
unsigned long int count_67;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void (*finalizer_68)(void*);
_Bool _if_conditional86;
void (*finalizer_69)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_64, 0, sizeof(void (*)(void*)));
memset(&finalizer_65, 0, sizeof(void (*)(void*)));
memset(&ref_count_66, 0, sizeof(unsigned long int*));
memset(&count_67, 0, sizeof(unsigned long int));
memset(&finalizer_68, 0, sizeof(void (*)(void*)));
memset(&finalizer_69, 0, sizeof(void (*)(void*)));
    if(_if_conditional78=mem==((void*)0),    _if_conditional78) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional81=protocol_obj&&protocol_fun,            _if_conditional81) {
                finalizer_64=protocol_fun;
                finalizer_64(protocol_obj);
            }
            finalizer_65=fun;
            finalizer_65(mem);
        }
    }
    else {
        ref_count_66=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional82=!no_decrement,        _if_conditional82) {
            (*ref_count_66)--;
        }
        count_67=*ref_count_66;
        if(_if_conditional83=!no_free&&(count_67<=0||force_delete_),        _if_conditional83) {
            if(mem) {
                if(_if_conditional85=protocol_obj&&protocol_fun,                _if_conditional85) {
                    finalizer_68=protocol_fun;
                    finalizer_68(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_69=fun;
                    finalizer_69(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void (*finalizer_70)(void*);
void (*finalizer_71)(void*);
unsigned long int* ref_count_72;
_Bool _if_conditional93;
unsigned long int count_73;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
void (*finalizer_74)(void*);
_Bool _if_conditional97;
void (*finalizer_75)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_70, 0, sizeof(void (*)(void*)));
memset(&finalizer_71, 0, sizeof(void (*)(void*)));
memset(&ref_count_72, 0, sizeof(unsigned long int*));
memset(&count_73, 0, sizeof(unsigned long int));
memset(&finalizer_74, 0, sizeof(void (*)(void*)));
memset(&finalizer_75, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(_if_conditional88=mem==result_obj,        _if_conditional88) {
            return;
        }
    }
    if(_if_conditional89=mem==((void*)0),    _if_conditional89) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional92=protocol_obj&&protocol_fun,            _if_conditional92) {
                finalizer_70=protocol_fun;
                finalizer_70(protocol_obj);
            }
            finalizer_71=fun;
            finalizer_71(mem);
        }
    }
    else {
        ref_count_72=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional93=!no_decrement,        _if_conditional93) {
            (*ref_count_72)--;
        }
        count_73=*ref_count_72;
        if(_if_conditional94=!no_free&&(count_73<=0||force_delete_),        _if_conditional94) {
            if(mem) {
                if(_if_conditional96=protocol_obj&&protocol_fun,                _if_conditional96) {
                    finalizer_74=protocol_fun;
                    finalizer_74(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_75=fun;
                    finalizer_75(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional98;
char* __result41__;
int len_76;
void* right_value16;
char* result_77;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_76, 0, sizeof(int));
right_value16 = (void*)0;
memset(&result_77, 0, sizeof(char*));
    if(_if_conditional98=str==((void*)0),    _if_conditional98) {
        __result41__ = __result_obj__ = ((void*)0);
        return __result41__;
    }
    len_76=strlen(str)+1;
    result_77=(char*)come_increment_ref_count(((char*)(right_value16=(char*)come_calloc(1, sizeof(char)*(1*(len_76)), "libcomelang2.c", 901, "char"))));
    right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_77,str,len_76);
    __result42__ = __result_obj__ = result_77;
    result_77 = come_decrement_ref_count2(result_77, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result42__;
    result_77 = come_decrement_ref_count2(result_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_78;
int i_79;
_Bool _if_conditional99;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_78, 0, sizeof(_Bool));
memset(&i_79, 0, sizeof(int));
    found_78=(_Bool)0;
    for(    i_79=0;    i_79<len;    i_79++    ){
        if(_if_conditional99=array[i_79]==element,        _if_conditional99) {
            found_78=(_Bool)1;
            break;
        }
    }
    __result43__ = found_78;
    return __result43__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
void* right_value17;
char* __dec_obj6;
struct buffer* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
    self->size=128;
    __dec_obj6=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value17=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 926, "char"))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->buf[0]=0;
    self->len=0;
    __result44__ = __result_obj__ = self;
    come_call_finalizer2(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result44__;
    come_call_finalizer2(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional100;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional100=self&&self->buf,    _if_conditional100) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional101=self&&self->buf,    _if_conditional101) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional102;
struct buffer* __result45__;
void* right_value18;
struct buffer* result_80;
void* right_value19;
char* __dec_obj7;
struct buffer* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_80, 0, sizeof(struct buffer*));
right_value19 = (void*)0;
    if(_if_conditional102=self==((void*)0),    _if_conditional102) {
        __result45__ = __result_obj__ = ((void*)0);
        return __result45__;
    }
    result_80=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 948, "struct buffer"))));
    come_call_finalizer2(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_80->size=self->size;
    __dec_obj7=result_80->buf;
    result_80->buf=(char*)come_increment_ref_count(((char*)(right_value19=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 951, "char"))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_80->len=self->len;
    memcpy(result_80->buf,self->buf,self->len);
    __result46__ = __result_obj__ = result_80;
    come_call_finalizer2(buffer_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result46__;
    come_call_finalizer2(buffer_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional103;
int __result47__;
int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional103=self==((void*)0),    _if_conditional103) {
        __result47__ = 0;
        return __result47__;
    }
    __result48__ = self->len;
    return __result48__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional104=self==((void*)0),    _if_conditional104) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional105;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional105=self==((void*)0),    _if_conditional105) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool _if_conditional106;
struct buffer* __result49__;
_Bool _if_conditional107;
void* right_value20;
char* old_buf_81;
int old_len_82;
int new_size_83;
void* right_value21;
char* __dec_obj8;
struct buffer* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&old_buf_81, 0, sizeof(char*));
memset(&old_len_82, 0, sizeof(int));
memset(&new_size_83, 0, sizeof(int));
right_value21 = (void*)0;
    if(_if_conditional106=self==((void*)0)||mem==((void*)0),    _if_conditional106) {
        __result49__ = __result_obj__ = self;
        return __result49__;
    }
    if(_if_conditional107=self->len+size+1+1>=self->size,    _if_conditional107) {
        old_buf_81=(char*)come_increment_ref_count(((char*)(right_value20=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 990, "char"))));
        right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_81,self->buf,self->size);
        old_len_82=self->len;
        new_size_83=(self->size+size+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(new_size_83)), "libcomelang2.c", 994, "char"))));
        __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value21 = come_decrement_ref_count2(right_value21, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_81,old_len_82);
        self->buf[old_len_82]=0;
        self->size=new_size_83;
        old_buf_81 = come_decrement_ref_count2(old_buf_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result50__ = __result_obj__ = self;
    return __result50__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional108;
struct buffer* __result51__;
_Bool _if_conditional109;
void* right_value22;
char* old_buf_84;
int old_len_85;
int new_size_86;
void* right_value23;
char* __dec_obj9;
struct buffer* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
memset(&old_buf_84, 0, sizeof(char*));
memset(&old_len_85, 0, sizeof(int));
memset(&new_size_86, 0, sizeof(int));
right_value23 = (void*)0;
    if(_if_conditional108=self==((void*)0),    _if_conditional108) {
        __result51__ = __result_obj__ = ((void*)0);
        return __result51__;
    }
    if(_if_conditional109=self->len+1+1+1>=self->size,    _if_conditional109) {
        old_buf_84=(char*)come_increment_ref_count(((char*)(right_value22=charp_clone(self->buf))));
        right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        old_len_85=self->len;
        new_size_86=(self->size+10+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value23=(char*)come_calloc(1, sizeof(char)*(1*(new_size_86)), "libcomelang2.c", 1017, "char"))));
        __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_84,old_len_85);
        self->buf[old_len_85]=0;
        self->size=new_size_86;
        old_buf_84 = come_decrement_ref_count2(old_buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result52__ = __result_obj__ = self;
    return __result52__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional110;
struct buffer* __result53__;
int size_87;
_Bool _if_conditional111;
void* right_value24;
char* old_buf_88;
int old_len_89;
int new_size_90;
void* right_value25;
char* __dec_obj10;
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_87, 0, sizeof(int));
right_value24 = (void*)0;
memset(&old_buf_88, 0, sizeof(char*));
memset(&old_len_89, 0, sizeof(int));
memset(&new_size_90, 0, sizeof(int));
right_value25 = (void*)0;
    if(_if_conditional110=self==((void*)0)||mem==((void*)0),    _if_conditional110) {
        __result53__ = __result_obj__ = self;
        return __result53__;
    }
    size_87=strlen(mem);
    if(_if_conditional111=self->len+size_87+1+1>=self->size,    _if_conditional111) {
        old_buf_88=(char*)come_increment_ref_count(((char*)(right_value24=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1039, "char"))));
        right_value24 = come_decrement_ref_count2(right_value24, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_88,self->buf,self->size);
        old_len_89=self->len;
        new_size_90=(self->size+size_87+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(new_size_90)), "libcomelang2.c", 1043, "char"))));
        __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_88,old_len_89);
        self->buf[old_len_89]=0;
        self->size=new_size_90;
        old_buf_88 = come_decrement_ref_count2(old_buf_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_87);
    self->len+=size_87;
    self->buf[self->len]=0;
    __result54__ = __result_obj__ = self;
    return __result54__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional112;
struct buffer* __result55__;
int size_91;
_Bool _if_conditional113;
void* right_value26;
char* old_buf_92;
int old_len_93;
int new_size_94;
void* right_value27;
char* __dec_obj11;
struct buffer* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_91, 0, sizeof(int));
right_value26 = (void*)0;
memset(&old_buf_92, 0, sizeof(char*));
memset(&old_len_93, 0, sizeof(int));
memset(&new_size_94, 0, sizeof(int));
right_value27 = (void*)0;
    if(_if_conditional112=self==((void*)0)||mem==((void*)0),    _if_conditional112) {
        __result55__ = __result_obj__ = self;
        return __result55__;
    }
    size_91=strlen(mem)+1;
    if(_if_conditional113=self->len+size_91+1+1+1>=self->size,    _if_conditional113) {
        old_buf_92=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1063, "char"))));
        right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_92,self->buf,self->size);
        old_len_93=self->len;
        new_size_94=(self->size+size_91+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(new_size_94)), "libcomelang2.c", 1067, "char"))));
        __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value27 = come_decrement_ref_count2(right_value27, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_92,old_len_93);
        self->buf[old_len_93]=0;
        self->size=new_size_94;
        old_buf_92 = come_decrement_ref_count2(old_buf_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_91);
    self->len+=size_91;
    self->buf[self->len]=0;
    self->len++;
    __result56__ = __result_obj__ = self;
    return __result56__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional114;
struct buffer* __result57__;
int* mem_95;
int size_96;
_Bool _if_conditional115;
void* right_value28;
char* old_buf_97;
int old_len_98;
int new_size_99;
void* right_value29;
char* __dec_obj12;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_95, 0, sizeof(int*));
memset(&size_96, 0, sizeof(int));
right_value28 = (void*)0;
memset(&old_buf_97, 0, sizeof(char*));
memset(&old_len_98, 0, sizeof(int));
memset(&new_size_99, 0, sizeof(int));
right_value29 = (void*)0;
    if(_if_conditional114=self==((void*)0),    _if_conditional114) {
        __result57__ = __result_obj__ = ((void*)0);
        return __result57__;
    }
    mem_95=&value;
    size_96=sizeof(int);
    if(_if_conditional115=self->len+size_96+1+1>=self->size,    _if_conditional115) {
        old_buf_97=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1090, "char"))));
        right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_97,self->buf,self->size);
        old_len_98=self->len;
        new_size_99=(self->size+size_96+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(new_size_99)), "libcomelang2.c", 1094, "char"))));
        __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value29 = come_decrement_ref_count2(right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_97,old_len_98);
        self->buf[old_len_98]=0;
        self->size=new_size_99;
        old_buf_97 = come_decrement_ref_count2(old_buf_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_95,size_96);
    self->len+=size_96;
    self->buf[self->len]=0;
    __result58__ = __result_obj__ = self;
    return __result58__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_100;
int size_101;
_Bool _if_conditional116;
void* right_value30;
char* old_buf_102;
int old_len_103;
int new_size_104;
void* right_value31;
char* __dec_obj13;
struct buffer* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_100, 0, sizeof(long*));
memset(&size_101, 0, sizeof(int));
right_value30 = (void*)0;
memset(&old_buf_102, 0, sizeof(char*));
memset(&old_len_103, 0, sizeof(int));
memset(&new_size_104, 0, sizeof(int));
right_value31 = (void*)0;
    mem_100=&value;
    size_101=sizeof(long);
    if(_if_conditional116=self->len+size_101+1+1>=self->size,    _if_conditional116) {
        old_buf_102=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1113, "char"))));
        right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_102,self->buf,self->size);
        old_len_103=self->len;
        new_size_104=(self->size+size_101+1)*2;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(new_size_104)), "libcomelang2.c", 1117, "char"))));
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value31 = come_decrement_ref_count2(right_value31, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_102,old_len_103);
        self->buf[old_len_103]=0;
        self->size=new_size_104;
        old_buf_102 = come_decrement_ref_count2(old_buf_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_100,size_101);
    self->len+=size_101;
    self->buf[self->len]=0;
    __result59__ = __result_obj__ = self;
    return __result59__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional117;
struct buffer* __result60__;
short short* mem_105;
int size_106;
_Bool _if_conditional118;
void* right_value32;
char* old_buf_107;
int old_len_108;
int new_size_109;
void* right_value33;
char* __dec_obj14;
struct buffer* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_105, 0, sizeof(short short*));
memset(&size_106, 0, sizeof(int));
right_value32 = (void*)0;
memset(&old_buf_107, 0, sizeof(char*));
memset(&old_len_108, 0, sizeof(int));
memset(&new_size_109, 0, sizeof(int));
right_value33 = (void*)0;
    if(_if_conditional117=self==((void*)0),    _if_conditional117) {
        __result60__ = __result_obj__ = ((void*)0);
        return __result60__;
    }
    mem_105=&value;
    size_106=sizeof(short short);
    if(_if_conditional118=self->len+size_106+1+1>=self->size,    _if_conditional118) {
        old_buf_107=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1140, "char"))));
        right_value32 = come_decrement_ref_count2(right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_107,self->buf,self->size);
        old_len_108=self->len;
        new_size_109=(self->size+size_106+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(new_size_109)), "libcomelang2.c", 1144, "char"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value33 = come_decrement_ref_count2(right_value33, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_107,old_len_108);
        self->buf[old_len_108]=0;
        self->size=new_size_109;
        old_buf_107 = come_decrement_ref_count2(old_buf_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_105,size_106);
    self->len+=size_106;
    self->buf[self->len]=0;
    __result61__ = __result_obj__ = self;
    return __result61__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional119;
struct buffer* __result62__;
int len_110;
_Bool _if_conditional120;
int new_size_111;
void* right_value34;
char* __dec_obj15;
int i_112;
struct buffer* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_110, 0, sizeof(int));
memset(&new_size_111, 0, sizeof(int));
right_value34 = (void*)0;
memset(&i_112, 0, sizeof(int));
    if(_if_conditional119=self==((void*)0),    _if_conditional119) {
        __result62__ = __result_obj__ = ((void*)0);
        return __result62__;
    }
    len_110=self->len;
    len_110=(len_110+3)&~3;
    if(_if_conditional120=len_110>=self->size,    _if_conditional120) {
        new_size_111=(self->size+1+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(new_size_111)), "libcomelang2.c", 1168, "char"))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->size=new_size_111;
    }
    for(    i_112=self->len;    i_112<len_110;    i_112++    ){
        self->buf[i_112]=0;
    }
    self->len=len_110;
    __result63__ = __result_obj__ = self;
    return __result63__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional121;
int __result64__;
_Bool _if_conditional122;
int __result65__;
_Bool _if_conditional123;
int __result66__;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional121=left==((void*)0)&&right==((void*)0),    _if_conditional121) {
        __result64__ = 0;
        return __result64__;
    }
    else {
        if(_if_conditional122=left==((void*)0),        _if_conditional122) {
            __result65__ = -1;
            return __result65__;
        }
        else {
            if(_if_conditional123=right==((void*)0),            _if_conditional123) {
                __result66__ = 1;
                return __result66__;
            }
        }
    }
    __result67__ = strcmp(left->buf,right->buf);
    return __result67__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* result_113;
_Bool _if_conditional124;
struct buffer* __result68__;
struct buffer* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
memset(&result_113, 0, sizeof(struct buffer*));
    result_113=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1198, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional124=self==((void*)0),    _if_conditional124) {
        __result68__ = __result_obj__ = result_113;
        come_call_finalizer2(buffer_finalize,result_113, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result68__;
    }
    buffer_append_str(result_113,self);
    __result69__ = __result_obj__ = result_113;
    come_call_finalizer2(buffer_finalize,result_113, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result69__;
    come_call_finalizer2(buffer_finalize,result_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
void* right_value37;
void* right_value38;
struct buffer* result_114;
_Bool _if_conditional125;
struct buffer* __result70__;
struct buffer* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
right_value38 = (void*)0;
memset(&result_114, 0, sizeof(struct buffer*));
    result_114=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value38=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1211, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional125=self==((void*)0),    _if_conditional125) {
        __result70__ = __result_obj__ = result_114;
        come_call_finalizer2(buffer_finalize,result_114, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result70__;
    }
    buffer_append_str(result_114,self);
    __result71__ = __result_obj__ = result_114;
    come_call_finalizer2(buffer_finalize,result_114, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result71__;
    come_call_finalizer2(buffer_finalize,result_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional126;
void* right_value39;
char* __result72__;
void* right_value40;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
    if(_if_conditional126=self==((void*)0),    _if_conditional126) {
        __result72__ = __result_obj__ = ((char*)(right_value39=__builtin_string("")));
        right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result72__;
    }
    __result73__ = __result_obj__ = ((char*)(right_value40=__builtin_string(self->buf)));
    right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result73__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = self==right;
    return __result74__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    __result75__ = self==right;
    return __result75__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = self==right;
    return __result76__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = self==right;
    return __result77__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = self==right;
    return __result78__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    __result79__ = self==right;
    return __result79__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self==right;
    return __result80__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = self==right;
    return __result81__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional127;
_Bool __result82__;
_Bool _if_conditional128;
_Bool __result83__;
_Bool _if_conditional129;
_Bool __result84__;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional127=self==((void*)0)&&right==((void*)0),    _if_conditional127) {
        __result82__ = (_Bool)1;
        return __result82__;
    }
    else {
        if(_if_conditional128=self==((void*)0),        _if_conditional128) {
            __result83__ = (_Bool)0;
            return __result83__;
        }
        else {
            if(_if_conditional129=right==((void*)0),            _if_conditional129) {
                __result84__ = (_Bool)0;
                return __result84__;
            }
        }
    }
    __result85__ = strcmp(self,right)==0;
    return __result85__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional130;
_Bool __result86__;
_Bool _if_conditional131;
_Bool __result87__;
_Bool _if_conditional132;
_Bool __result88__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional130=self==((void*)0)&&right==((void*)0),    _if_conditional130) {
        __result86__ = (_Bool)1;
        return __result86__;
    }
    else {
        if(_if_conditional131=self==((void*)0),        _if_conditional131) {
            __result87__ = (_Bool)0;
            return __result87__;
        }
        else {
            if(_if_conditional132=right==((void*)0),            _if_conditional132) {
                __result88__ = (_Bool)0;
                return __result88__;
            }
        }
    }
    __result89__ = strcmp(self,right)==0;
    return __result89__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional133;
_Bool __result90__;
_Bool _if_conditional134;
_Bool __result91__;
_Bool _if_conditional135;
_Bool __result92__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional133=self==((void*)0)&&right==((void*)0),    _if_conditional133) {
        __result90__ = (_Bool)1;
        return __result90__;
    }
    else {
        if(_if_conditional134=self==((void*)0),        _if_conditional134) {
            __result91__ = (_Bool)0;
            return __result91__;
        }
        else {
            if(_if_conditional135=right==((void*)0),            _if_conditional135) {
                __result92__ = (_Bool)0;
                return __result92__;
            }
        }
    }
    __result93__ = strcmp(self,right)==0;
    return __result93__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional136;
_Bool __result94__;
_Bool _if_conditional137;
_Bool __result95__;
_Bool _if_conditional138;
_Bool __result96__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional136=self==((void*)0)&&right==((void*)0),    _if_conditional136) {
        __result94__ = (_Bool)1;
        return __result94__;
    }
    else {
        if(_if_conditional137=self==((void*)0),        _if_conditional137) {
            __result95__ = (_Bool)0;
            return __result95__;
        }
        else {
            if(_if_conditional138=right==((void*)0),            _if_conditional138) {
                __result96__ = (_Bool)0;
                return __result96__;
            }
        }
    }
    __result97__ = strcmp(self,right)==0;
    return __result97__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional139;
_Bool __result98__;
_Bool _if_conditional140;
_Bool __result99__;
_Bool _if_conditional141;
_Bool __result100__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional139=self==((void*)0)&&right==((void*)0),    _if_conditional139) {
        __result98__ = (_Bool)0;
        return __result98__;
    }
    else {
        if(_if_conditional140=self==((void*)0),        _if_conditional140) {
            __result99__ = (_Bool)1;
            return __result99__;
        }
        else {
            if(_if_conditional141=right==((void*)0),            _if_conditional141) {
                __result100__ = (_Bool)1;
                return __result100__;
            }
        }
    }
    __result101__ = strcmp(self,right)!=0;
    return __result101__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional142;
_Bool __result102__;
_Bool _if_conditional143;
_Bool __result103__;
_Bool _if_conditional144;
_Bool __result104__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional142=self==((void*)0)&&right==((void*)0),    _if_conditional142) {
        __result102__ = (_Bool)0;
        return __result102__;
    }
    else {
        if(_if_conditional143=self==((void*)0),        _if_conditional143) {
            __result103__ = (_Bool)1;
            return __result103__;
        }
        else {
            if(_if_conditional144=right==((void*)0),            _if_conditional144) {
                __result104__ = (_Bool)1;
                return __result104__;
            }
        }
    }
    __result105__ = strcmp(self,right)!=0;
    return __result105__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional145;
void* right_value41;
char* __result106__;
int len_115;
void* right_value42;
char* result_116;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value41 = (void*)0;
memset(&len_115, 0, sizeof(int));
right_value42 = (void*)0;
memset(&result_116, 0, sizeof(char*));
    if(_if_conditional145=self==((void*)0)||right==((void*)0),    _if_conditional145) {
        __result106__ = __result_obj__ = ((char*)(right_value41=__builtin_string("")));
        right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result106__;
    }
    len_115=strlen(self)+strlen(right);
    result_116=(char*)come_increment_ref_count(((char*)(right_value42=(char*)come_calloc(1, sizeof(char)*(1*(len_115+1)), "libcomelang2.c", 1372, "char"))));
    right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_116,self,len_115+1);
    strncat(result_116,right,len_115+1);
    __result107__ = __result_obj__ = result_116;
    result_116 = come_decrement_ref_count2(result_116, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result107__;
    result_116 = come_decrement_ref_count2(result_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional146;
void* right_value43;
char* __result108__;
int len_117;
void* right_value44;
char* result_118;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
memset(&len_117, 0, sizeof(int));
right_value44 = (void*)0;
memset(&result_118, 0, sizeof(char*));
    if(_if_conditional146=self==((void*)0)||right==((void*)0),    _if_conditional146) {
        __result108__ = __result_obj__ = ((char*)(right_value43=__builtin_string("")));
        right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result108__;
    }
    len_117=strlen(self)+strlen(right);
    result_118=(char*)come_increment_ref_count(((char*)(right_value44=(char*)come_calloc(1, sizeof(char)*(1*(len_117+1)), "libcomelang2.c", 1387, "char"))));
    right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_118,self,len_117+1);
    strncat(result_118,right,len_117+1);
    __result109__ = __result_obj__ = result_118;
    result_118 = come_decrement_ref_count2(result_118, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result109__;
    result_118 = come_decrement_ref_count2(result_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional147;
void* right_value45;
char* __result110__;
void* right_value46;
void* right_value47;
struct buffer* buf_119;
int i_120;
void* right_value48;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
memset(&buf_119, 0, sizeof(struct buffer*));
memset(&i_120, 0, sizeof(int));
right_value48 = (void*)0;
    if(_if_conditional147=self==((void*)0),    _if_conditional147) {
        __result110__ = __result_obj__ = ((char*)(right_value45=__builtin_string("")));
        right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result110__;
    }
    buf_119=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value47=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value46=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1400, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_120=0;    i_120<right;    i_120++    ){
        buffer_append_str(buf_119,self);
    }
    __result111__ = __result_obj__ = ((char*)(right_value48=buffer_to_string(buf_119)));
    come_call_finalizer2(buffer_finalize,buf_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
    come_call_finalizer2(buffer_finalize,buf_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional148;
void* right_value49;
char* __result112__;
void* right_value50;
void* right_value51;
struct buffer* buf_121;
int i_122;
void* right_value52;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&buf_121, 0, sizeof(struct buffer*));
memset(&i_122, 0, sizeof(int));
right_value52 = (void*)0;
    if(_if_conditional148=self==((void*)0),    _if_conditional148) {
        __result112__ = __result_obj__ = ((char*)(right_value49=__builtin_string("")));
        right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result112__;
    }
    buf_121=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value51=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1414, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_122=0;    i_122<right;    i_122++    ){
        buffer_append_str(buf_121,self);
    }
    __result113__ = __result_obj__ = ((char*)(right_value52=buffer_to_string(buf_121)));
    come_call_finalizer2(buffer_finalize,buf_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
    come_call_finalizer2(buffer_finalize,buf_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = (int_get_hash_key(((int)value)));
    return __result114__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = value;
    return __result115__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    __result116__ = value;
    return __result116__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = value;
    return __result117__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = value;
    return __result118__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = value;
    return __result119__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = (unsigned int)value;
    return __result120__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = (unsigned int)value;
    return __result121__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional149;
unsigned int __result122__;
int result_123;
char* p_124;
_Bool _while_condtional1;
unsigned int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(int));
memset(&p_124, 0, sizeof(char*));
    if(_if_conditional149=value==((void*)0),    _if_conditional149) {
        __result122__ = 0;
        return __result122__;
    }
    result_123=0;
    p_124=value;
    while(_while_condtional1=*p_124,    _while_condtional1) {
        result_123+=(*p_124);
        p_124++;
    }
    __result123__ = result_123;
    return __result123__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional150;
unsigned int __result124__;
int result_125;
char* p_126;
_Bool _while_condtional2;
unsigned int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(int));
memset(&p_126, 0, sizeof(char*));
    if(_if_conditional150=value==((void*)0),    _if_conditional150) {
        __result124__ = 0;
        return __result124__;
    }
    result_125=0;
    p_126=value;
    while(_while_condtional2=*p_126,    _while_condtional2) {
        result_125+=(*p_126);
        p_126++;
    }
    __result125__ = result_125;
    return __result125__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = self;
    return __result126__;
}

char char_clone(char self){
void* __result_obj__;
char __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = self;
    return __result127__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = self;
    return __result128__;
}

int int_clone(int self){
void* __result_obj__;
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = self;
    return __result129__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = self;
    return __result130__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = self;
    return __result131__;
}

double double_clone(double self){
void* __result_obj__;
double __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    __result132__ = self;
    return __result132__;
}

float float_clone(float self){
void* __result_obj__;
float __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = self;
    return __result133__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional151;
char* __result134__;
void* right_value53;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
    if(_if_conditional151=self==((void*)0),    _if_conditional151) {
        __result134__ = __result_obj__ = ((void*)0);
        return __result134__;
    }
    __result135__ = __result_obj__ = ((char*)(right_value53=__builtin_string(self)));
    right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional152;
char* __result136__;
void* right_value54;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
    if(_if_conditional152=self==((void*)0),    _if_conditional152) {
        __result136__ = __result_obj__ = ((void*)0);
        return __result136__;
    }
    __result137__ = __result_obj__ = ((char*)(right_value54=__builtin_string(self)));
    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result137__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_127;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(_Bool));
    result_127=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result138__ = result_127;
    return __result138__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = c==32||c==9;
    return __result139__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = (c>=48&&c<=57);
    return __result140__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    __result141__ = xiswalpha(c)||xiswdigit(c);
    return __result141__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_128;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(_Bool));
    result_128=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result142__ = result_128;
    return __result142__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = c==32||c==9;
    return __result143__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    __result144__ = (c>=48&&c<=57);
    return __result144__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    __result145__ = xisalpha(c)||xisdigit(c);
    return __result145__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_129;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_129, 0, sizeof(_Bool));
    result_129=(c>=32&&c<=126);
    __result146__ = result_129;
    return __result146__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_130;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_130, 0, sizeof(_Bool));
    result_130=(c>=32&&c<=126);
    __result147__ = result_130;
    return __result147__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional153;
int __result148__;
int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional153=str==((void*)0),    _if_conditional153) {
        __result148__ = 0;
        return __result148__;
    }
    __result149__ = strlen(str);
    return __result149__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional154;
int __result150__;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional154=str==((void*)0),    _if_conditional154) {
        __result150__ = 0;
        return __result150__;
    }
    __result151__ = strlen(str);
    return __result151__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional155;
void* right_value55;
char* __result152__;
int len_131;
void* right_value56;
char* result_132;
int i_133;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&len_131, 0, sizeof(int));
right_value56 = (void*)0;
memset(&result_132, 0, sizeof(char*));
memset(&i_133, 0, sizeof(int));
    if(_if_conditional155=str==((void*)0),    _if_conditional155) {
        __result152__ = __result_obj__ = ((char*)(right_value55=__builtin_string("")));
        right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result152__;
    }
    len_131=strlen(str);
    result_132=(char*)come_increment_ref_count(((char*)(right_value56=(char*)come_calloc(1, sizeof(char)*(1*(len_131+1)), "libcomelang2.c", 1631, "char"))));
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_133=0;    i_133<len_131;    i_133++    ){
        result_132[i_133]=str[len_131-i_133-1];
    }
    result_132[len_131]=0;
    __result153__ = __result_obj__ = result_132;
    result_132 = come_decrement_ref_count2(result_132, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result153__;
    result_132 = come_decrement_ref_count2(result_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional156;
void* right_value57;
char* __result154__;
int len_134;
void* right_value58;
char* result_135;
int i_136;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&len_134, 0, sizeof(int));
right_value58 = (void*)0;
memset(&result_135, 0, sizeof(char*));
memset(&i_136, 0, sizeof(int));
    if(_if_conditional156=str==((void*)0),    _if_conditional156) {
        __result154__ = __result_obj__ = ((char*)(right_value57=__builtin_string("")));
        right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result154__;
    }
    len_134=strlen(str);
    result_135=(char*)come_increment_ref_count(((char*)(right_value58=(char*)come_calloc(1, sizeof(char)*(1*(len_134+1)), "libcomelang2.c", 1648, "char"))));
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_136=0;    i_136<len_134;    i_136++    ){
        result_135[i_136]=str[len_134-i_136-1];
    }
    result_135[len_134]=0;
    __result155__ = __result_obj__ = result_135;
    result_135 = come_decrement_ref_count2(result_135, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result155__;
    result_135 = come_decrement_ref_count2(result_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional157;
void* right_value59;
char* __result156__;
int len_137;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value60;
void* right_value61;
char* __result157__;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value62;
char* __result158__;
_Bool _if_conditional164;
void* right_value63;
char* __result159__;
void* right_value64;
char* result_138;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&len_137, 0, sizeof(int));
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&result_138, 0, sizeof(char*));
    if(_if_conditional157=str==((void*)0),    _if_conditional157) {
        __result156__ = __result_obj__ = ((char*)(right_value59=__builtin_string("")));
        right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result156__;
    }
    len_137=strlen(str);
    if(_if_conditional158=head<0,    _if_conditional158) {
        head+=len_137;
    }
    if(_if_conditional159=tail<0,    _if_conditional159) {
        tail+=len_137+1;
    }
    if(_if_conditional160=head>tail,    _if_conditional160) {
        __result157__ = __result_obj__ = ((char*)(right_value61=string_reverse(((char*)(right_value60=charp_substring(str,tail,head))))));
        right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result157__;
    }
    if(_if_conditional161=head<0,    _if_conditional161) {
        head=0;
    }
    if(_if_conditional162=tail>=len_137,    _if_conditional162) {
        tail=len_137;
    }
    if(_if_conditional163=head==tail,    _if_conditional163) {
        __result158__ = __result_obj__ = ((char*)(right_value62=__builtin_string("")));
        right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result158__;
    }
    if(_if_conditional164=tail-head+1<1,    _if_conditional164) {
        __result159__ = __result_obj__ = ((char*)(right_value63=__builtin_string("")));
        right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result159__;
    }
    result_138=(char*)come_increment_ref_count(((char*)(right_value64=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1693, "char"))));
    right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_138,str+head,tail-head);
    result_138[tail-head]=0;
    __result160__ = __result_obj__ = result_138;
    result_138 = come_decrement_ref_count2(result_138, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result160__;
    result_138 = come_decrement_ref_count2(result_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value65;
char* __result161__;
int len_139;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value66;
void* right_value67;
char* __result162__;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
void* right_value68;
char* __result163__;
_Bool _if_conditional172;
void* right_value69;
char* __result164__;
void* right_value70;
char* result_140;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
memset(&len_139, 0, sizeof(int));
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
memset(&result_140, 0, sizeof(char*));
    if(_if_conditional165=str==((void*)0),    _if_conditional165) {
        __result161__ = __result_obj__ = ((char*)(right_value65=__builtin_string("")));
        right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result161__;
    }
    len_139=strlen(str);
    if(_if_conditional166=head<0,    _if_conditional166) {
        head+=len_139;
    }
    if(_if_conditional167=tail<0,    _if_conditional167) {
        tail+=len_139+1;
    }
    if(_if_conditional168=head>tail,    _if_conditional168) {
        __result162__ = __result_obj__ = ((char*)(right_value67=string_reverse(((char*)(right_value66=charp_substring(str,tail,head))))));
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result162__;
    }
    if(_if_conditional169=head<0,    _if_conditional169) {
        head=0;
    }
    if(_if_conditional170=tail>=len_139,    _if_conditional170) {
        tail=len_139;
    }
    if(_if_conditional171=head==tail,    _if_conditional171) {
        __result163__ = __result_obj__ = ((char*)(right_value68=__builtin_string("")));
        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result163__;
    }
    if(_if_conditional172=tail-head+1<1,    _if_conditional172) {
        __result164__ = __result_obj__ = ((char*)(right_value69=__builtin_string("")));
        right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result164__;
    }
    result_140=(char*)come_increment_ref_count(((char*)(right_value70=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1736, "char"))));
    right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_140,str+head,tail-head);
    result_140[tail-head]=0;
    __result165__ = __result_obj__ = result_140;
    result_140 = come_decrement_ref_count2(result_140, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result165__;
    result_140 = come_decrement_ref_count2(result_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional173;
void* right_value71;
char* __result166__;
int len_141;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value72;
void* right_value73;
char* __result167__;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value74;
char* __result168__;
_Bool _if_conditional180;
void* right_value75;
char* __result169__;
void* right_value76;
char* result_142;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
memset(&len_141, 0, sizeof(int));
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&result_142, 0, sizeof(char*));
    if(_if_conditional173=str==((void*)0),    _if_conditional173) {
        __result166__ = __result_obj__ = ((char*)(right_value71=__builtin_string("")));
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result166__;
    }
    len_141=strlen(str);
    if(_if_conditional174=head<0,    _if_conditional174) {
        head+=len_141;
    }
    if(_if_conditional175=tail<0,    _if_conditional175) {
        tail+=len_141+1;
    }
    if(_if_conditional176=head>tail,    _if_conditional176) {
        __result167__ = __result_obj__ = ((char*)(right_value73=string_reverse(((char*)(right_value72=charp_substring(str,tail,head))))));
        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result167__;
    }
    if(_if_conditional177=head<0,    _if_conditional177) {
        head=0;
    }
    if(_if_conditional178=tail>=len_141,    _if_conditional178) {
        tail=len_141;
    }
    if(_if_conditional179=head==tail,    _if_conditional179) {
        __result168__ = __result_obj__ = ((char*)(right_value74=__builtin_string("")));
        right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result168__;
    }
    if(_if_conditional180=tail-head+1<1,    _if_conditional180) {
        __result169__ = __result_obj__ = ((char*)(right_value75=__builtin_string("")));
        right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result169__;
    }
    result_142=(char*)come_increment_ref_count(((char*)(right_value76=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1779, "char"))));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_142,str+head,tail-head);
    result_142[tail-head]=0;
    __result170__ = __result_obj__ = result_142;
    result_142 = come_decrement_ref_count2(result_142, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result170__;
    result_142 = come_decrement_ref_count2(result_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional181;
void* right_value77;
char* __result171__;
int len_143;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value78;
void* right_value79;
char* __result172__;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value80;
char* __result173__;
_Bool _if_conditional188;
void* right_value81;
char* __result174__;
void* right_value82;
char* result_144;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&len_143, 0, sizeof(int));
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_144, 0, sizeof(char*));
    if(_if_conditional181=str==((void*)0),    _if_conditional181) {
        __result171__ = __result_obj__ = ((char*)(right_value77=__builtin_string("")));
        right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result171__;
    }
    len_143=strlen(str);
    if(_if_conditional182=head<0,    _if_conditional182) {
        head+=len_143;
    }
    if(_if_conditional183=tail<0,    _if_conditional183) {
        tail+=len_143+1;
    }
    if(_if_conditional184=head>tail,    _if_conditional184) {
        __result172__ = __result_obj__ = ((char*)(right_value79=string_reverse(((char*)(right_value78=charp_substring(str,tail,head))))));
        right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result172__;
    }
    if(_if_conditional185=head<0,    _if_conditional185) {
        head=0;
    }
    if(_if_conditional186=tail>=len_143,    _if_conditional186) {
        tail=len_143;
    }
    if(_if_conditional187=head==tail,    _if_conditional187) {
        __result173__ = __result_obj__ = ((char*)(right_value80=__builtin_string("")));
        right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result173__;
    }
    if(_if_conditional188=tail-head+1<1,    _if_conditional188) {
        __result174__ = __result_obj__ = ((char*)(right_value81=__builtin_string("")));
        right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result174__;
    }
    result_144=(char*)come_increment_ref_count(((char*)(right_value82=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1822, "char"))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_144,str+head,tail-head);
    result_144[tail-head]=0;
    __result175__ = __result_obj__ = result_144;
    result_144 = come_decrement_ref_count2(result_144, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result175__;
    result_144 = come_decrement_ref_count2(result_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional189;
void* right_value83;
char* __result176__;
va_list args_145;
char* result_146;
int len_147;
_Bool _if_conditional190;
void* right_value84;
char* __result177__;
void* right_value85;
char* result2_148;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&args_145, 0, sizeof(va_list));
memset(&result_146, 0, sizeof(char*));
memset(&len_147, 0, sizeof(int));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&result2_148, 0, sizeof(char*));
    if(_if_conditional189=msg==((void*)0),    _if_conditional189) {
        __result176__ = __result_obj__ = ((char*)(right_value83=__builtin_string("")));
        right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result176__;
    }
    __builtin_va_start(args_145,msg);
    len_147=vasprintf(&result_146,msg,args_145);
    __builtin_va_end(args_145);
    if(_if_conditional190=len_147<0,    _if_conditional190) {
        __result177__ = __result_obj__ = ((char*)(right_value84=__builtin_string("")));
        come_call_finalizer2(va_list_finalize,(&args_145), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result177__;
    }
    result2_148=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(result_146))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(result_146);
    __result178__ = __result_obj__ = result2_148;
    come_call_finalizer2(va_list_finalize,(&args_145), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    result2_148 = come_decrement_ref_count2(result2_148, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result178__;
    come_call_finalizer2(va_list_finalize,(&args_145), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    result2_148 = come_decrement_ref_count2(result2_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional191;
void* right_value86;
char* __result179__;
int len_149;
_Bool _if_conditional192;
void* right_value87;
char* __result180__;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value88;
char* __result181__;
_Bool _if_conditional197;
void* right_value89;
char* sub_str_150;
void* right_value90;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&len_149, 0, sizeof(int));
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&sub_str_150, 0, sizeof(char*));
right_value90 = (void*)0;
    if(_if_conditional191=str==((void*)0),    _if_conditional191) {
        __result179__ = __result_obj__ = ((char*)(right_value86=__builtin_string("")));
        right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result179__;
    }
    len_149=strlen(str);
    if(_if_conditional192=strcmp(str,"")==0,    _if_conditional192) {
        __result180__ = __result_obj__ = ((char*)(right_value87=__builtin_string(str)));
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result180__;
    }
    if(_if_conditional193=head<0,    _if_conditional193) {
        head+=len_149;
    }
    if(_if_conditional194=tail<0,    _if_conditional194) {
        tail+=len_149+1;
    }
    if(_if_conditional195=head<0,    _if_conditional195) {
        head=0;
    }
    if(_if_conditional196=tail<0,    _if_conditional196) {
        __result181__ = __result_obj__ = ((char*)(right_value88=__builtin_string(str)));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result181__;
    }
    if(_if_conditional197=tail>=len_149,    _if_conditional197) {
        tail=len_149;
    }
    sub_str_150=(char*)come_increment_ref_count(((char*)(right_value89=charp_substring(str,tail,-1))));
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_150,string_length(sub_str_150)+1);
    __result182__ = __result_obj__ = ((char*)(right_value90=__builtin_string(str)));
    sub_str_150 = come_decrement_ref_count2(sub_str_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result182__;
    sub_str_150 = come_decrement_ref_count2(sub_str_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional198;
void* right_value91;
char* __result183__;
int len_151;
_Bool _if_conditional199;
void* right_value92;
char* __result184__;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value93;
char* __result185__;
_Bool _if_conditional204;
void* right_value94;
char* sub_str_152;
void* right_value95;
char* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&len_151, 0, sizeof(int));
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&sub_str_152, 0, sizeof(char*));
right_value95 = (void*)0;
    if(_if_conditional198=str==((void*)0),    _if_conditional198) {
        __result183__ = __result_obj__ = ((char*)(right_value91=__builtin_string("")));
        right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result183__;
    }
    len_151=strlen(str);
    if(_if_conditional199=strcmp(str,"")==0,    _if_conditional199) {
        __result184__ = __result_obj__ = ((char*)(right_value92=__builtin_string(str)));
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result184__;
    }
    if(_if_conditional200=head<0,    _if_conditional200) {
        head+=len_151;
    }
    if(_if_conditional201=tail<0,    _if_conditional201) {
        tail+=len_151+1;
    }
    if(_if_conditional202=head<0,    _if_conditional202) {
        head=0;
    }
    if(_if_conditional203=tail<0,    _if_conditional203) {
        __result185__ = __result_obj__ = ((char*)(right_value93=__builtin_string(str)));
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result185__;
    }
    if(_if_conditional204=tail>=len_151,    _if_conditional204) {
        tail=len_151;
    }
    sub_str_152=(char*)come_increment_ref_count(((char*)(right_value94=charp_substring(str,tail,-1))));
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_152,string_length(sub_str_152)+1);
    __result186__ = __result_obj__ = ((char*)(right_value95=__builtin_string(str)));
    sub_str_152 = come_decrement_ref_count2(sub_str_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result186__;
    sub_str_152 = come_decrement_ref_count2(sub_str_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional205;
void* right_value96;
void* right_value97;
struct list$1charph* __result188__;
void* right_value98;
void* right_value99;
struct list$1charph* result_155;
void* right_value100;
void* right_value101;
struct buffer* str_156;
int i_157;
_Bool _if_conditional207;
void* right_value105;
_Bool _if_conditional210;
void* right_value106;
struct list$1charph* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&result_155, 0, sizeof(struct list$1charph*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&str_156, 0, sizeof(struct buffer*));
memset(&i_157, 0, sizeof(int));
right_value105 = (void*)0;
right_value106 = (void*)0;
    if(_if_conditional205=self==((void*)0),    _if_conditional205) {
        __result188__ = __result_obj__ = ((struct list$1charph*)(right_value97=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1933, "struct list$1charph")))))));
        come_call_finalizer2(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        return __result188__;
    }
    result_155=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value99=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value98=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1936, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    str_156=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value101=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1938, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_157=0;    i_157<charp_length(self);    i_157++    ){
        if(_if_conditional207=self[i_157]==c,        _if_conditional207) {
            list$1charph_push_back(result_155,(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string(str_156->buf)))));
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_156);
        }
        else {
            buffer_append_char(str_156,self[i_157]);
        }
    }
    if(_if_conditional210=buffer_length(str_156)!=0,    _if_conditional210) {
        list$1charph_push_back(result_155,(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(str_156->buf)))));
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result190__ = __result_obj__ = result_155;
    come_call_finalizer2(list$1charphp_finalize,result_155, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result190__;
    come_call_finalizer2(list$1charphp_finalize,result_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result187__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result187__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_153;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_154;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_153, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_154, 0, sizeof(struct list_item$1charph*));
                it_153=self->head;
                while(_while_condtional3=it_153!=((void*)0),                _while_condtional3) {
                    prev_it_154=it_153;
                    it_153=it_153->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional206=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional206) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional208;
void* right_value102;
struct list_item$1charph* litem_158;
char* __dec_obj16;
_Bool _if_conditional209;
void* right_value103;
struct list_item$1charph* litem_159;
char* __dec_obj17;
void* right_value104;
struct list_item$1charph* litem_160;
char* __dec_obj18;
struct list$1charph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charph*));
right_value103 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1charph*));
right_value104 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional208=self->len==0,                _if_conditional208) {
                    litem_158=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value102=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225, "struct list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_158->prev=((void*)0);
                    litem_158->next=((void*)0);
                    __dec_obj16=litem_158->item;
                    litem_158->item=(char*)come_increment_ref_count(item);
                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_158;
                    self->head=litem_158;
                }
                else {
                    if(_if_conditional209=self->len==1,                    _if_conditional209) {
                        litem_159=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value103=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 235, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_159->prev=self->head;
                        litem_159->next=((void*)0);
                        __dec_obj17=litem_159->item;
                        litem_159->item=(char*)come_increment_ref_count(item);
                        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_159;
                        self->head->next=litem_159;
                    }
                    else {
                        litem_160=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 245, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_160->prev=self->tail;
                        litem_160->next=((void*)0);
                        __dec_obj18=litem_160->item;
                        litem_160->item=(char*)come_increment_ref_count(item);
                        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_160;
                        self->tail=litem_160;
                    }
                }
                self->len++;
                __result189__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result189__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional211;
void* right_value107;
void* right_value108;
struct list$1charph* __result191__;
void* right_value109;
void* right_value110;
struct list$1charph* result_161;
void* right_value111;
void* right_value112;
struct buffer* str_162;
int i_163;
_Bool _if_conditional212;
void* right_value113;
_Bool _if_conditional213;
void* right_value114;
struct list$1charph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&result_161, 0, sizeof(struct list$1charph*));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&str_162, 0, sizeof(struct buffer*));
memset(&i_163, 0, sizeof(int));
right_value113 = (void*)0;
right_value114 = (void*)0;
    if(_if_conditional211=self==((void*)0),    _if_conditional211) {
        __result191__ = __result_obj__ = ((struct list$1charph*)(right_value108=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1959, "struct list$1charph")))))));
        come_call_finalizer2(list$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        return __result191__;
    }
    result_161=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1962, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    str_162=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value112=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value111=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1964, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_163=0;    i_163<charp_length(self);    i_163++    ){
        if(_if_conditional212=self[i_163]==c,        _if_conditional212) {
            list$1charph_push_back(result_161,(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(str_162->buf)))));
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_162);
        }
        else {
            buffer_append_char(str_162,self[i_163]);
        }
    }
    if(_if_conditional213=buffer_length(str_162)!=0,    _if_conditional213) {
        list$1charph_push_back(result_161,(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(str_162->buf)))));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result192__ = __result_obj__ = result_161;
    come_call_finalizer2(list$1charphp_finalize,result_161, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result192__;
    come_call_finalizer2(list$1charphp_finalize,result_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,str_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional214;
void* right_value115;
char* __result193__;
char* p_164;
_Bool _while_condtional4;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value116;
char* __result194__;
void* right_value117;
char* __result195__;
void* right_value118;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
memset(&p_164, 0, sizeof(char*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
    if(_if_conditional214=path==((void*)0),    _if_conditional214) {
        __result193__ = __result_obj__ = ((char*)(right_value115=__builtin_string("")));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result193__;
    }
    p_164=path+strlen(path);
    while(_while_condtional4=p_164>=path,    _while_condtional4) {
        if(_if_conditional215=*p_164==47,        _if_conditional215) {
            break;
        }
        else {
            p_164--;
        }
    }
    if(_if_conditional216=p_164<path,    _if_conditional216) {
        __result194__ = __result_obj__ = ((char*)(right_value116=__builtin_string(path)));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result194__;
    }
    else {
        __result195__ = __result_obj__ = ((char*)(right_value117=__builtin_string(p_164+1)));
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result195__;
    }
    __result196__ = __result_obj__ = ((char*)(right_value118=__builtin_string("")));
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result196__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional217;
void* right_value119;
char* __result197__;
void* right_value120;
void* right_value121;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
    if(_if_conditional217=path==((void*)0),    _if_conditional217) {
        __result197__ = __result_obj__ = ((char*)(right_value119=__builtin_string("")));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result197__;
    }
    __result198__ = __result_obj__ = ((char*)(right_value121=__builtin_string(dirname(((char*)(right_value120=__builtin_string(path)))))));
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result198__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional218;
void* right_value122;
char* __result199__;
void* right_value123;
char* path2_165;
char* p_166;
_Bool _while_condtional5;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value124;
char* __result200__;
void* right_value125;
char* __result201__;
void* right_value126;
char* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&path2_165, 0, sizeof(char*));
memset(&p_166, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
    if(_if_conditional218=path==((void*)0),    _if_conditional218) {
        __result199__ = __result_obj__ = ((char*)(right_value122=__builtin_string("")));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result199__;
    }
    path2_165=(char*)come_increment_ref_count(((char*)(right_value123=xbasename(path))));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    p_166=path2_165+strlen(path2_165);
    while(_while_condtional5=p_166>=path2_165,    _while_condtional5) {
        if(_if_conditional219=*p_166==46,        _if_conditional219) {
            break;
        }
        else {
            p_166--;
        }
    }
    if(_if_conditional220=p_166<path2_165,    _if_conditional220) {
        __result200__ = __result_obj__ = ((char*)(right_value124=__builtin_string(path2_165)));
        path2_165 = come_decrement_ref_count2(path2_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result200__;
    }
    else {
        __result201__ = __result_obj__ = ((char*)(right_value125=string_substring(path2_165,0,p_166-path2_165)));
        path2_165 = come_decrement_ref_count2(path2_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result201__;
    }
    __result202__ = __result_obj__ = ((char*)(right_value126=__builtin_string("")));
    path2_165 = come_decrement_ref_count2(path2_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result202__;
    path2_165 = come_decrement_ref_count2(path2_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional221;
void* right_value127;
char* __result203__;
char* p_167;
_Bool _while_condtional6;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value128;
char* __result204__;
void* right_value129;
char* __result205__;
void* right_value130;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&p_167, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    if(_if_conditional221=path==((void*)0),    _if_conditional221) {
        __result203__ = __result_obj__ = ((char*)(right_value127=__builtin_string("")));
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result203__;
    }
    p_167=path+strlen(path);
    while(_while_condtional6=p_167>=path,    _while_condtional6) {
        if(_if_conditional222=*p_167==46,        _if_conditional222) {
            break;
        }
        else {
            p_167--;
        }
    }
    if(_if_conditional223=p_167<path,    _if_conditional223) {
        __result204__ = __result_obj__ = ((char*)(right_value128=__builtin_string(path)));
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result204__;
    }
    else {
        __result205__ = __result_obj__ = ((char*)(right_value129=__builtin_string(p_167+1)));
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result205__;
    }
    __result206__ = __result_obj__ = ((char*)(right_value130=__builtin_string("")));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result206__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional224;
void* right_value131;
char* __result207__;
char* result_168;
void* right_value132;
char* result2_169;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&result_168, 0, sizeof(char*));
right_value132 = (void*)0;
memset(&result2_169, 0, sizeof(char*));
    if(_if_conditional224=path==((void*)0),    _if_conditional224) {
        __result207__ = __result_obj__ = ((char*)(right_value131=__builtin_string("")));
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result207__;
    }
    result_168=realpath(path,((void*)0));
    result2_169=(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(result_168))));
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(result_168);
    __result208__ = __result_obj__ = result2_169;
    result2_169 = come_decrement_ref_count2(result2_169, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result208__;
    result2_169 = come_decrement_ref_count2(result2_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional225;
void* right_value133;
char* __result209__;
void* right_value134;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
right_value134 = (void*)0;
    if(self) {
        __result209__ = __result_obj__ = ((char*)(right_value133=__builtin_string("true")));
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result209__;
    }
    else {
        __result210__ = __result_obj__ = ((char*)(right_value134=__builtin_string("false")));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result210__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
void* right_value135;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    __result211__ = __result_obj__ = ((char*)(right_value135=xsprintf("%c",self)));
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result211__;
}

char* short_to_string(short short self){
void* __result_obj__;
void* right_value136;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    __result212__ = __result_obj__ = ((char*)(right_value136=xsprintf("%d",self)));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result212__;
}

char* int_to_string(int self){
void* __result_obj__;
void* right_value137;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    __result213__ = __result_obj__ = ((char*)(right_value137=xsprintf("%d",self)));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result213__;
}

char* long_to_string(long self){
void* __result_obj__;
void* right_value138;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
    __result214__ = __result_obj__ = ((char*)(right_value138=xsprintf("%ld",self)));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result214__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
void* right_value139;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
    __result215__ = __result_obj__ = ((char*)(right_value139=xsprintf("%ld",self)));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result215__;
}

char* float_to_string(float self){
void* __result_obj__;
void* right_value140;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
    __result216__ = __result_obj__ = ((char*)(right_value140=xsprintf("%f",self)));
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result216__;
}

char* double_to_string(double self){
void* __result_obj__;
void* right_value141;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
    __result217__ = __result_obj__ = ((char*)(right_value141=xsprintf("%lf",self)));
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result217__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional226;
void* right_value142;
char* __result218__;
void* right_value143;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
right_value143 = (void*)0;
    if(_if_conditional226=self==((void*)0),    _if_conditional226) {
        __result218__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result218__;
    }
    __result219__ = __result_obj__ = ((char*)(right_value143=__builtin_string(self)));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result219__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional227;
void* right_value144;
char* __result220__;
void* right_value145;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
right_value145 = (void*)0;
    if(_if_conditional227=self==((void*)0),    _if_conditional227) {
        __result220__ = __result_obj__ = ((char*)(right_value144=__builtin_string("")));
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result220__;
    }
    __result221__ = __result_obj__ = ((char*)(right_value145=__builtin_string(self)));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result221__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional228;
int __result222__;
_Bool _if_conditional229;
int __result223__;
_Bool _if_conditional230;
int __result224__;
int __result225__;
int __result226__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional228=!left&&right,    _if_conditional228) {
        __result222__ = -1;
        return __result222__;
    }
    else {
        if(_if_conditional229=left&&right,        _if_conditional229) {
            __result223__ = 0;
            return __result223__;
        }
        else {
            if(_if_conditional230=!left&&!right,            _if_conditional230) {
                __result224__ = 0;
                return __result224__;
            }
            else {
                __result225__ = 1;
                return __result225__;
            }
        }
    }
    __result226__ = 0;
    return __result226__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional231;
int __result227__;
_Bool _if_conditional232;
int __result228__;
int __result229__;
int __result230__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional231=left<right,    _if_conditional231) {
        __result227__ = -1;
        return __result227__;
    }
    else {
        if(_if_conditional232=left>right,        _if_conditional232) {
            __result228__ = 1;
            return __result228__;
        }
        else {
            __result229__ = 0;
            return __result229__;
        }
    }
    __result230__ = 0;
    return __result230__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional233;
int __result231__;
_Bool _if_conditional234;
int __result232__;
int __result233__;
int __result234__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional233=left<right,    _if_conditional233) {
        __result231__ = -1;
        return __result231__;
    }
    else {
        if(_if_conditional234=left>right,        _if_conditional234) {
            __result232__ = 1;
            return __result232__;
        }
        else {
            __result233__ = 0;
            return __result233__;
        }
    }
    __result234__ = 0;
    return __result234__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional235;
int __result235__;
_Bool _if_conditional236;
int __result236__;
int __result237__;
int __result238__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional235=left<right,    _if_conditional235) {
        __result235__ = -1;
        return __result235__;
    }
    else {
        if(_if_conditional236=left>right,        _if_conditional236) {
            __result236__ = 1;
            return __result236__;
        }
        else {
            __result237__ = 0;
            return __result237__;
        }
    }
    __result238__ = 0;
    return __result238__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional237;
int __result239__;
_Bool _if_conditional238;
int __result240__;
int __result241__;
int __result242__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional237=left<right,    _if_conditional237) {
        __result239__ = -1;
        return __result239__;
    }
    else {
        if(_if_conditional238=left>right,        _if_conditional238) {
            __result240__ = 1;
            return __result240__;
        }
        else {
            __result241__ = 0;
            return __result241__;
        }
    }
    __result242__ = 0;
    return __result242__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool _if_conditional239;
int __result243__;
_Bool _if_conditional240;
int __result244__;
int __result245__;
int __result246__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional239=left<right,    _if_conditional239) {
        __result243__ = -1;
        return __result243__;
    }
    else {
        if(_if_conditional240=left>right,        _if_conditional240) {
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

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional241;
int __result247__;
_Bool _if_conditional242;
int __result248__;
int __result249__;
int __result250__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional241=left<right,    _if_conditional241) {
        __result247__ = -1;
        return __result247__;
    }
    else {
        if(_if_conditional242=left>right,        _if_conditional242) {
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

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional243;
int __result251__;
_Bool _if_conditional244;
int __result252__;
int __result253__;
int __result254__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional243=left<right,    _if_conditional243) {
        __result251__ = -1;
        return __result251__;
    }
    else {
        if(_if_conditional244=left>right,        _if_conditional244) {
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

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional245;
int __result255__;
_Bool _if_conditional246;
int __result256__;
_Bool _if_conditional247;
int __result257__;
int __result258__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional245=left==((void*)0)&&right==((void*)0),    _if_conditional245) {
        __result255__ = 0;
        return __result255__;
    }
    else {
        if(_if_conditional246=left==((void*)0),        _if_conditional246) {
            __result256__ = -1;
            return __result256__;
        }
        else {
            if(_if_conditional247=right==((void*)0),            _if_conditional247) {
                __result257__ = 1;
                return __result257__;
            }
        }
    }
    __result258__ = strcmp(left,right);
    return __result258__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional248;
int __result259__;
_Bool _if_conditional249;
int __result260__;
_Bool _if_conditional250;
int __result261__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional248=left==((void*)0)&&right==((void*)0),    _if_conditional248) {
        __result259__ = 0;
        return __result259__;
    }
    else {
        if(_if_conditional249=left==((void*)0),        _if_conditional249) {
            __result260__ = -1;
            return __result260__;
        }
        else {
            if(_if_conditional250=right==((void*)0),            _if_conditional250) {
                __result261__ = 1;
                return __result261__;
            }
        }
    }
    __result262__ = strcmp(left,right);
    return __result262__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional251;
void* right_value146;
char* __result263__;
void* right_value147;
void* right_value148;
struct buffer* buf_170;
_Bool _while_condtional7;
int size_172;
_Bool _if_conditional252;
void* right_value149;
char* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
memset(&buf_170, 0, sizeof(struct buffer*));
memset(&size_172, 0, sizeof(int));
right_value149 = (void*)0;
    if(_if_conditional251=f==((void*)0),    _if_conditional251) {
        __result263__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result263__;
    }
    buf_170=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value148=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value147=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2315, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional7=1,    _while_condtional7) {
        char buf2_171[1024];
        memset(&buf2_171, 0, sizeof(char)        *(1024)        );
        size_172=fread(buf2_171,1,1024,f);
        buffer_append(buf_170,buf2_171,size_172);
        if(_if_conditional252=size_172<1024,        _if_conditional252) {
            break;
        }
    }
    __result264__ = __result_obj__ = ((char*)(right_value149=buffer_to_string(buf_170)));
    come_call_finalizer2(buffer_finalize,buf_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result264__;
    come_call_finalizer2(buffer_finalize,buf_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional253;
int __result265__;
int __result266__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional253=f==((void*)0)||str==((void*)0),    _if_conditional253) {
        __result265__ = -1;
        return __result265__;
    }
    __result266__ = fwrite(str,strlen(str),1,f);
    return __result266__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional254;
int __result267__;
int result_173;
_Bool _if_conditional255;
int __result268__;
int __result269__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_173, 0, sizeof(int));
    if(_if_conditional254=f==((void*)0),    _if_conditional254) {
        __result267__ = -1;
        return __result267__;
    }
    result_173=fclose(f);
    if(_if_conditional255=result_173<0,    _if_conditional255) {
        __result268__ = result_173;
        return __result268__;
    }
    __result269__ = result_173;
    return __result269__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional256;
struct _IO_FILE* __result270__;
va_list args_175;
int result_176;
_Bool _if_conditional257;
struct _IO_FILE* __result271__;
struct _IO_FILE* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_175, 0, sizeof(va_list));
memset(&result_176, 0, sizeof(int));
    if(_if_conditional256=f==((void*)0)||msg==((void*)0),    _if_conditional256) {
        __result270__ = __result_obj__ = f;
        return __result270__;
    }
    char msg2_174[1024*2*2*2];
    memset(&msg2_174, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_175,msg);
    vsnprintf(msg2_174,1024*2*2*2,msg,args_175);
    __builtin_va_end(args_175);
    result_176=fprintf(f,"%s",msg2_174);
    if(_if_conditional257=result_176<0,    _if_conditional257) {
        __result271__ = __result_obj__ = f;
        come_call_finalizer2(va_list_finalize,(&args_175), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
        return __result271__;
    }
    __result272__ = __result_obj__ = f;
    come_call_finalizer2(va_list_finalize,(&args_175), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    return __result272__;
    come_call_finalizer2(va_list_finalize,(&args_175), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional258;
int __result273__;
struct _IO_FILE* f_177;
_Bool _if_conditional259;
_Bool _if_conditional260;
int __result274__;
int result_178;
_Bool _if_conditional261;
int __result275__;
int result2_179;
_Bool _if_conditional262;
int __result276__;
int __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_177, 0, sizeof(struct _IO_FILE*));
memset(&result_178, 0, sizeof(int));
memset(&result2_179, 0, sizeof(int));
    if(_if_conditional258=self==((void*)0)||file_name==((void*)0),    _if_conditional258) {
        __result273__ = -1;
        return __result273__;
    }
    if(append) {
        f_177=fopen(file_name,"a");
    }
    else {
        f_177=fopen(file_name,"w");
    }
    if(_if_conditional260=f_177==((void*)0),    _if_conditional260) {
        __result274__ = -1;
        return __result274__;
    }
    result_178=fwrite(self,strlen(self),1,f_177);
    if(_if_conditional261=result_178<0,    _if_conditional261) {
        __result275__ = result_178;
        return __result275__;
    }
    result2_179=fclose(f_177);
    if(_if_conditional262=result2_179<0,    _if_conditional262) {
        __result276__ = result2_179;
        return __result276__;
    }
    __result277__ = result_178;
    return __result277__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional263;
int __result278__;
struct _IO_FILE* f_180;
_Bool _if_conditional264;
_Bool _if_conditional265;
int __result279__;
int result_181;
_Bool _if_conditional266;
int __result280__;
int result2_182;
_Bool _if_conditional267;
int __result281__;
int __result282__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_180, 0, sizeof(struct _IO_FILE*));
memset(&result_181, 0, sizeof(int));
memset(&result2_182, 0, sizeof(int));
    if(_if_conditional263=self==((void*)0)||file_name==((void*)0),    _if_conditional263) {
        __result278__ = -1;
        return __result278__;
    }
    if(append) {
        f_180=fopen(file_name,"a");
    }
    else {
        f_180=fopen(file_name,"w");
    }
    if(_if_conditional265=f_180==((void*)0),    _if_conditional265) {
        __result279__ = -1;
        return __result279__;
    }
    result_181=fwrite(self,strlen(self),1,f_180);
    if(_if_conditional266=result_181<0,    _if_conditional266) {
        __result280__ = result_181;
        return __result280__;
    }
    result2_182=fclose(f_180);
    if(_if_conditional267=result2_182<0,    _if_conditional267) {
        __result281__ = result2_182;
        return __result281__;
    }
    __result282__ = result_181;
    return __result282__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional268;
void* right_value150;
char* __result283__;
struct _IO_FILE* f_183;
_Bool _if_conditional269;
void* right_value151;
char* __result284__;
void* right_value152;
void* right_value153;
struct buffer* buf_184;
_Bool _while_condtional8;
int size_186;
_Bool _if_conditional270;
void* right_value154;
char* result_187;
int result2_188;
_Bool _if_conditional271;
void* right_value155;
char* __result285__;
char* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
memset(&f_183, 0, sizeof(struct _IO_FILE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&buf_184, 0, sizeof(struct buffer*));
memset(&size_186, 0, sizeof(int));
right_value154 = (void*)0;
memset(&result_187, 0, sizeof(char*));
memset(&result2_188, 0, sizeof(int));
right_value155 = (void*)0;
    if(_if_conditional268=file_name==((void*)0),    _if_conditional268) {
        __result283__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result283__;
    }
    f_183=fopen(file_name,"r");
    if(_if_conditional269=f_183==((void*)0),    _if_conditional269) {
        __result284__ = __result_obj__ = ((char*)(right_value151=__builtin_string("")));
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result284__;
    }
    buf_184=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value153=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value152=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2455, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional8=1,    _while_condtional8) {
        char buf2_185[1024];
        memset(&buf2_185, 0, sizeof(char)        *(1024)        );
        size_186=fread(buf2_185,1,1024,f_183);
        buffer_append(buf_184,buf2_185,size_186);
        if(_if_conditional270=size_186<1024,        _if_conditional270) {
            break;
        }
    }
    result_187=(char*)come_increment_ref_count(((char*)(right_value154=buffer_to_string(buf_184))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_188=fclose(f_183);
    if(_if_conditional271=result2_188<0,    _if_conditional271) {
        __result285__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result285__;
    }
    __result286__ = __result_obj__ = result_187;
    come_call_finalizer2(buffer_finalize,buf_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result286__;
    come_call_finalizer2(buffer_finalize,buf_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional272;
void* right_value156;
char* __result287__;
struct _IO_FILE* f_189;
_Bool _if_conditional273;
void* right_value157;
char* __result288__;
void* right_value158;
void* right_value159;
struct buffer* buf_190;
_Bool _while_condtional9;
int size_192;
_Bool _if_conditional274;
void* right_value160;
char* result_193;
int result2_194;
_Bool _if_conditional275;
void* right_value161;
char* __result289__;
char* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&f_189, 0, sizeof(struct _IO_FILE*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&buf_190, 0, sizeof(struct buffer*));
memset(&size_192, 0, sizeof(int));
right_value160 = (void*)0;
memset(&result_193, 0, sizeof(char*));
memset(&result2_194, 0, sizeof(int));
right_value161 = (void*)0;
    if(_if_conditional272=file_name==((void*)0),    _if_conditional272) {
        __result287__ = __result_obj__ = ((char*)(right_value156=__builtin_string("")));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result287__;
    }
    f_189=fopen(file_name,"r");
    if(_if_conditional273=f_189==((void*)0),    _if_conditional273) {
        __result288__ = __result_obj__ = ((char*)(right_value157=__builtin_string("")));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result288__;
    }
    buf_190=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2492, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional9=1,    _while_condtional9) {
        char buf2_191[1024];
        memset(&buf2_191, 0, sizeof(char)        *(1024)        );
        size_192=fread(buf2_191,1,1024,f_189);
        buffer_append(buf_190,buf2_191,size_192);
        if(_if_conditional274=size_192<1024,        _if_conditional274) {
            break;
        }
    }
    result_193=(char*)come_increment_ref_count(((char*)(right_value160=buffer_to_string(buf_190))));
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_194=fclose(f_189);
    if(_if_conditional275=result2_194<0,    _if_conditional275) {
        __result289__ = __result_obj__ = ((char*)(right_value161=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        result_193 = come_decrement_ref_count2(result_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result289__;
    }
    __result290__ = __result_obj__ = result_193;
    come_call_finalizer2(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_193 = come_decrement_ref_count2(result_193, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result290__;
    come_call_finalizer2(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_193 = come_decrement_ref_count2(result_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
void* right_value162;
void* right_value163;
struct list$1charph* result_195;
_Bool _if_conditional276;
struct list$1charph* __result291__;
_Bool _while_condtional10;
_Bool _if_conditional277;
void* right_value164;
struct list$1charph* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&result_195, 0, sizeof(struct list$1charph*));
right_value164 = (void*)0;
    result_195=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value163=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2519, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional276=f==((void*)0),    _if_conditional276) {
        __result291__ = __result_obj__ = result_195;
        come_call_finalizer2(list$1charphp_finalize,result_195, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result291__;
    }
    while(_while_condtional10=1,    _while_condtional10) {
        char buf_196[1024];
        memset(&buf_196, 0, sizeof(char)        *(1024)        );
        if(_if_conditional277=fgets(buf_196,1024,f)==((void*)0),        _if_conditional277) {
            break;
        }
        list$1charph_push_back(result_195,(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(buf_196)))));
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result292__ = __result_obj__ = result_195;
    come_call_finalizer2(list$1charphp_finalize,result_195, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result292__;
    come_call_finalizer2(list$1charphp_finalize,result_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional278;
int __result293__;
struct _IO_FILE* f_197;
_Bool _if_conditional279;
_Bool _if_conditional280;
int __result294__;
int __result295__;
int __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_197, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional278=path==((void*)0)||mode==((void*)0),    _if_conditional278) {
        __result293__ = -1;
        return __result293__;
    }
    f_197=fopen(path,mode);
    if(f_197) {
        block(parent,f_197);
        if(_if_conditional280=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional280) {
            fclose(f_197);
            __result294__ = 0;
            return __result294__;
        }
        fclose(f_197);
        __result295__ = 0;
        return __result295__;
    }
    __result296__ = -1;
    return __result296__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional281;
void* right_value165;
char* __result297__;
void* right_value166;
char* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
right_value166 = (void*)0;
    if(_if_conditional281=self==((void*)0),    _if_conditional281) {
        __result297__ = __result_obj__ = ((char*)(right_value165=__builtin_string("")));
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result297__;
    }
    puts(self);
    __result298__ = __result_obj__ = ((char*)(right_value166=__builtin_string(self)));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result298__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional282;
void* right_value167;
char* __result299__;
void* right_value168;
char* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
right_value168 = (void*)0;
    if(_if_conditional282=self==((void*)0),    _if_conditional282) {
        __result299__ = __result_obj__ = ((char*)(right_value167=__builtin_string("")));
        right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result299__;
    }
    printf("%s",self);
    __result300__ = __result_obj__ = ((char*)(right_value168=__builtin_string(self)));
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result300__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional283;
void* right_value169;
char* __result301__;
char* msg2_198;
va_list args_199;
void* right_value170;
char* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
memset(&msg2_198, 0, sizeof(char*));
memset(&args_199, 0, sizeof(va_list));
right_value170 = (void*)0;
    if(_if_conditional283=self==((void*)0),    _if_conditional283) {
        __result301__ = __result_obj__ = ((char*)(right_value169=__builtin_string("")));
        right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result301__;
    }
    __builtin_va_start(args_199,self);
    vasprintf(&msg2_198,self,args_199);
    __builtin_va_end(args_199);
    printf("%s",msg2_198);
    free(msg2_198);
    __result302__ = __result_obj__ = ((char*)(right_value170=__builtin_string(self)));
    come_call_finalizer2(va_list_finalize,(&args_199), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result302__;
    come_call_finalizer2(va_list_finalize,(&args_199), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional284;
void* right_value171;
char* __result303__;
char* msg2_200;
va_list args_201;
void* right_value172;
char* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&msg2_200, 0, sizeof(char*));
memset(&args_201, 0, sizeof(va_list));
right_value172 = (void*)0;
    if(_if_conditional284=self==((void*)0),    _if_conditional284) {
        __result303__ = __result_obj__ = ((char*)(right_value171=__builtin_string("")));
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result303__;
    }
    __builtin_va_start(args_201,self);
    vasprintf(&msg2_200,self,args_201);
    __builtin_va_end(args_201);
    printf("%s",msg2_200);
    free(msg2_200);
    __result304__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self)));
    come_call_finalizer2(va_list_finalize,(&args_201), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result304__;
    come_call_finalizer2(va_list_finalize,(&args_201), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result305__;
memset(&__result_obj__, 0, sizeof(void*));
    printf(msg,self);
    __result305__ = self;
    return __result305__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional285;
void* right_value173;
char* __result306__;
void* right_value174;
char* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
right_value174 = (void*)0;
    if(_if_conditional285=self==((void*)0),    _if_conditional285) {
        __result306__ = __result_obj__ = ((char*)(right_value173=__builtin_string("")));
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result306__;
    }
    puts(self);
    __result307__ = __result_obj__ = ((char*)(right_value174=__builtin_string(self)));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result307__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_202;
_Bool _if_conditional286;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_202, 0, sizeof(int));
    for(    i_202=0;    i_202<self;    i_202++    ){
        block(parent,i_202);
        if(_if_conditional286=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional286) {
            return;
        }
    }
}

