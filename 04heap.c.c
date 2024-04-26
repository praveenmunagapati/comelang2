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
int gRightValueNum=0;

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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

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
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

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










void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
char* __dec_obj12;
_Bool _if_conditional10;
void* right_value49;
char* __dec_obj13;
_Bool _if_conditional11;
void* right_value50;
char* __dec_obj14;
void* right_value51;
char* __dec_obj15;
_Bool _if_conditional12;
void* right_value52;
char* __dec_obj16;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
    # 8 "04heap.c"
    # 5 "04heap.c"
    if(gComeGC) {
        # 6 "04heap.c"
        return;
    }
    # 38 "04heap.c"
    # 17 "04heap.c"
    if(right_value->var) {
        # 30 "04heap.c"
        # 18 "04heap.c"
        if(right_value->var->mType->mDelegate) {
            # 19 "04heap.c"
            __dec_obj12=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            # 30 "04heap.c"
            # 21 "04heap.c"
            if(right_value->var->mType->mShare) {
                # 22 "04heap.c"
                __dec_obj13=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value49=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 30 "04heap.c"
                # 24 "04heap.c"
                if(right_value->var->mType->mClone) {
                    # 25 "04heap.c"
                    __dec_obj14=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value50=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 28 "04heap.c"
                    __dec_obj15=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value51=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    else {
        # 37 "04heap.c"
        # 32 "04heap.c"
        if(right_value->type->mDelegate) {
        }
        else {
            # 35 "04heap.c"
            __dec_obj16=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value52=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value88;
struct sType* result_35;
_Bool _if_conditional103;
struct sType* __result52__;
_Bool _if_conditional105;
struct sType* __result55__;
struct sClass* klass_36;
_Bool _if_conditional106;
void* right_value89;
struct sType* result_type_37;
void* right_value90;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj41;
struct list$1sTypeph* o2_saved_40;
struct sType* it_43;
void* right_value92;
struct sType* new_param_type_46;
void* right_value96;
_Bool _if_conditional113;
int generics_number_50;
_Bool _if_conditional114;
void* right_value97;
struct list$1sNodeph* array_num_51;
_Bool immutable__52;
int pointer_num_53;
_Bool heap_54;
_Bool guard__55;
_Bool no_heap_56;
_Bool no_calling_destructor_57;
_Bool null_value_58;
void* right_value98;
struct sType* __dec_obj45;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional123;
struct list$1sNodeph* __dec_obj46;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
int generics_number_62;
_Bool _if_conditional127;
struct sClass* klass2_63;
int generics_number2_64;
_Bool _if_conditional128;
void* right_value99;
struct list$1sNodeph* array_num_65;
_Bool immutable__66;
int pointer_num_67;
_Bool heap_68;
_Bool guard__69;
_Bool no_heap_70;
_Bool no_calling_destructor_71;
_Bool null_value_72;
void* right_value100;
struct sType* __dec_obj47;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct list$1sNodeph* __dec_obj48;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct list$1sTypeph* o2_saved_73;
struct sType* it_74;
void* right_value101;
struct sType* type_75;
void* right_value102;
struct list$1sTypeph* o2_saved_76;
struct sType* it_77;
void* right_value103;
struct sType* type_78;
void* right_value104;
_Bool _if_conditional137;
void* right_value105;
char* new_name_79;
struct sType* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_35, 0, sizeof(struct sType*));
memset(&klass_36, 0, sizeof(struct sClass*));
right_value89 = (void*)0;
memset(&result_type_37, 0, sizeof(struct sType*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&o2_saved_40, 0, sizeof(struct list$1sTypeph*));
memset(&it_43, 0, sizeof(struct sType*));
right_value92 = (void*)0;
memset(&new_param_type_46, 0, sizeof(struct sType*));
right_value96 = (void*)0;
memset(&generics_number_50, 0, sizeof(int));
right_value97 = (void*)0;
memset(&array_num_51, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__52, 0, sizeof(_Bool));
memset(&pointer_num_53, 0, sizeof(int));
memset(&heap_54, 0, sizeof(_Bool));
memset(&guard__55, 0, sizeof(_Bool));
memset(&no_heap_56, 0, sizeof(_Bool));
memset(&no_calling_destructor_57, 0, sizeof(_Bool));
memset(&null_value_58, 0, sizeof(_Bool));
right_value98 = (void*)0;
memset(&generics_number_62, 0, sizeof(int));
memset(&klass2_63, 0, sizeof(struct sClass*));
memset(&generics_number2_64, 0, sizeof(int));
right_value99 = (void*)0;
memset(&array_num_65, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__66, 0, sizeof(_Bool));
memset(&pointer_num_67, 0, sizeof(int));
memset(&heap_68, 0, sizeof(_Bool));
memset(&guard__69, 0, sizeof(_Bool));
memset(&no_heap_70, 0, sizeof(_Bool));
memset(&no_calling_destructor_71, 0, sizeof(_Bool));
memset(&null_value_72, 0, sizeof(_Bool));
right_value100 = (void*)0;
memset(&o2_saved_73, 0, sizeof(struct list$1sTypeph*));
memset(&it_74, 0, sizeof(struct sType*));
right_value101 = (void*)0;
memset(&type_75, 0, sizeof(struct sType*));
right_value102 = (void*)0;
memset(&o2_saved_76, 0, sizeof(struct list$1sTypeph*));
memset(&it_77, 0, sizeof(struct sType*));
right_value103 = (void*)0;
memset(&type_78, 0, sizeof(struct sType*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&new_name_79, 0, sizeof(char*));
    # 42 "04heap.c"
    result_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 46 "04heap.c"
    # 43 "04heap.c"
    if(_if_conditional103=generics_type==((void*)0),    _if_conditional103) {
        # 44 "04heap.c"
        __result52__ = __result_obj__ = result_35;
        come_call_finalizer2(sType_finalize,result_35, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result52__;
    }
    # 50 "04heap.c"
    # 46 "04heap.c"
    if(_if_conditional105=list$1sTypeph_length(generics_type->mGenericsTypes)==0,    _if_conditional105) {
        # 47 "04heap.c"
        __result55__ = __result_obj__ = result_35;
        come_call_finalizer2(sType_finalize,result_35, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result55__;
    }
    # 50 "04heap.c"
    klass_36=type->mClass;
    # 190 "04heap.c"
    # 52 "04heap.c"
    if(_if_conditional106=string_operator_equals(klass_36->mName,"lambda"),    _if_conditional106) {
        # 53 "04heap.c"
        result_type_37=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=solve_generics(type->mResultType->v1,generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 55 "04heap.c"
        __dec_obj41=result_35->mResultType;
        result_35->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_37)))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 57 "04heap.c"
        list$1sTypeph_reset(result_35->mParamTypes);
        # 64 "04heap.c"
        for(        o2_saved_40=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_43=list$1sTypeph_begin((o2_saved_40));        !list$1sTypeph_end((o2_saved_40));        it_43=list$1sTypeph_next((o2_saved_40))        ){
            # 60 "04heap.c"
            new_param_type_46=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=solve_generics(it_43,generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 62 "04heap.c"
            list$1sTypeph_push_back(result_35->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(new_param_type_46)))));
            come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,new_param_type_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 190 "04heap.c"
        # 65 "04heap.c"
        if(_if_conditional113=klass_36->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0,        _if_conditional113) {
            # 66 "04heap.c"
            generics_number_50=klass_36->mMethodGenericsNum;
            # 74 "04heap.c"
            # 68 "04heap.c"
            if(_if_conditional114=generics_number_50>=list$1sTypeph_length(info->method_generics_types),            _if_conditional114) {
                # 70 "04heap.c"
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_50,list$1sTypeph_length(info->method_generics_types));
                # 71 "04heap.c"
                exit(2);
            }
            # 74 "04heap.c"
            array_num_51=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=list$1sNodephp_clone(type->mArrayNum))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 75 "04heap.c"
            immutable__52=type->mImmutable;
            # 76 "04heap.c"
            pointer_num_53=type->mPointerNum;
            # 77 "04heap.c"
            heap_54=type->mHeap;
            # 78 "04heap.c"
            guard__55=type->mGuardValue;
            # 80 "04heap.c"
            no_heap_56=type->mNoHeap;
            # 81 "04heap.c"
            no_calling_destructor_57=type->mNoCallingDestructor;
            # 82 "04heap.c"
            null_value_58=type->mNullValue;
            # 84 "04heap.c"
            __dec_obj45=result_35;
            result_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_50), "04heap.c", 84, 0))))));
            come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 89 "04heap.c"
            # 86 "04heap.c"
            if(heap_54) {
                # 87 "04heap.c"
                result_35->mHeap=heap_54;
            }
            # 92 "04heap.c"
            # 89 "04heap.c"
            if(guard__55) {
                # 90 "04heap.c"
                result_35->mGuardValue=guard__55;
            }
            # 96 "04heap.c"
            # 92 "04heap.c"
            if(no_heap_56) {
                # 93 "04heap.c"
                result_35->mNoHeap=(_Bool)1;
                # 94 "04heap.c"
                result_35->mHeap=(_Bool)0;
            }
            # 99 "04heap.c"
            # 96 "04heap.c"
            if(no_calling_destructor_57) {
                # 97 "04heap.c"
                result_35->mNoCallingDestructor=(_Bool)1;
            }
            # 102 "04heap.c"
            # 99 "04heap.c"
            if(immutable__52) {
                # 100 "04heap.c"
                result_35->mImmutable=immutable__52;
            }
            # 106 "04heap.c"
            # 102 "04heap.c"
            if(_if_conditional123=list$1sNodeph_length(array_num_51)>0,            _if_conditional123) {
                # 103 "04heap.c"
                __dec_obj46=result_35->mArrayNum;
                result_35->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_51);
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 110 "04heap.c"
            # 106 "04heap.c"
            if(null_value_58) {
                # 107 "04heap.c"
                result_35->mNullValue=null_value_58;
            }
            # 113 "04heap.c"
            # 110 "04heap.c"
            if(_if_conditional125=pointer_num_53>0,            _if_conditional125) {
                # 111 "04heap.c"
                result_35->mPointerNum+=pointer_num_53;
            }
            come_call_finalizer2(list$1sNodephp_finalize,array_num_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 190 "04heap.c"
            # 114 "04heap.c"
            if(klass_36->mGenerics) {
                # 115 "04heap.c"
                generics_number_62=klass_36->mGenericsNum;
                # 123 "04heap.c"
                # 117 "04heap.c"
                if(_if_conditional127=generics_number_62>=list$1sTypeph_length(generics_type->mGenericsTypes),                _if_conditional127) {
                    # 119 "04heap.c"
                    err_msg(info,"invalid generics parametor number");
                    # 120 "04heap.c"
                    exit(2);
                }
                # 123 "04heap.c"
                klass2_63=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_62), "04heap.c", 123, 1))->mClass;
                # 125 "04heap.c"
                generics_number2_64=klass2_63->mGenericsNum;
                # 169 "04heap.c"
                # 127 "04heap.c"
                if(_if_conditional128=generics_number_62!=generics_number2_64,                _if_conditional128) {
                    # 129 "04heap.c"
                    array_num_65=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value99=list$1sNodephp_clone(type->mArrayNum))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 130 "04heap.c"
                    immutable__66=type->mImmutable;
                    # 131 "04heap.c"
                    pointer_num_67=type->mPointerNum;
                    # 132 "04heap.c"
                    heap_68=type->mHeap;
                    # 133 "04heap.c"
                    guard__69=type->mGuardValue;
                    # 135 "04heap.c"
                    no_heap_70=type->mNoHeap;
                    # 136 "04heap.c"
                    no_calling_destructor_71=type->mNoCallingDestructor;
                    # 137 "04heap.c"
                    null_value_72=type->mNullValue;
                    # 139 "04heap.c"
                    __dec_obj47=result_35;
                    result_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_62), "04heap.c", 139, 2))))));
                    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 144 "04heap.c"
                    # 141 "04heap.c"
                    if(heap_68) {
                        # 142 "04heap.c"
                        result_35->mHeap=heap_68;
                    }
                    # 147 "04heap.c"
                    # 144 "04heap.c"
                    if(guard__69) {
                        # 145 "04heap.c"
                        result_35->mGuardValue=guard__69;
                    }
                    # 151 "04heap.c"
                    # 147 "04heap.c"
                    if(no_heap_70) {
                        # 148 "04heap.c"
                        result_35->mNoHeap=(_Bool)1;
                        # 149 "04heap.c"
                        result_35->mHeap=(_Bool)0;
                    }
                    # 154 "04heap.c"
                    # 151 "04heap.c"
                    if(no_calling_destructor_71) {
                        # 152 "04heap.c"
                        result_35->mNoCallingDestructor=(_Bool)1;
                    }
                    # 157 "04heap.c"
                    # 154 "04heap.c"
                    if(immutable__66) {
                        # 155 "04heap.c"
                        result_35->mImmutable=immutable__66;
                    }
                    # 161 "04heap.c"
                    # 157 "04heap.c"
                    if(_if_conditional134=list$1sNodeph_length(array_num_65)>0,                    _if_conditional134) {
                        # 158 "04heap.c"
                        __dec_obj48=result_35->mArrayNum;
                        result_35->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_65);
                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    # 165 "04heap.c"
                    # 161 "04heap.c"
                    if(null_value_72) {
                        # 162 "04heap.c"
                        result_35->mNullValue=null_value_72;
                    }
                    # 168 "04heap.c"
                    # 165 "04heap.c"
                    if(_if_conditional136=pointer_num_67>0,                    _if_conditional136) {
                        # 166 "04heap.c"
                        result_35->mPointerNum+=pointer_num_67;
                    }
                    come_call_finalizer2(list$1sNodephp_finalize,array_num_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 171 "04heap.c"
                list$1sTypeph_reset(result_35->mGenericsTypes);
                # 176 "04heap.c"
                for(                o2_saved_73=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_74=list$1sTypeph_begin((o2_saved_73));                !list$1sTypeph_end((o2_saved_73));                it_74=list$1sTypeph_next((o2_saved_73))                ){
                    # 173 "04heap.c"
                    type_75=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=solve_generics(it_74,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 174 "04heap.c"
                    list$1sTypeph_push_back(result_35->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(type_75)))));
                    come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 176 "04heap.c"
                list$1sTypeph_reset(result_35->mMultipleTypes);
                # 182 "04heap.c"
                for(                o2_saved_76=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_77=list$1sTypeph_begin((o2_saved_76));                !list$1sTypeph_end((o2_saved_76));                it_77=list$1sTypeph_next((o2_saved_76))                ){
                    # 178 "04heap.c"
                    type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=solve_generics(it_77,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 179 "04heap.c"
                    list$1sTypeph_push_back(result_35->mMultipleTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(type_78)))));
                    come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 188 "04heap.c"
                # 182 "04heap.c"
                if(_if_conditional137=!output_generics_struct(result_35,generics_type,info),                _if_conditional137) {
                    # 184 "04heap.c"
                    new_name_79=(char*)come_increment_ref_count(((char*)(right_value105=create_generics_name(type,info))));
                    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 185 "04heap.c"
                    printf("output generics is failed(%s)",new_name_79);
                    # 186 "04heap.c"
                    exit(1);
                    new_name_79 = come_decrement_ref_count2(new_name_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    # 190 "04heap.c"
    __result70__ = __result_obj__ = result_35;
    come_call_finalizer2(sType_finalize,result_35, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result70__;
    come_call_finalizer2(sType_finalize,result_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional13;
struct sType* __result34__;
void* right_value53;
struct sType* result_11;
_Bool _if_conditional31;
_Bool _if_conditional32;
void* right_value60;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional36;
void* right_value63;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional40;
void* right_value64;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional41;
void* right_value65;
char* __dec_obj24;
_Bool _if_conditional42;
void* right_value66;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional43;
void* right_value74;
struct list$1sNodeph* __dec_obj29;
_Bool _if_conditional56;
_Bool _if_conditional57;
void* right_value75;
struct list$1sTypeph* __dec_obj30;
_Bool _if_conditional58;
void* right_value82;
struct list$1charph* __dec_obj34;
_Bool _if_conditional62;
void* right_value83;
struct tuple1$1sTypeph* __dec_obj35;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value84;
struct sNode* __dec_obj36;
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
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value85;
struct sNode* __dec_obj37;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value86;
char* __dec_obj38;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
void* right_value87;
char* __dec_obj39;
_Bool _if_conditional102;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&result_11, 0, sizeof(struct sType*));
right_value60 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional13=self==(void*)0,        _if_conditional13) {
            # 2 "sType_clone"
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        # 3 "sType_clone"
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional31=self!=((void*)0),        _if_conditional31) {
            # 4 "sType_clone"
            result_11->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional32=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional32) {
            # 5 "sType_clone"
            __dec_obj20=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional36=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional36) {
            # 6 "sType_clone"
            __dec_obj22=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value63=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional40=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional40) {
            # 7 "sType_clone"
            __dec_obj23=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value64=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional41=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional41) {
            # 8 "sType_clone"
            __dec_obj24=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(self->mGenericsName))));
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional42=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional42) {
            # 9 "sType_clone"
            __dec_obj25=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value66=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional43=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional43) {
            # 10 "sType_clone"
            __dec_obj29=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value74=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            # 11 "sType_clone"
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional57=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional57) {
            # 12 "sType_clone"
            __dec_obj30=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value75=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional58=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional58) {
            # 13 "sType_clone"
            __dec_obj34=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value82=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional62=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional62) {
            # 14 "sType_clone"
            __dec_obj35=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value83=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 15 "sType_clone"
            result_11->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional64=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional64) {
            # 16 "sType_clone"
            __dec_obj36=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(self->mAlignas))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            # 17 "sType_clone"
            result_11->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 18 "sType_clone"
            result_11->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            # 19 "sType_clone"
            result_11->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 20 "sType_clone"
            result_11->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 21 "sType_clone"
            result_11->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 22 "sType_clone"
            result_11->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 23 "sType_clone"
            result_11->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 24 "sType_clone"
            result_11->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 25 "sType_clone"
            result_11->mExtern=self->mExtern;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 26 "sType_clone"
            result_11->mRestrict=self->mRestrict;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 27 "sType_clone"
            result_11->mImmutable=self->mImmutable;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 28 "sType_clone"
            result_11->mHeap=self->mHeap;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 29 "sType_clone"
            result_11->mDummyHeap=self->mDummyHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 30 "sType_clone"
            result_11->mDelegate=self->mDelegate;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 31 "sType_clone"
            result_11->mShare=self->mShare;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 32 "sType_clone"
            result_11->mClone=self->mClone;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 33 "sType_clone"
            result_11->mNoHeap=self->mNoHeap;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 34 "sType_clone"
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 35 "sType_clone"
            result_11->mRefference=self->mRefference;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 36 "sType_clone"
            result_11->mException=self->mException;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 37 "sType_clone"
            result_11->mPointerNum=self->mPointerNum;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 38 "sType_clone"
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 39 "sType_clone"
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional88=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional88) {
            # 40 "sType_clone"
            __dec_obj37=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(self->mSizeNum))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 41 "sType_clone"
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 42 "sType_clone"
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional91=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional91) {
            # 43 "sType_clone"
            __dec_obj38=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value86=string_clone(self->mOriginalTypeName))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 44 "sType_clone"
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 45 "sType_clone"
            result_11->mFunctionParam=self->mFunctionParam;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 46 "sType_clone"
            result_11->mAllocaValue=self->mAllocaValue;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            # 47 "sType_clone"
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 48 "sType_clone"
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 49 "sType_clone"
            result_11->mComeMemCore=self->mComeMemCore;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            # 50 "sType_clone"
            result_11->mInline=self->mInline;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            # 51 "sType_clone"
            result_11->mNullValue=self->mNullValue;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 52 "sType_clone"
            result_11->mGuardValue=self->mGuardValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional101=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional101) {
            # 53 "sType_clone"
            __dec_obj39=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value87=string_clone(self->mAsmName))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
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
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional14=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional14) {
                # 0 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional16=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional16) {
                # 1 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional18=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional18) {
                # 2 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional19=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional19) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional20=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional20) {
                # 4 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional21=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional21) {
                # 5 "sType_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional23) {
                # 6 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional24) {
                # 7 "sType_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional26) {
                # 8 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional27=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional27) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional28=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional28) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional29=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional29) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional30) {
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
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional15) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional17=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional17) {
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
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
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
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional25) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional33;
struct list$1sTypeph* __result35__;
void* right_value54;
void* right_value55;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional4;
void* right_value59;
struct list$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
right_value55 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
right_value59 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional33=self==((void*)0),                _if_conditional33) {
                    # 140 "./comelang2.h"
                    __result35__ = __result_obj__ = ((void*)0);
                    return __result35__;
                }
                # 142 "./comelang2.h"
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value54=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_19=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    # 146 "./comelang2.h"
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional34;
void* right_value56;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj17;
_Bool _if_conditional35;
void* right_value57;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj18;
void* right_value58;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj19;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
right_value57 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
right_value58 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional34=self->len==0,                        _if_conditional34) {
                            # 156 "./comelang2.h"
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_20->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_20->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj17=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_20;
                            # 163 "./comelang2.h"
                            self->head=litem_20;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional35=self->len==1,                            _if_conditional35) {
                                # 166 "./comelang2.h"
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_21->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_21->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj18=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_21;
                                # 173 "./comelang2.h"
                                self->head->next=litem_21;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value58=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_22->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_22->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj19=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional37;
struct tuple1$1sTypeph* __result39__;
void* right_value61;
struct tuple1$1sTypeph* result_23;
_Bool _if_conditional39;
void* right_value62;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
memset(&result_23, 0, sizeof(struct tuple1$1sTypeph*));
right_value62 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional37=self==(void*)0,                _if_conditional37) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value61=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional39=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional39) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj21=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result40__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional38=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional38) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct list$1sNodeph* __result41__;
void* right_value67;
void* right_value68;
struct list$1sNodeph* result_24;
struct list_item$1sNodeph* it_25;
_Bool _while_condtional5;
void* right_value73;
struct list$1sNodeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
right_value68 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1sNodeph*));
memset(&it_25, 0, sizeof(struct list_item$1sNodeph*));
right_value73 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional44=self==((void*)0),                _if_conditional44) {
                    # 140 "./comelang2.h"
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                # 142 "./comelang2.h"
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value68=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value67=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_25=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    # 146 "./comelang2.h"
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value73=sNode_clone(it_25->item)))));
                    if(right_value73) { right_value73 = come_decrement_ref_count2(right_value73, ((struct sNode*)right_value73)->finalize, ((struct sNode*)right_value73)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
_Bool _if_conditional45;
void* right_value69;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj26;
_Bool _if_conditional46;
void* right_value70;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj27;
void* right_value71;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj28;
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
right_value70 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
right_value71 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional45=self->len==0,                        _if_conditional45) {
                            # 156 "./comelang2.h"
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value69=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_26->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_26->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj26=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                            # 162 "./comelang2.h"
                            self->tail=litem_26;
                            # 163 "./comelang2.h"
                            self->head=litem_26;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional46=self->len==1,                            _if_conditional46) {
                                # 166 "./comelang2.h"
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value70=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_27->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_27->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj27=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./comelang2.h"
                                self->tail=litem_27;
                                # 173 "./comelang2.h"
                                self->head->next=litem_27;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value71=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_28->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_28->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj28=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
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
_Bool _if_conditional47;
struct sNode* __result44__;
void* right_value72;
struct sNode* result_29;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct sNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&result_29, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional47=self==(void*)0,                        _if_conditional47) {
                            # 2 "sNode_clone"
                            __result44__ = __result_obj__ = (void*)0;
                            return __result44__;
                        }
                        # 3 "sNode_clone"
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional48=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional48) {
                            # 4 "sNode_clone"
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            # 5 "sNode_clone"
                            result_29->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            # 6 "sNode_clone"
                            result_29->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            # 7 "sNode_clone"
                            result_29->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional52=self!=((void*)0),                        _if_conditional52) {
                            # 8 "sNode_clone"
                            result_29->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional53=self!=((void*)0),                        _if_conditional53) {
                            # 9 "sNode_clone"
                            result_29->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional54=self!=((void*)0),                        _if_conditional54) {
                            # 10 "sNode_clone"
                            result_29->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
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
_Bool _if_conditional59;
struct list$1charph* __result47__;
void* right_value76;
void* right_value77;
struct list$1charph* result_30;
struct list_item$1charph* it_31;
_Bool _while_condtional6;
void* right_value81;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
right_value77 = (void*)0;
memset(&result_30, 0, sizeof(struct list$1charph*));
memset(&it_31, 0, sizeof(struct list_item$1charph*));
right_value81 = (void*)0;
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional59=self==((void*)0),                _if_conditional59) {
                    # 140 "./comelang2.h"
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                # 142 "./comelang2.h"
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value77=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_31=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    # 146 "./comelang2.h"
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value81=string_clone(it_31->item)))));
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional60;
void* right_value78;
struct list_item$1charph* litem_32;
char* __dec_obj31;
_Bool _if_conditional61;
void* right_value79;
struct list_item$1charph* litem_33;
char* __dec_obj32;
void* right_value80;
struct list_item$1charph* litem_34;
char* __dec_obj33;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
right_value79 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
right_value80 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional60=self->len==0,                        _if_conditional60) {
                            # 156 "./comelang2.h"
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value78=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_32->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_32->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj31=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_32;
                            # 163 "./comelang2.h"
                            self->head=litem_32;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional61=self->len==1,                            _if_conditional61) {
                                # 166 "./comelang2.h"
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value79=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_33->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_33->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj32=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_33;
                                # 173 "./comelang2.h"
                                self->head->next=litem_33;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value80=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_34->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_34->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj33=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
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
_Bool _if_conditional104;
int __result53__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional104=self==((void*)0),        _if_conditional104) {
            # 365 "./comelang2.h"
            __result53__ = 0;
            return __result53__;
        }
        # 367 "./comelang2.h"
        __result54__ = self->len;
        return __result54__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj40;
