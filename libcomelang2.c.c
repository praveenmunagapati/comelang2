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

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value0 = (void*)0;
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
right_value1 = (void*)0;
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1950, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0, right_value0 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value1, right_value1 = (void*)0;
    __freed_obj__ = 0;
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result2__;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value2 = (void*)0;
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
right_value3 = (void*)0;
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1960, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2, right_value2 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3, right_value3 = (void*)0;
    __freed_obj__ = 0;
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result3__;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value4 = (void*)0;
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
right_value5 = (void*)0;
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1970, "struct smart_pointer$1short"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4, right_value4 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value5, right_value5 = (void*)0;
    __freed_obj__ = 0;
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result4__;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value6 = (void*)0;
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
right_value7 = (void*)0;
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1980, "struct smart_pointer$1int"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6, right_value6 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value7, right_value7 = (void*)0;
    __freed_obj__ = 0;
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result5__;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value8 = (void*)0;
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
right_value9 = (void*)0;
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1990, "struct smart_pointer$1long"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8, right_value8 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value9, right_value9 = (void*)0;
    __freed_obj__ = 0;
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result6__;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
}

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            if(self->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

void come_push_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional5=gNumComeStackFrame<1024,    _if_conditional5) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional6=gNumComeStackFrame>0,    _if_conditional6) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
void* right_value11;
struct buffer* buf_5;
void* right_value12;
int i_6;
_Bool _for_condtionalA1;
void* right_value13;
_Bool _if_conditional7;
void* right_value14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&buf_5, 0, sizeof(struct buffer*));
right_value12 = (void*)0;
memset(&i_6, 0, sizeof(int));
right_value13 = (void*)0;
right_value14 = (void*)0;
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 38, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11, right_value11 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(buf_5,((char*)(right_value12=xsprintf("%s %d\n",sname,sline))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
    __freed_obj__ = 0;
    for(
    i_6=gNumComeStackFrame-2 ,    0;    _for_condtionalA1=    i_6>=0 ,    _for_condtionalA1;    i_6-- ,    0    ){
        buffer_append_str(buf_5,((char*)(right_value13=xsprintf("%s %d\n",gComeStackFrameSName[i_6],gComeStackFrameSLine[i_6]))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13, right_value13 = (void*)0;
        __freed_obj__ = 0;
    }
    if(_if_conditional7=gComeStackFrameBuffer,    _if_conditional7) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(right_value14=buffer_to_string(buf_5))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value14, right_value14 = (void*)0;
    __freed_obj__ = 0;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_7;
_Bool _for_condtionalA2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_7, 0, sizeof(int));
    for(
    i_7=gNumComeStackFrame-1 ,    0;    _for_condtionalA2=    i_7>=0 ,    _for_condtionalA2;    i_7-- ,    0    ){
        printf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value15 = (void*)0;
    __result7__ = __result_obj__ = ((char*)(right_value15=__builtin_string(gComeStackFrameBuffer)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value15, right_value15 = (void*)0;
    __freed_obj__ = 0;
    return __result7__;
}

void* come_null_check(void* mem, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
void* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
void* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool __result10__;
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result12__ = self;
    return __result12__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result13__;
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
_Bool _if_conditional17;
int __result15__;
int __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result17__ = self;
    return __result17__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
_Bool _if_conditional19;
int __result18__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool __result20__;
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result22__;
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf("%s...",msg);
    if(_if_conditional24=!test,    _if_conditional24) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_8;
_Bool _for_condtionalA3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_8, 0, sizeof(int));
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*1024);
    memset(gComeStackFrameSLine,0,sizeof(int)*1024);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(
    i_8=0 ,    0;    _for_condtionalA3=    i_8<gHeapPages.mSizePages ,    _for_condtionalA3;    i_8++ ,    0    ){
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
struct sMemHeader* it_9;
int n_10;
_Bool _while_condtional1;
_Bool flag_11;
_Bool _if_conditional28;
int i_12;
_Bool _for_condtionalA4;
_Bool _if_conditional29;
_Bool _if_conditional30;
struct sMemHeaderTiny* it_13;
int n_14;
_Bool _while_condtional2;
_Bool _if_conditional31;
int i_15;
_Bool _for_condtionalA5;
int i_16;
_Bool _for_condtionalA6;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct sMemHeader*));
memset(&n_10, 0, sizeof(int));
memset(&flag_11, 0, sizeof(_Bool));
memset(&i_12, 0, sizeof(int));
memset(&it_13, 0, sizeof(struct sMemHeaderTiny*));
memset(&n_14, 0, sizeof(int));
memset(&i_15, 0, sizeof(int));
memset(&i_16, 0, sizeof(int));
    if(_if_conditional25=gComeStackFrameBuffer,    _if_conditional25) {
        free(gComeStackFrameBuffer);
    }
    if(_if_conditional26=gComeGCLib,    _if_conditional26) {
    }
    else {
        if(_if_conditional27=gComeDebugLib,        _if_conditional27) {
            it_9=gAllocMem;
            n_10=0;
            while(_while_condtional1=it_9,            _while_condtional1) {
                n_10++;
                flag_11=(_Bool)0;
                printf("#%d ",n_10);
                if(_if_conditional28=it_9->class_name,                _if_conditional28) {
                    printf("(%s): ",it_9->class_name);
                }
                for(
                i_12=0 ,                0;                _for_condtionalA4=                i_12<16 ,                _for_condtionalA4;                i_12++ ,                0                ){
                    if(_if_conditional29=it_9->sname[i_12],                    _if_conditional29) {
                        printf("%s %d, ",it_9->sname[i_12],it_9->sline[i_12]);
                        flag_11=(_Bool)1;
                    }
                }
                if(_if_conditional30=flag_11,                _if_conditional30) {
                    puts("");
                }
                it_9=it_9->next;
            }
            printf("%d memory leaks. %d alloc, %d free.\n",n_10,gNumAlloc,gNumFree);
        }
        else {
            it_13=(struct sMemHeaderTiny*)gAllocMem;
            n_14=0;
            while(_while_condtional2=it_13,            _while_condtional2) {
                n_14++;
                it_13=it_13->next;
            }
            if(_if_conditional31=n_14>0,            _if_conditional31) {
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_14,gNumAlloc,gNumFree);
            }
        }
    }
    for(
    i_15=0 ,    0;    _for_condtionalA5=    i_15<gHeapPages.mSizePages ,    _for_condtionalA5;    i_15++ ,    0    ){
        free(gHeapPages.mPages[i_15]);
    }
    free(gHeapPages.mPages);
    for(
    i_16=0 ,    0;    _for_condtionalA6=    i_16<4048 ,    _for_condtionalA6;    i_16++ ,    0    ){
        if(_if_conditional32=gHeapPages.mFreeMem[i_16],        _if_conditional32) {
            free(gHeapPages.mFreeMem[i_16]);
        }
    }
}

static void* alloc_from_pages(unsigned long int size){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
_Bool _for_condtionalA7;
_Bool _for_condtionalA8;
void* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
                    for(
                    ;                    _for_condtionalA7=                    i_22<gHeapPages.mSizePages ,                    _for_condtionalA7;                    i_22++ ,                    0                    ){
                        new_pages_21[i_22]=gHeapPages.mPages[i_22];
                    }
                    for(
                    ;                    _for_condtionalA8=                    i_22<new_size_pages_20 ,                    _for_condtionalA8;                    i_22++ ,                    0                    ){
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_23, 0, sizeof(void*));
memset(&it_24, 0, sizeof(struct sMemHeader*));
memset(&result_25, 0, sizeof(void*));
memset(&it_26, 0, sizeof(struct sMemHeaderTiny*));
    if(_if_conditional38=gComeDebugLib,    _if_conditional38) {
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
        if(_if_conditional40=class_name,        _if_conditional40) {
            it_24->class_name=strdup(class_name);
        }
        else {
            it_24->class_name=((void*)0);
        }
        if(_if_conditional41=gAllocMem,        _if_conditional41) {
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
        if(_if_conditional42=gAllocMem,        _if_conditional42) {
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
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
    if(_if_conditional43=mem,    _if_conditional43) {
        if(_if_conditional44=gComeGCLib,        _if_conditional44) {
        }
        else {
            if(_if_conditional45=gComeDebugLib,            _if_conditional45) {
                it_27=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                if(_if_conditional46=it_27->allocated!=177783,                _if_conditional46) {
                    return;
                }
                it_27->allocated=0;
                prev_it_28=it_27->prev;
                next_it_29=it_27->next;
                if(_if_conditional47=it_27->class_name,                _if_conditional47) {
                    free(it_27->class_name);
                }
                if(_if_conditional48=gAllocMem==it_27,                _if_conditional48) {
                    gAllocMem=next_it_29;
                    if(_if_conditional49=gAllocMem,                    _if_conditional49) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(_if_conditional50=prev_it_28,                    _if_conditional50) {
                        prev_it_28->next=next_it_29;
                    }
                    if(_if_conditional51=next_it_29,                    _if_conditional51) {
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
                    if(_if_conditional57=gAllocMem,                    _if_conditional57) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(_if_conditional58=prev_it_38,                    _if_conditional58) {
                        prev_it_38->next=next_it_39;
                    }
                    if(_if_conditional59=next_it_39,                    _if_conditional59) {
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_47;
unsigned long int* ref_count_48;
unsigned long int* size2_49;
void* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional63;
unsigned long int* ref_count_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_50, 0, sizeof(unsigned long int*));
    if(_if_conditional63=mem==((void*)0),    _if_conditional63) {
        return;
    }
    ref_count_50=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_50);
}

void come_free(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional64;
unsigned long int* ref_count_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_51, 0, sizeof(unsigned long int*));
    if(_if_conditional64=mem==((void*)0),    _if_conditional64) {
        return;
    }
    ref_count_51=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_51);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional65;
void* __result28__;
char* mem_52;
unsigned long int* size_p_53;
unsigned long int size_54;
void* result_55;
void* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
void* __result30__;
unsigned long int* ref_count_56;
void* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
void* __result32__;
unsigned long int* ref_count_57;
void* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
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

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
void (*finalizer_61)(void*);
void (*finalizer_62)(void*);
unsigned long int* ref_count_63;
_Bool _if_conditional76;
unsigned long int count_64;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
void (*finalizer_65)(void*);
_Bool _if_conditional80;
void (*finalizer_66)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
memset(&ref_count_63, 0, sizeof(unsigned long int*));
memset(&count_64, 0, sizeof(unsigned long int));
memset(&finalizer_65, 0, sizeof(void (*)(void*)));
memset(&finalizer_66, 0, sizeof(void (*)(void*)));
    if(_if_conditional72=mem==((void*)0),    _if_conditional72) {
        return;
    }
    if(_if_conditional73=call_finalizer_only,    _if_conditional73) {
        if(_if_conditional74=fun,        _if_conditional74) {
            if(_if_conditional75=protocol_obj&&protocol_fun,            _if_conditional75) {
                finalizer_61=protocol_fun;
                finalizer_61(protocol_obj);
            }
            finalizer_62=fun;
            finalizer_62(mem);
        }
    }
    else {
        ref_count_63=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional76=!no_decrement,        _if_conditional76) {
            (*ref_count_63)--;
        }
        count_64=*ref_count_63;
        if(_if_conditional77=!no_free&&(count_64<=0||force_delete_),        _if_conditional77) {
            if(_if_conditional78=mem,            _if_conditional78) {
                if(_if_conditional79=protocol_obj&&protocol_fun,                _if_conditional79) {
                    finalizer_65=protocol_fun;
                    finalizer_65(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(_if_conditional80=fun,                _if_conditional80) {
                    finalizer_66=fun;
                    finalizer_66(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
char* __result37__;
int len_67;
void* right_value16;
char* result_68;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_67, 0, sizeof(int));
right_value16 = (void*)0;
memset(&result_68, 0, sizeof(char*));
    if(_if_conditional81=str==((void*)0),    _if_conditional81) {
        __result37__ = __result_obj__ = ((void*)0);
        return __result37__;
    }
    len_67=strlen(str)+1;
    result_68=(char*)come_increment_ref_count(((char*)(right_value16=(char*)come_calloc(1, sizeof(char)*(1*(len_67)), "libcomelang2.c", 834, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
    __freed_obj__ = 0;
    strncpy(result_68,str,len_67);
    __result38__ = __result_obj__ = result_68;
    if(result_68 && !__freed_obj__) { result_68 = come_decrement_ref_count(result_68, (void*)0, (void*)0, 0, 1, 0); }
    return __result38__;
    if(result_68 && !__freed_obj__) { result_68 = come_decrement_ref_count(result_68, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_69;
int i_70;
_Bool _for_condtionalA9;
_Bool _if_conditional82;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_69, 0, sizeof(_Bool));
memset(&i_70, 0, sizeof(int));
    found_69=(_Bool)0;
    for(
    i_70=0 ,    0;    _for_condtionalA9=    i_70<len ,    _for_condtionalA9;    i_70++ ,    0    ){
        if(_if_conditional82=array[i_70]==element,        _if_conditional82) {
            found_69=(_Bool)1;
            break;
        }
    }
    __result39__ = found_69;
    return __result39__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value17;
char* __dec_obj6;
struct buffer* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value17 = (void*)0;
    self->size=128;
    __dec_obj6=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value17=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 859, "char"))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17, right_value17 = (void*)0;
    __freed_obj__ = 0;
    self->buf[0]=0;
    self->len=0;
    __result40__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result40__;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional83;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional83=self&&self->buf,    _if_conditional83) {
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional84;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional84=self&&self->buf,    _if_conditional84) {
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional85;
struct buffer* __result41__;
void* right_value18;
struct buffer* result_71;
void* right_value19;
char* __dec_obj7;
struct buffer* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value18 = (void*)0;
memset(&result_71, 0, sizeof(struct buffer*));
right_value19 = (void*)0;
    if(_if_conditional85=self==((void*)0),    _if_conditional85) {
        __result41__ = __result_obj__ = ((void*)0);
        return __result41__;
    }
    result_71=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 881, "struct buffer"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18, right_value18 = (void*)0;
    __freed_obj__ = 0;
    result_71->size=self->size;
    __dec_obj7=result_71->buf;
    result_71->buf=(char*)come_increment_ref_count(((char*)(right_value19=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 884, "char"))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value19, right_value19 = (void*)0;
    __freed_obj__ = 0;
    result_71->len=self->len;
    memcpy(result_71->buf,self->buf,self->len);
    __result42__ = __result_obj__ = result_71;
    if(result_71 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_71, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result42__;
    if(result_71 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_71, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional86;
int __result43__;
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional86=self==((void*)0),    _if_conditional86) {
        __result43__ = 0;
        return __result43__;
    }
    __result44__ = self->len;
    return __result44__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional87;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional87=self==((void*)0),    _if_conditional87) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional88=self==((void*)0),    _if_conditional88) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
struct buffer* __result45__;
_Bool _if_conditional90;
void* right_value20;
char* old_buf_72;
int old_len_73;
int new_size_74;
void* right_value21;
char* __dec_obj8;
struct buffer* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value20 = (void*)0;
memset(&old_buf_72, 0, sizeof(char*));
memset(&old_len_73, 0, sizeof(int));
memset(&new_size_74, 0, sizeof(int));
right_value21 = (void*)0;
    if(_if_conditional89=self==((void*)0)||mem==((void*)0),    _if_conditional89) {
        __result45__ = __result_obj__ = self;
        return __result45__;
    }
    if(_if_conditional90=self->len+size+1+1>=self->size,    _if_conditional90) {
        old_buf_72=(char*)come_increment_ref_count(((char*)(right_value20=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 923, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20, right_value20 = (void*)0;
        __freed_obj__ = 0;
        memcpy(old_buf_72,self->buf,self->size);
        old_len_73=self->len;
        new_size_74=(self->size+size+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(new_size_74)), "libcomelang2.c", 927, "char"))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value21, right_value21 = (void*)0;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_72,old_len_73);
        self->buf[old_len_73]=0;
        self->size=new_size_74;
        if(old_buf_72 && !__freed_obj__) { old_buf_72 = come_decrement_ref_count(old_buf_72, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result46__ = __result_obj__ = self;
    return __result46__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional91;
struct buffer* __result47__;
_Bool _if_conditional92;
void* right_value22;
char* old_buf_75;
int old_len_76;
int new_size_77;
void* right_value23;
char* __dec_obj9;
struct buffer* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value22 = (void*)0;
memset(&old_buf_75, 0, sizeof(char*));
memset(&old_len_76, 0, sizeof(int));
memset(&new_size_77, 0, sizeof(int));
right_value23 = (void*)0;
    if(_if_conditional91=self==((void*)0),    _if_conditional91) {
        __result47__ = __result_obj__ = ((void*)0);
        return __result47__;
    }
    if(_if_conditional92=self->len+1+1+1>=self->size,    _if_conditional92) {
        old_buf_75=(char*)come_increment_ref_count(((char*)(right_value22=charp_clone(self->buf))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
        __freed_obj__ = 0;
        old_len_76=self->len;
        new_size_77=(self->size+10+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value23=(char*)come_calloc(1, sizeof(char)*(1*(new_size_77)), "libcomelang2.c", 950, "char"))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value23, right_value23 = (void*)0;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_75,old_len_76);
        self->buf[old_len_76]=0;
        self->size=new_size_77;
        if(old_buf_75 && !__freed_obj__) { old_buf_75 = come_decrement_ref_count(old_buf_75, (void*)0, (void*)0, 0, 0, 0); }
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result48__ = __result_obj__ = self;
    return __result48__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
struct buffer* __result49__;
int size_78;
_Bool _if_conditional94;
void* right_value24;
char* old_buf_79;
int old_len_80;
int new_size_81;
void* right_value25;
char* __dec_obj10;
struct buffer* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_78, 0, sizeof(int));
right_value24 = (void*)0;
memset(&old_buf_79, 0, sizeof(char*));
memset(&old_len_80, 0, sizeof(int));
memset(&new_size_81, 0, sizeof(int));
right_value25 = (void*)0;
    if(_if_conditional93=self==((void*)0)||mem==((void*)0),    _if_conditional93) {
        __result49__ = __result_obj__ = self;
        return __result49__;
    }
    size_78=strlen(mem);
    if(_if_conditional94=self->len+size_78+1+1>=self->size,    _if_conditional94) {
        old_buf_79=(char*)come_increment_ref_count(((char*)(right_value24=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 972, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value24, right_value24 = (void*)0;
        __freed_obj__ = 0;
        memcpy(old_buf_79,self->buf,self->size);
        old_len_80=self->len;
        new_size_81=(self->size+size_78+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(new_size_81)), "libcomelang2.c", 976, "char"))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value25, right_value25 = (void*)0;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_79,old_len_80);
        self->buf[old_len_80]=0;
        self->size=new_size_81;
        if(old_buf_79 && !__freed_obj__) { old_buf_79 = come_decrement_ref_count(old_buf_79, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size_78);
    self->len+=size_78;
    self->buf[self->len]=0;
    __result50__ = __result_obj__ = self;
    return __result50__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
struct buffer* __result51__;
int size_82;
_Bool _if_conditional96;
void* right_value26;
char* old_buf_83;
int old_len_84;
int new_size_85;
void* right_value27;
char* __dec_obj11;
struct buffer* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_82, 0, sizeof(int));
right_value26 = (void*)0;
memset(&old_buf_83, 0, sizeof(char*));
memset(&old_len_84, 0, sizeof(int));
memset(&new_size_85, 0, sizeof(int));
right_value27 = (void*)0;
    if(_if_conditional95=self==((void*)0)||mem==((void*)0),    _if_conditional95) {
        __result51__ = __result_obj__ = self;
        return __result51__;
    }
    size_82=strlen(mem)+1;
    if(_if_conditional96=self->len+size_82+1+1+1>=self->size,    _if_conditional96) {
        old_buf_83=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 996, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value26, right_value26 = (void*)0;
        __freed_obj__ = 0;
        memcpy(old_buf_83,self->buf,self->size);
        old_len_84=self->len;
        new_size_85=(self->size+size_82+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(new_size_85)), "libcomelang2.c", 1000, "char"))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_83,old_len_84);
        self->buf[old_len_84]=0;
        self->size=new_size_85;
        if(old_buf_83 && !__freed_obj__) { old_buf_83 = come_decrement_ref_count(old_buf_83, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size_82);
    self->len+=size_82;
    self->buf[self->len]=0;
    self->len++;
    __result52__ = __result_obj__ = self;
    return __result52__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
struct buffer* __result53__;
int* mem_86;
int size_87;
_Bool _if_conditional98;
void* right_value28;
char* old_buf_88;
int old_len_89;
int new_size_90;
void* right_value29;
char* __dec_obj12;
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_86, 0, sizeof(int*));
memset(&size_87, 0, sizeof(int));
right_value28 = (void*)0;
memset(&old_buf_88, 0, sizeof(char*));
memset(&old_len_89, 0, sizeof(int));
memset(&new_size_90, 0, sizeof(int));
right_value29 = (void*)0;
    if(_if_conditional97=self==((void*)0),    _if_conditional97) {
        __result53__ = __result_obj__ = ((void*)0);
        return __result53__;
    }
    mem_86=&value;
    size_87=sizeof(int);
    if(_if_conditional98=self->len+size_87+1+1>=self->size,    _if_conditional98) {
        old_buf_88=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1023, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
        __freed_obj__ = 0;
        memcpy(old_buf_88,self->buf,self->size);
        old_len_89=self->len;
        new_size_90=(self->size+size_87+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(new_size_90)), "libcomelang2.c", 1027, "char"))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_88,old_len_89);
        self->buf[old_len_89]=0;
        self->size=new_size_90;
        if(old_buf_88 && !__freed_obj__) { old_buf_88 = come_decrement_ref_count(old_buf_88, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_86,size_87);
    self->len+=size_87;
    self->buf[self->len]=0;
    __result54__ = __result_obj__ = self;
    return __result54__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_91;
int size_92;
_Bool _if_conditional99;
void* right_value30;
char* old_buf_93;
int old_len_94;
int new_size_95;
void* right_value31;
char* __dec_obj13;
struct buffer* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_91, 0, sizeof(long*));
memset(&size_92, 0, sizeof(int));
right_value30 = (void*)0;
memset(&old_buf_93, 0, sizeof(char*));
memset(&old_len_94, 0, sizeof(int));
memset(&new_size_95, 0, sizeof(int));
right_value31 = (void*)0;
    mem_91=&value;
    size_92=sizeof(long);
    if(_if_conditional99=self->len+size_92+1+1>=self->size,    _if_conditional99) {
        old_buf_93=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1046, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
        __freed_obj__ = 0;
        memcpy(old_buf_93,self->buf,self->size);
        old_len_94=self->len;
        new_size_95=(self->size+size_92+1)*2;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(new_size_95)), "libcomelang2.c", 1050, "char"))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value31, right_value31 = (void*)0;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_93,old_len_94);
        self->buf[old_len_94]=0;
        self->size=new_size_95;
        if(old_buf_93 && !__freed_obj__) { old_buf_93 = come_decrement_ref_count(old_buf_93, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_91,size_92);
    self->len+=size_92;
    self->buf[self->len]=0;
    __result55__ = __result_obj__ = self;
    return __result55__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
struct buffer* __result56__;
short short* mem_96;
int size_97;
_Bool _if_conditional101;
void* right_value32;
char* old_buf_98;
int old_len_99;
int new_size_100;
void* right_value33;
char* __dec_obj14;
struct buffer* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_96, 0, sizeof(short short*));
memset(&size_97, 0, sizeof(int));
right_value32 = (void*)0;
memset(&old_buf_98, 0, sizeof(char*));
memset(&old_len_99, 0, sizeof(int));
memset(&new_size_100, 0, sizeof(int));
right_value33 = (void*)0;
    if(_if_conditional100=self==((void*)0),    _if_conditional100) {
        __result56__ = __result_obj__ = ((void*)0);
        return __result56__;
    }
    mem_96=&value;
    size_97=sizeof(short short);
    if(_if_conditional101=self->len+size_97+1+1>=self->size,    _if_conditional101) {
        old_buf_98=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 1073, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value32, right_value32 = (void*)0;
        __freed_obj__ = 0;
        memcpy(old_buf_98,self->buf,self->size);
        old_len_99=self->len;
        new_size_100=(self->size+size_97+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(new_size_100)), "libcomelang2.c", 1077, "char"))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value33, right_value33 = (void*)0;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_98,old_len_99);
        self->buf[old_len_99]=0;
        self->size=new_size_100;
        if(old_buf_98 && !__freed_obj__) { old_buf_98 = come_decrement_ref_count(old_buf_98, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_96,size_97);
    self->len+=size_97;
    self->buf[self->len]=0;
    __result57__ = __result_obj__ = self;
    return __result57__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
struct buffer* __result58__;
int len_101;
_Bool _if_conditional103;
int new_size_102;
void* right_value34;
char* __dec_obj15;
int i_103;
_Bool _for_condtionalA10;
struct buffer* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_101, 0, sizeof(int));
memset(&new_size_102, 0, sizeof(int));
right_value34 = (void*)0;
memset(&i_103, 0, sizeof(int));
    if(_if_conditional102=self==((void*)0),    _if_conditional102) {
        __result58__ = __result_obj__ = ((void*)0);
        return __result58__;
    }
    len_101=self->len;
    len_101=(len_101+3)&~3;
    if(_if_conditional103=len_101>=self->size,    _if_conditional103) {
        new_size_102=(self->size+1+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(new_size_102)), "libcomelang2.c", 1101, "char"))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value34, right_value34 = (void*)0;
        __freed_obj__ = 0;
        self->size=new_size_102;
    }
    for(
    i_103=self->len ,    0;    _for_condtionalA10=    i_103<len_101 ,    _for_condtionalA10;    i_103++ ,    0    ){
        self->buf[i_103]=0;
    }
    self->len=len_101;
    __result59__ = __result_obj__ = self;
    return __result59__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
int __result60__;
_Bool _if_conditional105;
int __result61__;
_Bool _if_conditional106;
int __result62__;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional104=left==((void*)0)&&right==((void*)0),    _if_conditional104) {
        __result60__ = 0;
        return __result60__;
    }
    else {
        if(_if_conditional105=left==((void*)0),        _if_conditional105) {
            __result61__ = -1;
            return __result61__;
        }
        else {
            if(_if_conditional106=right==((void*)0),            _if_conditional106) {
                __result62__ = 1;
                return __result62__;
            }
        }
    }
    __result63__ = strcmp(left->buf,right->buf);
    return __result63__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value35;
void* right_value36;
struct buffer* result_104;
_Bool _if_conditional107;
struct buffer* __result64__;
struct buffer* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value35 = (void*)0;
right_value36 = (void*)0;
memset(&result_104, 0, sizeof(struct buffer*));
    result_104=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1131, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value36, right_value36 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional107=self==((void*)0),    _if_conditional107) {
        __result64__ = __result_obj__ = result_104;
        if(result_104 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_104, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result64__;
    }
    buffer_append_str(result_104,self);
    __result65__ = __result_obj__ = result_104;
    if(result_104 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_104, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result65__;
    if(result_104 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value37;
void* right_value38;
struct buffer* result_105;
_Bool _if_conditional108;
struct buffer* __result66__;
struct buffer* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value37 = (void*)0;
right_value38 = (void*)0;
memset(&result_105, 0, sizeof(struct buffer*));
    result_105=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value38=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1144, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value37, right_value37 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value38, right_value38 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional108=self==((void*)0),    _if_conditional108) {
        __result66__ = __result_obj__ = result_105;
        if(result_105 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_105, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result66__;
    }
    buffer_append_str(result_105,self);
    __result67__ = __result_obj__ = result_105;
    if(result_105 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_105, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result67__;
    if(result_105 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_105, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
void* right_value39;
char* __result68__;
void* right_value40;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value39 = (void*)0;
right_value40 = (void*)0;
    if(_if_conditional109=self==((void*)0),    _if_conditional109) {
        __result68__ = __result_obj__ = ((char*)(right_value39=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value39, right_value39 = (void*)0;
        __freed_obj__ = 0;
        return __result68__;
    }
    __result69__ = __result_obj__ = ((char*)(right_value40=__builtin_string(self->buf)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value40, right_value40 = (void*)0;
    __freed_obj__ = 0;
    return __result69__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result70__ = self==right;
    return __result70__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = self==right;
    return __result71__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = self==right;
    return __result72__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result73__ = self==right;
    return __result73__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = self==right;
    return __result74__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = self==right;
    return __result75__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = self==right;
    return __result76__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = self==right;
    return __result77__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
_Bool __result78__;
_Bool _if_conditional111;
_Bool __result79__;
_Bool _if_conditional112;
_Bool __result80__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional110=self==((void*)0)&&right==((void*)0),    _if_conditional110) {
        __result78__ = (_Bool)1;
        return __result78__;
    }
    else {
        if(_if_conditional111=self==((void*)0),        _if_conditional111) {
            __result79__ = (_Bool)0;
            return __result79__;
        }
        else {
            if(_if_conditional112=right==((void*)0),            _if_conditional112) {
                __result80__ = (_Bool)0;
                return __result80__;
            }
        }
    }
    __result81__ = strcmp(self,right)==0;
    return __result81__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
_Bool __result82__;
_Bool _if_conditional114;
_Bool __result83__;
_Bool _if_conditional115;
_Bool __result84__;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional113=self==((void*)0)&&right==((void*)0),    _if_conditional113) {
        __result82__ = (_Bool)1;
        return __result82__;
    }
    else {
        if(_if_conditional114=self==((void*)0),        _if_conditional114) {
            __result83__ = (_Bool)0;
            return __result83__;
        }
        else {
            if(_if_conditional115=right==((void*)0),            _if_conditional115) {
                __result84__ = (_Bool)0;
                return __result84__;
            }
        }
    }
    __result85__ = strcmp(self,right)==0;
    return __result85__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
_Bool __result86__;
_Bool _if_conditional117;
_Bool __result87__;
_Bool _if_conditional118;
_Bool __result88__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional116=self==((void*)0)&&right==((void*)0),    _if_conditional116) {
        __result86__ = (_Bool)1;
        return __result86__;
    }
    else {
        if(_if_conditional117=self==((void*)0),        _if_conditional117) {
            __result87__ = (_Bool)0;
            return __result87__;
        }
        else {
            if(_if_conditional118=right==((void*)0),            _if_conditional118) {
                __result88__ = (_Bool)0;
                return __result88__;
            }
        }
    }
    __result89__ = strcmp(self,right)==0;
    return __result89__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
_Bool __result90__;
_Bool _if_conditional120;
_Bool __result91__;
_Bool _if_conditional121;
_Bool __result92__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional119=self==((void*)0)&&right==((void*)0),    _if_conditional119) {
        __result90__ = (_Bool)1;
        return __result90__;
    }
    else {
        if(_if_conditional120=self==((void*)0),        _if_conditional120) {
            __result91__ = (_Bool)0;
            return __result91__;
        }
        else {
            if(_if_conditional121=right==((void*)0),            _if_conditional121) {
                __result92__ = (_Bool)0;
                return __result92__;
            }
        }
    }
    __result93__ = strcmp(self,right)==0;
    return __result93__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
_Bool __result94__;
_Bool _if_conditional123;
_Bool __result95__;
_Bool _if_conditional124;
_Bool __result96__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional122=self==((void*)0)&&right==((void*)0),    _if_conditional122) {
        __result94__ = (_Bool)0;
        return __result94__;
    }
    else {
        if(_if_conditional123=self==((void*)0),        _if_conditional123) {
            __result95__ = (_Bool)1;
            return __result95__;
        }
        else {
            if(_if_conditional124=right==((void*)0),            _if_conditional124) {
                __result96__ = (_Bool)1;
                return __result96__;
            }
        }
    }
    __result97__ = strcmp(self,right)!=0;
    return __result97__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
_Bool __result98__;
_Bool _if_conditional126;
_Bool __result99__;
_Bool _if_conditional127;
_Bool __result100__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional125=self==((void*)0)&&right==((void*)0),    _if_conditional125) {
        __result98__ = (_Bool)0;
        return __result98__;
    }
    else {
        if(_if_conditional126=self==((void*)0),        _if_conditional126) {
            __result99__ = (_Bool)1;
            return __result99__;
        }
        else {
            if(_if_conditional127=right==((void*)0),            _if_conditional127) {
                __result100__ = (_Bool)1;
                return __result100__;
            }
        }
    }
    __result101__ = strcmp(self,right)!=0;
    return __result101__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
void* right_value41;
char* __result102__;
int len_106;
void* right_value42;
char* result_107;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value41 = (void*)0;
memset(&len_106, 0, sizeof(int));
right_value42 = (void*)0;
memset(&result_107, 0, sizeof(char*));
    if(_if_conditional128=self==((void*)0)||right==((void*)0),    _if_conditional128) {
        __result102__ = __result_obj__ = ((char*)(right_value41=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
        if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value41, right_value41 = (void*)0;
        __freed_obj__ = 0;
        return __result102__;
    }
    len_106=strlen(self)+strlen(right);
    result_107=(char*)come_increment_ref_count(((char*)(right_value42=(char*)come_calloc(1, sizeof(char)*(1*(len_106+1)), "libcomelang2.c", 1305, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value42, right_value42 = (void*)0;
    __freed_obj__ = 0;
    strncpy(result_107,self,len_106+1);
    strncat(result_107,right,len_106+1);
    __result103__ = __result_obj__ = result_107;
    if(result_107 && !__freed_obj__) { result_107 = come_decrement_ref_count(result_107, (void*)0, (void*)0, 0, 1, 0); }
    return __result103__;
    if(result_107 && !__freed_obj__) { result_107 = come_decrement_ref_count(result_107, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
void* right_value43;
char* __result104__;
int len_108;
void* right_value44;
char* result_109;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value43 = (void*)0;
memset(&len_108, 0, sizeof(int));
right_value44 = (void*)0;
memset(&result_109, 0, sizeof(char*));
    if(_if_conditional129=self==((void*)0)||right==((void*)0),    _if_conditional129) {
        __result104__ = __result_obj__ = ((char*)(right_value43=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
        __freed_obj__ = 0;
        return __result104__;
    }
    len_108=strlen(self)+strlen(right);
    result_109=(char*)come_increment_ref_count(((char*)(right_value44=(char*)come_calloc(1, sizeof(char)*(1*(len_108+1)), "libcomelang2.c", 1320, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44, right_value44 = (void*)0;
    __freed_obj__ = 0;
    strncpy(result_109,self,len_108+1);
    strncat(result_109,right,len_108+1);
    __result105__ = __result_obj__ = result_109;
    if(result_109 && !__freed_obj__) { result_109 = come_decrement_ref_count(result_109, (void*)0, (void*)0, 0, 1, 0); }
    return __result105__;
    if(result_109 && !__freed_obj__) { result_109 = come_decrement_ref_count(result_109, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
void* right_value45;
char* __result106__;
void* right_value46;
void* right_value47;
struct buffer* buf_110;
int i_111;
_Bool _for_condtionalA11;
void* right_value48;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
memset(&buf_110, 0, sizeof(struct buffer*));
memset(&i_111, 0, sizeof(int));
right_value48 = (void*)0;
    if(_if_conditional130=self==((void*)0),    _if_conditional130) {
        __result106__ = __result_obj__ = ((char*)(right_value45=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45, right_value45 = (void*)0;
        __freed_obj__ = 0;
        return __result106__;
    }
    buf_110=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value47=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value46=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1333, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value46, right_value46 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value47);
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value47, right_value47 = (void*)0;
    __freed_obj__ = 0;
    for(
    i_111=0 ,    0;    _for_condtionalA11=    i_111<right ,    _for_condtionalA11;    i_111++ ,    0    ){
        buffer_append_str(buf_110,self);
    }
    __result107__ = __result_obj__ = ((char*)(right_value48=buffer_to_string(buf_110)));
    if(buf_110 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value48, right_value48 = (void*)0;
    __freed_obj__ = 0;
    return __result107__;
    if(buf_110 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_110, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
void* right_value49;
char* __result108__;
void* right_value50;
void* right_value51;
struct buffer* buf_112;
int i_113;
_Bool _for_condtionalA12;
void* right_value52;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&buf_112, 0, sizeof(struct buffer*));
memset(&i_113, 0, sizeof(int));
right_value52 = (void*)0;
    if(_if_conditional131=self==((void*)0),    _if_conditional131) {
        __result108__ = __result_obj__ = ((char*)(right_value49=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value49, right_value49 = (void*)0;
        __freed_obj__ = 0;
        return __result108__;
    }
    buf_112=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value51=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value50=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1347, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value50, right_value50 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value51, right_value51 = (void*)0;
    __freed_obj__ = 0;
    for(
    i_113=0 ,    0;    _for_condtionalA12=    i_113<right ,    _for_condtionalA12;    i_113++ ,    0    ){
        buffer_append_str(buf_112,self);
    }
    __result109__ = __result_obj__ = ((char*)(right_value52=buffer_to_string(buf_112)));
    if(buf_112 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value52, right_value52 = (void*)0;
    __freed_obj__ = 0;
    return __result109__;
    if(buf_112 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_112, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result110__ = (int_get_hash_key(((int)value)));
    return __result110__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = value;
    return __result111__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result112__ = value;
    return __result112__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result113__ = value;
    return __result113__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = value;
    return __result114__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = value;
    return __result115__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = (unsigned int)value;
    return __result116__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = (unsigned int)value;
    return __result117__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
unsigned int __result118__;
int result_114;
char* p_115;
_Bool _while_condtional3;
unsigned int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_114, 0, sizeof(int));
memset(&p_115, 0, sizeof(char*));
    if(_if_conditional132=value==((void*)0),    _if_conditional132) {
        __result118__ = 0;
        return __result118__;
    }
    result_114=0;
    p_115=value;
    while(_while_condtional3=*p_115,    _while_condtional3) {
        result_114+=(*p_115);
        p_115++;
    }
    __result119__ = result_114;
    return __result119__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
unsigned int __result120__;
int result_116;
char* p_117;
_Bool _while_condtional4;
unsigned int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_116, 0, sizeof(int));
memset(&p_117, 0, sizeof(char*));
    if(_if_conditional133=value==((void*)0),    _if_conditional133) {
        __result120__ = 0;
        return __result120__;
    }
    result_116=0;
    p_117=value;
    while(_while_condtional4=*p_117,    _while_condtional4) {
        result_116+=(*p_117);
        p_117++;
    }
    __result121__ = result_116;
    return __result121__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = self;
    return __result122__;
}

char char_clone(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result123__ = self;
    return __result123__;
}

short int short_clone(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = self;
    return __result124__;
}

int int_clone(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = self;
    return __result125__;
}

long int long_clone(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = self;
    return __result126__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned long int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = self;
    return __result127__;
}

double double_clone(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = self;
    return __result128__;
}

float float_clone(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result129__ = self;
    return __result129__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
char* __result130__;
void* right_value53;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value53 = (void*)0;
    if(_if_conditional134=self==((void*)0),    _if_conditional134) {
        __result130__ = __result_obj__ = ((void*)0);
        return __result130__;
    }
    __result131__ = __result_obj__ = ((char*)(right_value53=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
    __freed_obj__ = 0;
    return __result131__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
char* __result132__;
void* right_value54;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value54 = (void*)0;
    if(_if_conditional135=self==((void*)0),    _if_conditional135) {
        __result132__ = __result_obj__ = ((void*)0);
        return __result132__;
    }
    __result133__ = __result_obj__ = ((char*)(right_value54=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value54, right_value54 = (void*)0;
    __freed_obj__ = 0;
    return __result133__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_118;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_118, 0, sizeof(_Bool));
    result_118=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result134__ = result_118;
    return __result134__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = c==32||c==9;
    return __result135__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = (c>=48&&c<=57);
    return __result136__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = xiswalpha(c)||xiswdigit(c);
    return __result137__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_119;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_119, 0, sizeof(_Bool));
    result_119=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result138__ = result_119;
    return __result138__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = c==32||c==9;
    return __result139__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = (c>=48&&c<=57);
    return __result140__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result141__ = xisalpha(c)||xisdigit(c);
    return __result141__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_120;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_120, 0, sizeof(_Bool));
    result_120=(c>=32&&c<=126);
    __result142__ = result_120;
    return __result142__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_121;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_121, 0, sizeof(_Bool));
    result_121=(c>=32&&c<=126);
    __result143__ = result_121;
    return __result143__;
}

int string_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
int __result144__;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional136=str==((void*)0),    _if_conditional136) {
        __result144__ = 0;
        return __result144__;
    }
    __result145__ = strlen(str);
    return __result145__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
int __result146__;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional137=str==((void*)0),    _if_conditional137) {
        __result146__ = 0;
        return __result146__;
    }
    __result147__ = strlen(str);
    return __result147__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
void* right_value55;
char* __result148__;
int len_122;
void* right_value56;
char* result_123;
int i_124;
_Bool _for_condtionalA13;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value55 = (void*)0;
memset(&len_122, 0, sizeof(int));
right_value56 = (void*)0;
memset(&result_123, 0, sizeof(char*));
memset(&i_124, 0, sizeof(int));
    if(_if_conditional138=str==((void*)0),    _if_conditional138) {
        __result148__ = __result_obj__ = ((char*)(right_value55=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
        __freed_obj__ = 0;
        return __result148__;
    }
    len_122=strlen(str);
    result_123=(char*)come_increment_ref_count(((char*)(right_value56=(char*)come_calloc(1, sizeof(char)*(1*(len_122+1)), "libcomelang2.c", 1564, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
    __freed_obj__ = 0;
    for(
    i_124=0 ,    0;    _for_condtionalA13=    i_124<len_122 ,    _for_condtionalA13;    i_124++ ,    0    ){
        result_123[i_124]=str[len_122-i_124-1];
    }
    result_123[len_122]=0;
    __result149__ = __result_obj__ = result_123;
    if(result_123 && !__freed_obj__) { result_123 = come_decrement_ref_count(result_123, (void*)0, (void*)0, 0, 1, 0); }
    return __result149__;
    if(result_123 && !__freed_obj__) { result_123 = come_decrement_ref_count(result_123, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional139;
void* right_value57;
char* __result150__;
int len_125;
void* right_value58;
char* result_126;
int i_127;
_Bool _for_condtionalA14;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value57 = (void*)0;
memset(&len_125, 0, sizeof(int));
right_value58 = (void*)0;
memset(&result_126, 0, sizeof(char*));
memset(&i_127, 0, sizeof(int));
    if(_if_conditional139=str==((void*)0),    _if_conditional139) {
        __result150__ = __result_obj__ = ((char*)(right_value57=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
        __freed_obj__ = 0;
        return __result150__;
    }
    len_125=strlen(str);
    result_126=(char*)come_increment_ref_count(((char*)(right_value58=(char*)come_calloc(1, sizeof(char)*(1*(len_125+1)), "libcomelang2.c", 1581, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
    __freed_obj__ = 0;
    for(
    i_127=0 ,    0;    _for_condtionalA14=    i_127<len_125 ,    _for_condtionalA14;    i_127++ ,    0    ){
        result_126[i_127]=str[len_125-i_127-1];
    }
    result_126[len_125]=0;
    __result151__ = __result_obj__ = result_126;
    if(result_126 && !__freed_obj__) { result_126 = come_decrement_ref_count(result_126, (void*)0, (void*)0, 0, 1, 0); }
    return __result151__;
    if(result_126 && !__freed_obj__) { result_126 = come_decrement_ref_count(result_126, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
void* right_value59;
char* __result152__;
int len_128;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
void* right_value60;
void* right_value61;
char* __result153__;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
void* right_value62;
char* __result154__;
_Bool _if_conditional147;
void* right_value63;
char* __result155__;
void* right_value64;
char* result_129;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value59 = (void*)0;
memset(&len_128, 0, sizeof(int));
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&result_129, 0, sizeof(char*));
    if(_if_conditional140=str==((void*)0),    _if_conditional140) {
        __result152__ = __result_obj__ = ((char*)(right_value59=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
        __freed_obj__ = 0;
        return __result152__;
    }
    len_128=strlen(str);
    if(_if_conditional141=head<0,    _if_conditional141) {
        head+=len_128;
    }
    if(_if_conditional142=tail<0,    _if_conditional142) {
        tail+=len_128+1;
    }
    if(_if_conditional143=head>tail,    _if_conditional143) {
        __result153__ = __result_obj__ = ((char*)(right_value61=string_reverse(((char*)(right_value60=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value60, right_value60 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value61, right_value61 = (void*)0;
        __freed_obj__ = 0;
        return __result153__;
    }
    if(_if_conditional144=head<0,    _if_conditional144) {
        head=0;
    }
    if(_if_conditional145=tail>=len_128,    _if_conditional145) {
        tail=len_128;
    }
    if(_if_conditional146=head==tail,    _if_conditional146) {
        __result154__ = __result_obj__ = ((char*)(right_value62=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value62, right_value62 = (void*)0;
        __freed_obj__ = 0;
        return __result154__;
    }
    if(_if_conditional147=tail-head+1<1,    _if_conditional147) {
        __result155__ = __result_obj__ = ((char*)(right_value63=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value63, right_value63 = (void*)0;
        __freed_obj__ = 0;
        return __result155__;
    }
    result_129=(char*)come_increment_ref_count(((char*)(right_value64=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1626, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value64, right_value64 = (void*)0;
    __freed_obj__ = 0;
    memcpy(result_129,str+head,tail-head);
    result_129[tail-head]=0;
    __result156__ = __result_obj__ = result_129;
    if(result_129 && !__freed_obj__) { result_129 = come_decrement_ref_count(result_129, (void*)0, (void*)0, 0, 1, 0); }
    return __result156__;
    if(result_129 && !__freed_obj__) { result_129 = come_decrement_ref_count(result_129, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional148;
void* right_value65;
char* __result157__;
int len_130;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value66;
void* right_value67;
char* __result158__;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value68;
char* __result159__;
_Bool _if_conditional155;
void* right_value69;
char* __result160__;
void* right_value70;
char* result_131;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value65 = (void*)0;
memset(&len_130, 0, sizeof(int));
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
memset(&result_131, 0, sizeof(char*));
    if(_if_conditional148=str==((void*)0),    _if_conditional148) {
        __result157__ = __result_obj__ = ((char*)(right_value65=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65, right_value65 = (void*)0;
        __freed_obj__ = 0;
        return __result157__;
    }
    len_130=strlen(str);
    if(_if_conditional149=head<0,    _if_conditional149) {
        head+=len_130;
    }
    if(_if_conditional150=tail<0,    _if_conditional150) {
        tail+=len_130+1;
    }
    if(_if_conditional151=head>tail,    _if_conditional151) {
        __result158__ = __result_obj__ = ((char*)(right_value67=string_reverse(((char*)(right_value66=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66, right_value66 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value67, right_value67 = (void*)0;
        __freed_obj__ = 0;
        return __result158__;
    }
    if(_if_conditional152=head<0,    _if_conditional152) {
        head=0;
    }
    if(_if_conditional153=tail>=len_130,    _if_conditional153) {
        tail=len_130;
    }
    if(_if_conditional154=head==tail,    _if_conditional154) {
        __result159__ = __result_obj__ = ((char*)(right_value68=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value68, right_value68 = (void*)0;
        __freed_obj__ = 0;
        return __result159__;
    }
    if(_if_conditional155=tail-head+1<1,    _if_conditional155) {
        __result160__ = __result_obj__ = ((char*)(right_value69=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value69, right_value69 = (void*)0;
        __freed_obj__ = 0;
        return __result160__;
    }
    result_131=(char*)come_increment_ref_count(((char*)(right_value70=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1669, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0;
    __freed_obj__ = 0;
    memcpy(result_131,str+head,tail-head);
    result_131[tail-head]=0;
    __result161__ = __result_obj__ = result_131;
    if(result_131 && !__freed_obj__) { result_131 = come_decrement_ref_count(result_131, (void*)0, (void*)0, 0, 1, 0); }
    return __result161__;
    if(result_131 && !__freed_obj__) { result_131 = come_decrement_ref_count(result_131, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional156;
void* right_value71;
char* __result162__;
int len_132;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
void* right_value72;
void* right_value73;
char* __result163__;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value74;
char* __result164__;
_Bool _if_conditional163;
void* right_value75;
char* __result165__;
void* right_value76;
char* result_133;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value71 = (void*)0;
memset(&len_132, 0, sizeof(int));
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&result_133, 0, sizeof(char*));
    if(_if_conditional156=str==((void*)0),    _if_conditional156) {
        __result162__ = __result_obj__ = ((char*)(right_value71=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
        __freed_obj__ = 0;
        return __result162__;
    }
    len_132=strlen(str);
    if(_if_conditional157=head<0,    _if_conditional157) {
        head+=len_132;
    }
    if(_if_conditional158=tail<0,    _if_conditional158) {
        tail+=len_132+1;
    }
    if(_if_conditional159=head>tail,    _if_conditional159) {
        __result163__ = __result_obj__ = ((char*)(right_value73=string_reverse(((char*)(right_value72=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value73, right_value73 = (void*)0;
        __freed_obj__ = 0;
        return __result163__;
    }
    if(_if_conditional160=head<0,    _if_conditional160) {
        head=0;
    }
    if(_if_conditional161=tail>=len_132,    _if_conditional161) {
        tail=len_132;
    }
    if(_if_conditional162=head==tail,    _if_conditional162) {
        __result164__ = __result_obj__ = ((char*)(right_value74=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value74, right_value74 = (void*)0;
        __freed_obj__ = 0;
        return __result164__;
    }
    if(_if_conditional163=tail-head+1<1,    _if_conditional163) {
        __result165__ = __result_obj__ = ((char*)(right_value75=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value75, right_value75 = (void*)0;
        __freed_obj__ = 0;
        return __result165__;
    }
    result_133=(char*)come_increment_ref_count(((char*)(right_value76=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1712, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value76, right_value76 = (void*)0;
    __freed_obj__ = 0;
    memcpy(result_133,str+head,tail-head);
    result_133[tail-head]=0;
    __result166__ = __result_obj__ = result_133;
    if(result_133 && !__freed_obj__) { result_133 = come_decrement_ref_count(result_133, (void*)0, (void*)0, 0, 1, 0); }
    return __result166__;
    if(result_133 && !__freed_obj__) { result_133 = come_decrement_ref_count(result_133, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional164;
void* right_value77;
char* __result167__;
int len_134;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
void* right_value78;
void* right_value79;
char* __result168__;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value80;
char* __result169__;
_Bool _if_conditional171;
void* right_value81;
char* __result170__;
void* right_value82;
char* result_135;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value77 = (void*)0;
memset(&len_134, 0, sizeof(int));
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_135, 0, sizeof(char*));
    if(_if_conditional164=str==((void*)0),    _if_conditional164) {
        __result167__ = __result_obj__ = ((char*)(right_value77=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value77, right_value77 = (void*)0;
        __freed_obj__ = 0;
        return __result167__;
    }
    len_134=strlen(str);
    if(_if_conditional165=head<0,    _if_conditional165) {
        head+=len_134;
    }
    if(_if_conditional166=tail<0,    _if_conditional166) {
        tail+=len_134+1;
    }
    if(_if_conditional167=head>tail,    _if_conditional167) {
        __result168__ = __result_obj__ = ((char*)(right_value79=string_reverse(((char*)(right_value78=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value78, right_value78 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value79, right_value79 = (void*)0;
        __freed_obj__ = 0;
        return __result168__;
    }
    if(_if_conditional168=head<0,    _if_conditional168) {
        head=0;
    }
    if(_if_conditional169=tail>=len_134,    _if_conditional169) {
        tail=len_134;
    }
    if(_if_conditional170=head==tail,    _if_conditional170) {
        __result169__ = __result_obj__ = ((char*)(right_value80=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value80, right_value80 = (void*)0;
        __freed_obj__ = 0;
        return __result169__;
    }
    if(_if_conditional171=tail-head+1<1,    _if_conditional171) {
        __result170__ = __result_obj__ = ((char*)(right_value81=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81, right_value81 = (void*)0;
        __freed_obj__ = 0;
        return __result170__;
    }
    result_135=(char*)come_increment_ref_count(((char*)(right_value82=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1755, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82, right_value82 = (void*)0;
    __freed_obj__ = 0;
    memcpy(result_135,str+head,tail-head);
    result_135[tail-head]=0;
    __result171__ = __result_obj__ = result_135;
    if(result_135 && !__freed_obj__) { result_135 = come_decrement_ref_count(result_135, (void*)0, (void*)0, 0, 1, 0); }
    return __result171__;
    if(result_135 && !__freed_obj__) { result_135 = come_decrement_ref_count(result_135, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
void* right_value83;
char* __result172__;
va_list args_136;
char* result_137;
int len_138;
_Bool _if_conditional173;
void* right_value84;
char* __result173__;
void* right_value85;
char* result2_139;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value83 = (void*)0;
memset(&args_136, 0, sizeof(va_list));
memset(&result_137, 0, sizeof(char*));
memset(&len_138, 0, sizeof(int));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&result2_139, 0, sizeof(char*));
    if(_if_conditional172=msg==((void*)0),    _if_conditional172) {
        __result172__ = __result_obj__ = ((char*)(right_value83=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value83, right_value83 = (void*)0;
        __freed_obj__ = 0;
        return __result172__;
    }
    __builtin_va_start(args_136,msg);
    len_138=vasprintf(&result_137,msg,args_136);
    __builtin_va_end(args_136);
    if(_if_conditional173=len_138<0,    _if_conditional173) {
        __result173__ = __result_obj__ = ((char*)(right_value84=__builtin_string("")));
        if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84, right_value84 = (void*)0;
        __freed_obj__ = 0;
        return __result173__;
    }
    result2_139=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(result_137))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value85, right_value85 = (void*)0;
    __freed_obj__ = 0;
    free(result_137);
    __result174__ = __result_obj__ = result2_139;
    if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_139 && !__freed_obj__) { result2_139 = come_decrement_ref_count(result2_139, (void*)0, (void*)0, 0, 1, 0); }
    return __result174__;
    if((&args_136) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_139 && !__freed_obj__) { result2_139 = come_decrement_ref_count(result2_139, (void*)0, (void*)0, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
void* right_value86;
char* __result175__;
int len_140;
_Bool _if_conditional175;
void* right_value87;
char* __result176__;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value88;
char* __result177__;
_Bool _if_conditional180;
void* right_value89;
char* sub_str_141;
void* right_value90;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value86 = (void*)0;
memset(&len_140, 0, sizeof(int));
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&sub_str_141, 0, sizeof(char*));
right_value90 = (void*)0;
    if(_if_conditional174=str==((void*)0),    _if_conditional174) {
        __result175__ = __result_obj__ = ((char*)(right_value86=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
        __freed_obj__ = 0;
        return __result175__;
    }
    len_140=strlen(str);
    if(_if_conditional175=strcmp(str,"")==0,    _if_conditional175) {
        __result176__ = __result_obj__ = ((char*)(right_value87=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87, right_value87 = (void*)0;
        __freed_obj__ = 0;
        return __result176__;
    }
    if(_if_conditional176=head<0,    _if_conditional176) {
        head+=len_140;
    }
    if(_if_conditional177=tail<0,    _if_conditional177) {
        tail+=len_140+1;
    }
    if(_if_conditional178=head<0,    _if_conditional178) {
        head=0;
    }
    if(_if_conditional179=tail<0,    _if_conditional179) {
        __result177__ = __result_obj__ = ((char*)(right_value88=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value88, right_value88 = (void*)0;
        __freed_obj__ = 0;
        return __result177__;
    }
    if(_if_conditional180=tail>=len_140,    _if_conditional180) {
        tail=len_140;
    }
    sub_str_141=(char*)come_increment_ref_count(((char*)(right_value89=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89, right_value89 = (void*)0;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_141,string_length(sub_str_141)+1);
    __result178__ = __result_obj__ = ((char*)(right_value90=__builtin_string(str)));
    if(sub_str_141 && !__freed_obj__) { sub_str_141 = come_decrement_ref_count(sub_str_141, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value90, right_value90 = (void*)0;
    __freed_obj__ = 0;
    return __result178__;
    if(sub_str_141 && !__freed_obj__) { sub_str_141 = come_decrement_ref_count(sub_str_141, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
void* right_value91;
char* __result179__;
int len_142;
_Bool _if_conditional182;
void* right_value92;
char* __result180__;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value93;
char* __result181__;
_Bool _if_conditional187;
void* right_value94;
char* sub_str_143;
void* right_value95;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value91 = (void*)0;
memset(&len_142, 0, sizeof(int));
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&sub_str_143, 0, sizeof(char*));
right_value95 = (void*)0;
    if(_if_conditional181=str==((void*)0),    _if_conditional181) {
        __result179__ = __result_obj__ = ((char*)(right_value91=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value91, right_value91 = (void*)0;
        __freed_obj__ = 0;
        return __result179__;
    }
    len_142=strlen(str);
    if(_if_conditional182=strcmp(str,"")==0,    _if_conditional182) {
        __result180__ = __result_obj__ = ((char*)(right_value92=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value92, right_value92 = (void*)0;
        __freed_obj__ = 0;
        return __result180__;
    }
    if(_if_conditional183=head<0,    _if_conditional183) {
        head+=len_142;
    }
    if(_if_conditional184=tail<0,    _if_conditional184) {
        tail+=len_142+1;
    }
    if(_if_conditional185=head<0,    _if_conditional185) {
        head=0;
    }
    if(_if_conditional186=tail<0,    _if_conditional186) {
        __result181__ = __result_obj__ = ((char*)(right_value93=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
        __freed_obj__ = 0;
        return __result181__;
    }
    if(_if_conditional187=tail>=len_142,    _if_conditional187) {
        tail=len_142;
    }
    sub_str_143=(char*)come_increment_ref_count(((char*)(right_value94=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94, right_value94 = (void*)0;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_143,string_length(sub_str_143)+1);
    __result182__ = __result_obj__ = ((char*)(right_value95=__builtin_string(str)));
    if(sub_str_143 && !__freed_obj__) { sub_str_143 = come_decrement_ref_count(sub_str_143, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
    __freed_obj__ = 0;
    return __result182__;
    if(sub_str_143 && !__freed_obj__) { sub_str_143 = come_decrement_ref_count(sub_str_143, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
void* right_value96;
void* right_value97;
struct list$1charph* __result184__;
void* right_value98;
void* right_value99;
struct list$1charph* result_146;
void* right_value100;
void* right_value101;
struct buffer* str_147;
int i_148;
_Bool _for_condtionalA15;
_Bool _if_conditional190;
void* right_value105;
_Bool _if_conditional193;
void* right_value106;
struct list$1charph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&result_146, 0, sizeof(struct list$1charph*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&str_147, 0, sizeof(struct buffer*));
memset(&i_148, 0, sizeof(int));
right_value105 = (void*)0;
right_value106 = (void*)0;
    if(_if_conditional188=self==((void*)0),    _if_conditional188) {
        __result184__ = __result_obj__ = ((struct list$1charph*)(right_value97=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1866, "struct list$1charph")))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value96, right_value96 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value97, right_value97 = (void*)0;
        __freed_obj__ = 0;
        return __result184__;
    }
    result_146=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value99=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value98=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1869, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98, right_value98 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value99, right_value99 = (void*)0;
    __freed_obj__ = 0;
    str_147=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value101=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value100=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1871, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100, right_value100 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value101, right_value101 = (void*)0;
    __freed_obj__ = 0;
    for(
    i_148=0 ,    0;    _for_condtionalA15=    i_148<charp_length(self) ,    _for_condtionalA15;    i_148++ ,    0    ){
        if(_if_conditional190=self[i_148]==c,        _if_conditional190) {
            list$1charph_push_back(result_146,(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string(str_147->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
            __freed_obj__ = 0;
            buffer_reset(str_147);
        }
        else {
            buffer_append_char(str_147,self[i_148]);
        }
    }
    if(_if_conditional193=buffer_length(str_147)!=0,    _if_conditional193) {
        list$1charph_push_back(result_146,(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(str_147->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
        __freed_obj__ = 0;
    }
    __result186__ = __result_obj__ = result_146;
    if(result_146 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_146, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_147 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result186__;
    if(result_146 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_147 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_147, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result183__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result183__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_144;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_145;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_144, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_145, 0, sizeof(struct list_item$1charph*));
                it_144=self->head;
                while(_while_condtional5=it_144!=((void*)0),                _while_condtional5) {
                    prev_it_145=it_144;
                    it_144=it_144->next;
                    if(prev_it_145 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional189=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional189) {
                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
void* right_value102;
struct list_item$1charph* litem_149;
char* __dec_obj16;
_Bool _if_conditional192;
void* right_value103;
struct list_item$1charph* litem_150;
char* __dec_obj17;
void* right_value104;
struct list_item$1charph* litem_151;
char* __dec_obj18;
struct list$1charph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value102 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
right_value103 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
right_value104 = (void*)0;
memset(&litem_151, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional191=self->len==0,                _if_conditional191) {
                    litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value102=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 224, "struct list_item$1charph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value102, right_value102 = (void*)0;
                    __freed_obj__ = 0;
                    litem_149->prev=((void*)0);
                    litem_149->next=((void*)0);
                    __dec_obj16=litem_149->item;
                    litem_149->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_149;
                    self->head=litem_149;
                }
                else {
                    if(_if_conditional192=self->len==1,                    _if_conditional192) {
                        litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value103=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 234, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value103, right_value103 = (void*)0;
                        __freed_obj__ = 0;
                        litem_150->prev=self->head;
                        litem_150->next=((void*)0);
                        __dec_obj17=litem_150->item;
                        litem_150->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_150;
                        self->head->next=litem_150;
                    }
                    else {
                        litem_151=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 244, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value104, right_value104 = (void*)0;
                        __freed_obj__ = 0;
                        litem_151->prev=self->tail;
                        litem_151->next=((void*)0);
                        __dec_obj18=litem_151->item;
                        litem_151->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_151;
                        self->tail=litem_151;
                    }
                }
                self->len++;
                __result185__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result185__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
void* right_value107;
void* right_value108;
struct list$1charph* __result187__;
void* right_value109;
void* right_value110;
struct list$1charph* result_152;
void* right_value111;
void* right_value112;
struct buffer* str_153;
int i_154;
_Bool _for_condtionalA16;
_Bool _if_conditional195;
void* right_value113;
_Bool _if_conditional196;
void* right_value114;
struct list$1charph* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&result_152, 0, sizeof(struct list$1charph*));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&str_153, 0, sizeof(struct buffer*));
memset(&i_154, 0, sizeof(int));
right_value113 = (void*)0;
right_value114 = (void*)0;
    if(_if_conditional194=self==((void*)0),    _if_conditional194) {
        __result187__ = __result_obj__ = ((struct list$1charph*)(right_value108=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1892, "struct list$1charph")))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value108, right_value108 = (void*)0;
        __freed_obj__ = 0;
        return __result187__;
    }
    result_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1895, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109, right_value109 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value110, right_value110 = (void*)0;
    __freed_obj__ = 0;
    str_153=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value112=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value111=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1897, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value111, right_value111 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value112, right_value112 = (void*)0;
    __freed_obj__ = 0;
    for(
    i_154=0 ,    0;    _for_condtionalA16=    i_154<charp_length(self) ,    _for_condtionalA16;    i_154++ ,    0    ){
        if(_if_conditional195=self[i_154]==c,        _if_conditional195) {
            list$1charph_push_back(result_152,(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(str_153->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value113, right_value113 = (void*)0;
            __freed_obj__ = 0;
            buffer_reset(str_153);
        }
        else {
            buffer_append_char(str_153,self[i_154]);
        }
    }
    if(_if_conditional196=buffer_length(str_153)!=0,    _if_conditional196) {
        list$1charph_push_back(result_152,(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(str_153->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value114, right_value114 = (void*)0;
        __freed_obj__ = 0;
    }
    __result188__ = __result_obj__ = result_152;
    if(result_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_153 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result188__;
    if(result_152 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_153 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
void* right_value115;
char* __result189__;
char* p_155;
_Bool _while_condtional6;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value116;
char* __result190__;
void* right_value117;
char* __result191__;
void* right_value118;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value115 = (void*)0;
memset(&p_155, 0, sizeof(char*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
    if(_if_conditional197=path==((void*)0),    _if_conditional197) {
        __result189__ = __result_obj__ = ((char*)(right_value115=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value115, right_value115 = (void*)0;
        __freed_obj__ = 0;
        return __result189__;
    }
    p_155=path+strlen(path);
    while(_while_condtional6=p_155>=path,    _while_condtional6) {
        if(_if_conditional198=*p_155==47,        _if_conditional198) {
            break;
        }
        else {
            p_155--;
        }
    }
    if(_if_conditional199=p_155<path,    _if_conditional199) {
        __result190__ = __result_obj__ = ((char*)(right_value116=__builtin_string(path)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value116, right_value116 = (void*)0;
        __freed_obj__ = 0;
        return __result190__;
    }
    else {
        __result191__ = __result_obj__ = ((char*)(right_value117=__builtin_string(p_155+1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value117, right_value117 = (void*)0;
        __freed_obj__ = 0;
        return __result191__;
    }
    __result192__ = __result_obj__ = ((char*)(right_value118=__builtin_string("")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118, right_value118 = (void*)0;
    __freed_obj__ = 0;
    return __result192__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
void* right_value119;
char* __result193__;
void* right_value120;
void* right_value121;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
    if(_if_conditional200=path==((void*)0),    _if_conditional200) {
        __result193__ = __result_obj__ = ((char*)(right_value119=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value119, right_value119 = (void*)0;
        __freed_obj__ = 0;
        return __result193__;
    }
    __result194__ = __result_obj__ = ((char*)(right_value121=__builtin_string(dirname(((char*)(right_value120=__builtin_string(path)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120, right_value120 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value121, right_value121 = (void*)0;
    __freed_obj__ = 0;
    return __result194__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional201;
void* right_value122;
char* __result195__;
void* right_value123;
char* path2_156;
char* p_157;
_Bool _while_condtional7;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value124;
char* __result196__;
void* right_value125;
char* __result197__;
void* right_value126;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&path2_156, 0, sizeof(char*));
memset(&p_157, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
    if(_if_conditional201=path==((void*)0),    _if_conditional201) {
        __result195__ = __result_obj__ = ((char*)(right_value122=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value122, right_value122 = (void*)0;
        __freed_obj__ = 0;
        return __result195__;
    }
    path2_156=(char*)come_increment_ref_count(((char*)(right_value123=xbasename(path))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
    __freed_obj__ = 0;
    p_157=path2_156+strlen(path2_156);
    while(_while_condtional7=p_157>=path2_156,    _while_condtional7) {
        if(_if_conditional202=*p_157==46,        _if_conditional202) {
            break;
        }
        else {
            p_157--;
        }
    }
    if(_if_conditional203=p_157<path2_156,    _if_conditional203) {
        __result196__ = __result_obj__ = ((char*)(right_value124=__builtin_string(path2_156)));
        if(path2_156 && !__freed_obj__) { path2_156 = come_decrement_ref_count(path2_156, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value124, right_value124 = (void*)0;
        __freed_obj__ = 0;
        return __result196__;
    }
    else {
        __result197__ = __result_obj__ = ((char*)(right_value125=string_substring(path2_156,0,p_157-path2_156)));
        if(path2_156 && !__freed_obj__) { path2_156 = come_decrement_ref_count(path2_156, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
        __freed_obj__ = 0;
        return __result197__;
    }
    __result198__ = __result_obj__ = ((char*)(right_value126=__builtin_string("")));
    if(path2_156 && !__freed_obj__) { path2_156 = come_decrement_ref_count(path2_156, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value126, right_value126 = (void*)0;
    __freed_obj__ = 0;
    return __result198__;
    if(path2_156 && !__freed_obj__) { path2_156 = come_decrement_ref_count(path2_156, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
void* right_value127;
char* __result199__;
char* p_158;
_Bool _while_condtional8;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value128;
char* __result200__;
void* right_value129;
char* __result201__;
void* right_value130;
char* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value127 = (void*)0;
memset(&p_158, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    if(_if_conditional204=path==((void*)0),    _if_conditional204) {
        __result199__ = __result_obj__ = ((char*)(right_value127=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
        __freed_obj__ = 0;
        return __result199__;
    }
    p_158=path+strlen(path);
    while(_while_condtional8=p_158>=path,    _while_condtional8) {
        if(_if_conditional205=*p_158==46,        _if_conditional205) {
            break;
        }
        else {
            p_158--;
        }
    }
    if(_if_conditional206=p_158<path,    _if_conditional206) {
        __result200__ = __result_obj__ = ((char*)(right_value128=__builtin_string(path)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value128, right_value128 = (void*)0;
        __freed_obj__ = 0;
        return __result200__;
    }
    else {
        __result201__ = __result_obj__ = ((char*)(right_value129=__builtin_string(p_158+1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value129, right_value129 = (void*)0;
        __freed_obj__ = 0;
        return __result201__;
    }
    __result202__ = __result_obj__ = ((char*)(right_value130=__builtin_string("")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130, right_value130 = (void*)0;
    __freed_obj__ = 0;
    return __result202__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
void* right_value131;
char* __result203__;
char* result_159;
void* right_value132;
char* result2_160;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value131 = (void*)0;
memset(&result_159, 0, sizeof(char*));
right_value132 = (void*)0;
memset(&result2_160, 0, sizeof(char*));
    if(_if_conditional207=path==((void*)0),    _if_conditional207) {
        __result203__ = __result_obj__ = ((char*)(right_value131=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131, right_value131 = (void*)0;
        __freed_obj__ = 0;
        return __result203__;
    }
    result_159=realpath(path,((void*)0));
    result2_160=(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(result_159))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value132, right_value132 = (void*)0;
    __freed_obj__ = 0;
    free(result_159);
    __result204__ = __result_obj__ = result2_160;
    if(result2_160 && !__freed_obj__) { result2_160 = come_decrement_ref_count(result2_160, (void*)0, (void*)0, 0, 1, 0); }
    return __result204__;
    if(result2_160 && !__freed_obj__) { result2_160 = come_decrement_ref_count(result2_160, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
void* right_value133;
char* __result205__;
void* right_value134;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value133 = (void*)0;
right_value134 = (void*)0;
    if(_if_conditional208=self,    _if_conditional208) {
        __result205__ = __result_obj__ = ((char*)(right_value133=__builtin_string("true")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value133, right_value133 = (void*)0;
        __freed_obj__ = 0;
        return __result205__;
    }
    else {
        __result206__ = __result_obj__ = ((char*)(right_value134=__builtin_string("false")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value134, right_value134 = (void*)0;
        __freed_obj__ = 0;
        return __result206__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value135;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value135 = (void*)0;
    __result207__ = __result_obj__ = ((char*)(right_value135=xsprintf("%c",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value135, right_value135 = (void*)0;
    __freed_obj__ = 0;
    return __result207__;
}

char* short_to_string(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value136 = (void*)0;
    __result208__ = __result_obj__ = ((char*)(right_value136=xsprintf("%d",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
    __freed_obj__ = 0;
    return __result208__;
}

char* int_to_string(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value137;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value137 = (void*)0;
    __result209__ = __result_obj__ = ((char*)(right_value137=xsprintf("%d",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
    __freed_obj__ = 0;
    return __result209__;
}

char* long_to_string(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value138;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value138 = (void*)0;
    __result210__ = __result_obj__ = ((char*)(right_value138=xsprintf("%ld",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value138, right_value138 = (void*)0;
    __freed_obj__ = 0;
    return __result210__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value139;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value139 = (void*)0;
    __result211__ = __result_obj__ = ((char*)(right_value139=xsprintf("%ld",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139, right_value139 = (void*)0;
    __freed_obj__ = 0;
    return __result211__;
}

char* float_to_string(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value140;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value140 = (void*)0;
    __result212__ = __result_obj__ = ((char*)(right_value140=xsprintf("%f",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140, right_value140 = (void*)0;
    __freed_obj__ = 0;
    return __result212__;
}

char* double_to_string(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value141;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value141 = (void*)0;
    __result213__ = __result_obj__ = ((char*)(right_value141=xsprintf("%lf",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
    __freed_obj__ = 0;
    return __result213__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
void* right_value142;
char* __result214__;
void* right_value143;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value142 = (void*)0;
right_value143 = (void*)0;
    if(_if_conditional209=self==((void*)0),    _if_conditional209) {
        __result214__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value142, right_value142 = (void*)0;
        __freed_obj__ = 0;
        return __result214__;
    }
    __result215__ = __result_obj__ = ((char*)(right_value143=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value143, right_value143 = (void*)0;
    __freed_obj__ = 0;
    return __result215__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
void* right_value144;
char* __result216__;
void* right_value145;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value144 = (void*)0;
right_value145 = (void*)0;
    if(_if_conditional210=self==((void*)0),    _if_conditional210) {
        __result216__ = __result_obj__ = ((char*)(right_value144=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value144, right_value144 = (void*)0;
        __freed_obj__ = 0;
        return __result216__;
    }
    __result217__ = __result_obj__ = ((char*)(right_value145=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value145, right_value145 = (void*)0;
    __freed_obj__ = 0;
    return __result217__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional211;
int __result218__;
_Bool _if_conditional212;
int __result219__;
_Bool _if_conditional213;
int __result220__;
int __result221__;
int __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional211=!left&&right,    _if_conditional211) {
        __result218__ = -1;
        return __result218__;
    }
    else {
        if(_if_conditional212=left&&right,        _if_conditional212) {
            __result219__ = 0;
            return __result219__;
        }
        else {
            if(_if_conditional213=!left&&!right,            _if_conditional213) {
                __result220__ = 0;
                return __result220__;
            }
            else {
                __result221__ = 1;
                return __result221__;
            }
        }
    }
    __result222__ = 0;
    return __result222__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
int __result223__;
_Bool _if_conditional215;
int __result224__;
int __result225__;
int __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional214=left<right,    _if_conditional214) {
        __result223__ = -1;
        return __result223__;
    }
    else {
        if(_if_conditional215=left>right,        _if_conditional215) {
            __result224__ = 1;
            return __result224__;
        }
        else {
            __result225__ = 0;
            return __result225__;
        }
    }
    __result226__ = 0;
    return __result226__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
int __result227__;
_Bool _if_conditional217;
int __result228__;
int __result229__;
int __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional216=left<right,    _if_conditional216) {
        __result227__ = -1;
        return __result227__;
    }
    else {
        if(_if_conditional217=left>right,        _if_conditional217) {
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

int int_compare(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional218;
int __result231__;
_Bool _if_conditional219;
int __result232__;
int __result233__;
int __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional218=left<right,    _if_conditional218) {
        __result231__ = -1;
        return __result231__;
    }
    else {
        if(_if_conditional219=left>right,        _if_conditional219) {
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

int long_compare(long left, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
int __result235__;
_Bool _if_conditional221;
int __result236__;
int __result237__;
int __result238__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional220=left<right,    _if_conditional220) {
        __result235__ = -1;
        return __result235__;
    }
    else {
        if(_if_conditional221=left>right,        _if_conditional221) {
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

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
int __result239__;
_Bool _if_conditional223;
int __result240__;
int __result241__;
int __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional222=left<right,    _if_conditional222) {
        __result239__ = -1;
        return __result239__;
    }
    else {
        if(_if_conditional223=left>right,        _if_conditional223) {
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

int float_compare(float left, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional224;
int __result243__;
_Bool _if_conditional225;
int __result244__;
int __result245__;
int __result246__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional224=left<right,    _if_conditional224) {
        __result243__ = -1;
        return __result243__;
    }
    else {
        if(_if_conditional225=left>right,        _if_conditional225) {
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

int double_compare(double left, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
int __result247__;
_Bool _if_conditional227;
int __result248__;
int __result249__;
int __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional226=left<right,    _if_conditional226) {
        __result247__ = -1;
        return __result247__;
    }
    else {
        if(_if_conditional227=left>right,        _if_conditional227) {
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

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
int __result251__;
_Bool _if_conditional229;
int __result252__;
_Bool _if_conditional230;
int __result253__;
int __result254__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional228=left==((void*)0)&&right==((void*)0),    _if_conditional228) {
        __result251__ = 0;
        return __result251__;
    }
    else {
        if(_if_conditional229=left==((void*)0),        _if_conditional229) {
            __result252__ = -1;
            return __result252__;
        }
        else {
            if(_if_conditional230=right==((void*)0),            _if_conditional230) {
                __result253__ = 1;
                return __result253__;
            }
        }
    }
    __result254__ = strcmp(left,right);
    return __result254__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional231;
int __result255__;
_Bool _if_conditional232;
int __result256__;
_Bool _if_conditional233;
int __result257__;
int __result258__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional231=left==((void*)0)&&right==((void*)0),    _if_conditional231) {
        __result255__ = 0;
        return __result255__;
    }
    else {
        if(_if_conditional232=left==((void*)0),        _if_conditional232) {
            __result256__ = -1;
            return __result256__;
        }
        else {
            if(_if_conditional233=right==((void*)0),            _if_conditional233) {
                __result257__ = 1;
                return __result257__;
            }
        }
    }
    __result258__ = strcmp(left,right);
    return __result258__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
void* right_value146;
char* __result259__;
void* right_value147;
void* right_value148;
struct buffer* buf_161;
_Bool _while_condtional9;
int size_163;
_Bool _if_conditional235;
void* right_value149;
char* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
memset(&buf_161, 0, sizeof(struct buffer*));
memset(&size_163, 0, sizeof(int));
right_value149 = (void*)0;
    if(_if_conditional234=f==((void*)0),    _if_conditional234) {
        __result259__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value146, right_value146 = (void*)0;
        __freed_obj__ = 0;
        return __result259__;
    }
    buf_161=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value148=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value147=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2248, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147, right_value147 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value148, right_value148 = (void*)0;
    __freed_obj__ = 0;
    while(_while_condtional9=1,    _while_condtional9) {
        char buf2_162[1024];
        memset(&buf2_162, 0, sizeof(char)        *(1024)        );
        size_163=fread(buf2_162,1,1024,f);
        buffer_append(buf_161,buf2_162,size_163);
        if(_if_conditional235=size_163<1024,        _if_conditional235) {
            break;
        }
    }
    __result260__ = __result_obj__ = ((char*)(right_value149=buffer_to_string(buf_161)));
    if(buf_161 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value149, right_value149 = (void*)0;
    __freed_obj__ = 0;
    return __result260__;
    if(buf_161 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_161, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional236;
int __result261__;
int __result262__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional236=f==((void*)0)||str==((void*)0),    _if_conditional236) {
        __result261__ = -1;
        return __result261__;
    }
    __result262__ = fwrite(str,strlen(str),1,f);
    return __result262__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional237;
int __result263__;
int result_164;
_Bool _if_conditional238;
int __result264__;
int __result265__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_164, 0, sizeof(int));
    if(_if_conditional237=f==((void*)0),    _if_conditional237) {
        __result263__ = -1;
        return __result263__;
    }
    result_164=fclose(f);
    if(_if_conditional238=result_164<0,    _if_conditional238) {
        __result264__ = result_164;
        return __result264__;
    }
    __result265__ = result_164;
    return __result265__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional239;
struct _IO_FILE* __result266__;
va_list args_166;
int result_167;
_Bool _if_conditional240;
struct _IO_FILE* __result267__;
struct _IO_FILE* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&args_166, 0, sizeof(va_list));
memset(&result_167, 0, sizeof(int));
    if(_if_conditional239=f==((void*)0)||msg==((void*)0),    _if_conditional239) {
        __result266__ = __result_obj__ = f;
        return __result266__;
    }
    char msg2_165[1024*2*2*2];
    memset(&msg2_165, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_166,msg);
    vsnprintf(msg2_165,1024*2*2*2,msg,args_166);
    __builtin_va_end(args_166);
    result_167=fprintf(f,"%s",msg2_165);
    if(_if_conditional240=result_167<0,    _if_conditional240) {
        __result267__ = __result_obj__ = f;
        if((&args_166) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_166), (void*)0, (void*)0, 1, 0, 0, 0); }
        return __result267__;
    }
    __result268__ = __result_obj__ = f;
    if((&args_166) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_166), (void*)0, (void*)0, 1, 0, 0, 0); }
    return __result268__;
    if((&args_166) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_166), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional241;
int __result269__;
struct _IO_FILE* f_168;
_Bool _if_conditional242;
_Bool _if_conditional243;
int __result270__;
int result_169;
_Bool _if_conditional244;
int __result271__;
int result2_170;
_Bool _if_conditional245;
int __result272__;
int __result273__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_168, 0, sizeof(struct _IO_FILE*));
memset(&result_169, 0, sizeof(int));
memset(&result2_170, 0, sizeof(int));
    if(_if_conditional241=self==((void*)0)||file_name==((void*)0),    _if_conditional241) {
        __result269__ = -1;
        return __result269__;
    }
    if(_if_conditional242=append,    _if_conditional242) {
        f_168=fopen(file_name,"a");
    }
    else {
        f_168=fopen(file_name,"w");
    }
    if(_if_conditional243=f_168==((void*)0),    _if_conditional243) {
        __result270__ = -1;
        return __result270__;
    }
    result_169=fwrite(self,strlen(self),1,f_168);
    if(_if_conditional244=result_169<0,    _if_conditional244) {
        __result271__ = result_169;
        return __result271__;
    }
    result2_170=fclose(f_168);
    if(_if_conditional245=result2_170<0,    _if_conditional245) {
        __result272__ = result2_170;
        return __result272__;
    }
    __result273__ = result_169;
    return __result273__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
int __result274__;
struct _IO_FILE* f_171;
_Bool _if_conditional247;
_Bool _if_conditional248;
int __result275__;
int result_172;
_Bool _if_conditional249;
int __result276__;
int result2_173;
_Bool _if_conditional250;
int __result277__;
int __result278__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_171, 0, sizeof(struct _IO_FILE*));
memset(&result_172, 0, sizeof(int));
memset(&result2_173, 0, sizeof(int));
    if(_if_conditional246=self==((void*)0)||file_name==((void*)0),    _if_conditional246) {
        __result274__ = -1;
        return __result274__;
    }
    if(_if_conditional247=append,    _if_conditional247) {
        f_171=fopen(file_name,"a");
    }
    else {
        f_171=fopen(file_name,"w");
    }
    if(_if_conditional248=f_171==((void*)0),    _if_conditional248) {
        __result275__ = -1;
        return __result275__;
    }
    result_172=fwrite(self,strlen(self),1,f_171);
    if(_if_conditional249=result_172<0,    _if_conditional249) {
        __result276__ = result_172;
        return __result276__;
    }
    result2_173=fclose(f_171);
    if(_if_conditional250=result2_173<0,    _if_conditional250) {
        __result277__ = result2_173;
        return __result277__;
    }
    __result278__ = result_172;
    return __result278__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional251;
void* right_value150;
char* __result279__;
struct _IO_FILE* f_174;
_Bool _if_conditional252;
void* right_value151;
char* __result280__;
void* right_value152;
void* right_value153;
struct buffer* buf_175;
_Bool _while_condtional10;
int size_177;
_Bool _if_conditional253;
void* right_value154;
char* result_178;
int result2_179;
_Bool _if_conditional254;
void* right_value155;
char* __result281__;
char* __result282__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value150 = (void*)0;
memset(&f_174, 0, sizeof(struct _IO_FILE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&buf_175, 0, sizeof(struct buffer*));
memset(&size_177, 0, sizeof(int));
right_value154 = (void*)0;
memset(&result_178, 0, sizeof(char*));
memset(&result2_179, 0, sizeof(int));
right_value155 = (void*)0;
    if(_if_conditional251=file_name==((void*)0),    _if_conditional251) {
        __result279__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value150, right_value150 = (void*)0;
        __freed_obj__ = 0;
        return __result279__;
    }
    f_174=fopen(file_name,"r");
    if(_if_conditional252=f_174==((void*)0),    _if_conditional252) {
        __result280__ = __result_obj__ = ((char*)(right_value151=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value151, right_value151 = (void*)0;
        __freed_obj__ = 0;
        return __result280__;
    }
    buf_175=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value153=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value152=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2388, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value152, right_value152 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value153, right_value153 = (void*)0;
    __freed_obj__ = 0;
    while(_while_condtional10=1,    _while_condtional10) {
        char buf2_176[1024];
        memset(&buf2_176, 0, sizeof(char)        *(1024)        );
        size_177=fread(buf2_176,1,1024,f_174);
        buffer_append(buf_175,buf2_176,size_177);
        if(_if_conditional253=size_177<1024,        _if_conditional253) {
            break;
        }
    }
    result_178=(char*)come_increment_ref_count(((char*)(right_value154=buffer_to_string(buf_175))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value154, right_value154 = (void*)0;
    __freed_obj__ = 0;
    result2_179=fclose(f_174);
    if(_if_conditional254=result2_179<0,    _if_conditional254) {
        __result281__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        if(buf_175 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_175, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_178 && !__freed_obj__) { result_178 = come_decrement_ref_count(result_178, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155, right_value155 = (void*)0;
        __freed_obj__ = 0;
        return __result281__;
    }
    __result282__ = __result_obj__ = result_178;
    if(buf_175 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_175, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_178 && !__freed_obj__) { result_178 = come_decrement_ref_count(result_178, (void*)0, (void*)0, 0, 1, 0); }
    return __result282__;
    if(buf_175 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_175, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_178 && !__freed_obj__) { result_178 = come_decrement_ref_count(result_178, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
void* right_value156;
char* __result283__;
struct _IO_FILE* f_180;
_Bool _if_conditional256;
void* right_value157;
char* __result284__;
void* right_value158;
void* right_value159;
struct buffer* buf_181;
_Bool _while_condtional11;
int size_183;
_Bool _if_conditional257;
void* right_value160;
char* result_184;
int result2_185;
_Bool _if_conditional258;
void* right_value161;
char* __result285__;
char* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value156 = (void*)0;
memset(&f_180, 0, sizeof(struct _IO_FILE*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&buf_181, 0, sizeof(struct buffer*));
memset(&size_183, 0, sizeof(int));
right_value160 = (void*)0;
memset(&result_184, 0, sizeof(char*));
memset(&result2_185, 0, sizeof(int));
right_value161 = (void*)0;
    if(_if_conditional255=file_name==((void*)0),    _if_conditional255) {
        __result283__ = __result_obj__ = ((char*)(right_value156=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value156, right_value156 = (void*)0;
        __freed_obj__ = 0;
        return __result283__;
    }
    f_180=fopen(file_name,"r");
    if(_if_conditional256=f_180==((void*)0),    _if_conditional256) {
        __result284__ = __result_obj__ = ((char*)(right_value157=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value157, right_value157 = (void*)0;
        __freed_obj__ = 0;
        return __result284__;
    }
    buf_181=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2425, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value158, right_value158 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value159, right_value159 = (void*)0;
    __freed_obj__ = 0;
    while(_while_condtional11=1,    _while_condtional11) {
        char buf2_182[1024];
        memset(&buf2_182, 0, sizeof(char)        *(1024)        );
        size_183=fread(buf2_182,1,1024,f_180);
        buffer_append(buf_181,buf2_182,size_183);
        if(_if_conditional257=size_183<1024,        _if_conditional257) {
            break;
        }
    }
    result_184=(char*)come_increment_ref_count(((char*)(right_value160=buffer_to_string(buf_181))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160, right_value160 = (void*)0;
    __freed_obj__ = 0;
    result2_185=fclose(f_180);
    if(_if_conditional258=result2_185<0,    _if_conditional258) {
        __result285__ = __result_obj__ = ((char*)(right_value161=__builtin_string("")));
        if(buf_181 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_181, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_184 && !__freed_obj__) { result_184 = come_decrement_ref_count(result_184, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value161, right_value161 = (void*)0;
        __freed_obj__ = 0;
        return __result285__;
    }
    __result286__ = __result_obj__ = result_184;
    if(buf_181 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_181, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_184 && !__freed_obj__) { result_184 = come_decrement_ref_count(result_184, (void*)0, (void*)0, 0, 1, 0); }
    return __result286__;
    if(buf_181 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_181, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_184 && !__freed_obj__) { result_184 = come_decrement_ref_count(result_184, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
void* right_value163;
struct list$1charph* result_186;
_Bool _if_conditional259;
struct list$1charph* __result287__;
_Bool _while_condtional12;
_Bool _if_conditional260;
void* right_value164;
struct list$1charph* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&result_186, 0, sizeof(struct list$1charph*));
right_value164 = (void*)0;
    result_186=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value163=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2452, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162, right_value162 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value163, right_value163 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional259=f==((void*)0),    _if_conditional259) {
        __result287__ = __result_obj__ = result_186;
        if(result_186 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result287__;
    }
    while(_while_condtional12=1,    _while_condtional12) {
        char buf_187[1024];
        memset(&buf_187, 0, sizeof(char)        *(1024)        );
        if(_if_conditional260=fgets(buf_187,1024,f)==((void*)0),        _if_conditional260) {
            break;
        }
        list$1charph_push_back(result_186,(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(buf_187)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value164, right_value164 = (void*)0;
        __freed_obj__ = 0;
    }
    __result288__ = __result_obj__ = result_186;
    if(result_186 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result288__;
    if(result_186 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional261;
int __result289__;
struct _IO_FILE* f_188;
_Bool _if_conditional262;
_Bool _if_conditional263;
int __result290__;
int __result291__;
int __result292__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&f_188, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional261=path==((void*)0)||mode==((void*)0),    _if_conditional261) {
        __result289__ = -1;
        return __result289__;
    }
    f_188=fopen(path,mode);
    if(_if_conditional262=f_188,    _if_conditional262) {
        block(parent,f_188);
        if(_if_conditional263=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional263) {
            fclose(f_188);
            __result290__ = 0;
            return __result290__;
        }
        fclose(f_188);
        __result291__ = 0;
        return __result291__;
    }
    __result292__ = -1;
    return __result292__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional264;
void* right_value165;
char* __result293__;
void* right_value166;
char* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value165 = (void*)0;
right_value166 = (void*)0;
    if(_if_conditional264=self==((void*)0),    _if_conditional264) {
        __result293__ = __result_obj__ = ((char*)(right_value165=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value165, right_value165 = (void*)0;
        __freed_obj__ = 0;
        return __result293__;
    }
    puts(self);
    __result294__ = __result_obj__ = ((char*)(right_value166=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value166, right_value166 = (void*)0;
    __freed_obj__ = 0;
    return __result294__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional265;
void* right_value167;
char* __result295__;
void* right_value168;
char* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value167 = (void*)0;
right_value168 = (void*)0;
    if(_if_conditional265=self==((void*)0),    _if_conditional265) {
        __result295__ = __result_obj__ = ((char*)(right_value167=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value167, right_value167 = (void*)0;
        __freed_obj__ = 0;
        return __result295__;
    }
    printf("%s",self);
    __result296__ = __result_obj__ = ((char*)(right_value168=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value168, right_value168 = (void*)0;
    __freed_obj__ = 0;
    return __result296__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional266;
void* right_value169;
char* __result297__;
char* msg2_189;
va_list args_190;
void* right_value170;
char* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value169 = (void*)0;
memset(&msg2_189, 0, sizeof(char*));
memset(&args_190, 0, sizeof(va_list));
right_value170 = (void*)0;
    if(_if_conditional266=self==((void*)0),    _if_conditional266) {
        __result297__ = __result_obj__ = ((char*)(right_value169=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value169, right_value169 = (void*)0;
        __freed_obj__ = 0;
        return __result297__;
    }
    __builtin_va_start(args_190,self);
    vasprintf(&msg2_189,self,args_190);
    __builtin_va_end(args_190);
    printf("%s",msg2_189);
    free(msg2_189);
    __result298__ = __result_obj__ = ((char*)(right_value170=__builtin_string(self)));
    if((&args_190) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_190), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170, right_value170 = (void*)0;
    __freed_obj__ = 0;
    return __result298__;
    if((&args_190) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_190), (void*)0, (void*)0, 1, 0, 0, 0); }
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional267;
void* right_value171;
char* __result299__;
char* msg2_191;
va_list args_192;
void* right_value172;
char* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value171 = (void*)0;
memset(&msg2_191, 0, sizeof(char*));
memset(&args_192, 0, sizeof(va_list));
right_value172 = (void*)0;
    if(_if_conditional267=self==((void*)0),    _if_conditional267) {
        __result299__ = __result_obj__ = ((char*)(right_value171=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171, right_value171 = (void*)0;
        __freed_obj__ = 0;
        return __result299__;
    }
    __builtin_va_start(args_192,self);
    vasprintf(&msg2_191,self,args_192);
    __builtin_va_end(args_192);
    printf("%s",msg2_191);
    free(msg2_191);
    __result300__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self)));
    if((&args_192) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_192), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172, right_value172 = (void*)0;
    __freed_obj__ = 0;
    return __result300__;
    if((&args_192) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_192), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result301__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf(msg,self);
    __result301__ = self;
    return __result301__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional268;
void* right_value173;
char* __result302__;
void* right_value174;
char* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value173 = (void*)0;
right_value174 = (void*)0;
    if(_if_conditional268=self==((void*)0),    _if_conditional268) {
        __result302__ = __result_obj__ = ((char*)(right_value173=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value173, right_value173 = (void*)0;
        __freed_obj__ = 0;
        return __result302__;
    }
    puts(self);
    __result303__ = __result_obj__ = ((char*)(right_value174=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value174, right_value174 = (void*)0;
    __freed_obj__ = 0;
    return __result303__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_193;
_Bool _for_condtionalA17;
_Bool _if_conditional269;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_193, 0, sizeof(int));
    for(
    i_193=0 ,    0;    _for_condtionalA17=    i_193<self ,    _for_condtionalA17;    i_193++ ,    0    ){
        block(parent,i_193);
        if(_if_conditional269=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional269) {
            return;
        }
    }
}