struct tuple1$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1736 "./comelang2.h"
            __dec_obj40=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 1738 "./comelang2.h"
            __result56__ = __result_obj__ = self;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result56__;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_38;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_39;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_38, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_39, 0, sizeof(struct list_item$1sTypeph*));
            # 433 "./comelang2.h"
            it_38=self->head;
            # 440 "./comelang2.h"
            while(_while_condtional7=it_38!=((void*)0),            _while_condtional7) {
                # 435 "./comelang2.h"
                prev_it_39=it_38;
                # 436 "./comelang2.h"
                it_38=it_38->next;
                # 437 "./comelang2.h"
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 440 "./comelang2.h"
            self->head=((void*)0);
            # 441 "./comelang2.h"
            self->tail=((void*)0);
            # 443 "./comelang2.h"
            self->len=0;
            # 445 "./comelang2.h"
            __result57__ = __result_obj__ = self;
            return __result57__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional107;
struct sType* result_41;
struct sType* __result58__;
_Bool _if_conditional108;
struct sType* __result59__;
struct sType* result_42;
struct sType* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_41, 0, sizeof(struct sType*));
memset(&result_42, 0, sizeof(struct sType*));
            # 290 "./comelang2.h"
            # 285 "./comelang2.h"
            if(_if_conditional107=self==((void*)0),            _if_conditional107) {
                # 286 "./comelang2.h"
                # 287 "./comelang2.h"
                memset(&result_41,0,sizeof(struct sType*));
                # 288 "./comelang2.h"
                __result58__ = __result_obj__ = result_41;
                return __result58__;
            }
            # 290 "./comelang2.h"
            self->it=self->head;
            # 296 "./comelang2.h"
            # 292 "./comelang2.h"
            if(self->it) {
                # 293 "./comelang2.h"
                __result59__ = __result_obj__ = self->it->item;
                return __result59__;
            }
            # 296 "./comelang2.h"
            # 297 "./comelang2.h"
            memset(&result_42,0,sizeof(struct sType*));
            # 298 "./comelang2.h"
            __result60__ = __result_obj__ = result_42;
            return __result60__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
            # 320 "./comelang2.h"
            __result61__ = self==((void*)0)||self->it==((void*)0);
            return __result61__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional109;
struct sType* result_44;
struct sType* __result62__;
_Bool _if_conditional110;
struct sType* __result63__;
struct sType* result_45;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct sType*));
memset(&result_45, 0, sizeof(struct sType*));
            # 308 "./comelang2.h"
            # 302 "./comelang2.h"
            if(_if_conditional109=self==((void*)0)||self->it==((void*)0),            _if_conditional109) {
                # 303 "./comelang2.h"
                # 304 "./comelang2.h"
                memset(&result_44,0,sizeof(struct sType*));
                # 305 "./comelang2.h"
                __result62__ = __result_obj__ = result_44;
                return __result62__;
            }
            # 308 "./comelang2.h"
            self->it=self->it->next;
            # 314 "./comelang2.h"
            # 310 "./comelang2.h"
            if(self->it) {
                # 311 "./comelang2.h"
                __result63__ = __result_obj__ = self->it->item;
                return __result63__;
            }
            # 314 "./comelang2.h"
            # 315 "./comelang2.h"
            memset(&result_45,0,sizeof(struct sType*));
            # 316 "./comelang2.h"
            __result64__ = __result_obj__ = result_45;
            return __result64__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional111;
void* right_value93;
struct list_item$1sTypeph* litem_47;
struct sType* __dec_obj42;
_Bool _if_conditional112;
void* right_value94;
struct list_item$1sTypeph* litem_48;
struct sType* __dec_obj43;
void* right_value95;
struct list_item$1sTypeph* litem_49;
struct sType* __dec_obj44;
struct list$1sTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sTypeph*));
right_value94 = (void*)0;
memset(&litem_48, 0, sizeof(struct list_item$1sTypeph*));
right_value95 = (void*)0;
memset(&litem_49, 0, sizeof(struct list_item$1sTypeph*));
                # 256 "./comelang2.h"
                # 225 "./comelang2.h"
                if(_if_conditional111=self->len==0,                _if_conditional111) {
                    # 226 "./comelang2.h"
                    litem_47=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value93=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 228 "./comelang2.h"
                    litem_47->prev=((void*)0);
                    # 229 "./comelang2.h"
                    litem_47->next=((void*)0);
                    # 230 "./comelang2.h"
                    __dec_obj42=litem_47->item;
                    litem_47->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 232 "./comelang2.h"
                    self->tail=litem_47;
                    # 233 "./comelang2.h"
                    self->head=litem_47;
                }
                else {
                    # 256 "./comelang2.h"
                    # 235 "./comelang2.h"
                    if(_if_conditional112=self->len==1,                    _if_conditional112) {
                        # 236 "./comelang2.h"
                        litem_48=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 238 "./comelang2.h"
                        litem_48->prev=self->head;
                        # 239 "./comelang2.h"
                        litem_48->next=((void*)0);
                        # 240 "./comelang2.h"
                        __dec_obj43=litem_48->item;
                        litem_48->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 242 "./comelang2.h"
                        self->tail=litem_48;
                        # 243 "./comelang2.h"
                        self->head->next=litem_48;
                    }
                    else {
                        # 246 "./comelang2.h"
                        litem_49=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value95=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 248 "./comelang2.h"
                        litem_49->prev=self->tail;
                        # 249 "./comelang2.h"
                        litem_49->next=((void*)0);
                        # 250 "./comelang2.h"
                        __dec_obj44=litem_49->item;
                        litem_49->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 252 "./comelang2.h"
                        self->tail->next=litem_49;
                        # 253 "./comelang2.h"
                        self->tail=litem_49;
                    }
                }
                # 256 "./comelang2.h"
                self->len++;
                # 258 "./comelang2.h"
                __result65__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result65__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional115;
struct list_item$1sTypeph* it_59;
int i_60;
_Bool _while_condtional8;
_Bool _if_conditional116;
struct sType* __result66__;
struct sType* default_value_61;
struct sType* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_60, 0, sizeof(int));
memset(&default_value_61, 0, sizeof(struct sType*));
                # 686 "./comelang2.h"
                # 682 "./comelang2.h"
                if(_if_conditional115=position<0,                _if_conditional115) {
                    # 683 "./comelang2.h"
                    position+=self->len;
                }
                # 686 "./comelang2.h"
                it_59=self->head;
                # 687 "./comelang2.h"
                i_60=0;
                # 694 "./comelang2.h"
                while(_while_condtional8=it_59!=((void*)0),                _while_condtional8) {
                    # 692 "./comelang2.h"
                    # 689 "./comelang2.h"
                    if(_if_conditional116=position==i_60,                    _if_conditional116) {
                        # 690 "./comelang2.h"
                        __result66__ = __result_obj__ = it_59->item;
                        return __result66__;
                    }
                    # 692 "./comelang2.h"
                    it_59=it_59->next;
                    # 693 "./comelang2.h"
                    i_60++;
                }
                # 696 "./comelang2.h"
                # 697 "./comelang2.h"
                memset(&default_value_61,0,sizeof(struct sType*));
                # 698 "./comelang2.h"
                __result67__ = __result_obj__ = default_value_61;
                come_call_finalizer2(sType_finalize,default_value_61, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer2(sType_finalize,default_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional122;
int __result68__;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                # 367 "./comelang2.h"
                # 364 "./comelang2.h"
                if(_if_conditional122=self==((void*)0),                _if_conditional122) {
                    # 365 "./comelang2.h"
                    __result68__ = 0;
                    return __result68__;
                }
                # 367 "./comelang2.h"
                __result69__ = self->len;
                return __result69__;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value106;
struct sType* result_80;
_Bool _if_conditional138;
void* right_value107;
struct sType* __dec_obj49;
struct sType* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_80, 0, sizeof(struct sType*));
right_value107 = (void*)0;
    # 195 "04heap.c"
    result_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 201 "04heap.c"
    # 197 "04heap.c"
    if(generics_type) {
        # 198 "04heap.c"
        __dec_obj49=result_80;
        result_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=solve_generics(result_80,generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    # 201 "04heap.c"
    __result71__ = __result_obj__ = result_80;
    come_call_finalizer2(sType_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result71__;
    come_call_finalizer2(sType_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
char* p_81;
_Bool _if_conditional139;
_Bool _while_condtional9;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
int n_82;
_Bool _while_condtional10;
int __result72__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_81, 0, sizeof(char*));
memset(&n_82, 0, sizeof(int));
    # 208 "04heap.c"
    p_81=obj;
    # 231 "04heap.c"
    # 209 "04heap.c"
    if(_if_conditional139=*p_81==40,    _if_conditional139) {
        # 210 "04heap.c"
        p_81++;
        # 214 "04heap.c"
        while(_while_condtional9=*p_81!=41,        _while_condtional9) {
            # 212 "04heap.c"
            p_81++;
        }
        # 214 "04heap.c"
        p_81++;
        # 229 "04heap.c"
        # 215 "04heap.c"
        if(_if_conditional140=*p_81==40,        _if_conditional140) {
            # 216 "04heap.c"
            p_81++;
            # 228 "04heap.c"
            # 217 "04heap.c"
            if(_if_conditional141=strcmp(p_81,"right_value")==0,            _if_conditional141) {
                # 218 "04heap.c"
                p_81+=strlen("right_value");
                # 227 "04heap.c"
                # 219 "04heap.c"
                if(_if_conditional142=xisdigit(*p_81),                _if_conditional142) {
                    # 220 "04heap.c"
                    n_82=0;
                    # 225 "04heap.c"
                    while(_while_condtional10=xisdigit(*p_81),                    _while_condtional10) {
                        # 222 "04heap.c"
                        n_82=n_82*10+*p_81-48;
                        # 223 "04heap.c"
                        p_81++;
                    }
                    # 225 "04heap.c"
                    __result72__ = n_82;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result72__;
                }
            }
        }
    }
    # 231 "04heap.c"
    __result73__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result73__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional143;
void* right_value108;
char* __result74__;
_Bool _if_conditional144;
void* right_value109;
char* __result75__;
void* right_value110;
struct sRightValueObject* new_value_83;
struct sType* __dec_obj50;
void* right_value111;
char* __dec_obj51;
void* right_value112;
char* __dec_obj52;
void* right_value116;
char* buf_87;
void* right_value117;
void* right_value118;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&new_value_83, 0, sizeof(struct sRightValueObject*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value116 = (void*)0;
memset(&buf_87, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
    # 239 "04heap.c"
    # 236 "04heap.c"
    if(gComeGC) {
        # 237 "04heap.c"
        __result74__ = __result_obj__ = ((char*)(right_value108=__builtin_string(obj)));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result74__;
    }
    # 242 "04heap.c"
    # 239 "04heap.c"
    if(info->no_output_come_code) {
        # 240 "04heap.c"
        __result75__ = __result_obj__ = ((char*)(right_value109=__builtin_string("")));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result75__;
    }
    # 242 "04heap.c"
    new_value_83=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value110=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 242, "sRightValueObject"))));
    come_call_finalizer2(sRightValueObject_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 243 "04heap.c"
    __dec_obj50=new_value_83->mType;
    new_value_83->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 244 "04heap.c"
    new_value_83->mFreed=(_Bool)0;
    # 245 "04heap.c"
    new_value_83->mID=gRightValueNum;
    # 246 "04heap.c"
    __dec_obj51=new_value_83->mVarName;
    new_value_83->mVarName=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 247 "04heap.c"
    __dec_obj52=new_value_83->mFunName;
    new_value_83->mFunName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(info->come_fun->mName))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 248 "04heap.c"
    new_value_83->mBlockLevel=info->block_level;
    # 250 "04heap.c"
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_83));
    # 252 "04heap.c"
    buf_87=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 253 "04heap.c"
    add_come_code_at_function_head(info,buf_87);
    # 254 "04heap.c"
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    # 256 "04heap.c"
    __result77__ = __result_obj__ = ((char*)(right_value118=xsprintf("((%s)(%s=%s))",((char*)(right_value117=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_83->mVarName,obj)));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_87 = come_decrement_ref_count2(buf_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_87 = come_decrement_ref_count2(buf_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sRightValueObject_finalize"
        # 0 "sRightValueObject_finalize"
        if(_if_conditional145=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional145) {
            # 0 "sRightValueObject_finalize"
            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        # 2 "sRightValueObject_finalize"
        # 1 "sRightValueObject_finalize"
        if(_if_conditional146=self!=((void*)0)&&self->mVarName!=((void*)0),        _if_conditional146) {
            # 1 "sRightValueObject_finalize"
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 3 "sRightValueObject_finalize"
        # 2 "sRightValueObject_finalize"
        if(_if_conditional147=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional147) {
            # 2 "sRightValueObject_finalize"
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool _if_conditional148;
void* right_value113;
struct list_item$1sRightValueObjectph* litem_84;
struct sRightValueObject* __dec_obj53;
_Bool _if_conditional150;
void* right_value114;
struct list_item$1sRightValueObjectph* litem_85;
struct sRightValueObject* __dec_obj54;
void* right_value115;
struct list_item$1sRightValueObjectph* litem_86;
struct sRightValueObject* __dec_obj55;
struct list$1sRightValueObjectph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value114 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value115 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 256 "./comelang2.h"
        # 225 "./comelang2.h"
        if(_if_conditional148=self->len==0,        _if_conditional148) {
            # 226 "./comelang2.h"
            litem_84=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value113=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 226, "list_item$1sRightValueObjectph"))));
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 228 "./comelang2.h"
            litem_84->prev=((void*)0);
            # 229 "./comelang2.h"
            litem_84->next=((void*)0);
            # 230 "./comelang2.h"
            __dec_obj53=litem_84->item;
            litem_84->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer2(sRightValueObject_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            # 232 "./comelang2.h"
            self->tail=litem_84;
            # 233 "./comelang2.h"
            self->head=litem_84;
        }
        else {
            # 256 "./comelang2.h"
            # 235 "./comelang2.h"
            if(_if_conditional150=self->len==1,            _if_conditional150) {
                # 236 "./comelang2.h"
                litem_85=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value114=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 236, "list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 238 "./comelang2.h"
                litem_85->prev=self->head;
                # 239 "./comelang2.h"
                litem_85->next=((void*)0);
                # 240 "./comelang2.h"
                __dec_obj54=litem_85->item;
                litem_85->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 242 "./comelang2.h"
                self->tail=litem_85;
                # 243 "./comelang2.h"
                self->head->next=litem_85;
            }
            else {
                # 246 "./comelang2.h"
                litem_86=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value115=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 246, "list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 248 "./comelang2.h"
                litem_86->prev=self->tail;
                # 249 "./comelang2.h"
                litem_86->next=((void*)0);
                # 250 "./comelang2.h"
                __dec_obj55=litem_86->item;
                litem_86->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 252 "./comelang2.h"
                self->tail->next=litem_86;
                # 253 "./comelang2.h"
                self->tail=litem_86;
            }
        }
        # 256 "./comelang2.h"
        self->len++;
        # 258 "./comelang2.h"
        __result76__ = __result_obj__ = self;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result76__;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1sRightValueObjectphp_finalize"
                # 0 "list_item$1sRightValueObjectphp_finalize"
                if(_if_conditional149=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional149) {
                    # 0 "list_item$1sRightValueObjectphp_finalize"
                    come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional151;
int i_88;
struct list$1sRightValueObjectph* o2_saved_89;
struct sRightValueObject* it_92;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_88, 0, sizeof(int));
memset(&o2_saved_89, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_92, 0, sizeof(struct sRightValueObject*));
    # 264 "04heap.c"
    # 261 "04heap.c"
    if(gComeGC) {
        # 262 "04heap.c"
        return;
    }
    # 264 "04heap.c"
    i_88=0;
    # 272 "04heap.c"
    for(    o2_saved_89=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_92=list$1sRightValueObjectph_begin((o2_saved_89));    !list$1sRightValueObjectph_end((o2_saved_89));    it_92=list$1sRightValueObjectph_next((o2_saved_89))    ){
        # 269 "04heap.c"
        # 266 "04heap.c"
        if(_if_conditional156=it_92->mID==right_value_num,        _if_conditional156) {
            # 267 "04heap.c"
            break;
        }
        # 269 "04heap.c"
        i_88++;
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 272 "04heap.c"
    list$1sRightValueObjectph_delete(info->right_value_objects,i_88,i_88+1);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional152;
struct sRightValueObject* result_90;
struct sRightValueObject* __result78__;
_Bool _if_conditional153;
struct sRightValueObject* __result79__;
struct sRightValueObject* result_91;
struct sRightValueObject* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_90, 0, sizeof(struct sRightValueObject*));
memset(&result_91, 0, sizeof(struct sRightValueObject*));
        # 290 "./comelang2.h"
        # 285 "./comelang2.h"
        if(_if_conditional152=self==((void*)0),        _if_conditional152) {
            # 286 "./comelang2.h"
            # 287 "./comelang2.h"
            memset(&result_90,0,sizeof(struct sRightValueObject*));
            # 288 "./comelang2.h"
            __result78__ = __result_obj__ = result_90;
            return __result78__;
        }
        # 290 "./comelang2.h"
        self->it=self->head;
        # 296 "./comelang2.h"
        # 292 "./comelang2.h"
        if(self->it) {
            # 293 "./comelang2.h"
            __result79__ = __result_obj__ = self->it->item;
            return __result79__;
        }
        # 296 "./comelang2.h"
        # 297 "./comelang2.h"
        memset(&result_91,0,sizeof(struct sRightValueObject*));
        # 298 "./comelang2.h"
        __result80__ = __result_obj__ = result_91;
        return __result80__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
        # 320 "./comelang2.h"
        __result81__ = self==((void*)0)||self->it==((void*)0);
        return __result81__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional154;
struct sRightValueObject* result_93;
struct sRightValueObject* __result82__;
_Bool _if_conditional155;
struct sRightValueObject* __result83__;
struct sRightValueObject* result_94;
struct sRightValueObject* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct sRightValueObject*));
memset(&result_94, 0, sizeof(struct sRightValueObject*));
        # 308 "./comelang2.h"
        # 302 "./comelang2.h"
        if(_if_conditional154=self==((void*)0)||self->it==((void*)0),        _if_conditional154) {
            # 303 "./comelang2.h"
            # 304 "./comelang2.h"
            memset(&result_93,0,sizeof(struct sRightValueObject*));
            # 305 "./comelang2.h"
            __result82__ = __result_obj__ = result_93;
            return __result82__;
        }
        # 308 "./comelang2.h"
        self->it=self->it->next;
        # 314 "./comelang2.h"
        # 310 "./comelang2.h"
        if(self->it) {
            # 311 "./comelang2.h"
            __result83__ = __result_obj__ = self->it->item;
            return __result83__;
        }
        # 314 "./comelang2.h"
        # 315 "./comelang2.h"
        memset(&result_94,0,sizeof(struct sRightValueObject*));
        # 316 "./comelang2.h"
        __result84__ = __result_obj__ = result_94;
        return __result84__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_95;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_96;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_95, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_96, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 123 "./comelang2.h"
        it_95=self->head;
        # 129 "./comelang2.h"
        while(_while_condtional11=it_95!=((void*)0),        _while_condtional11) {
            # 125 "./comelang2.h"
            prev_it_96=it_95;
            # 126 "./comelang2.h"
            it_95=it_95->next;
            # 127 "./comelang2.h"
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
int tmp_97;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list$1sRightValueObjectph* __result85__;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list_item$1sRightValueObjectph* it_100;
int i_101;
_Bool _while_condtional13;
_Bool _if_conditional165;
struct list_item$1sRightValueObjectph* prev_it_102;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct list_item$1sRightValueObjectph* it_103;
int i_104;
_Bool _while_condtional14;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct list_item$1sRightValueObjectph* prev_it_105;
struct list_item$1sRightValueObjectph* it_106;
struct list_item$1sRightValueObjectph* head_prev_it_107;
struct list_item$1sRightValueObjectph* tail_it_108;
int i_109;
_Bool _while_condtional15;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct list_item$1sRightValueObjectph* prev_it_110;
_Bool _if_conditional173;
_Bool _if_conditional174;
struct list$1sRightValueObjectph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_97, 0, sizeof(int));
memset(&it_100, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_101, 0, sizeof(int));
memset(&prev_it_102, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_103, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_104, 0, sizeof(int));
memset(&prev_it_105, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_106, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_107, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_108, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_109, 0, sizeof(int));
memset(&prev_it_110, 0, sizeof(struct list_item$1sRightValueObjectph*));
        # 467 "./comelang2.h"
        # 464 "./comelang2.h"
        if(_if_conditional157=head<0,        _if_conditional157) {
            # 465 "./comelang2.h"
            head+=self->len;
        }
        # 471 "./comelang2.h"
        # 467 "./comelang2.h"
        if(_if_conditional158=tail<0,        _if_conditional158) {
            # 468 "./comelang2.h"
            tail+=self->len+1;
        }
        # 477 "./comelang2.h"
        # 471 "./comelang2.h"
        if(_if_conditional159=head>tail,        _if_conditional159) {
            # 472 "./comelang2.h"
            tmp_97=tail;
            # 473 "./comelang2.h"
            tail=head;
            # 474 "./comelang2.h"
            head=tmp_97;
        }
        # 481 "./comelang2.h"
        # 477 "./comelang2.h"
        if(_if_conditional160=head<0,        _if_conditional160) {
            # 478 "./comelang2.h"
            head=0;
        }
        # 485 "./comelang2.h"
        # 481 "./comelang2.h"
        if(_if_conditional161=tail>self->len,        _if_conditional161) {
            # 482 "./comelang2.h"
            tail=self->len;
        }
        # 489 "./comelang2.h"
        # 485 "./comelang2.h"
        if(_if_conditional162=head==tail,        _if_conditional162) {
            # 486 "./comelang2.h"
            __result85__ = __result_obj__ = self;
            return __result85__;
        }
        # 584 "./comelang2.h"
        # 489 "./comelang2.h"
        if(_if_conditional163=head==0&&tail==self->len,        _if_conditional163) {
            # 491 "./comelang2.h"
            list$1sRightValueObjectph_reset(self);
        }
        else {
            # 584 "./comelang2.h"
            # 493 "./comelang2.h"
            if(_if_conditional164=head==0,            _if_conditional164) {
                # 494 "./comelang2.h"
                it_100=self->head;
                # 495 "./comelang2.h"
                i_101=0;
                # 517 "./comelang2.h"
                while(_while_condtional13=it_100!=((void*)0),                _while_condtional13) {
                    # 516 "./comelang2.h"
                    # 497 "./comelang2.h"
                    if(_if_conditional165=i_101<tail,                    _if_conditional165) {
                        # 498 "./comelang2.h"
                        prev_it_102=it_100;
                        # 500 "./comelang2.h"
                        it_100=it_100->next;
                        # 501 "./comelang2.h"
                        i_101++;
                        # 503 "./comelang2.h"
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        # 505 "./comelang2.h"
                        self->len--;
                    }
                    else {
                        # 516 "./comelang2.h"
                        # 507 "./comelang2.h"
                        if(_if_conditional166=i_101==tail,                        _if_conditional166) {
                            # 508 "./comelang2.h"
                            self->head=it_100;
                            # 509 "./comelang2.h"
                            self->head->prev=((void*)0);
                            # 510 "./comelang2.h"
                            break;
                        }
                        else {
                            # 513 "./comelang2.h"
                            it_100=it_100->next;
                            # 514 "./comelang2.h"
                            i_101++;
                        }
                    }
                }
            }
            else {
                # 584 "./comelang2.h"
                # 518 "./comelang2.h"
                if(_if_conditional167=tail==self->len,                _if_conditional167) {
                    # 519 "./comelang2.h"
                    it_103=self->head;
                    # 520 "./comelang2.h"
                    i_104=0;
                    # 542 "./comelang2.h"
                    while(_while_condtional14=it_103!=((void*)0),                    _while_condtional14) {
                        # 527 "./comelang2.h"
                        # 522 "./comelang2.h"
                        if(_if_conditional168=i_104==head,                        _if_conditional168) {
                            # 523 "./comelang2.h"
                            self->tail=it_103->prev;
                            # 524 "./comelang2.h"
                            self->tail->next=((void*)0);
                        }
                        # 541 "./comelang2.h"
                        # 527 "./comelang2.h"
                        if(_if_conditional169=i_104>=head,                        _if_conditional169) {
                            # 528 "./comelang2.h"
                            prev_it_105=it_103;
                            # 530 "./comelang2.h"
                            it_103=it_103->next;
                            # 531 "./comelang2.h"
                            i_104++;
                            # 533 "./comelang2.h"
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 535 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 538 "./comelang2.h"
                            it_103=it_103->next;
                            # 539 "./comelang2.h"
                            i_104++;
                        }
                    }
                }
                else {
                    # 544 "./comelang2.h"
                    it_106=self->head;
                    # 546 "./comelang2.h"
                    head_prev_it_107=((void*)0);
                    # 547 "./comelang2.h"
                    tail_it_108=((void*)0);
                    # 550 "./comelang2.h"
                    i_109=0;
                    # 576 "./comelang2.h"
                    while(_while_condtional15=it_106!=((void*)0),                    _while_condtional15) {
                        # 555 "./comelang2.h"
                        # 552 "./comelang2.h"
                        if(_if_conditional170=i_109==head,                        _if_conditional170) {
                            # 553 "./comelang2.h"
                            head_prev_it_107=it_106->prev;
                        }
                        # 559 "./comelang2.h"
                        # 555 "./comelang2.h"
                        if(_if_conditional171=i_109==tail,                        _if_conditional171) {
                            # 556 "./comelang2.h"
                            tail_it_108=it_106;
                        }
                        # 574 "./comelang2.h"
                        # 559 "./comelang2.h"
                        if(_if_conditional172=i_109>=head&&i_109<tail,                        _if_conditional172) {
                            # 561 "./comelang2.h"
                            prev_it_110=it_106;
                            # 563 "./comelang2.h"
                            it_106=it_106->next;
                            # 564 "./comelang2.h"
                            i_109++;
                            # 566 "./comelang2.h"
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 568 "./comelang2.h"
                            self->len--;
                        }
                        else {
                            # 571 "./comelang2.h"
                            it_106=it_106->next;
                            # 572 "./comelang2.h"
                            i_109++;
                        }
                    }
                    # 579 "./comelang2.h"
                    # 576 "./comelang2.h"
                    if(_if_conditional173=head_prev_it_107!=((void*)0),                    _if_conditional173) {
                        # 577 "./comelang2.h"
                        head_prev_it_107->next=tail_it_108;
                    }
                    # 582 "./comelang2.h"
                    # 579 "./comelang2.h"
                    if(_if_conditional174=tail_it_108!=((void*)0),                    _if_conditional174) {
                        # 580 "./comelang2.h"
                        tail_it_108->prev=head_prev_it_107;
                    }
                }
            }
        }
        # 584 "./comelang2.h"
        __result87__ = __result_obj__ = self;
        return __result87__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_98;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_99;
struct list$1sRightValueObjectph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_98, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_99, 0, sizeof(struct list_item$1sRightValueObjectph*));
                # 433 "./comelang2.h"
                it_98=self->head;
                # 440 "./comelang2.h"
                while(_while_condtional12=it_98!=((void*)0),                _while_condtional12) {
                    # 435 "./comelang2.h"
                    prev_it_99=it_98;
                    # 436 "./comelang2.h"
                    it_98=it_98->next;
                    # 437 "./comelang2.h"
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                # 440 "./comelang2.h"
                self->head=((void*)0);
                # 441 "./comelang2.h"
                self->tail=((void*)0);
                # 443 "./comelang2.h"
                self->len=0;
                # 445 "./comelang2.h"
                __result86__ = __result_obj__ = self;
                return __result86__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value119;
char* __result88__;
struct sClass* klass_111;
void* right_value120;
char* type_name_112;
void* right_value121;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&klass_111, 0, sizeof(struct sClass*));
right_value120 = (void*)0;
memset(&type_name_112, 0, sizeof(char*));
right_value121 = (void*)0;
    # 280 "04heap.c"
    # 277 "04heap.c"
    if(gComeGC) {
        # 278 "04heap.c"
        __result88__ = __result_obj__ = ((char*)(right_value119=__builtin_string(obj)));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result88__;
    }
    # 280 "04heap.c"
    klass_111=type->mClass;
    # 282 "04heap.c"
    type_name_112=(char*)come_increment_ref_count(((char*)(right_value120=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 284 "04heap.c"
    __result89__ = __result_obj__ = ((char*)(right_value121=xsprintf("(%s)come_increment_ref_count(%s)",type_name_112,obj)));
    type_name_112 = come_decrement_ref_count2(type_name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
    type_name_112 = come_decrement_ref_count2(type_name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional176;
struct list$1CVALUEph* stack_saved_113;
struct list$1sRightValueObjectph* right_value_objects_114;
struct sClass* klass_115;
static int dec_num_116=0;
void* right_value122;
char* name_117;
void* right_value123;
_Bool no_decrement_118;
_Bool no_free_119;
_Bool _if_conditional177;
void* right_value124;
char* c_value_120;
struct sClass* klass_121;
char* class_name_122;
char* fun_name_123;
void* right_value125;
struct sType* type2_124;
void* right_value126;
char* fun_name2_125;
struct sFun* finalizer_126;
_Bool _if_conditional178;
_Bool _if_conditional198;
void* right_value127;
char* none_generics_name_130;
void* right_value128;
char* generics_fun_name_131;
struct sGenericsFun* generics_fun_135;
_Bool _if_conditional213;
_Bool _if_conditional214;
int i_136;
void* right_value129;
char* new_fun_name_137;
_Bool _if_conditional215;
void* right_value130;
char* __dec_obj56;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value131;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_138;
char* new_fun_name_139;
char* __dec_obj57;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value132;
char* type_name_140;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value133;
_Bool _if_conditional223;
void* right_value134;
char* type_name_141;
void* right_value135;
void* right_value136;
struct list$1sRightValueObjectph* __dec_obj58;
struct list$1CVALUEph* __dec_obj59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_113, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_114, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_115, 0, sizeof(struct sClass*));
right_value122 = (void*)0;
memset(&name_117, 0, sizeof(char*));
right_value123 = (void*)0;
memset(&no_decrement_118, 0, sizeof(_Bool));
memset(&no_free_119, 0, sizeof(_Bool));
right_value124 = (void*)0;
memset(&c_value_120, 0, sizeof(char*));
memset(&klass_121, 0, sizeof(struct sClass*));
memset(&class_name_122, 0, sizeof(char*));
memset(&fun_name_123, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&type2_124, 0, sizeof(struct sType*));
right_value126 = (void*)0;
memset(&fun_name2_125, 0, sizeof(char*));
memset(&finalizer_126, 0, sizeof(struct sFun*));
right_value127 = (void*)0;
memset(&none_generics_name_130, 0, sizeof(char*));
right_value128 = (void*)0;
memset(&generics_fun_name_131, 0, sizeof(char*));
memset(&generics_fun_135, 0, sizeof(struct sGenericsFun*));
memset(&i_136, 0, sizeof(int));
right_value129 = (void*)0;
memset(&new_fun_name_137, 0, sizeof(char*));
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&fun_138, 0, sizeof(struct sFun*));
memset(&new_fun_name_139, 0, sizeof(char*));
memset(&fun_138, 0, sizeof(struct sFun*));
memset(&new_fun_name_139, 0, sizeof(char*));
right_value132 = (void*)0;
memset(&type_name_140, 0, sizeof(char*));
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&type_name_141, 0, sizeof(char*));
right_value135 = (void*)0;
right_value136 = (void*)0;
    # 292 "04heap.c"
    # 289 "04heap.c"
    if(gComeGC) {
        # 290 "04heap.c"
        return;
    }
    # 292 "04heap.c"
    stack_saved_113=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 293 "04heap.c"
    right_value_objects_114=info->right_value_objects;
    # 295 "04heap.c"
    klass_115=type->mClass;
    # 297 "04heap.c"
    # 299 "04heap.c"
    name_117=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("__dec_obj%d",++dec_num_116))));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 300 "04heap.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value123=make_define_var(type,name_117,(_Bool)0,info))));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 302 "04heap.c"
    add_come_code(info,"%s=%s;\n",name_117,obj);
    # 304 "04heap.c"
    obj=name_117;
    # 305 "04heap.c"
    no_decrement_118=(_Bool)0;
    # 306 "04heap.c"
    no_free_119=(_Bool)0;
    # 392 "04heap.c"
    # 308 "04heap.c"
    if(_if_conditional177=type->mPointerNum>0,    _if_conditional177) {
        # 309 "04heap.c"
        c_value_120=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(obj))));
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 311 "04heap.c"
        klass_121=type->mClass;
        # 313 "04heap.c"
        class_name_122=klass_121->mName;
        # 315 "04heap.c"
        fun_name_123="finalize";
        # 317 "04heap.c"
        type2_124=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 318 "04heap.c"
        type2_124->mHeap=(_Bool)0;
        # 320 "04heap.c"
        fun_name2_125=(char*)come_increment_ref_count(((char*)(right_value126=create_method_name(type,(_Bool)0,fun_name_123,info,(_Bool)1))));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 322 "04heap.c"
        finalizer_126=((void*)0);
        # 359 "04heap.c"
        # 323 "04heap.c"
        if(_if_conditional178=list$1sTypeph_length(type->mGenericsTypes)>0,        _if_conditional178) {
            # 324 "04heap.c"
            finalizer_126=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_125);
            # 341 "04heap.c"
            # 326 "04heap.c"
            if(_if_conditional198=finalizer_126==((void*)0),            _if_conditional198) {
                # 327 "04heap.c"
                none_generics_name_130=(char*)come_increment_ref_count(((char*)(right_value127=get_none_generics_name(type2_124->mClass->mName))));
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 329 "04heap.c"
                generics_fun_name_131=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("%s_%s",none_generics_name_130,fun_name_123))));
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 330 "04heap.c"
                generics_fun_135=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_131);
                # 340 "04heap.c"
                # 332 "04heap.c"
                if(generics_fun_135) {
                    # 338 "04heap.c"
                    # 333 "04heap.c"
                    if(_if_conditional214=!create_generics_fun((char*)come_increment_ref_count(fun_name2_125),generics_fun_135,type,info),                    _if_conditional214) {
                        # 335 "04heap.c"
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        # 336 "04heap.c"
                        exit(2);
                    }
                    # 338 "04heap.c"
                    finalizer_126=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_125);
                }
                none_generics_name_130 = come_decrement_ref_count2(none_generics_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_131 = come_decrement_ref_count2(generics_fun_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 343 "04heap.c"
            # 354 "04heap.c"
            for(            i_136=128-1;            i_136>=1;            i_136--            ){
                # 345 "04heap.c"
                new_fun_name_137=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("%s_v%d",fun_name2_125,i_136))));
                right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 346 "04heap.c"
                finalizer_126=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_137);
                # 352 "04heap.c"
                # 348 "04heap.c"
                if(finalizer_126) {
                    # 349 "04heap.c"
                    __dec_obj56=fun_name2_125;
                    fun_name2_125=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(new_fun_name_137))));
                    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 350 "04heap.c"
                    new_fun_name_137 = come_decrement_ref_count2(new_fun_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_137 = come_decrement_ref_count2(new_fun_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 357 "04heap.c"
            # 354 "04heap.c"
            if(_if_conditional216=finalizer_126==((void*)0),            _if_conditional216) {
                # 355 "04heap.c"
                finalizer_126=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_125);
            }
        }
        # 368 "04heap.c"
        # 359 "04heap.c"
        if(_if_conditional217=finalizer_126==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,        _if_conditional217) {
            # 361 "04heap.c"
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value131=create_finalizer_automatically(type,fun_name_123,info)));
            fun_138=multiple_assign_var1->v1;
            new_fun_name_139=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 363 "04heap.c"
            __dec_obj57=fun_name2_125;
            fun_name2_125=(char*)come_increment_ref_count(new_fun_name_139);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 364 "04heap.c"
            finalizer_126=fun_138;
            new_fun_name_139 = come_decrement_ref_count2(new_fun_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 390 "04heap.c"
        # 368 "04heap.c"
        if(_if_conditional219=finalizer_126!=((void*)0),        _if_conditional219) {
            # 380 "04heap.c"
            # 369 "04heap.c"
            if(_if_conditional220=klass_121->mProtocol&&type->mPointerNum==1,            _if_conditional220) {
                # 370 "04heap.c"
                type_name_140=(char*)come_increment_ref_count(((char*)(right_value132=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 374 "04heap.c"
                # 371 "04heap.c"
                if(c_value_120) {
                    # 372 "04heap.c"
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_125,c_value_120,type_name_140,c_value_120,type_name_140,c_value_120,type->mAllocaValue,no_decrement_118,no_free_119,force_delete_);
                }
                type_name_140 = come_decrement_ref_count2(type_name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 379 "04heap.c"
                # 376 "04heap.c"
                if(c_value_120) {
                    # 377 "04heap.c"
                    add_come_last_code2(info,((char*)(right_value133=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_125,c_value_120,type->mAllocaValue,no_decrement_118,no_free_119,force_delete_))));
                    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            # 389 "04heap.c"
            # 382 "04heap.c"
            if(_if_conditional223=klass_121->mProtocol&&type->mPointerNum==1,            _if_conditional223) {
                # 383 "04heap.c"
                type_name_141=(char*)come_increment_ref_count(((char*)(right_value134=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 384 "04heap.c"
                add_come_last_code2(info,((char*)(right_value135=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_117,name_117,name_117,type_name_141,name_117,type_name_141,name_117))));
                right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                type_name_141 = come_decrement_ref_count2(type_name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 387 "04heap.c"
                add_come_last_code2(info,((char*)(right_value136=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_117,name_117))));
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        c_value_120 = come_decrement_ref_count2(c_value_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name2_125 = come_decrement_ref_count2(fun_name2_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 392 "04heap.c"
    __dec_obj58=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_114);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 393 "04heap.c"
    __dec_obj59=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_113);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_117 = come_decrement_ref_count2(name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_127;
unsigned int hash_128;
unsigned int it_129;
_Bool _while_condtional16;
_Bool _if_conditional179;
_Bool _if_conditional180;
struct sFun* __result90__;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct sFun* __result91__;
struct sFun* __result92__;
struct sFun* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_127, 0, sizeof(struct sFun*));
memset(&hash_128, 0, sizeof(unsigned int));
memset(&it_129, 0, sizeof(unsigned int));
                # 1545 "./comelang2.h"
                # 1546 "./comelang2.h"
                memset(&default_value_127,0,sizeof(struct sFun*));
                # 1548 "./comelang2.h"
                hash_128=string_get_hash_key(((char*)key))%self->size;
                # 1549 "./comelang2.h"
                it_129=hash_128;
                # 1573 "./comelang2.h"
                while(_while_condtional16=(_Bool)1,                _while_condtional16) {
                    # 1571 "./comelang2.h"
                    # 1552 "./comelang2.h"
                    if(_if_conditional179=self->item_existance[it_129],                    _if_conditional179) {
                        # 1559 "./comelang2.h"
                        # 1554 "./comelang2.h"
                        if(_if_conditional180=string_equals(self->keys[it_129],key),                        _if_conditional180) {
                            # 1556 "./comelang2.h"
                            __result90__ = __result_obj__ = self->items[it_129];
                            come_call_finalizer2(sFun_finalize,default_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result90__;
                        }
                        # 1559 "./comelang2.h"
                        it_129++;
                        # 1567 "./comelang2.h"
                        # 1561 "./comelang2.h"
                        if(_if_conditional196=it_129>=self->size,                        _if_conditional196) {
                            # 1562 "./comelang2.h"
                            it_129=0;
                        }
                        else {
                            # 1567 "./comelang2.h"
                            # 1564 "./comelang2.h"
                            if(_if_conditional197=it_129==hash_128,                            _if_conditional197) {
                                # 1565 "./comelang2.h"
                                __result91__ = __result_obj__ = default_value_127;
                                come_call_finalizer2(sFun_finalize,default_value_127, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result91__;
                            }
                        }
                    }
                    else {
                        # 1569 "./comelang2.h"
                        __result92__ = __result_obj__ = default_value_127;
                        come_call_finalizer2(sFun_finalize,default_value_127, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result92__;
                    }
                }
                # 1573 "./comelang2.h"
                __result93__ = __result_obj__ = default_value_127;
                come_call_finalizer2(sFun_finalize,default_value_127, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result93__;
                come_call_finalizer2(sFun_finalize,default_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional181=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional181) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional182=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional182) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional183=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional183) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional184=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional184) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional185=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional185) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional186=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional186) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional187=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional187) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional190=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional190) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional191=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional191) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional192=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional192) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional193=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional193) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional194=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional194) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional195=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional195) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional188;
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional188=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional188) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional189=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional189) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
struct sGenericsFun* default_value_132;
unsigned int hash_133;
unsigned int it_134;
_Bool _while_condtional17;
_Bool _if_conditional199;
_Bool _if_conditional200;
struct sGenericsFun* __result94__;
_Bool _if_conditional211;
_Bool _if_conditional212;
struct sGenericsFun* __result95__;
struct sGenericsFun* __result96__;
struct sGenericsFun* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_132, 0, sizeof(struct sGenericsFun*));
memset(&hash_133, 0, sizeof(unsigned int));
memset(&it_134, 0, sizeof(unsigned int));
                    # 1545 "./comelang2.h"
                    # 1546 "./comelang2.h"
                    memset(&default_value_132,0,sizeof(struct sGenericsFun*));
                    # 1548 "./comelang2.h"
                    hash_133=string_get_hash_key(((char*)key))%self->size;
                    # 1549 "./comelang2.h"
                    it_134=hash_133;
                    # 1573 "./comelang2.h"
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        # 1571 "./comelang2.h"
                        # 1552 "./comelang2.h"
                        if(_if_conditional199=self->item_existance[it_134],                        _if_conditional199) {
                            # 1559 "./comelang2.h"
                            # 1554 "./comelang2.h"
                            if(_if_conditional200=string_equals(self->keys[it_134],key),                            _if_conditional200) {
                                # 1556 "./comelang2.h"
                                __result94__ = __result_obj__ = self->items[it_134];
                                come_call_finalizer2(sGenericsFun_finalize,default_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result94__;
                            }
                            # 1559 "./comelang2.h"
                            it_134++;
                            # 1567 "./comelang2.h"
                            # 1561 "./comelang2.h"
                            if(_if_conditional211=it_134>=self->size,                            _if_conditional211) {
                                # 1562 "./comelang2.h"
                                it_134=0;
                            }
                            else {
                                # 1567 "./comelang2.h"
                                # 1564 "./comelang2.h"
                                if(_if_conditional212=it_134==hash_133,                                _if_conditional212) {
                                    # 1565 "./comelang2.h"
                                    __result95__ = __result_obj__ = default_value_132;
                                    come_call_finalizer2(sGenericsFun_finalize,default_value_132, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result95__;
                                }
                            }
                        }
                        else {
                            # 1569 "./comelang2.h"
                            __result96__ = __result_obj__ = default_value_132;
                            come_call_finalizer2(sGenericsFun_finalize,default_value_132, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result96__;
                        }
                    }
                    # 1573 "./comelang2.h"
                    __result97__ = __result_obj__ = default_value_132;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_132, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result97__;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sGenericsFun_finalize"
                                    # 0 "sGenericsFun_finalize"
                                    if(_if_conditional201=self!=((void*)0)&&self->mImplType!=((void*)0),                                    _if_conditional201) {
                                        # 0 "sGenericsFun_finalize"
                                        come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sGenericsFun_finalize"
                                    # 1 "sGenericsFun_finalize"
                                    if(_if_conditional202=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                                    _if_conditional202) {
                                        # 1 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sGenericsFun_finalize"
                                    # 2 "sGenericsFun_finalize"
                                    if(_if_conditional203=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                                    _if_conditional203) {
                                        # 2 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sGenericsFun_finalize"
                                    # 3 "sGenericsFun_finalize"
                                    if(_if_conditional204=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional204) {
                                        # 3 "sGenericsFun_finalize"
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 5 "sGenericsFun_finalize"
                                    # 4 "sGenericsFun_finalize"
                                    if(_if_conditional205=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional205) {
                                        # 4 "sGenericsFun_finalize"
                                        come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 6 "sGenericsFun_finalize"
                                    # 5 "sGenericsFun_finalize"
                                    if(_if_conditional206=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional206) {
                                        # 5 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 7 "sGenericsFun_finalize"
                                    # 6 "sGenericsFun_finalize"
                                    if(_if_conditional207=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional207) {
                                        # 6 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 8 "sGenericsFun_finalize"
                                    # 7 "sGenericsFun_finalize"
                                    if(_if_conditional208=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                    _if_conditional208) {
                                        # 7 "sGenericsFun_finalize"
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 9 "sGenericsFun_finalize"
                                    # 8 "sGenericsFun_finalize"
                                    if(_if_conditional209=self!=((void*)0)&&self->mBlock!=((void*)0),                                    _if_conditional209) {
                                        # 8 "sGenericsFun_finalize"
                                        self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 10 "sGenericsFun_finalize"
                                    # 9 "sGenericsFun_finalize"
                                    if(_if_conditional210=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                                    _if_conditional210) {
                                        # 9 "sGenericsFun_finalize"
                                        self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple2$2sFunpcharphp_finalize"
                # 0 "tuple2$2sFunpcharphp_finalize"
                if(_if_conditional218=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional218) {
                    # 0 "tuple2$2sFunpcharphp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_142;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_143;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_142, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_143, 0, sizeof(struct list_item$1CVALUEph*));
        # 123 "./comelang2.h"
        it_142=self->head;
        # 129 "./comelang2.h"
        while(_while_condtional18=it_142!=((void*)0),        _while_condtional18) {
            # 125 "./comelang2.h"
            prev_it_143=it_142;
            # 126 "./comelang2.h"
            it_142=it_142->next;
            # 127 "./comelang2.h"
            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional224=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional224) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional225=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional225) {
                            # 0 "CVALUE_finalize"
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional226=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional226) {
                            # 1 "CVALUE_finalize"
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional227;
struct list$1CVALUEph* stack_saved_144;
struct list$1sRightValueObjectph* right_value_objects_145;
struct sType* type_before_146;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value137;
char* c_value_147;
struct sClass* klass_148;
char* class_name_149;
char* fun_name_150;
void* right_value138;
struct sType* type2_151;
void* right_value139;
char* fun_name2_152;
struct sFun* finalizer_153;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value140;
char* none_generics_name_154;
void* right_value141;
char* generics_fun_name_155;
struct sGenericsFun* generics_fun_156;
_Bool _if_conditional233;
_Bool _if_conditional234;
int i_157;
void* right_value142;
char* new_fun_name_158;
_Bool _if_conditional235;
void* right_value143;
char* __dec_obj60;
_Bool _if_conditional236;
_Bool _if_conditional237;
void* right_value144;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_159;
char* new_fun_name_160;
char* __dec_obj61;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value145;
char* type_name_161;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value146;
void* right_value147;
_Bool _if_conditional247;
void* right_value148;
void* right_value149;
_Bool _if_conditional248;
struct list$1tuple2$2charphsTypephph* o2_saved_162;
struct tuple2$2charphsTypeph* it_165;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_168;
struct sType* field_type_169;
_Bool _if_conditional253;
void* right_value150;
void* right_value151;
char* obj_170;
_Bool _if_conditional257;
struct list$1tuple2$2charphsTypephph* o2_saved_173;
struct tuple2$2charphsTypeph* it_174;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_175;
struct sType* field_type_176;
_Bool _if_conditional258;
void* right_value152;
void* right_value153;
char* obj_177;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value154;
char* type_name_178;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value155;
char* c_value_179;
struct sClass* klass_180;
char* class_name_181;
char* fun_name_182;
void* right_value156;
struct sType* type2_183;
void* right_value157;
char* fun_name2_184;
struct sFun* finalizer_185;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value158;
char* none_generics_name_186;
void* right_value159;
char* generics_fun_name_187;
struct sGenericsFun* generics_fun_188;
_Bool _if_conditional271;
_Bool _if_conditional272;
int i_189;
void* right_value160;
char* new_fun_name_190;
_Bool _if_conditional273;
void* right_value161;
char* __dec_obj62;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value162;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_191;
char* new_fun_name_192;
char* __dec_obj63;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value163;
char* type_name_193;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value164;
void* right_value165;
_Bool _if_conditional285;
void* right_value166;
void* right_value167;
_Bool _if_conditional286;
struct list$1tuple2$2charphsTypephph* o2_saved_194;
struct tuple2$2charphsTypeph* it_195;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_196;
struct sType* field_type_197;
_Bool _if_conditional287;
void* right_value168;
void* right_value169;
char* obj_198;
_Bool _if_conditional288;
struct list$1tuple2$2charphsTypephph* o2_saved_199;
struct tuple2$2charphsTypeph* it_200;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_201;
struct sType* field_type_202;
_Bool _if_conditional289;
void* right_value170;
void* right_value171;
char* obj_203;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value172;
char* type_name_204;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list$1sRightValueObjectph* __dec_obj64;
struct list$1CVALUEph* __dec_obj65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_144, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_145, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_146, 0, sizeof(struct sType*));
right_value137 = (void*)0;
memset(&c_value_147, 0, sizeof(char*));
memset(&klass_148, 0, sizeof(struct sClass*));
memset(&class_name_149, 0, sizeof(char*));
memset(&fun_name_150, 0, sizeof(char*));
right_value138 = (void*)0;
memset(&type2_151, 0, sizeof(struct sType*));
right_value139 = (void*)0;
memset(&fun_name2_152, 0, sizeof(char*));
memset(&finalizer_153, 0, sizeof(struct sFun*));
right_value140 = (void*)0;
memset(&none_generics_name_154, 0, sizeof(char*));
right_value141 = (void*)0;
memset(&generics_fun_name_155, 0, sizeof(char*));
memset(&generics_fun_156, 0, sizeof(struct sGenericsFun*));
memset(&i_157, 0, sizeof(int));
right_value142 = (void*)0;
memset(&new_fun_name_158, 0, sizeof(char*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&fun_159, 0, sizeof(struct sFun*));
memset(&new_fun_name_160, 0, sizeof(char*));
memset(&fun_159, 0, sizeof(struct sFun*));
memset(&new_fun_name_160, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&type_name_161, 0, sizeof(char*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&o2_saved_162, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_165, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_168, 0, sizeof(char*));
memset(&field_type_169, 0, sizeof(struct sType*));
memset(&name_168, 0, sizeof(char*));
memset(&field_type_169, 0, sizeof(struct sType*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&obj_170, 0, sizeof(char*));
memset(&o2_saved_173, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_174, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_175, 0, sizeof(char*));
memset(&field_type_176, 0, sizeof(struct sType*));
memset(&name_175, 0, sizeof(char*));
memset(&field_type_176, 0, sizeof(struct sType*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&obj_177, 0, sizeof(char*));
right_value154 = (void*)0;
memset(&type_name_178, 0, sizeof(char*));
right_value155 = (void*)0;
memset(&c_value_179, 0, sizeof(char*));
memset(&klass_180, 0, sizeof(struct sClass*));
memset(&class_name_181, 0, sizeof(char*));
memset(&fun_name_182, 0, sizeof(char*));
right_value156 = (void*)0;
memset(&type2_183, 0, sizeof(struct sType*));
right_value157 = (void*)0;
memset(&fun_name2_184, 0, sizeof(char*));
memset(&finalizer_185, 0, sizeof(struct sFun*));
right_value158 = (void*)0;
memset(&none_generics_name_186, 0, sizeof(char*));
right_value159 = (void*)0;
memset(&generics_fun_name_187, 0, sizeof(char*));
memset(&generics_fun_188, 0, sizeof(struct sGenericsFun*));
memset(&i_189, 0, sizeof(int));
right_value160 = (void*)0;
memset(&new_fun_name_190, 0, sizeof(char*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&fun_191, 0, sizeof(struct sFun*));
memset(&new_fun_name_192, 0, sizeof(char*));
memset(&fun_191, 0, sizeof(struct sFun*));
memset(&new_fun_name_192, 0, sizeof(char*));
right_value163 = (void*)0;
memset(&type_name_193, 0, sizeof(char*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&o2_saved_194, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_195, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_196, 0, sizeof(char*));
memset(&field_type_197, 0, sizeof(struct sType*));
memset(&name_196, 0, sizeof(char*));
memset(&field_type_197, 0, sizeof(struct sType*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&obj_198, 0, sizeof(char*));
memset(&o2_saved_199, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_200, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_201, 0, sizeof(char*));
memset(&field_type_202, 0, sizeof(struct sType*));
memset(&name_201, 0, sizeof(char*));
memset(&field_type_202, 0, sizeof(struct sType*));
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&obj_203, 0, sizeof(char*));
right_value172 = (void*)0;
memset(&type_name_204, 0, sizeof(char*));
    # 401 "04heap.c"
    # 398 "04heap.c"
    if(gComeGC) {
        # 399 "04heap.c"
        return;
    }
    # 401 "04heap.c"
    stack_saved_144=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 402 "04heap.c"
    right_value_objects_145=info->right_value_objects;
    # 404 "04heap.c"
    type_before_146=type;
    # 411 "04heap.c"
    # 407 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 408 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 760 "04heap.c"
    # 411 "04heap.c"
    if(_if_conditional229=type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value),    _if_conditional229) {
        # 758 "04heap.c"
        # 412 "04heap.c"
        if(force_delete_) {
            # 413 "04heap.c"
            c_value_147=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(obj))));
            right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 415 "04heap.c"
            klass_148=type->mClass;
            # 417 "04heap.c"
            class_name_149=klass_148->mName;
            # 419 "04heap.c"
            fun_name_150="force_finalize";
            # 421 "04heap.c"
            type2_151=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 422 "04heap.c"
            type2_151->mHeap=(_Bool)0;
            # 424 "04heap.c"
            fun_name2_152=(char*)come_increment_ref_count(((char*)(right_value139=create_method_name(type,(_Bool)0,fun_name_150,info,(_Bool)1))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 426 "04heap.c"
            finalizer_153=((void*)0);
            # 463 "04heap.c"
            # 427 "04heap.c"
            if(_if_conditional231=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional231) {
                # 428 "04heap.c"
                finalizer_153=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_152);
                # 445 "04heap.c"
                # 430 "04heap.c"
                if(_if_conditional232=finalizer_153==((void*)0),                _if_conditional232) {
                    # 431 "04heap.c"
                    none_generics_name_154=(char*)come_increment_ref_count(((char*)(right_value140=get_none_generics_name(type2_151->mClass->mName))));
                    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 433 "04heap.c"
                    generics_fun_name_155=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("%s_%s",none_generics_name_154,fun_name_150))));
                    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 434 "04heap.c"
                    generics_fun_156=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_155);
                    # 444 "04heap.c"
                    # 436 "04heap.c"
                    if(generics_fun_156) {
                        # 442 "04heap.c"
                        # 437 "04heap.c"
                        if(_if_conditional234=!create_generics_fun((char*)come_increment_ref_count(fun_name2_152),generics_fun_156,type,info),                        _if_conditional234) {
                            # 439 "04heap.c"
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            # 440 "04heap.c"
                            exit(2);
                        }
                        # 442 "04heap.c"
                        finalizer_153=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_152);
                    }
                    none_generics_name_154 = come_decrement_ref_count2(none_generics_name_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_155 = come_decrement_ref_count2(generics_fun_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 447 "04heap.c"
                # 458 "04heap.c"
                for(                i_157=128-1;                i_157>=1;                i_157--                ){
                    # 449 "04heap.c"
                    new_fun_name_158=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("%s_v%d",fun_name2_152,i_157))));
                    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 450 "04heap.c"
                    finalizer_153=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_158);
                    # 456 "04heap.c"
                    # 452 "04heap.c"
                    if(finalizer_153) {
                        # 453 "04heap.c"
                        __dec_obj60=fun_name2_152;
                        fun_name2_152=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(new_fun_name_158))));
                        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 454 "04heap.c"
                        new_fun_name_158 = come_decrement_ref_count2(new_fun_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_158 = come_decrement_ref_count2(new_fun_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 461 "04heap.c"
                # 458 "04heap.c"
                if(_if_conditional236=finalizer_153==((void*)0),                _if_conditional236) {
                    # 459 "04heap.c"
                    finalizer_153=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_152);
                }
            }
            # 472 "04heap.c"
            # 463 "04heap.c"
            if(_if_conditional237=finalizer_153==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional237) {
                # 465 "04heap.c"
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value144=create_force_finalizer_automatically(type,fun_name_150,info)));
                fun_159=multiple_assign_var2->v1;
                new_fun_name_160=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 467 "04heap.c"
                __dec_obj61=fun_name2_152;
                fun_name2_152=(char*)come_increment_ref_count(new_fun_name_160);
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 468 "04heap.c"
                finalizer_153=fun_159;
                new_fun_name_160 = come_decrement_ref_count2(new_fun_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 584 "04heap.c"
            # 472 "04heap.c"
            if(_if_conditional238=finalizer_153!=((void*)0),            _if_conditional238) {
                # 514 "04heap.c"
                # 473 "04heap.c"
                if(_if_conditional239=klass_148->mProtocol&&type->mPointerNum==1,                _if_conditional239) {
                    # 474 "04heap.c"
                    type_name_161=(char*)come_increment_ref_count(((char*)(right_value145=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 493 "04heap.c"
                    # 475 "04heap.c"
                    if(c_value_147) {
                        # 492 "04heap.c"
                        # 476 "04heap.c"
                        if(no_decrement) {
                            # 483 "04heap.c"
                            # 477 "04heap.c"
                            if(comma) {
                                # 478 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_152,c_value_147,type_name_161,c_value_147,type_name_161,c_value_147,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 481 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_152,c_value_147,type_name_161,c_value_147,type_name_161,c_value_147,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            # 491 "04heap.c"
                            # 485 "04heap.c"
                            if(comma) {
                                # 486 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_152,c_value_147,type_name_161,c_value_147,type_name_161,c_value_147,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 489 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_152,c_value_147,type_name_161,c_value_147,type_name_161,c_value_147,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_161 = come_decrement_ref_count2(type_name_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 513 "04heap.c"
                    # 495 "04heap.c"
                    if(c_value_147) {
                        # 512 "04heap.c"
                        # 496 "04heap.c"
                        if(no_decrement) {
                            # 503 "04heap.c"
                            # 497 "04heap.c"
                            if(comma) {
                                # 498 "04heap.c"
                                add_come_code(info,((char*)(right_value146=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_152,c_value_147,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 501 "04heap.c"
                                add_come_code(info,((char*)(right_value147=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_152,c_value_147,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            # 511 "04heap.c"
                            # 505 "04heap.c"
                            if(comma) {
                                # 506 "04heap.c"
                                add_come_code(info,((char*)(right_value148=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_152,c_value_147,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 509 "04heap.c"
                                add_come_code(info,((char*)(right_value149=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_152,c_value_147,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                # 540 "04heap.c"
                # 516 "04heap.c"
                if(_if_conditional248=klass_148->mStruct&&type->mPointerNum==0,                _if_conditional248) {
                    # 526 "04heap.c"
                    for(                    o2_saved_162=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_148->mFields)),it_165=list$1tuple2$2charphsTypephph_begin((o2_saved_162));                    !list$1tuple2$2charphsTypephph_end((o2_saved_162));                    it_165=list$1tuple2$2charphsTypephph_next((o2_saved_162))                    ){
                        # 519 "04heap.c"
                        multiple_assign_var3=it_165;
                        name_168=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_169=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        # 525 "04heap.c"
                        # 521 "04heap.c"
                        if(_if_conditional253=field_type_169->mHeap&&field_type_169->mPointerNum>0,                        _if_conditional253) {
                            # 522 "04heap.c"
                            obj_170=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("(((%s)%s).%s)",((char*)(right_value150=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_147,name_168))));
                            right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 523 "04heap.c"
                            free_object(field_type_169,obj_170,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_170 = come_decrement_ref_count2(obj_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_168 = come_decrement_ref_count2(name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 540 "04heap.c"
                    # 527 "04heap.c"
                    if(_if_conditional257=klass_148->mStruct&&type->mPointerNum==1,                    _if_conditional257) {
                        # 537 "04heap.c"
                        for(                        o2_saved_173=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_148->mFields)),it_174=list$1tuple2$2charphsTypephph_begin((o2_saved_173));                        !list$1tuple2$2charphsTypephph_end((o2_saved_173));                        it_174=list$1tuple2$2charphsTypephph_next((o2_saved_173))                        ){
                            # 530 "04heap.c"
                            multiple_assign_var4=it_174;
                            name_175=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_176=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            # 536 "04heap.c"
                            # 532 "04heap.c"
                            if(_if_conditional258=field_type_176->mHeap&&field_type_176->mPointerNum>0,                            _if_conditional258) {
                                # 533 "04heap.c"
                                obj_177=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("(((%s)%s)->%s)",((char*)(right_value152=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_147,name_175))));
                                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 534 "04heap.c"
                                free_object(field_type_176,obj_177,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_177 = come_decrement_ref_count2(obj_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_175 = come_decrement_ref_count2(name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                # 583 "04heap.c"
                # 540 "04heap.c"
                if(_if_conditional259=!type->mAllocaValue,                _if_conditional259) {
                    # 582 "04heap.c"
                    # 541 "04heap.c"
                    if(_if_conditional260=klass_148->mProtocol&&type->mPointerNum==1,                    _if_conditional260) {
                        # 561 "04heap.c"
                        # 542 "04heap.c"
                        if(c_value_147) {
                            # 543 "04heap.c"
                            type_name_178=(char*)come_increment_ref_count(((char*)(right_value154=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 560 "04heap.c"
                            # 544 "04heap.c"
                            if(no_decrement) {
                                # 551 "04heap.c"
                                # 545 "04heap.c"
                                if(comma) {
                                    # 546 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_147,c_value_147,c_value_147,type_name_178,c_value_147,type_name_178,c_value_147,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 549 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_147,c_value_147,c_value_147,type_name_178,c_value_147,type_name_178,c_value_147,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 559 "04heap.c"
                                # 553 "04heap.c"
                                if(comma) {
                                    # 554 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_147,c_value_147,c_value_147,type_name_178,c_value_147,type_name_178,c_value_147,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 557 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_147,c_value_147,c_value_147,type_name_178,c_value_147,type_name_178,c_value_147,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_178 = come_decrement_ref_count2(type_name_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 581 "04heap.c"
                        # 563 "04heap.c"
                        if(c_value_147) {
                            # 580 "04heap.c"
                            # 564 "04heap.c"
                            if(no_decrement) {
                                # 571 "04heap.c"
                                # 565 "04heap.c"
                                if(comma) {
                                    # 566 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_147,c_value_147,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 569 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_147,c_value_147,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 579 "04heap.c"
                                # 573 "04heap.c"
                                if(comma) {
                                    # 574 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_147,c_value_147,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 577 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_147,c_value_147,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_147 = come_decrement_ref_count2(c_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_152 = come_decrement_ref_count2(fun_name2_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 586 "04heap.c"
            c_value_179=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(obj))));
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 588 "04heap.c"
            klass_180=type->mClass;
            # 590 "04heap.c"
            class_name_181=klass_180->mName;
            # 592 "04heap.c"
            fun_name_182="finalize";
            # 594 "04heap.c"
            type2_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 595 "04heap.c"
            type2_183->mHeap=(_Bool)0;
            # 597 "04heap.c"
            fun_name2_184=(char*)come_increment_ref_count(((char*)(right_value157=create_method_name(type,(_Bool)0,fun_name_182,info,(_Bool)1))));
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 599 "04heap.c"
            finalizer_185=((void*)0);
            # 636 "04heap.c"
            # 600 "04heap.c"
            if(_if_conditional269=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional269) {
                # 601 "04heap.c"
                finalizer_185=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_184);
                # 618 "04heap.c"
                # 603 "04heap.c"
                if(_if_conditional270=finalizer_185==((void*)0),                _if_conditional270) {
                    # 604 "04heap.c"
                    none_generics_name_186=(char*)come_increment_ref_count(((char*)(right_value158=get_none_generics_name(type2_183->mClass->mName))));
                    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 606 "04heap.c"
                    generics_fun_name_187=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s_%s",none_generics_name_186,fun_name_182))));
                    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 607 "04heap.c"
                    generics_fun_188=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_187);
                    # 617 "04heap.c"
                    # 609 "04heap.c"
                    if(generics_fun_188) {
                        # 615 "04heap.c"
                        # 610 "04heap.c"
                        if(_if_conditional272=!create_generics_fun((char*)come_increment_ref_count(fun_name2_184),generics_fun_188,type,info),                        _if_conditional272) {
                            # 612 "04heap.c"
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            # 613 "04heap.c"
                            exit(2);
                        }
                        # 615 "04heap.c"
                        finalizer_185=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_184);
                    }
                    none_generics_name_186 = come_decrement_ref_count2(none_generics_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_187 = come_decrement_ref_count2(generics_fun_name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 620 "04heap.c"
                # 631 "04heap.c"
                for(                i_189=128-1;                i_189>=1;                i_189--                ){
                    # 622 "04heap.c"
                    new_fun_name_190=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s_v%d",fun_name2_184,i_189))));
                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 623 "04heap.c"
                    finalizer_185=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_190);
                    # 629 "04heap.c"
                    # 625 "04heap.c"
                    if(finalizer_185) {
                        # 626 "04heap.c"
                        __dec_obj62=fun_name2_184;
                        fun_name2_184=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string(new_fun_name_190))));
                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 627 "04heap.c"
                        new_fun_name_190 = come_decrement_ref_count2(new_fun_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_190 = come_decrement_ref_count2(new_fun_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 634 "04heap.c"
                # 631 "04heap.c"
                if(_if_conditional274=finalizer_185==((void*)0),                _if_conditional274) {
                    # 632 "04heap.c"
                    finalizer_185=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_184);
                }
            }
            # 645 "04heap.c"
            # 636 "04heap.c"
            if(_if_conditional275=finalizer_185==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional275) {
                # 638 "04heap.c"
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(right_value162=create_finalizer_automatically(type,fun_name_182,info)));
                fun_191=multiple_assign_var5->v1;
                new_fun_name_192=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 640 "04heap.c"
                __dec_obj63=fun_name2_184;
                fun_name2_184=(char*)come_increment_ref_count(new_fun_name_192);
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 641 "04heap.c"
                finalizer_185=fun_191;
                new_fun_name_192 = come_decrement_ref_count2(new_fun_name_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 757 "04heap.c"
            # 645 "04heap.c"
            if(_if_conditional276=finalizer_185!=((void*)0),            _if_conditional276) {
                # 687 "04heap.c"
                # 646 "04heap.c"
                if(_if_conditional277=klass_180->mProtocol&&type->mPointerNum==1,                _if_conditional277) {
                    # 647 "04heap.c"
                    type_name_193=(char*)come_increment_ref_count(((char*)(right_value163=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 666 "04heap.c"
                    # 648 "04heap.c"
                    if(c_value_179) {
                        # 665 "04heap.c"
                        # 649 "04heap.c"
                        if(no_decrement) {
                            # 656 "04heap.c"
                            # 650 "04heap.c"
                            if(comma) {
                                # 651 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_184,c_value_179,type_name_193,c_value_179,type_name_193,c_value_179,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 654 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_184,c_value_179,type_name_193,c_value_179,type_name_193,c_value_179,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            # 664 "04heap.c"
                            # 658 "04heap.c"
                            if(comma) {
                                # 659 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_184,c_value_179,type_name_193,c_value_179,type_name_193,c_value_179,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                # 662 "04heap.c"
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_184,c_value_179,type_name_193,c_value_179,type_name_193,c_value_179,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_193 = come_decrement_ref_count2(type_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 686 "04heap.c"
                    # 668 "04heap.c"
                    if(c_value_179) {
                        # 685 "04heap.c"
                        # 669 "04heap.c"
                        if(no_decrement) {
                            # 676 "04heap.c"
                            # 670 "04heap.c"
                            if(comma) {
                                # 671 "04heap.c"
                                add_come_code(info,((char*)(right_value164=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_184,c_value_179,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 674 "04heap.c"
                                add_come_code(info,((char*)(right_value165=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_184,c_value_179,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            # 684 "04heap.c"
                            # 678 "04heap.c"
                            if(comma) {
                                # 679 "04heap.c"
                                add_come_code(info,((char*)(right_value166=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_184,c_value_179,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 682 "04heap.c"
                                add_come_code(info,((char*)(right_value167=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_184,c_value_179,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                # 713 "04heap.c"
                # 689 "04heap.c"
                if(_if_conditional286=klass_180->mStruct&&type->mPointerNum==0,                _if_conditional286) {
                    # 699 "04heap.c"
                    for(                    o2_saved_194=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_180->mFields)),it_195=list$1tuple2$2charphsTypephph_begin((o2_saved_194));                    !list$1tuple2$2charphsTypephph_end((o2_saved_194));                    it_195=list$1tuple2$2charphsTypephph_next((o2_saved_194))                    ){
                        # 692 "04heap.c"
                        multiple_assign_var6=it_195;
                        name_196=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_197=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        # 698 "04heap.c"
                        # 694 "04heap.c"
                        if(_if_conditional287=field_type_197->mHeap&&field_type_197->mPointerNum>0,                        _if_conditional287) {
                            # 695 "04heap.c"
                            obj_198=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("(((%s)%s).%s)",((char*)(right_value168=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_179,name_196))));
                            right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 696 "04heap.c"
                            free_object(field_type_197,obj_198,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_198 = come_decrement_ref_count2(obj_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_196 = come_decrement_ref_count2(name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 713 "04heap.c"
                    # 700 "04heap.c"
                    if(_if_conditional288=klass_180->mStruct&&type->mPointerNum==1,                    _if_conditional288) {
                        # 710 "04heap.c"
                        for(                        o2_saved_199=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_180->mFields)),it_200=list$1tuple2$2charphsTypephph_begin((o2_saved_199));                        !list$1tuple2$2charphsTypephph_end((o2_saved_199));                        it_200=list$1tuple2$2charphsTypephph_next((o2_saved_199))                        ){
                            # 703 "04heap.c"
                            multiple_assign_var7=it_200;
                            name_201=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_202=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            # 709 "04heap.c"
                            # 705 "04heap.c"
                            if(_if_conditional289=field_type_202->mHeap&&field_type_202->mPointerNum>0,                            _if_conditional289) {
                                # 706 "04heap.c"
                                obj_203=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("(((%s)%s)->%s)",((char*)(right_value170=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_179,name_201))));
                                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 707 "04heap.c"
                                free_object(field_type_202,obj_203,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_203 = come_decrement_ref_count2(obj_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_201 = come_decrement_ref_count2(name_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                # 756 "04heap.c"
                # 713 "04heap.c"
                if(_if_conditional290=!type->mAllocaValue,                _if_conditional290) {
                    # 755 "04heap.c"
                    # 714 "04heap.c"
                    if(_if_conditional291=klass_180->mProtocol&&type->mPointerNum==1,                    _if_conditional291) {
                        # 734 "04heap.c"
                        # 715 "04heap.c"
                        if(c_value_179) {
                            # 716 "04heap.c"
                            type_name_204=(char*)come_increment_ref_count(((char*)(right_value172=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 733 "04heap.c"
                            # 717 "04heap.c"
                            if(no_decrement) {
                                # 724 "04heap.c"
                                # 718 "04heap.c"
                                if(comma) {
                                    # 719 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_179,c_value_179,c_value_179,type_name_204,c_value_179,type_name_204,c_value_179,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 722 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_179,c_value_179,c_value_179,type_name_204,c_value_179,type_name_204,c_value_179,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 732 "04heap.c"
                                # 726 "04heap.c"
                                if(comma) {
                                    # 727 "04heap.c"
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_179,c_value_179,c_value_179,type_name_204,c_value_179,type_name_204,c_value_179,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 730 "04heap.c"
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_179,c_value_179,c_value_179,type_name_204,c_value_179,type_name_204,c_value_179,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_204 = come_decrement_ref_count2(type_name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 754 "04heap.c"
                        # 736 "04heap.c"
                        if(c_value_179) {
                            # 753 "04heap.c"
                            # 737 "04heap.c"
                            if(no_decrement) {
                                # 744 "04heap.c"
                                # 738 "04heap.c"
                                if(comma) {
                                    # 739 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_179,c_value_179,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 742 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_179,c_value_179,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                # 752 "04heap.c"
                                # 746 "04heap.c"
                                if(comma) {
                                    # 747 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_179,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    # 750 "04heap.c"
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_179,c_value_179,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_179 = come_decrement_ref_count2(c_value_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_184 = come_decrement_ref_count2(fun_name2_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 760 "04heap.c"
    __dec_obj64=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_145);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 761 "04heap.c"
    __dec_obj65=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_144);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional249;
struct tuple2$2charphsTypeph* result_163;
struct tuple2$2charphsTypeph* __result98__;
_Bool _if_conditional250;
struct tuple2$2charphsTypeph* __result99__;
struct tuple2$2charphsTypeph* result_164;
struct tuple2$2charphsTypeph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_164, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 290 "./comelang2.h"
                        # 285 "./comelang2.h"
                        if(_if_conditional249=self==((void*)0),                        _if_conditional249) {
                            # 286 "./comelang2.h"
                            # 287 "./comelang2.h"
                            memset(&result_163,0,sizeof(struct tuple2$2charphsTypeph*));
                            # 288 "./comelang2.h"
                            __result98__ = __result_obj__ = result_163;
                            return __result98__;
                        }
                        # 290 "./comelang2.h"
                        self->it=self->head;
                        # 296 "./comelang2.h"
                        # 292 "./comelang2.h"
                        if(self->it) {
                            # 293 "./comelang2.h"
                            __result99__ = __result_obj__ = self->it->item;
                            return __result99__;
                        }
                        # 296 "./comelang2.h"
                        # 297 "./comelang2.h"
                        memset(&result_164,0,sizeof(struct tuple2$2charphsTypeph*));
                        # 298 "./comelang2.h"
                        __result100__ = __result_obj__ = result_164;
                        return __result100__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 320 "./comelang2.h"
                        __result101__ = self==((void*)0)||self->it==((void*)0);
                        return __result101__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional251;
struct tuple2$2charphsTypeph* result_166;
struct tuple2$2charphsTypeph* __result102__;
_Bool _if_conditional252;
struct tuple2$2charphsTypeph* __result103__;
struct tuple2$2charphsTypeph* result_167;
struct tuple2$2charphsTypeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_166, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_167, 0, sizeof(struct tuple2$2charphsTypeph*));
                        # 308 "./comelang2.h"
                        # 302 "./comelang2.h"
                        if(_if_conditional251=self==((void*)0)||self->it==((void*)0),                        _if_conditional251) {
                            # 303 "./comelang2.h"
                            # 304 "./comelang2.h"
                            memset(&result_166,0,sizeof(struct tuple2$2charphsTypeph*));
                            # 305 "./comelang2.h"
                            __result102__ = __result_obj__ = result_166;
                            return __result102__;
                        }
                        # 308 "./comelang2.h"
                        self->it=self->it->next;
                        # 314 "./comelang2.h"
                        # 310 "./comelang2.h"
                        if(self->it) {
                            # 311 "./comelang2.h"
                            __result103__ = __result_obj__ = self->it->item;
                            return __result103__;
                        }
                        # 314 "./comelang2.h"
                        # 315 "./comelang2.h"
                        memset(&result_167,0,sizeof(struct tuple2$2charphsTypeph*));
                        # 316 "./comelang2.h"
                        __result104__ = __result_obj__ = result_167;
                        return __result104__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_171;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_172;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_171, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_172, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        # 123 "./comelang2.h"
                        it_171=self->head;
                        # 129 "./comelang2.h"
                        while(_while_condtional19=it_171!=((void*)0),                        _while_condtional19) {
                            # 125 "./comelang2.h"
                            prev_it_172=it_171;
                            # 126 "./comelang2.h"
                            it_171=it_171->next;
                            # 127 "./comelang2.h"
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional254;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                if(_if_conditional254=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional254) {
                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional255;
_Bool _if_conditional256;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        # 0 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional255=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional255) {
                                            # 0 "tuple2$2charphsTypephp_finalize"
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "tuple2$2charphsTypephp_finalize"
                                        # 1 "tuple2$2charphsTypephp_finalize"
                                        if(_if_conditional256=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional256) {
                                            # 1 "tuple2$2charphsTypephp_finalize"
                                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value173;
struct sType* type2_205;
_Bool _if_conditional300;
char* result_206;
struct sType* result_type_207;
struct list$1CVALUEph* stack_saved_208;
struct list$1sRightValueObjectph* right_value_objects_209;
void* right_value174;
char* c_value_210;
struct sClass* klass_211;
char* class_name_212;
char* fun_name_213;
struct sFun* cloner_214;
char* fun_name2_215;
_Bool _if_conditional301;
void* right_value175;
char* none_generics_name_216;
void* right_value176;
struct sType* obj_type_217;
void* right_value177;
char* __dec_obj66;
void* right_value178;
char* fun_name3_218;
struct sGenericsFun* generics_fun_221;
_Bool _if_conditional306;
void* right_value179;
_Bool _if_conditional307;
void* right_value180;
void* right_value181;
void* right_value182;
void* right_value183;
void* right_value184;
struct tuple2$2sTypephcharph* __result110__;
void* right_value185;
char* __dec_obj69;
int i_222;
void* right_value186;
char* new_fun_name_223;
_Bool _if_conditional310;
void* right_value187;
char* __dec_obj70;
_Bool _if_conditional311;
_Bool _if_conditional312;
void* right_value188;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_224;
char* new_fun_name_225;
char* __dec_obj71;
_Bool _if_conditional313;
struct sType* __dec_obj72;
void* right_value189;
struct sType* __dec_obj73;
void* right_value190;
char* __dec_obj74;
_Bool _if_conditional314;
void* right_value191;
char* __dec_obj75;
void* right_value192;
struct sType* __dec_obj76;
void* right_value193;
char* type_name_226;
void* right_value194;
char* __dec_obj77;
_Bool _if_conditional315;
void* right_value195;
char* __dec_obj78;
struct list$1sRightValueObjectph* __dec_obj79;
struct list$1CVALUEph* __dec_obj80;
void* right_value196;
void* right_value197;
struct tuple2$2sTypephcharph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&type2_205, 0, sizeof(struct sType*));
memset(&result_206, 0, sizeof(char*));
memset(&result_type_207, 0, sizeof(struct sType*));
memset(&stack_saved_208, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_209, 0, sizeof(struct list$1sRightValueObjectph*));
right_value174 = (void*)0;
memset(&c_value_210, 0, sizeof(char*));
memset(&klass_211, 0, sizeof(struct sClass*));
memset(&class_name_212, 0, sizeof(char*));
memset(&fun_name_213, 0, sizeof(char*));
memset(&cloner_214, 0, sizeof(struct sFun*));
memset(&fun_name2_215, 0, sizeof(char*));
right_value175 = (void*)0;
memset(&none_generics_name_216, 0, sizeof(char*));
right_value176 = (void*)0;
memset(&obj_type_217, 0, sizeof(struct sType*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&fun_name3_218, 0, sizeof(char*));
memset(&generics_fun_221, 0, sizeof(struct sGenericsFun*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&i_222, 0, sizeof(int));
right_value186 = (void*)0;
memset(&new_fun_name_223, 0, sizeof(char*));
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&fun_224, 0, sizeof(struct sFun*));
memset(&new_fun_name_225, 0, sizeof(char*));
memset(&fun_224, 0, sizeof(struct sFun*));
memset(&new_fun_name_225, 0, sizeof(char*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&type_name_226, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
    # 766 "04heap.c"
    type2_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 771 "04heap.c"
    # 767 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 768 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 772 "04heap.c"
    result_206=((void*)0);
    # 772 "04heap.c"
    result_type_207=((void*)0);
    # 773 "04heap.c"
    stack_saved_208=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 774 "04heap.c"
    right_value_objects_209=info->right_value_objects;
    # 776 "04heap.c"
    c_value_210=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(obj))));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 778 "04heap.c"
    klass_211=type->mClass;
    # 780 "04heap.c"
    class_name_212=klass_211->mName;
    # 782 "04heap.c"
    fun_name_213="clone";
    # 784 "04heap.c"
    cloner_214=((void*)0);
    # 785 "04heap.c"
    # 823 "04heap.c"
    # 786 "04heap.c"
    if(_if_conditional301=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional301) {
        # 787 "04heap.c"
        none_generics_name_216=(char*)come_increment_ref_count(((char*)(right_value175=get_none_generics_name(type->mClass->mName))));
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 789 "04heap.c"
        obj_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 791 "04heap.c"
        __dec_obj66=fun_name2_215;
        fun_name2_215=(char*)come_increment_ref_count(((char*)(right_value177=create_method_name(obj_type_217,(_Bool)0,fun_name_213,info,(_Bool)1))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 792 "04heap.c"
        fun_name3_218=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s_%s",none_generics_name_216,fun_name_213))));
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 794 "04heap.c"
        generics_fun_221=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_218,((void*)0));
        # 802 "04heap.c"
        # 796 "04heap.c"
        if(generics_fun_221) {
            # 800 "04heap.c"
            # 797 "04heap.c"
            if(_if_conditional307=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(fun_name2_215)))),generics_fun_221,obj_type_217,info),            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional307) {
                # 798 "04heap.c"
                __result110__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value184=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value183=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 798, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value180=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 798, "sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string("")))))));
                none_generics_name_216 = come_decrement_ref_count2(none_generics_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_218 = come_decrement_ref_count2(fun_name3_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_206 = come_decrement_ref_count2(result_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_210 = come_decrement_ref_count2(c_value_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_215 = come_decrement_ref_count2(fun_name2_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result110__;
            }
        }
        # 802 "04heap.c"
        cloner_214=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_215);
        none_generics_name_216 = come_decrement_ref_count2(none_generics_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_218 = come_decrement_ref_count2(fun_name3_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 805 "04heap.c"
        __dec_obj69=fun_name2_215;
        fun_name2_215=(char*)come_increment_ref_count(((char*)(right_value185=create_method_name(type,(_Bool)0,fun_name_213,info,(_Bool)1))));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 807 "04heap.c"
        # 818 "04heap.c"
        for(        i_222=128-1;        i_222>=1;        i_222--        ){
            # 809 "04heap.c"
            new_fun_name_223=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s_v%d",fun_name2_215,i_222))));
            right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 810 "04heap.c"
            cloner_214=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_223);
            # 816 "04heap.c"
            # 812 "04heap.c"
            if(cloner_214) {
                # 813 "04heap.c"
                __dec_obj70=fun_name2_215;
                fun_name2_215=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(new_fun_name_223))));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 814 "04heap.c"
                new_fun_name_223 = come_decrement_ref_count2(new_fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_223 = come_decrement_ref_count2(new_fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 821 "04heap.c"
        # 818 "04heap.c"
        if(_if_conditional311=cloner_214==((void*)0),        _if_conditional311) {
            # 819 "04heap.c"
            cloner_214=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_215);
        }
    }
    # 832 "04heap.c"
    # 823 "04heap.c"
    if(_if_conditional312=cloner_214==((void*)0)&&!type->mClass->mNumber,    _if_conditional312) {
        # 825 "04heap.c"
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(right_value188=create_cloner_automatically(type,fun_name_213,info)));
        fun_224=multiple_assign_var8->v1;
        new_fun_name_225=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 827 "04heap.c"
        __dec_obj71=fun_name2_215;
        fun_name2_215=(char*)come_increment_ref_count(new_fun_name_225);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 828 "04heap.c"
        cloner_214=fun_224;
        new_fun_name_225 = come_decrement_ref_count2(new_fun_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 852 "04heap.c"
    # 832 "04heap.c"
    if(_if_conditional313=cloner_214!=((void*)0),    _if_conditional313) {
        # 833 "04heap.c"
        __dec_obj72=result_type_207;
        result_type_207=(struct sType*)come_increment_ref_count(cloner_214->mResultType);
        come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 834 "04heap.c"
        __dec_obj73=result_type_207;
        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=solve_generics(result_type_207,type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 836 "04heap.c"
        __dec_obj74=result_206;
        result_206=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s(%s)",fun_name2_215,c_value_210))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 841 "04heap.c"
        # 838 "04heap.c"
        if(gComeDebug) {
            # 839 "04heap.c"
            __dec_obj75=result_206;
            result_206=(char*)come_increment_ref_count(((char*)(right_value191=append_stackframe(result_206,result_type_207,info))));
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        # 843 "04heap.c"
        __dec_obj76=result_type_207;
        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 844 "04heap.c"
        type2_205->mHeap=(_Bool)1;
        # 845 "04heap.c"
        type_name_226=(char*)come_increment_ref_count(((char*)(right_value193=make_type_name_string(type2_205,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 846 "04heap.c"
        __dec_obj77=result_206;
        result_206=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_226,c_value_210,info->sname,info->sline,type_name_226))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 850 "04heap.c"
        # 847 "04heap.c"
        if(gComeDebug) {
            # 848 "04heap.c"
            __dec_obj78=result_206;
            result_206=(char*)come_increment_ref_count(((char*)(right_value195=append_stackframe(result_206,result_type_207,info))));
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        type_name_226 = come_decrement_ref_count2(type_name_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 852 "04heap.c"
    __dec_obj79=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_209);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 853 "04heap.c"
    __dec_obj80=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_208);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 855 "04heap.c"
    __result111__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value197=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value196=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 855, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_207),(char*)come_increment_ref_count(result_206))));
    come_call_finalizer2(sType_finalize,type2_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_206 = come_decrement_ref_count2(result_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_210 = come_decrement_ref_count2(c_value_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_215 = come_decrement_ref_count2(fun_name2_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result111__;
    come_call_finalizer2(sType_finalize,type2_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_206 = come_decrement_ref_count2(result_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_210 = come_decrement_ref_count2(c_value_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_215 = come_decrement_ref_count2(fun_name2_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_219;
unsigned int it_220;
_Bool _while_condtional20;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct sGenericsFun* __result105__;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct sGenericsFun* __result106__;
struct sGenericsFun* __result107__;
struct sGenericsFun* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_219, 0, sizeof(unsigned int));
memset(&it_220, 0, sizeof(unsigned int));
            # 1226 "./comelang2.h"
            hash_219=string_get_hash_key(((char*)key))%self->size;
            # 1227 "./comelang2.h"
            it_220=hash_219;
            # 1251 "./comelang2.h"
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                # 1249 "./comelang2.h"
                # 1230 "./comelang2.h"
                if(_if_conditional302=self->item_existance[it_220],                _if_conditional302) {
                    # 1237 "./comelang2.h"
                    # 1232 "./comelang2.h"
                    if(_if_conditional303=string_equals(self->keys[it_220],key),                    _if_conditional303) {
                        # 1234 "./comelang2.h"
                        __result105__ = __result_obj__ = self->items[it_220];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result105__;
                    }
                    # 1237 "./comelang2.h"
                    it_220++;
                    # 1245 "./comelang2.h"
                    # 1239 "./comelang2.h"
                    if(_if_conditional304=it_220>=self->size,                    _if_conditional304) {
                        # 1240 "./comelang2.h"
                        it_220=0;
                    }
                    else {
                        # 1245 "./comelang2.h"
                        # 1242 "./comelang2.h"
                        if(_if_conditional305=it_220==hash_219,                        _if_conditional305) {
                            # 1243 "./comelang2.h"
                            __result106__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result106__;
                        }
                    }
                }
                else {
                    # 1247 "./comelang2.h"
                    __result107__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result107__;
                }
            }
            # 1251 "./comelang2.h"
            __result108__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result108__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj67;
char* __dec_obj68;
struct tuple2$2sTypephcharph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1768 "./comelang2.h"
                    __dec_obj67=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 1769 "./comelang2.h"
                    __dec_obj68=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 1771 "./comelang2.h"
                    __result109__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result109__;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional308;
_Bool _if_conditional309;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        # 0 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional308=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional308) {
                            # 0 "tuple2$2sTypephcharphp_finalize"
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "tuple2$2sTypephcharphp_finalize"
                        # 1 "tuple2$2sTypephcharphp_finalize"
                        if(_if_conditional309=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional309) {
                            # 1 "tuple2$2sTypephcharphp_finalize"
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional316;
char* result_227;
struct list$1CVALUEph* stack_saved_228;
struct list$1sRightValueObjectph* right_value_objects_229;
struct sClass* klass_230;
char* class_name_231;
char* fun_name_232;
void* right_value198;
struct sType* type2_233;
struct sFun* cloner_234;
char* fun_name2_235;
_Bool _if_conditional317;
void* right_value199;
char* none_generics_name_236;
void* right_value200;
struct sType* obj_type_237;
void* right_value201;
char* __dec_obj81;
void* right_value202;
char* fun_name3_238;
struct sGenericsFun* generics_fun_239;
_Bool _if_conditional318;
void* right_value203;
_Bool _if_conditional319;
_Bool __result112__;
void* right_value204;
char* __dec_obj82;
int i_240;
void* right_value205;
char* new_fun_name_241;
_Bool _if_conditional320;
void* right_value206;
char* __dec_obj83;
_Bool _if_conditional321;
_Bool _if_conditional322;
void* right_value207;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_242;
char* new_fun_name_243;
char* __dec_obj84;
struct list$1sRightValueObjectph* __dec_obj85;
struct list$1CVALUEph* __dec_obj86;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_227, 0, sizeof(char*));
memset(&stack_saved_228, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_229, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_230, 0, sizeof(struct sClass*));
memset(&class_name_231, 0, sizeof(char*));
memset(&fun_name_232, 0, sizeof(char*));
right_value198 = (void*)0;
memset(&type2_233, 0, sizeof(struct sType*));
memset(&cloner_234, 0, sizeof(struct sFun*));
memset(&fun_name2_235, 0, sizeof(char*));
right_value199 = (void*)0;
memset(&none_generics_name_236, 0, sizeof(char*));
right_value200 = (void*)0;
memset(&obj_type_237, 0, sizeof(struct sType*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&fun_name3_238, 0, sizeof(char*));
memset(&generics_fun_239, 0, sizeof(struct sGenericsFun*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&i_240, 0, sizeof(int));
right_value205 = (void*)0;
memset(&new_fun_name_241, 0, sizeof(char*));
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&fun_242, 0, sizeof(struct sFun*));
memset(&new_fun_name_243, 0, sizeof(char*));
memset(&fun_242, 0, sizeof(struct sFun*));
memset(&new_fun_name_243, 0, sizeof(char*));
    # 863 "04heap.c"
    # 860 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 861 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 864 "04heap.c"
    result_227=((void*)0);
    # 864 "04heap.c"
    stack_saved_228=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 865 "04heap.c"
    right_value_objects_229=info->right_value_objects;
    # 867 "04heap.c"
    klass_230=type->mClass;
    # 869 "04heap.c"
    class_name_231=klass_230->mName;
    # 871 "04heap.c"
    fun_name_232="equals";
    # 873 "04heap.c"
    type2_233=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 874 "04heap.c"
    type2_233->mHeap=(_Bool)0;
    # 876 "04heap.c"
    cloner_234=((void*)0);
    # 877 "04heap.c"
    # 915 "04heap.c"
    # 878 "04heap.c"
    if(_if_conditional317=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional317) {
        # 879 "04heap.c"
        none_generics_name_236=(char*)come_increment_ref_count(((char*)(right_value199=get_none_generics_name(type->mClass->mName))));
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 881 "04heap.c"
        obj_type_237=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 883 "04heap.c"
        __dec_obj81=fun_name2_235;
        fun_name2_235=(char*)come_increment_ref_count(((char*)(right_value201=create_method_name(obj_type_237,(_Bool)0,fun_name_232,info,(_Bool)1))));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 884 "04heap.c"
        fun_name3_238=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s_%s",none_generics_name_236,fun_name_232))));
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 886 "04heap.c"
        generics_fun_239=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_238,((void*)0));
        # 894 "04heap.c"
        # 888 "04heap.c"
        if(generics_fun_239) {
            # 892 "04heap.c"
            # 889 "04heap.c"
            if(_if_conditional319=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(fun_name2_235)))),generics_fun_239,obj_type_237,info),            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional319) {
                # 890 "04heap.c"
                __result112__ = (_Bool)0;
                none_generics_name_236 = come_decrement_ref_count2(none_generics_name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_238 = come_decrement_ref_count2(fun_name3_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_227 = come_decrement_ref_count2(result_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_235 = come_decrement_ref_count2(fun_name2_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result112__;
            }
        }
        # 894 "04heap.c"
        cloner_234=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_235);
        none_generics_name_236 = come_decrement_ref_count2(none_generics_name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_238 = come_decrement_ref_count2(fun_name3_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 897 "04heap.c"
        __dec_obj82=fun_name2_235;
        fun_name2_235=(char*)come_increment_ref_count(((char*)(right_value204=create_method_name(type,(_Bool)0,fun_name_232,info,(_Bool)1))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 899 "04heap.c"
        # 910 "04heap.c"
        for(        i_240=128-1;        i_240>=1;        i_240--        ){
            # 901 "04heap.c"
            new_fun_name_241=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("%s_v%d",fun_name2_235,i_240))));
            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 902 "04heap.c"
            cloner_234=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_241);
            # 908 "04heap.c"
            # 904 "04heap.c"
            if(cloner_234) {
                # 905 "04heap.c"
                __dec_obj83=fun_name2_235;
                fun_name2_235=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(new_fun_name_241))));
                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 906 "04heap.c"
                new_fun_name_241 = come_decrement_ref_count2(new_fun_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_241 = come_decrement_ref_count2(new_fun_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 913 "04heap.c"
        # 910 "04heap.c"
        if(_if_conditional321=cloner_234==((void*)0),        _if_conditional321) {
            # 911 "04heap.c"
            cloner_234=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_235);
        }
    }
    # 923 "04heap.c"
    # 915 "04heap.c"
    if(_if_conditional322=cloner_234==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional322) {
        # 917 "04heap.c"
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(right_value207=create_equals_automatically(type,fun_name_232,info)));
        fun_242=multiple_assign_var9->v1;
        new_fun_name_243=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 919 "04heap.c"
        __dec_obj84=fun_name2_235;
        fun_name2_235=(char*)come_increment_ref_count(new_fun_name_243);
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 920 "04heap.c"
        cloner_234=fun_242;
        new_fun_name_243 = come_decrement_ref_count2(new_fun_name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 923 "04heap.c"
    __dec_obj85=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_229);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 924 "04heap.c"
    __dec_obj86=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_228);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 926 "04heap.c"
    __result113__ = (_Bool)1;
    result_227 = come_decrement_ref_count2(result_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_235 = come_decrement_ref_count2(fun_name2_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result113__;
    result_227 = come_decrement_ref_count2(result_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_235 = come_decrement_ref_count2(fun_name2_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional323;
char* result_244;
struct list$1CVALUEph* stack_saved_245;
struct list$1sRightValueObjectph* right_value_objects_246;
struct sClass* klass_247;
char* class_name_248;
char* fun_name_249;
void* right_value208;
struct sType* type2_250;
struct sFun* cloner_251;
char* fun_name2_252;
_Bool _if_conditional324;
void* right_value209;
char* none_generics_name_253;
void* right_value210;
struct sType* obj_type_254;
void* right_value211;
char* __dec_obj87;
void* right_value212;
char* fun_name3_255;
struct sGenericsFun* generics_fun_256;
_Bool _if_conditional325;
void* right_value213;
_Bool _if_conditional326;
_Bool __result114__;
void* right_value214;
char* __dec_obj88;
int i_257;
void* right_value215;
char* new_fun_name_258;
_Bool _if_conditional327;
void* right_value216;
char* __dec_obj89;
_Bool _if_conditional328;
_Bool _if_conditional329;
void* right_value217;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_259;
char* new_fun_name_260;
char* __dec_obj90;
struct list$1sRightValueObjectph* __dec_obj91;
struct list$1CVALUEph* __dec_obj92;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_244, 0, sizeof(char*));
memset(&stack_saved_245, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_246, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_247, 0, sizeof(struct sClass*));
memset(&class_name_248, 0, sizeof(char*));
memset(&fun_name_249, 0, sizeof(char*));
right_value208 = (void*)0;
memset(&type2_250, 0, sizeof(struct sType*));
memset(&cloner_251, 0, sizeof(struct sFun*));
memset(&fun_name2_252, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&none_generics_name_253, 0, sizeof(char*));
right_value210 = (void*)0;
memset(&obj_type_254, 0, sizeof(struct sType*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&fun_name3_255, 0, sizeof(char*));
memset(&generics_fun_256, 0, sizeof(struct sGenericsFun*));
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&i_257, 0, sizeof(int));
right_value215 = (void*)0;
memset(&new_fun_name_258, 0, sizeof(char*));
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&fun_259, 0, sizeof(struct sFun*));
memset(&new_fun_name_260, 0, sizeof(char*));
memset(&fun_259, 0, sizeof(struct sFun*));
memset(&new_fun_name_260, 0, sizeof(char*));
    # 934 "04heap.c"
    # 931 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 932 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 935 "04heap.c"
    result_244=((void*)0);
    # 935 "04heap.c"
    stack_saved_245=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 936 "04heap.c"
    right_value_objects_246=info->right_value_objects;
    # 938 "04heap.c"
    klass_247=type->mClass;
    # 940 "04heap.c"
    class_name_248=klass_247->mName;
    # 942 "04heap.c"
    fun_name_249="operator_equals";
    # 944 "04heap.c"
    type2_250=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 945 "04heap.c"
    type2_250->mHeap=(_Bool)0;
    # 947 "04heap.c"
    cloner_251=((void*)0);
    # 948 "04heap.c"
    # 986 "04heap.c"
    # 949 "04heap.c"
    if(_if_conditional324=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional324) {
        # 950 "04heap.c"
        none_generics_name_253=(char*)come_increment_ref_count(((char*)(right_value209=get_none_generics_name(type->mClass->mName))));
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 952 "04heap.c"
        obj_type_254=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 954 "04heap.c"
        __dec_obj87=fun_name2_252;
        fun_name2_252=(char*)come_increment_ref_count(((char*)(right_value211=create_method_name(obj_type_254,(_Bool)0,fun_name_249,info,(_Bool)1))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 955 "04heap.c"
        fun_name3_255=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("%s_%s",none_generics_name_253,fun_name_249))));
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 957 "04heap.c"
        generics_fun_256=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_255,((void*)0));
        # 965 "04heap.c"
        # 959 "04heap.c"
        if(generics_fun_256) {
            # 963 "04heap.c"
            # 960 "04heap.c"
            if(_if_conditional326=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(fun_name2_252)))),generics_fun_256,obj_type_254,info),            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional326) {
                # 961 "04heap.c"
                __result114__ = (_Bool)0;
                none_generics_name_253 = come_decrement_ref_count2(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_255 = come_decrement_ref_count2(fun_name3_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_244 = come_decrement_ref_count2(result_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_252 = come_decrement_ref_count2(fun_name2_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result114__;
            }
        }
        # 965 "04heap.c"
        cloner_251=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_252);
        none_generics_name_253 = come_decrement_ref_count2(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_255 = come_decrement_ref_count2(fun_name3_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 968 "04heap.c"
        __dec_obj88=fun_name2_252;
        fun_name2_252=(char*)come_increment_ref_count(((char*)(right_value214=create_method_name(type,(_Bool)0,fun_name_249,info,(_Bool)1))));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 970 "04heap.c"
        # 981 "04heap.c"
        for(        i_257=128-1;        i_257>=1;        i_257--        ){
            # 972 "04heap.c"
            new_fun_name_258=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s_v%d",fun_name2_252,i_257))));
            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 973 "04heap.c"
            cloner_251=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_258);
            # 979 "04heap.c"
            # 975 "04heap.c"
            if(cloner_251) {
                # 976 "04heap.c"
                __dec_obj89=fun_name2_252;
                fun_name2_252=(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(new_fun_name_258))));
                __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 977 "04heap.c"
                new_fun_name_258 = come_decrement_ref_count2(new_fun_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_258 = come_decrement_ref_count2(new_fun_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 984 "04heap.c"
        # 981 "04heap.c"
        if(_if_conditional328=cloner_251==((void*)0),        _if_conditional328) {
            # 982 "04heap.c"
            cloner_251=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_252);
        }
    }
    # 994 "04heap.c"
    # 986 "04heap.c"
    if(_if_conditional329=cloner_251==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional329) {
        # 988 "04heap.c"
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(right_value217=create_operator_equals_automatically(type,fun_name_249,info)));
        fun_259=multiple_assign_var10->v1;
        new_fun_name_260=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 990 "04heap.c"
        __dec_obj90=fun_name2_252;
        fun_name2_252=(char*)come_increment_ref_count(new_fun_name_260);
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 991 "04heap.c"
        cloner_251=fun_259;
        new_fun_name_260 = come_decrement_ref_count2(new_fun_name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 994 "04heap.c"
    __dec_obj91=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_246);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 995 "04heap.c"
    __dec_obj92=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_245);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 997 "04heap.c"
    __result115__ = (_Bool)1;
    result_244 = come_decrement_ref_count2(result_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_252 = come_decrement_ref_count2(fun_name2_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result115__;
    result_244 = come_decrement_ref_count2(result_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_252 = come_decrement_ref_count2(fun_name2_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional330;
char* result_261;
struct list$1CVALUEph* stack_saved_262;
struct list$1sRightValueObjectph* right_value_objects_263;
struct sClass* klass_264;
char* class_name_265;
char* fun_name_266;
void* right_value218;
struct sType* type2_267;
struct sFun* cloner_268;
char* fun_name2_269;
_Bool _if_conditional331;
void* right_value219;
char* none_generics_name_270;
void* right_value220;
struct sType* obj_type_271;
void* right_value221;
char* __dec_obj93;
void* right_value222;
char* fun_name3_272;
struct sGenericsFun* generics_fun_273;
_Bool _if_conditional332;
void* right_value223;
_Bool _if_conditional333;
_Bool __result116__;
void* right_value224;
char* __dec_obj94;
int i_274;
void* right_value225;
char* new_fun_name_275;
_Bool _if_conditional334;
void* right_value226;
char* __dec_obj95;
_Bool _if_conditional335;
_Bool _if_conditional336;
void* right_value227;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_276;
char* new_fun_name_277;
char* __dec_obj96;
struct list$1sRightValueObjectph* __dec_obj97;
struct list$1CVALUEph* __dec_obj98;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_261, 0, sizeof(char*));
memset(&stack_saved_262, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_263, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_264, 0, sizeof(struct sClass*));
memset(&class_name_265, 0, sizeof(char*));
memset(&fun_name_266, 0, sizeof(char*));
right_value218 = (void*)0;
memset(&type2_267, 0, sizeof(struct sType*));
memset(&cloner_268, 0, sizeof(struct sFun*));
memset(&fun_name2_269, 0, sizeof(char*));
right_value219 = (void*)0;
memset(&none_generics_name_270, 0, sizeof(char*));
right_value220 = (void*)0;
memset(&obj_type_271, 0, sizeof(struct sType*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&fun_name3_272, 0, sizeof(char*));
memset(&generics_fun_273, 0, sizeof(struct sGenericsFun*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&i_274, 0, sizeof(int));
right_value225 = (void*)0;
memset(&new_fun_name_275, 0, sizeof(char*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&fun_276, 0, sizeof(struct sFun*));
memset(&new_fun_name_277, 0, sizeof(char*));
memset(&fun_276, 0, sizeof(struct sFun*));
memset(&new_fun_name_277, 0, sizeof(char*));
    # 1005 "04heap.c"
    # 1002 "04heap.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 1003 "04heap.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 1006 "04heap.c"
    result_261=((void*)0);
    # 1006 "04heap.c"
    stack_saved_262=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    # 1007 "04heap.c"
    right_value_objects_263=info->right_value_objects;
    # 1009 "04heap.c"
    klass_264=type->mClass;
    # 1011 "04heap.c"
    class_name_265=klass_264->mName;
    # 1013 "04heap.c"
    fun_name_266="operator_not_equals";
    # 1015 "04heap.c"
    type2_267=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1016 "04heap.c"
    type2_267->mHeap=(_Bool)0;
    # 1018 "04heap.c"
    cloner_268=((void*)0);
    # 1019 "04heap.c"
    # 1057 "04heap.c"
    # 1020 "04heap.c"
    if(_if_conditional331=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional331) {
        # 1021 "04heap.c"
        none_generics_name_270=(char*)come_increment_ref_count(((char*)(right_value219=get_none_generics_name(type->mClass->mName))));
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1023 "04heap.c"
        obj_type_271=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1025 "04heap.c"
        __dec_obj93=fun_name2_269;
        fun_name2_269=(char*)come_increment_ref_count(((char*)(right_value221=create_method_name(obj_type_271,(_Bool)0,fun_name_266,info,(_Bool)1))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1026 "04heap.c"
        fun_name3_272=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("%s_%s",none_generics_name_270,fun_name_266))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1028 "04heap.c"
        generics_fun_273=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_272,((void*)0));
        # 1036 "04heap.c"
        # 1030 "04heap.c"
        if(generics_fun_273) {
            # 1034 "04heap.c"
            # 1031 "04heap.c"
            if(_if_conditional333=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(fun_name2_269)))),generics_fun_273,obj_type_271,info),            right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional333) {
                # 1032 "04heap.c"
                __result116__ = (_Bool)0;
                none_generics_name_270 = come_decrement_ref_count2(none_generics_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_272 = come_decrement_ref_count2(fun_name3_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_261 = come_decrement_ref_count2(result_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_269 = come_decrement_ref_count2(fun_name2_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result116__;
            }
        }
        # 1036 "04heap.c"
        cloner_268=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_269);
        none_generics_name_270 = come_decrement_ref_count2(none_generics_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_272 = come_decrement_ref_count2(fun_name3_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1039 "04heap.c"
        __dec_obj94=fun_name2_269;
        fun_name2_269=(char*)come_increment_ref_count(((char*)(right_value224=create_method_name(type,(_Bool)0,fun_name_266,info,(_Bool)1))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1041 "04heap.c"
        # 1052 "04heap.c"
        for(        i_274=128-1;        i_274>=1;        i_274--        ){
            # 1043 "04heap.c"
            new_fun_name_275=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("%s_v%d",fun_name2_269,i_274))));
            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1044 "04heap.c"
            cloner_268=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_275);
            # 1050 "04heap.c"
            # 1046 "04heap.c"
            if(cloner_268) {
                # 1047 "04heap.c"
                __dec_obj95=fun_name2_269;
                fun_name2_269=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(new_fun_name_275))));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1048 "04heap.c"
                new_fun_name_275 = come_decrement_ref_count2(new_fun_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_275 = come_decrement_ref_count2(new_fun_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 1055 "04heap.c"
        # 1052 "04heap.c"
        if(_if_conditional335=cloner_268==((void*)0),        _if_conditional335) {
            # 1053 "04heap.c"
            cloner_268=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_269);
        }
    }
    # 1065 "04heap.c"
    # 1057 "04heap.c"
    if(_if_conditional336=cloner_268==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional336) {
        # 1059 "04heap.c"
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(right_value227=create_operator_not_equals_automatically(type,fun_name_266,info)));
        fun_276=multiple_assign_var11->v1;
        new_fun_name_277=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1061 "04heap.c"
        __dec_obj96=fun_name2_269;
        fun_name2_269=(char*)come_increment_ref_count(new_fun_name_277);
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1062 "04heap.c"
        cloner_268=fun_276;
        new_fun_name_277 = come_decrement_ref_count2(new_fun_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1065 "04heap.c"
    __dec_obj97=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_263);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1066 "04heap.c"
    __dec_obj98=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_262);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1068 "04heap.c"
    __result117__ = (_Bool)1;
    result_261 = come_decrement_ref_count2(result_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_269 = come_decrement_ref_count2(fun_name2_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result117__;
    result_261 = come_decrement_ref_count2(result_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_269 = come_decrement_ref_count2(fun_name2_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool existance_free_right_value_objects(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional337;
_Bool __result118__;
struct list$1sRightValueObjectph* right_value_objects_278;
struct list$1sRightValueObjectph* o2_saved_279;
struct sRightValueObject* it_280;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool __result119__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&right_value_objects_278, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_279, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_280, 0, sizeof(struct sRightValueObject*));
    # 1076 "04heap.c"
    # 1073 "04heap.c"
    if(gComeGC) {
        # 1074 "04heap.c"
        __result118__ = (_Bool)0;
        return __result118__;
    }
    # 1076 "04heap.c"
    right_value_objects_278=info->right_value_objects;
    # 1086 "04heap.c"
    for(    o2_saved_279=(right_value_objects_278),it_280=list$1sRightValueObjectph_begin((o2_saved_279));    !list$1sRightValueObjectph_end((o2_saved_279));    it_280=list$1sRightValueObjectph_next((o2_saved_279))    ){
        # 1084 "04heap.c"
        # 1079 "04heap.c"
        if(_if_conditional338=it_280&&!it_280->mFreed,        _if_conditional338) {
            # 1083 "04heap.c"
            # 1080 "04heap.c"
            if(_if_conditional339=string_operator_equals(it_280->mFunName,info->come_fun->mName)&&it_280->mBlockLevel==info->block_level,            _if_conditional339) {
                # 1081 "04heap.c"
                __result119__ = (_Bool)1;
                return __result119__;
            }
        }
    }
    # 1086 "04heap.c"
    __result120__ = (_Bool)0;
    return __result120__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool _if_conditional340;
_Bool free_right_value_281;
struct list$1sRightValueObjectph* right_value_objects_282;
int n_283;
struct list$1sRightValueObjectph* o2_saved_284;
struct sRightValueObject* it_285;
_Bool _if_conditional341;
_Bool _if_conditional342;
void* right_value228;
struct sType* type_286;
void* right_value229;
struct sType* __dec_obj99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&free_right_value_281, 0, sizeof(_Bool));
memset(&right_value_objects_282, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_283, 0, sizeof(int));
memset(&o2_saved_284, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_285, 0, sizeof(struct sRightValueObject*));
right_value228 = (void*)0;
memset(&type_286, 0, sizeof(struct sType*));
right_value229 = (void*)0;
    # 1094 "04heap.c"
    # 1091 "04heap.c"
    if(gComeGC) {
        # 1092 "04heap.c"
        return;
    }
    # 1094 "04heap.c"
    free_right_value_281=(_Bool)0;
    # 1095 "04heap.c"
    right_value_objects_282=info->right_value_objects;
    # 1097 "04heap.c"
    n_283=0;
    # 1116 "04heap.c"
    for(    o2_saved_284=(right_value_objects_282),it_285=list$1sRightValueObjectph_begin((o2_saved_284));    !list$1sRightValueObjectph_end((o2_saved_284));    it_285=list$1sRightValueObjectph_next((o2_saved_284))    ){
        # 1114 "04heap.c"
        # 1099 "04heap.c"
        if(_if_conditional341=it_285&&!it_285->mFreed,        _if_conditional341) {
            # 1112 "04heap.c"
            # 1100 "04heap.c"
            if(_if_conditional342=string_operator_equals(it_285->mFunName,info->come_fun->mName)&&it_285->mBlockLevel==info->block_level,            _if_conditional342) {
                # 1101 "04heap.c"
                type_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(it_285->mType))));
                come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1103 "04heap.c"
                __dec_obj99=type_286;
                type_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=solve_type(type_286,info->generics_type,info->method_generics_types,info))));
                come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 1106 "04heap.c"
                free_object(type_286,it_285->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                # 1109 "04heap.c"
                it_285->mFreed=(_Bool)1;
                # 1110 "04heap.c"
                free_right_value_281=(_Bool)1;
                come_call_finalizer2(sType_finalize,type_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        # 1114 "04heap.c"
        n_283++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional343;
_Bool __result121__;
struct list$1sRightValueObjectph* o2_saved_287;
struct sRightValueObject* it_288;
_Bool _if_conditional344;
_Bool __result122__;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_287, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_288, 0, sizeof(struct sRightValueObject*));
    # 1123 "04heap.c"
    # 1120 "04heap.c"
    if(gComeGC) {
        # 1121 "04heap.c"
        __result121__ = (_Bool)0;
        return __result121__;
    }
    # 1129 "04heap.c"
    for(    o2_saved_287=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_288=list$1sRightValueObjectph_begin((o2_saved_287));    !list$1sRightValueObjectph_end((o2_saved_287));    it_288=list$1sRightValueObjectph_next((o2_saved_287))    ){
        # 1127 "04heap.c"
        # 1124 "04heap.c"
        if(_if_conditional344=it_288->mID==right_value_num,        _if_conditional344) {
            # 1125 "04heap.c"
            __result122__ = (_Bool)1;
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result122__;
        }
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    # 1129 "04heap.c"
    __result123__ = (_Bool)0;
    return __result123__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_289;
struct sVar* var__293;
_Bool _if_conditional353;
struct sVar* __result128__;
struct sVar* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_289, 0, sizeof(struct sVarTable*));
memset(&var__293, 0, sizeof(struct sVar*));
    # 1135 "04heap.c"
    it_289=table;
    # 1147 "04heap.c"
    while(it_289) {
        # 1138 "04heap.c"
        var__293=map$2charphsVarphp_operator_load_element(it_289->mVars,name);
        # 1144 "04heap.c"
        # 1140 "04heap.c"
        if(var__293) {
            # 1141 "04heap.c"
            __result128__ = __result_obj__ = var__293;
            return __result128__;
        }
        # 1144 "04heap.c"
        it_289=it_289->mParent;
    }
    # 1147 "04heap.c"
    __result129__ = __result_obj__ = ((void*)0);
    return __result129__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_290;
unsigned int hash_291;
unsigned int it_292;
_Bool _while_condtional21;
_Bool _if_conditional345;
_Bool _if_conditional346;
struct sVar* __result124__;
_Bool _if_conditional351;
_Bool _if_conditional352;
struct sVar* __result125__;
struct sVar* __result126__;
struct sVar* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_290, 0, sizeof(struct sVar*));
memset(&hash_291, 0, sizeof(unsigned int));
memset(&it_292, 0, sizeof(unsigned int));
            # 1545 "./comelang2.h"
            # 1546 "./comelang2.h"
            memset(&default_value_290,0,sizeof(struct sVar*));
            # 1548 "./comelang2.h"
            hash_291=string_get_hash_key(((char*)key))%self->size;
            # 1549 "./comelang2.h"
            it_292=hash_291;
            # 1573 "./comelang2.h"
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                # 1571 "./comelang2.h"
                # 1552 "./comelang2.h"
                if(_if_conditional345=self->item_existance[it_292],                _if_conditional345) {
                    # 1559 "./comelang2.h"
                    # 1554 "./comelang2.h"
                    if(_if_conditional346=string_equals(self->keys[it_292],key),                    _if_conditional346) {
                        # 1556 "./comelang2.h"
                        __result124__ = __result_obj__ = self->items[it_292];
                        come_call_finalizer2(sVar_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result124__;
                    }
                    # 1559 "./comelang2.h"
                    it_292++;
                    # 1567 "./comelang2.h"
                    # 1561 "./comelang2.h"
                    if(_if_conditional351=it_292>=self->size,                    _if_conditional351) {
                        # 1562 "./comelang2.h"
                        it_292=0;
                    }
                    else {
                        # 1567 "./comelang2.h"
                        # 1564 "./comelang2.h"
                        if(_if_conditional352=it_292==hash_291,                        _if_conditional352) {
                            # 1565 "./comelang2.h"
                            __result125__ = __result_obj__ = default_value_290;
                            come_call_finalizer2(sVar_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result125__;
                        }
                    }
                }
                else {
                    # 1569 "./comelang2.h"
                    __result126__ = __result_obj__ = default_value_290;
                    come_call_finalizer2(sVar_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result126__;
                }
            }
            # 1573 "./comelang2.h"
            __result127__ = __result_obj__ = default_value_290;
            come_call_finalizer2(sVar_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result127__;
            come_call_finalizer2(sVar_finalize,default_value_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sVar_finalize"
                            # 0 "sVar_finalize"
                            if(_if_conditional347=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional347) {
                                # 0 "sVar_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sVar_finalize"
                            # 1 "sVar_finalize"
                            if(_if_conditional348=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional348) {
                                # 1 "sVar_finalize"
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sVar_finalize"
                            # 2 "sVar_finalize"
                            if(_if_conditional349=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional349) {
                                # 2 "sVar_finalize"
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sVar_finalize"
                            # 3 "sVar_finalize"
                            if(_if_conditional350=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional350) {
                                # 3 "sVar_finalize"
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional354;
struct map$2charphsVarph* o2_saved_294;
char* it_297;
struct sVar* p_300;
struct sType* type_301;
struct sClass* klass_302;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value230;
char* c_value_303;
void* right_value231;
struct sType* type2_304;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_294, 0, sizeof(struct map$2charphsVarph*));
memset(&it_297, 0, sizeof(char*));
memset(&p_300, 0, sizeof(struct sVar*));
memset(&type_301, 0, sizeof(struct sType*));
memset(&klass_302, 0, sizeof(struct sClass*));
right_value230 = (void*)0;
memset(&c_value_303, 0, sizeof(char*));
right_value231 = (void*)0;
memset(&type2_304, 0, sizeof(struct sType*));
    # 1155 "04heap.c"
    # 1152 "04heap.c"
    if(gComeGC) {
        # 1153 "04heap.c"
        return;
    }
    # 1185 "04heap.c"
    for(    o2_saved_294=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_297=map$2charphsVarph_begin((o2_saved_294));    !map$2charphsVarph_end((o2_saved_294));    it_297=map$2charphsVarph_next((o2_saved_294))    ){
        # 1156 "04heap.c"
        p_300=map$2charphsVarphp_operator_load_element(table->mVars,it_297);
        # 1157 "04heap.c"
        type_301=p_300->mType;
        # 1158 "04heap.c"
        klass_302=type_301->mClass;
        # 1184 "04heap.c"
        # 1166 "04heap.c"
        if(_if_conditional359=ret_value!=((void*)0)&&p_300->mCValueName!=((void*)0)&&string_operator_equals(p_300->mCValueName,ret_value->mCValueName)&&type_301->mHeap,        _if_conditional359) {
            # 1168 "04heap.c"
            free_object(p_300->mType,p_300->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            # 1184 "04heap.c"
            # 1170 "04heap.c"
            if(_if_conditional360=type_301->mHeap&&p_300->mCValueName,            _if_conditional360) {
                # 1177 "04heap.c"
                # 1171 "04heap.c"
                if(type_301->mFunctionParam) {
                    # 1172 "04heap.c"
                    free_object(p_300->mType,p_300->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    # 1175 "04heap.c"
                    free_object(p_300->mType,p_300->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                # 1184 "04heap.c"
                # 1178 "04heap.c"
                if(_if_conditional362=klass_302->mStruct&&p_300->mCValueName&&type_301->mAllocaValue&&!type_301->mNoCallingDestructor,                _if_conditional362) {
                    # 1179 "04heap.c"
                    c_value_303=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("(&%s)",p_300->mCValueName))));
                    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1180 "04heap.c"
                    type2_304=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(type_301))));
                    come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 1181 "04heap.c"
                    type2_304->mPointerNum++;
                    # 1182 "04heap.c"
                    free_object(type2_304,c_value_303,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_303 = come_decrement_ref_count2(c_value_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type2_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional355;
char* result_295;
char* __result130__;
_Bool _if_conditional356;
char* __result131__;
char* result_296;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_295, 0, sizeof(char*));
memset(&result_296, 0, sizeof(char*));
        # 1304 "./comelang2.h"
        # 1299 "./comelang2.h"
        if(_if_conditional355=self==((void*)0),        _if_conditional355) {
            # 1300 "./comelang2.h"
            # 1301 "./comelang2.h"
            memset(&result_295,0,sizeof(char*));
            # 1302 "./comelang2.h"
            __result130__ = __result_obj__ = result_295;
            return __result130__;
        }
        # 1304 "./comelang2.h"
        self->key_list->it=self->key_list->head;
        # 1310 "./comelang2.h"
        # 1306 "./comelang2.h"
        if(self->key_list->it) {
            # 1307 "./comelang2.h"
            __result131__ = __result_obj__ = self->key_list->it->item;
            return __result131__;
        }
        # 1310 "./comelang2.h"
        # 1311 "./comelang2.h"
        memset(&result_296,0,sizeof(char*));
        # 1312 "./comelang2.h"
        __result132__ = __result_obj__ = result_296;
        return __result132__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1333 "./comelang2.h"
        __result133__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        return __result133__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional357;
char* result_298;
char* __result134__;
_Bool _if_conditional358;
char* __result135__;
char* result_299;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_298, 0, sizeof(char*));
memset(&result_299, 0, sizeof(char*));
        # 1321 "./comelang2.h"
        # 1316 "./comelang2.h"
        if(_if_conditional357=self==((void*)0)||self->key_list->it==((void*)0),        _if_conditional357) {
            # 1317 "./comelang2.h"
            # 1318 "./comelang2.h"
            memset(&result_298,0,sizeof(char*));
            # 1319 "./comelang2.h"
            __result134__ = __result_obj__ = result_298;
            return __result134__;
        }
        # 1321 "./comelang2.h"
        self->key_list->it=self->key_list->it->next;
        # 1327 "./comelang2.h"
        # 1323 "./comelang2.h"
        if(self->key_list->it) {
            # 1324 "./comelang2.h"
            __result135__ = __result_obj__ = self->key_list->it->item;
            return __result135__;
        }
        # 1327 "./comelang2.h"
        # 1328 "./comelang2.h"
        memset(&result_299,0,sizeof(char*));
        # 1329 "./comelang2.h"
        __result136__ = __result_obj__ = result_299;
        return __result136__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_305;
_Bool _if_conditional363;
_Bool _if_conditional364;
int i_306;
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_305, 0, sizeof(int));
memset(&i_306, 0, sizeof(int));
        # 1137 "./comelang2.h"
        for(        i_305=0;        i_305<self->size;        i_305++        ){
            # 1136 "./comelang2.h"
            # 1131 "./comelang2.h"
            if(_if_conditional363=self->item_existance[i_305],            _if_conditional363) {
                # 1135 "./comelang2.h"
                # 1132 "./comelang2.h"
                if(_if_conditional364=1,                _if_conditional364) {
                    # 1133 "./comelang2.h"
                    come_call_finalizer2(sVar_finalize,self->items[i_305], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1137 "./comelang2.h"
        come_free((char*)self->items);
        # 1146 "./comelang2.h"
        for(        i_306=0;        i_306<self->size;        i_306++        ){
            # 1145 "./comelang2.h"
            # 1140 "./comelang2.h"
            if(_if_conditional365=self->item_existance[i_306],            _if_conditional365) {
                # 1144 "./comelang2.h"
                # 1141 "./comelang2.h"
                if(_if_conditional366=1,                _if_conditional366) {
                    # 1142 "./comelang2.h"
                    self->keys[i_306] = come_decrement_ref_count2(self->keys[i_306], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1146 "./comelang2.h"
        come_free((char*)self->keys);
        # 1148 "./comelang2.h"
        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        # 1150 "./comelang2.h"
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_307;
_Bool _while_condtional22;
struct list_item$1charp* prev_it_308;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_307, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_308, 0, sizeof(struct list_item$1charp*));
            # 123 "./comelang2.h"
            it_307=self->head;
            # 129 "./comelang2.h"
            while(_while_condtional22=it_307!=((void*)0),            _while_condtional22) {
                # 125 "./comelang2.h"
                prev_it_308=it_307;
                # 126 "./comelang2.h"
                it_307=it_307->next;
                # 127 "./comelang2.h"
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_308, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool _if_conditional367;
struct sVarTable* it_309;
_Bool _if_conditional368;
_Bool _while_condtional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_309, 0, sizeof(struct sVarTable*));
    # 1192 "04heap.c"
    # 1189 "04heap.c"
    if(gComeGC) {
        # 1190 "04heap.c"
        return;
    }
    # 1192 "04heap.c"
    it_309=info->lv_table;
    # 1205 "04heap.c"
    # 1194 "04heap.c"
    if(_if_conditional368=it_309==info->come_fun->mBlock->mVarTable,    _if_conditional368) {
        # 1195 "04heap.c"
        free_objects(it_309,ret_value,info);
    }
    else {
        # 1203 "04heap.c"
        while(_while_condtional23=it_309!=info->come_fun->mBlock->mVarTable,        _while_condtional23) {
            # 1199 "04heap.c"
            free_objects(it_309,ret_value,info);
            # 1201 "04heap.c"
            it_309=it_309->mParent;
        }
        # 1203 "04heap.c"
        free_objects(it_309,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional369;
struct sVar* ret_value_310;
struct sVarTable* current_loop_vtable_311;
_Bool _if_conditional370;
struct sVarTable* it_312;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ret_value_310, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_311, 0, sizeof(struct sVarTable*));
memset(&it_312, 0, sizeof(struct sVarTable*));
    # 1212 "04heap.c"
    # 1209 "04heap.c"
    if(gComeGC) {
        # 1210 "04heap.c"
        return;
    }
    # 1212 "04heap.c"
    ret_value_310=((void*)0);
    # 1214 "04heap.c"
    current_loop_vtable_311=info->current_loop_vtable;
    # 1225 "04heap.c"
    # 1216 "04heap.c"
    if(_if_conditional370=current_loop_vtable_311!=((void*)0),    _if_conditional370) {
        # 1217 "04heap.c"
        it_312=info->lv_table;
        # 1223 "04heap.c"
        while(_while_condtional24=it_312!=current_loop_vtable_311,        _while_condtional24) {
            # 1219 "04heap.c"
            free_objects(it_312,ret_value_310,info);
            # 1221 "04heap.c"
            it_312=it_312->mParent;
        }
        # 1223 "04heap.c"
        free_objects(it_312,ret_value_310,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional371;
_Bool _if_conditional372;
void* right_value232;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
char* __result137__;
_Bool _if_conditional373;
static int n_313=0;
void* right_value237;
char* var_name_314;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
void* right_value245;
char* __result138__;
void* right_value246;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&var_name_314, 0, sizeof(char*));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
    # 1243 "04heap.c"
    # 1229 "04heap.c"
    if(_if_conditional371=string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0,    _if_conditional371) {
        # 1233 "04heap.c"
        # 1230 "04heap.c"
        if(gComeDebug) {
            # 1231 "04heap.c"
            __result137__ = __result_obj__ = ((char*)(right_value236=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(right_value232=string_to_string(info->sname))),((char*)(right_value233=int_to_string(info->sline))),((char*)(right_value234=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value235=charp_to_string(c_value))))));
            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result137__;
        }
    }
    else {
        # 1243 "04heap.c"
        # 1234 "04heap.c"
        if(gComeDebug) {
            # 1235 "04heap.c"
            # 1236 "04heap.c"
            ++n_313;
            # 1238 "04heap.c"
            var_name_314=(char*)come_increment_ref_count(((char*)(right_value237=xsprintf("__exception_result_var_b%d",n_313))));
            right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1239 "04heap.c"
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value238=make_define_var(type,var_name_314,(_Bool)0,info))));
            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1240 "04heap.c"
            __result138__ = __result_obj__ = ((char*)(right_value245=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value239=string_to_string(info->sname))),((char*)(right_value240=int_to_string(info->sline))),((char*)(right_value241=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value242=string_to_string(var_name_314))),((char*)(right_value243=charp_to_string(c_value))),((char*)(right_value244=string_to_string(var_name_314))))));
            var_name_314 = come_decrement_ref_count2(var_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result138__;
            var_name_314 = come_decrement_ref_count2(var_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    # 1243 "04heap.c"
    __result139__ = __result_obj__ = ((char*)(right_value246=__builtin_string(c_value)));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result139__;
}

