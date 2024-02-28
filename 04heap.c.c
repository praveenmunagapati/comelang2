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

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline);

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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
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
come_push_stackframe("./comelang2.h", 57);
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    come_pop_stackframe();
    return __result1__;
come_pop_stackframe();
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
come_push_stackframe("./comelang2.h", 1959);
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1951, "struct smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_pop_stackframe();
    return __result2__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
come_pop_stackframe();
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
come_push_stackframe("./comelang2.h", 1969);
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1961, "struct smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_pop_stackframe();
    return __result3__;
    come_call_finalizer2(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
come_pop_stackframe();
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
come_push_stackframe("./comelang2.h", 1979);
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1971, "struct smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_pop_stackframe();
    return __result4__;
    come_call_finalizer2(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
come_pop_stackframe();
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
come_push_stackframe("./comelang2.h", 1989);
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1981, "struct smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_pop_stackframe();
    return __result5__;
    come_call_finalizer2(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
come_pop_stackframe();
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
come_push_stackframe("./comelang2.h", 1999);
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1991, "struct smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_pop_stackframe();
    return __result6__;
    come_call_finalizer2(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

// body function


static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("smart_pointer$1charp_finalize", 1);
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    come_pop_stackframe();
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("smart_pointer$1shortp_finalize", 1);
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    come_pop_stackframe();
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("smart_pointer$1intp_finalize", 1);
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    come_pop_stackframe();
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("smart_pointer$1longp_finalize", 1);
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    come_pop_stackframe();
}

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
char* __dec_obj6;
_Bool _if_conditional8;
void* right_value10;
char* __dec_obj7;
_Bool _if_conditional9;
void* right_value11;
char* __dec_obj8;
void* right_value12;
char* __dec_obj9;
_Bool _if_conditional10;
void* right_value13;
char* __dec_obj10;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value12 = (void*)0;
right_value13 = (void*)0;
come_push_stackframe("04heap.c", 40);
    if(gComeGC) {
        come_pop_stackframe();
        return;
    }
    if(right_value->var) {
        if(right_value->var->mType->mDelegate) {
            __dec_obj6=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(right_value->var->mType->mShare) {
                __dec_obj7=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value10=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(right_value->var->mType->mClone) {
                    __dec_obj8=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value11=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj9=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value12=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    else {
        if(right_value->type->mDelegate) {
        }
        else {
            __dec_obj10=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value13=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
come_pop_stackframe();
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value48;
struct sType* result_29;
_Bool _if_conditional97;
struct sType* __result25__;
_Bool _if_conditional98;
struct sType* __result27__;
struct sClass* klass_30;
_Bool _if_conditional99;
void* right_value49;
struct sType* result_type_31;
void* right_value50;
void* right_value51;
struct tuple1$1sTypeph* __dec_obj34;
struct list$1sTypeph* o2_saved_34;
struct sType* it_37;
void* right_value52;
struct sType* new_param_type_40;
void* right_value56;
_Bool _if_conditional106;
int generics_number_44;
_Bool _if_conditional107;
void* right_value57;
struct list$1sNodeph* array_num_45;
_Bool immutable__46;
int pointer_num_47;
_Bool heap_48;
_Bool no_heap_49;
_Bool no_calling_destructor_50;
_Bool null_value_51;
void* right_value58;
void* right_value59;
struct sType* __dec_obj38;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct list$1sNodeph* __dec_obj39;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
int generics_number_55;
_Bool _if_conditional118;
void* right_value60;
struct sClass* klass2_56;
int generics_number2_57;
_Bool _if_conditional119;
void* right_value61;
struct list$1sNodeph* array_num_58;
_Bool immutable__59;
int pointer_num_60;
_Bool heap_61;
_Bool no_heap_62;
_Bool no_calling_destructor_63;
_Bool null_value_64;
void* right_value62;
void* right_value63;
struct sType* __dec_obj40;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct list$1sNodeph* __dec_obj41;
_Bool _if_conditional125;
_Bool _if_conditional126;
struct list$1sTypeph* o2_saved_65;
struct sType* it_66;
void* right_value64;
struct sType* type_67;
void* right_value65;
_Bool _if_conditional127;
void* right_value66;
char* new_name_68;
struct sType* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
memset(&result_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
right_value49 = (void*)0;
memset(&result_type_31, 0, sizeof(struct sType*));
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&o2_saved_34, 0, sizeof(struct list$1sTypeph*));
memset(&it_37, 0, sizeof(struct sType*));
right_value52 = (void*)0;
memset(&new_param_type_40, 0, sizeof(struct sType*));
right_value56 = (void*)0;
memset(&generics_number_44, 0, sizeof(int));
right_value57 = (void*)0;
memset(&array_num_45, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__46, 0, sizeof(_Bool));
memset(&pointer_num_47, 0, sizeof(int));
memset(&heap_48, 0, sizeof(_Bool));
memset(&no_heap_49, 0, sizeof(_Bool));
memset(&no_calling_destructor_50, 0, sizeof(_Bool));
memset(&null_value_51, 0, sizeof(_Bool));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&generics_number_55, 0, sizeof(int));
right_value60 = (void*)0;
memset(&klass2_56, 0, sizeof(struct sClass*));
memset(&generics_number2_57, 0, sizeof(int));
right_value61 = (void*)0;
memset(&array_num_58, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__59, 0, sizeof(_Bool));
memset(&pointer_num_60, 0, sizeof(int));
memset(&heap_61, 0, sizeof(_Bool));
memset(&no_heap_62, 0, sizeof(_Bool));
memset(&no_calling_destructor_63, 0, sizeof(_Bool));
memset(&null_value_64, 0, sizeof(_Bool));
right_value62 = (void*)0;
right_value63 = (void*)0;
memset(&o2_saved_65, 0, sizeof(struct list$1sTypeph*));
memset(&it_66, 0, sizeof(struct sType*));
right_value64 = (void*)0;
memset(&type_67, 0, sizeof(struct sType*));
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&new_name_68, 0, sizeof(char*));
come_push_stackframe("04heap.c", 180);
    result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value48=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional97=generics_type==((void*)0),    _if_conditional97) {
        __result25__ = __result_obj__ = result_29;
        come_call_finalizer2(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_pop_stackframe();
        return __result25__;
    }
    if(_if_conditional98=list$1sTypeph_length(generics_type->mGenericsTypes)==0,    _if_conditional98) {
        __result27__ = __result_obj__ = result_29;
        come_call_finalizer2(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_pop_stackframe();
        return __result27__;
    }
    klass_30=type->mClass;
    if(_if_conditional99=string_operator_equals(klass_30->mName,"lambda"),    _if_conditional99) {
        result_type_31=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=solve_generics(type->mResultType->v1,generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj34=result_29->mResultType;
        result_29->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value50=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_31)))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_reset(result_29->mParamTypes);
        for(        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_37=list$1sTypeph_begin((o2_saved_34));        !list$1sTypeph_end((o2_saved_34));        it_37=list$1sTypeph_next((o2_saved_34))        ){
            new_param_type_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=solve_generics(it_37,generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(result_29->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(new_param_type_40)))));
            come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,new_param_type_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional106=klass_30->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0,        _if_conditional106) {
            generics_number_44=klass_30->mMethodGenericsNum;
            if(_if_conditional107=generics_number_44>=list$1sTypeph_length(info->method_generics_types),            _if_conditional107) {
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_44,list$1sTypeph_length(info->method_generics_types));
                exit(2);
            }
            array_num_45=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value57=list$1sNodephp_clone(type->mArrayNum))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            immutable__46=type->mImmutable;
            pointer_num_47=type->mPointerNum;
            heap_48=type->mHeap;
            no_heap_49=type->mNoHeap;
            no_calling_destructor_50=type->mNoCallingDestructor;
            null_value_51=type->mNullValue;
            __dec_obj38=result_29;
            result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(((struct sType*)(right_value58=list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_44)))))));
            come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(heap_48) {
                result_29->mHeap=heap_48;
            }
            if(no_heap_49) {
                result_29->mNoHeap=(_Bool)1;
                result_29->mHeap=(_Bool)0;
            }
            if(no_calling_destructor_50) {
                result_29->mNoCallingDestructor=(_Bool)1;
            }
            if(immutable__46) {
                result_29->mImmutable=immutable__46;
            }
            if(_if_conditional114=list$1sNodeph_length(array_num_45)>0,            _if_conditional114) {
                __dec_obj39=result_29->mArrayNum;
                result_29->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_45);
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(null_value_51) {
                result_29->mNullValue=null_value_51;
            }
            if(_if_conditional116=pointer_num_47>0,            _if_conditional116) {
                result_29->mPointerNum+=pointer_num_47;
            }
            come_call_finalizer2(list$1sNodephp_finalize,array_num_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(klass_30->mGenerics) {
                generics_number_55=klass_30->mGenericsNum;
                if(_if_conditional118=generics_number_55>=list$1sTypeph_length(generics_type->mGenericsTypes),                _if_conditional118) {
                    err_msg(info,"invalid generics parametor number");
                    exit(2);
                }
                klass2_56=((struct sType*)(right_value60=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_55)))->mClass;
                come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                generics_number2_57=klass2_56->mGenericsNum;
                if(_if_conditional119=generics_number_55!=generics_number2_57,                _if_conditional119) {
                    array_num_58=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value61=list$1sNodephp_clone(type->mArrayNum))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    immutable__59=type->mImmutable;
                    pointer_num_60=type->mPointerNum;
                    heap_61=type->mHeap;
                    no_heap_62=type->mNoHeap;
                    no_calling_destructor_63=type->mNoCallingDestructor;
                    null_value_64=type->mNullValue;
                    __dec_obj40=result_29;
                    result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(((struct sType*)(right_value62=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_55)))))));
                    come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(heap_61) {
                        result_29->mHeap=heap_61;
                    }
                    if(no_heap_62) {
                        result_29->mNoHeap=(_Bool)1;
                        result_29->mHeap=(_Bool)0;
                    }
                    if(no_calling_destructor_63) {
                        result_29->mNoCallingDestructor=(_Bool)1;
                    }
                    if(immutable__59) {
                        result_29->mImmutable=immutable__59;
                    }
                    if(_if_conditional124=list$1sNodeph_length(array_num_58)>0,                    _if_conditional124) {
                        __dec_obj41=result_29->mArrayNum;
                        result_29->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_58);
                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(null_value_64) {
                        result_29->mNullValue=null_value_64;
                    }
                    if(_if_conditional126=pointer_num_60>0,                    _if_conditional126) {
                        result_29->mPointerNum+=pointer_num_60;
                    }
                    come_call_finalizer2(list$1sNodephp_finalize,array_num_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                list$1sTypeph_reset(result_29->mGenericsTypes);
                for(                o2_saved_65=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_66=list$1sTypeph_begin((o2_saved_65));                !list$1sTypeph_end((o2_saved_65));                it_66=list$1sTypeph_next((o2_saved_65))                ){
                    type_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=solve_generics(it_66,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_29->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(type_67)))));
                    come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(_if_conditional127=!output_generics_struct(result_29,generics_type,info),                _if_conditional127) {
                    new_name_68=(char*)come_increment_ref_count(((char*)(right_value66=create_generics_name(type,info))));
                    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    printf("output generics is failed(%s)",new_name_68);
                    exit(1);
                    new_name_68 = come_decrement_ref_count2(new_name_68, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result41__ = __result_obj__ = result_29;
    come_call_finalizer2(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_pop_stackframe();
    return __result41__;
    come_call_finalizer2(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional11;
struct sType* __result7__;
void* right_value14;
struct sType* result_5;
_Bool _if_conditional28;
_Bool _if_conditional29;
void* right_value17;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional33;
void* right_value18;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional34;
void* right_value19;
char* __dec_obj14;
_Bool _if_conditional35;
void* right_value26;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional39;
void* right_value34;
struct list$1sNodeph* __dec_obj22;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value35;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional54;
void* right_value42;
struct list$1charph* __dec_obj27;
_Bool _if_conditional58;
void* right_value43;
struct tuple1$1sTypeph* __dec_obj28;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value44;
struct sNode* __dec_obj29;
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
_Bool _if_conditional83;
_Bool _if_conditional84;
void* right_value45;
struct sNode* __dec_obj30;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value46;
char* __dec_obj31;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
void* right_value47;
char* __dec_obj32;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value17 = (void*)0;
right_value18 = (void*)0;
right_value19 = (void*)0;
right_value26 = (void*)0;
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
    come_push_stackframe("sType_clone", 52);
        if(_if_conditional11=self==(void*)0,        _if_conditional11) {
            __result7__ = __result_obj__ = (void*)0;
            come_pop_stackframe();
            return __result7__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value14=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional28=self!=((void*)0),        _if_conditional28) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional29) {
            __dec_obj12=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional33) {
            __dec_obj13=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value18=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional34) {
            __dec_obj14=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value19=string_clone(self->mGenericsName))));
            __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional35) {
            __dec_obj18=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value26=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional39=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional39) {
            __dec_obj22=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value34=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0),        _if_conditional52) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional53=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional53) {
            __dec_obj23=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional54) {
            __dec_obj27=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional58=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional58) {
            __dec_obj28=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value43=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional60=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional60) {
            __dec_obj29=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(self->mAlignas))));
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value44) { right_value44 = come_decrement_ref_count2(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mException=self->mException;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional84=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional84) {
            __dec_obj30=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(self->mSizeNum))));
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value45) { right_value45 = come_decrement_ref_count2(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional87=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional87) {
            __dec_obj31=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(self->mOriginalTypeName))));
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional96=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional96) {
            __dec_obj32=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(self->mAsmName))));
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result24__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_pop_stackframe();
        return __result24__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_pop_stackframe();
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
        come_push_stackframe("sType_finalize", 12);
            if(_if_conditional12=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional15) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional16=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional16) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional20=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional20) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional21) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional23=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional23) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional24) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional25=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional25) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional26=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional26) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional27) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        come_pop_stackframe();
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                come_push_stackframe("tuple1$1sTypephp_finalize", 1);
                    if(_if_conditional13=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional13) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                come_pop_stackframe();
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                come_push_stackframe("sType_finalize", 3);
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                come_pop_stackframe();
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                        come_push_stackframe("list_item$1sTypephp_finalize", 1);
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                        come_pop_stackframe();
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                come_push_stackframe("sType_finalize", 4);
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                come_pop_stackframe();
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                        come_push_stackframe("list_item$1sNodephp_finalize", 1);
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                        come_pop_stackframe();
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                come_push_stackframe("sType_finalize", 6);
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                come_pop_stackframe();
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                        come_push_stackframe("list_item$1charphp_finalize", 1);
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        come_pop_stackframe();
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
struct tuple1$1sTypeph* __result8__;
void* right_value15;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional32;
void* right_value16;
struct sType* __dec_obj11;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
right_value16 = (void*)0;
            come_push_stackframe("tuple1$1sTypephp_clone", 5);
                if(_if_conditional30=self==(void*)0,                _if_conditional30) {
                    __result8__ = __result_obj__ = (void*)0;
                    come_pop_stackframe();
                    return __result8__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional32) {
                    __dec_obj11=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result9__ = __result_obj__ = result_12;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
                return __result9__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_pop_stackframe();
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                come_push_stackframe("tuple1$1sTypeph_finalize", 1);
                    if(_if_conditional31=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional31) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                come_pop_stackframe();
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional36;
struct list$1sTypeph* __result10__;
void* right_value20;
void* right_value21;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value25;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
right_value21 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
right_value25 = (void*)0;
            come_push_stackframe("sType_clone", 8);
                if(_if_conditional36=self==((void*)0),                _if_conditional36) {
                    __result10__ = __result_obj__ = ((void*)0);
                    come_pop_stackframe();
                    return __result10__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=sType_clone(it_14->item)))));
                    come_call_finalizer2(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_14=it_14->next;
                }
                __result13__ = __result_obj__ = result_13;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
                return __result13__;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_pop_stackframe();
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                come_push_stackframe("./comelang2.h", 141);
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
                    return __result11__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional37;
void* right_value22;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj15;
_Bool _if_conditional38;
void* right_value23;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj16;
void* right_value24;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj17;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value23 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
right_value24 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                    come_push_stackframe("./comelang2.h", 145);
                        if(_if_conditional37=self->len==0,                        _if_conditional37) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj15=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional38=self->len==1,                            _if_conditional38) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj16=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value24=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj17=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_17;
                                self->tail=litem_17;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        come_pop_stackframe();
                        return __result12__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
            come_push_stackframe("list$1sTypeph_finalize", 0);
            come_pop_stackframe();
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sNodeph* __result14__;
void* right_value27;
void* right_value28;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value33;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value33 = (void*)0;
            come_push_stackframe("sType_clone", 9);
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    __result14__ = __result_obj__ = ((void*)0);
                    come_pop_stackframe();
                    return __result14__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value28=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=sNode_clone(it_19->item)))));
                    if(right_value33) { right_value33 = come_decrement_ref_count2(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_19=it_19->next;
                }
                __result19__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
                return __result19__;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_pop_stackframe();
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
                come_push_stackframe("./comelang2.h", 141);
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result15__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
                    return __result15__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value29;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj19;
_Bool _if_conditional42;
void* right_value30;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj20;
void* right_value31;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj21;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value30 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value31 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                    come_push_stackframe("./comelang2.h", 145);
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj19=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional42=self->len==1,                            _if_conditional42) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj20=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj21=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result16__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        come_pop_stackframe();
                        return __result16__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    come_pop_stackframe();
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional43;
struct sNode* __result17__;
void* right_value32;
struct sNode* result_23;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                    come_push_stackframe("sNode_clone", 12);
                        if(_if_conditional43=self==(void*)0,                        _if_conditional43) {
                            __result17__ = __result_obj__ = (void*)0;
                            come_pop_stackframe();
                            return __result17__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value32) { right_value32 = come_decrement_ref_count2(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional44=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional44) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            result_23->kind=self->kind;
                        }
                        __result18__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        come_pop_stackframe();
                        return __result18__;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_pop_stackframe();
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
            come_push_stackframe("list$1sNodeph_finalize", 0);
            come_pop_stackframe();
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional55;
struct list$1charph* __result20__;
void* right_value36;
void* right_value37;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value41;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
right_value37 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value41 = (void*)0;
            come_push_stackframe("sType_clone", 12);
                if(_if_conditional55=self==((void*)0),                _if_conditional55) {
                    __result20__ = __result_obj__ = ((void*)0);
                    come_pop_stackframe();
                    return __result20__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value41=string_clone(it_25->item)))));
                    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_25=it_25->next;
                }
                __result23__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
                return __result23__;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_pop_stackframe();
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
                come_push_stackframe("./comelang2.h", 141);
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result21__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
                    return __result21__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value38;
struct list_item$1charph* litem_26;
char* __dec_obj24;
_Bool _if_conditional57;
void* right_value39;
struct list_item$1charph* litem_27;
char* __dec_obj25;
void* right_value40;
struct list_item$1charph* litem_28;
char* __dec_obj26;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value39 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value40 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                    come_push_stackframe("./comelang2.h", 145);
                        if(_if_conditional56=self->len==0,                        _if_conditional56) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj24=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional57=self->len==1,                            _if_conditional57) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj25=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj26=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result22__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_pop_stackframe();
                        return __result22__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
            come_push_stackframe("list$1charph_finalize", 0);
            come_pop_stackframe();
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("04heap.c", 46);
        __result26__ = self->len;
        come_pop_stackframe();
        return __result26__;
    come_pop_stackframe();
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj33;
struct tuple1$1sTypeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
        come_push_stackframe("04heap.c", 55);
            __dec_obj33=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __result28__ = __result_obj__ = self;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_pop_stackframe();
            return __result28__;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_pop_stackframe();
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_32;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_33;
struct list$1sTypeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_32, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_33, 0, sizeof(struct list_item$1sTypeph*));
        come_push_stackframe("04heap.c", 57);
            it_32=self->head;
            while(_while_condtional7=it_32!=((void*)0),            _while_condtional7) {
                prev_it_33=it_32;
                it_32=it_32->next;
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result29__ = __result_obj__ = self;
            come_pop_stackframe();
            return __result29__;
        come_pop_stackframe();
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional100;
struct sType* result_35;
struct sType* __result30__;
_Bool _if_conditional101;
struct sType* __result31__;
struct sType* result_36;
struct sType* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_35, 0, sizeof(struct sType*));
memset(&result_36, 0, sizeof(struct sType*));
        come_push_stackframe("04heap.c", 59);
            if(_if_conditional100=self==((void*)0),            _if_conditional100) {
                memset(&result_35,0,sizeof(struct sType*));
                __result30__ = __result_obj__ = result_35;
                come_pop_stackframe();
                return __result30__;
            }
            self->it=self->head;
            if(self->it) {
                __result31__ = __result_obj__ = self->it->item;
                come_pop_stackframe();
                return __result31__;
            }
            memset(&result_36,0,sizeof(struct sType*));
            __result32__ = __result_obj__ = result_36;
            come_pop_stackframe();
            return __result32__;
        come_pop_stackframe();
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
        come_push_stackframe("04heap.c", 59);
            __result33__ = self==((void*)0)||self->it==((void*)0);
            come_pop_stackframe();
            return __result33__;
        come_pop_stackframe();
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional102;
struct sType* result_38;
struct sType* __result34__;
_Bool _if_conditional103;
struct sType* __result35__;
struct sType* result_39;
struct sType* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_38, 0, sizeof(struct sType*));
memset(&result_39, 0, sizeof(struct sType*));
        come_push_stackframe("04heap.c", 59);
            if(_if_conditional102=self==((void*)0)||self->it==((void*)0),            _if_conditional102) {
                memset(&result_38,0,sizeof(struct sType*));
                __result34__ = __result_obj__ = result_38;
                come_pop_stackframe();
                return __result34__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result35__ = __result_obj__ = self->it->item;
                come_pop_stackframe();
                return __result35__;
            }
            memset(&result_39,0,sizeof(struct sType*));
            __result36__ = __result_obj__ = result_39;
            come_pop_stackframe();
            return __result36__;
        come_pop_stackframe();
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional104;
void* right_value53;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj35;
_Bool _if_conditional105;
void* right_value54;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj36;
void* right_value55;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj37;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
right_value54 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
right_value55 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
            come_push_stackframe("04heap.c", 62);
                if(_if_conditional104=self->len==0,                _if_conditional104) {
                    litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 225, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_41->prev=((void*)0);
                    litem_41->next=((void*)0);
                    __dec_obj35=litem_41->item;
                    litem_41->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_41;
                    self->head=litem_41;
                }
                else {
                    if(_if_conditional105=self->len==1,                    _if_conditional105) {
                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 235, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_42->prev=self->head;
                        litem_42->next=((void*)0);
                        __dec_obj36=litem_42->item;
                        litem_42->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_42;
                        self->head->next=litem_42;
                    }
                    else {
                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 245, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->tail;
                        litem_43->next=((void*)0);
                        __dec_obj37=litem_43->item;
                        litem_43->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_43;
                        self->tail=litem_43;
                    }
                }
                self->len++;
                __result37__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
                return __result37__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_pop_stackframe();
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional108;
struct list_item$1sTypeph* it_52;
int i_53;
_Bool _while_condtional8;
_Bool _if_conditional109;
struct sType* __result38__;
struct sType* default_value_54;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_53, 0, sizeof(int));
memset(&default_value_54, 0, sizeof(struct sType*));
            come_push_stackframe("04heap.c", 83);
                if(_if_conditional108=position<0,                _if_conditional108) {
                    position+=self->len;
                }
                it_52=self->head;
                i_53=0;
                while(_while_condtional8=it_52!=((void*)0),                _while_condtional8) {
                    if(_if_conditional109=position==i_53,                    _if_conditional109) {
                        __result38__ = __result_obj__ = it_52->item;
                        come_pop_stackframe();
                        return __result38__;
                    }
                    it_52=it_52->next;
                    i_53++;
                }
                memset(&default_value_54,0,sizeof(struct sType*));
                __result39__ = __result_obj__ = default_value_54;
                come_call_finalizer2(sType_finalize,default_value_54, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
                return __result39__;
                come_call_finalizer2(sType_finalize,default_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_pop_stackframe();
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result40__;
memset(&__result_obj__, 0, sizeof(void*));
            come_push_stackframe("04heap.c", 98);
                __result40__ = self->len;
                come_pop_stackframe();
                return __result40__;
            come_pop_stackframe();
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value67;
struct sType* result_69;
_Bool _if_conditional128;
void* right_value68;
struct sType* __dec_obj42;
struct sType* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&result_69, 0, sizeof(struct sType*));
right_value68 = (void*)0;
come_push_stackframe("04heap.c", 191);
    result_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(generics_type) {
        __dec_obj42=result_69;
        result_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=solve_generics(result_69,generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    __result42__ = __result_obj__ = result_69;
    come_call_finalizer2(sType_finalize,result_69, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_pop_stackframe();
    return __result42__;
    come_call_finalizer2(sType_finalize,result_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
char* p_70;
_Bool _if_conditional129;
_Bool _while_condtional9;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int n_71;
_Bool _while_condtional10;
int __result43__;
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_70, 0, sizeof(char*));
memset(&n_71, 0, sizeof(int));
come_push_stackframe("04heap.c", 221);
    p_70=obj;
    if(_if_conditional129=*p_70==40,    _if_conditional129) {
        p_70++;
        while(_while_condtional9=*p_70!=41,        _while_condtional9) {
            p_70++;
        }
        p_70++;
        if(_if_conditional130=*p_70==40,        _if_conditional130) {
            p_70++;
            if(_if_conditional131=strcmp(p_70,"right_value")==0,            _if_conditional131) {
                p_70+=strlen("right_value");
                if(_if_conditional132=xisdigit(*p_70),                _if_conditional132) {
                    n_71=0;
                    while(_while_condtional10=xisdigit(*p_70),                    _while_condtional10) {
                        n_71=n_71*10+*p_70-48;
                        p_70++;
                    }
                    __result43__ = n_71;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
                    return __result43__;
                }
            }
        }
    }
    __result44__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_pop_stackframe();
    return __result44__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
come_pop_stackframe();
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional133;
void* right_value69;
char* __result45__;
_Bool _if_conditional134;
void* right_value70;
char* __result46__;
void* right_value71;
struct sRightValueObject* new_value_72;
struct sType* __dec_obj43;
void* right_value72;
char* __dec_obj44;
void* right_value73;
char* __dec_obj45;
void* right_value77;
char* buf_76;
void* right_value78;
void* right_value79;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&new_value_72, 0, sizeof(struct sRightValueObject*));
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value77 = (void*)0;
memset(&buf_76, 0, sizeof(char*));
right_value78 = (void*)0;
right_value79 = (void*)0;
come_push_stackframe("04heap.c", 246);
    if(gComeGC) {
        __result45__ = __result_obj__ = ((char*)(right_value69=__builtin_string(obj)));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_pop_stackframe();
        return __result45__;
    }
    if(info->no_output_come_code) {
        __result46__ = __result_obj__ = ((char*)(right_value70=__builtin_string("")));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_pop_stackframe();
        return __result46__;
    }
    new_value_72=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value71=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 229, "struct sRightValueObject"))));
    come_call_finalizer2(sRightValueObject_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=new_value_72->mType;
    new_value_72->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    new_value_72->mFreed=(_Bool)0;
    new_value_72->mID=gRightValueNum;
    __dec_obj44=new_value_72->mVarName;
    new_value_72->mVarName=(char*)come_increment_ref_count(((char*)(right_value72=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj45=new_value_72->mFunName;
    new_value_72->mFunName=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(info->come_fun->mName))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    new_value_72->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_72));
    buf_76=(char*)come_increment_ref_count(((char*)(right_value77=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf_76);
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    __result48__ = __result_obj__ = ((char*)(right_value79=xsprintf("((%s)(%s=%s))",((char*)(right_value78=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_72->mVarName,obj)));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_76 = come_decrement_ref_count2(buf_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_pop_stackframe();
    return __result48__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_76 = come_decrement_ref_count2(buf_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("sRightValueObject_finalize", 3);
        if(_if_conditional135=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional135) {
            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional136=self!=((void*)0)&&self->mVarName!=((void*)0),        _if_conditional136) {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional137=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional137) {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    come_pop_stackframe();
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool _if_conditional138;
void* right_value74;
struct list_item$1sRightValueObjectph* litem_73;
struct sRightValueObject* __dec_obj46;
_Bool _if_conditional140;
void* right_value75;
struct list_item$1sRightValueObjectph* litem_74;
struct sRightValueObject* __dec_obj47;
void* right_value76;
struct list_item$1sRightValueObjectph* litem_75;
struct sRightValueObject* __dec_obj48;
struct list$1sRightValueObjectph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value75 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value76 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sRightValueObjectph*));
    come_push_stackframe("04heap.c", 237);
        if(_if_conditional138=self->len==0,        _if_conditional138) {
            litem_73=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value74=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 225, "struct list_item$1sRightValueObjectph"))));
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_73->prev=((void*)0);
            litem_73->next=((void*)0);
            __dec_obj46=litem_73->item;
            litem_73->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer2(sRightValueObject_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_73;
            self->head=litem_73;
        }
        else {
            if(_if_conditional140=self->len==1,            _if_conditional140) {
                litem_74=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value75=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 235, "struct list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_74->prev=self->head;
                litem_74->next=((void*)0);
                __dec_obj47=litem_74->item;
                litem_74->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_74;
                self->head->next=litem_74;
            }
            else {
                litem_75=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value76=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 245, "struct list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_75->prev=self->tail;
                litem_75->next=((void*)0);
                __dec_obj48=litem_75->item;
                litem_75->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_75;
                self->tail=litem_75;
            }
        }
        self->len++;
        __result47__ = __result_obj__ = self;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_pop_stackframe();
        return __result47__;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_pop_stackframe();
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional139;
memset(&__result_obj__, 0, sizeof(void*));
            come_push_stackframe("list_item$1sRightValueObjectphp_finalize", 1);
                if(_if_conditional139=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional139) {
                    come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            come_pop_stackframe();
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional141;
int i_77;
struct list$1sRightValueObjectph* o2_saved_78;
struct sRightValueObject* it_81;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_77, 0, sizeof(int));
memset(&o2_saved_78, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_81, 0, sizeof(struct sRightValueObject*));
come_push_stackframe("04heap.c", 262);
    if(gComeGC) {
        come_pop_stackframe();
        return;
    }
    i_77=0;
    for(    o2_saved_78=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_81=list$1sRightValueObjectph_begin((o2_saved_78));    !list$1sRightValueObjectph_end((o2_saved_78));    it_81=list$1sRightValueObjectph_next((o2_saved_78))    ){
        if(_if_conditional146=it_81->mID==right_value_num,        _if_conditional146) {
            break;
        }
        i_77++;
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_77,i_77+1);
come_pop_stackframe();
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional142;
struct sRightValueObject* result_79;
struct sRightValueObject* __result49__;
_Bool _if_conditional143;
struct sRightValueObject* __result50__;
struct sRightValueObject* result_80;
struct sRightValueObject* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_79, 0, sizeof(struct sRightValueObject*));
memset(&result_80, 0, sizeof(struct sRightValueObject*));
    come_push_stackframe("04heap.c", 252);
        if(_if_conditional142=self==((void*)0),        _if_conditional142) {
            memset(&result_79,0,sizeof(struct sRightValueObject*));
            __result49__ = __result_obj__ = result_79;
            come_pop_stackframe();
            return __result49__;
        }
        self->it=self->head;
        if(self->it) {
            __result50__ = __result_obj__ = self->it->item;
            come_pop_stackframe();
            return __result50__;
        }
        memset(&result_80,0,sizeof(struct sRightValueObject*));
        __result51__ = __result_obj__ = result_80;
        come_pop_stackframe();
        return __result51__;
    come_pop_stackframe();
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("04heap.c", 252);
        __result52__ = self==((void*)0)||self->it==((void*)0);
        come_pop_stackframe();
        return __result52__;
    come_pop_stackframe();
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional144;
struct sRightValueObject* result_82;
struct sRightValueObject* __result53__;
_Bool _if_conditional145;
struct sRightValueObject* __result54__;
struct sRightValueObject* result_83;
struct sRightValueObject* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(struct sRightValueObject*));
memset(&result_83, 0, sizeof(struct sRightValueObject*));
    come_push_stackframe("04heap.c", 252);
        if(_if_conditional144=self==((void*)0)||self->it==((void*)0),        _if_conditional144) {
            memset(&result_82,0,sizeof(struct sRightValueObject*));
            __result53__ = __result_obj__ = result_82;
            come_pop_stackframe();
            return __result53__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result54__ = __result_obj__ = self->it->item;
            come_pop_stackframe();
            return __result54__;
        }
        memset(&result_83,0,sizeof(struct sRightValueObject*));
        __result55__ = __result_obj__ = result_83;
        come_pop_stackframe();
        return __result55__;
    come_pop_stackframe();
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_84;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_85;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_84, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_85, 0, sizeof(struct list_item$1sRightValueObjectph*));
    come_push_stackframe("04heap.c", 259);
        it_84=self->head;
        while(_while_condtional11=it_84!=((void*)0),        _while_condtional11) {
            prev_it_85=it_84;
            it_84=it_84->next;
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    come_pop_stackframe();
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
int tmp_86;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct list$1sRightValueObjectph* __result56__;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list_item$1sRightValueObjectph* it_89;
int i_90;
_Bool _while_condtional13;
_Bool _if_conditional155;
struct list_item$1sRightValueObjectph* prev_it_91;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list_item$1sRightValueObjectph* it_92;
int i_93;
_Bool _while_condtional14;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1sRightValueObjectph* prev_it_94;
struct list_item$1sRightValueObjectph* it_95;
struct list_item$1sRightValueObjectph* head_prev_it_96;
struct list_item$1sRightValueObjectph* tail_it_97;
int i_98;
_Bool _while_condtional15;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list_item$1sRightValueObjectph* prev_it_99;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list$1sRightValueObjectph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_86, 0, sizeof(int));
memset(&it_89, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_90, 0, sizeof(int));
memset(&prev_it_91, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_92, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_93, 0, sizeof(int));
memset(&prev_it_94, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_95, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_96, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_97, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_98, 0, sizeof(int));
memset(&prev_it_99, 0, sizeof(struct list_item$1sRightValueObjectph*));
    come_push_stackframe("04heap.c", 259);
        if(_if_conditional147=head<0,        _if_conditional147) {
            head+=self->len;
        }
        if(_if_conditional148=tail<0,        _if_conditional148) {
            tail+=self->len+1;
        }
        if(_if_conditional149=head>tail,        _if_conditional149) {
            tmp_86=tail;
            tail=head;
            head=tmp_86;
        }
        if(_if_conditional150=head<0,        _if_conditional150) {
            head=0;
        }
        if(_if_conditional151=tail>self->len,        _if_conditional151) {
            tail=self->len;
        }
        if(_if_conditional152=head==tail,        _if_conditional152) {
            __result56__ = __result_obj__ = self;
            come_pop_stackframe();
            return __result56__;
        }
        if(_if_conditional153=head==0&&tail==self->len,        _if_conditional153) {
            list$1sRightValueObjectph_reset(self);
        }
        else {
            if(_if_conditional154=head==0,            _if_conditional154) {
                it_89=self->head;
                i_90=0;
                while(_while_condtional13=it_89!=((void*)0),                _while_condtional13) {
                    if(_if_conditional155=i_90<tail,                    _if_conditional155) {
                        prev_it_91=it_89;
                        it_89=it_89->next;
                        i_90++;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(_if_conditional156=i_90==tail,                        _if_conditional156) {
                            self->head=it_89;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_89=it_89->next;
                            i_90++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional157=tail==self->len,                _if_conditional157) {
                    it_92=self->head;
                    i_93=0;
                    while(_while_condtional14=it_92!=((void*)0),                    _while_condtional14) {
                        if(_if_conditional158=i_93==head,                        _if_conditional158) {
                            self->tail=it_92->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional159=i_93>=head,                        _if_conditional159) {
                            prev_it_94=it_92;
                            it_92=it_92->next;
                            i_93++;
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_92=it_92->next;
                            i_93++;
                        }
                    }
                }
                else {
                    it_95=self->head;
                    head_prev_it_96=((void*)0);
                    tail_it_97=((void*)0);
                    i_98=0;
                    while(_while_condtional15=it_95!=((void*)0),                    _while_condtional15) {
                        if(_if_conditional160=i_98==head,                        _if_conditional160) {
                            head_prev_it_96=it_95->prev;
                        }
                        if(_if_conditional161=i_98==tail,                        _if_conditional161) {
                            tail_it_97=it_95;
                        }
                        if(_if_conditional162=i_98>=head&&i_98<tail,                        _if_conditional162) {
                            prev_it_99=it_95;
                            it_95=it_95->next;
                            i_98++;
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_95=it_95->next;
                            i_98++;
                        }
                    }
                    if(_if_conditional163=head_prev_it_96!=((void*)0),                    _if_conditional163) {
                        head_prev_it_96->next=tail_it_97;
                    }
                    if(_if_conditional164=tail_it_97!=((void*)0),                    _if_conditional164) {
                        tail_it_97->prev=head_prev_it_96;
                    }
                }
            }
        }
        __result58__ = __result_obj__ = self;
        come_pop_stackframe();
        return __result58__;
    come_pop_stackframe();
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_87;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_88;
struct list$1sRightValueObjectph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_87, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_88, 0, sizeof(struct list_item$1sRightValueObjectph*));
            come_push_stackframe("./comelang2.h", 487);
                it_87=self->head;
                while(_while_condtional12=it_87!=((void*)0),                _while_condtional12) {
                    prev_it_88=it_87;
                    it_87=it_87->next;
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result57__ = __result_obj__ = self;
                come_pop_stackframe();
                return __result57__;
            come_pop_stackframe();
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value80;
char* __result59__;
struct sClass* klass_100;
void* right_value81;
char* type_name_101;
void* right_value82;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&klass_100, 0, sizeof(struct sClass*));
right_value81 = (void*)0;
memset(&type_name_101, 0, sizeof(char*));
right_value82 = (void*)0;
come_push_stackframe("04heap.c", 274);
    if(gComeGC) {
        __result59__ = __result_obj__ = ((char*)(right_value80=__builtin_string(obj)));
        right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_pop_stackframe();
        return __result59__;
    }
    klass_100=type->mClass;
    type_name_101=(char*)come_increment_ref_count(((char*)(right_value81=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result60__ = __result_obj__ = ((char*)(right_value82=xsprintf("(%s)come_increment_ref_count(%s)",type_name_101,obj)));
    type_name_101 = come_decrement_ref_count2(type_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_pop_stackframe();
    return __result60__;
    type_name_101 = come_decrement_ref_count2(type_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional166;
struct list$1CVALUEph* stack_saved_102;
struct list$1sRightValueObjectph* right_value_objects_103;
struct sClass* klass_104;
static int dec_num_105=0;
void* right_value83;
char* name_106;
void* right_value84;
_Bool no_decrement_107;
_Bool no_free_108;
_Bool _if_conditional167;
void* right_value85;
char* c_value_109;
struct sClass* klass_110;
char* class_name_111;
char* fun_name_112;
void* right_value86;
struct sType* type2_113;
void* right_value87;
char* fun_name2_114;
struct sFun* finalizer_115;
_Bool _if_conditional168;
void* right_value88;
_Bool _if_conditional188;
void* right_value89;
char* none_generics_name_119;
void* right_value90;
char* generics_fun_name_120;
void* right_value91;
struct sGenericsFun* generics_fun_124;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value92;
int i_125;
void* right_value93;
char* new_fun_name_126;
void* right_value94;
_Bool _if_conditional205;
void* right_value95;
char* __dec_obj49;
_Bool _if_conditional206;
void* right_value96;
_Bool _if_conditional207;
void* right_value97;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_127;
char* new_fun_name_128;
char* __dec_obj50;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value98;
char* type_name_129;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value99;
_Bool _if_conditional213;
void* right_value100;
char* type_name_130;
void* right_value101;
void* right_value102;
struct list$1sRightValueObjectph* __dec_obj51;
struct list$1CVALUEph* __dec_obj52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_102, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_103, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_104, 0, sizeof(struct sClass*));
right_value83 = (void*)0;
memset(&name_106, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&no_decrement_107, 0, sizeof(_Bool));
memset(&no_free_108, 0, sizeof(_Bool));
right_value85 = (void*)0;
memset(&c_value_109, 0, sizeof(char*));
memset(&klass_110, 0, sizeof(struct sClass*));
memset(&class_name_111, 0, sizeof(char*));
memset(&fun_name_112, 0, sizeof(char*));
right_value86 = (void*)0;
memset(&type2_113, 0, sizeof(struct sType*));
right_value87 = (void*)0;
memset(&fun_name2_114, 0, sizeof(char*));
memset(&finalizer_115, 0, sizeof(struct sFun*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&none_generics_name_119, 0, sizeof(char*));
right_value90 = (void*)0;
memset(&generics_fun_name_120, 0, sizeof(char*));
right_value91 = (void*)0;
memset(&generics_fun_124, 0, sizeof(struct sGenericsFun*));
right_value92 = (void*)0;
memset(&i_125, 0, sizeof(int));
right_value93 = (void*)0;
memset(&new_fun_name_126, 0, sizeof(char*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&fun_127, 0, sizeof(struct sFun*));
memset(&new_fun_name_128, 0, sizeof(char*));
memset(&fun_127, 0, sizeof(struct sFun*));
memset(&new_fun_name_128, 0, sizeof(char*));
right_value98 = (void*)0;
memset(&type_name_129, 0, sizeof(char*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&type_name_130, 0, sizeof(char*));
right_value101 = (void*)0;
right_value102 = (void*)0;
come_push_stackframe("04heap.c", 383);
    if(gComeGC) {
        come_pop_stackframe();
        return;
    }
    stack_saved_102=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_103=info->right_value_objects;
    klass_104=type->mClass;
    name_106=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("__dec_obj%d",++dec_num_105))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value84=make_define_var(type,name_106,(_Bool)0,info))));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,"%s=%s;\n",name_106,obj);
    obj=name_106;
    no_decrement_107=(_Bool)0;
    no_free_108=(_Bool)0;
    if(_if_conditional167=type->mPointerNum>0,    _if_conditional167) {
        c_value_109=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(obj))));
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        klass_110=type->mClass;
        class_name_111=klass_110->mName;
        fun_name_112="finalize";
        type2_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type2_113->mHeap=(_Bool)0;
        fun_name2_114=(char*)come_increment_ref_count(((char*)(right_value87=create_method_name(type,(_Bool)0,fun_name_112,info))));
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        finalizer_115=((void*)0);
        if(_if_conditional168=list$1sTypeph_length(type->mGenericsTypes)>0,        _if_conditional168) {
            finalizer_115=((struct sFun*)(right_value88=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_114)));
            come_call_finalizer2(sFun_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional188=finalizer_115==((void*)0),            _if_conditional188) {
                none_generics_name_119=(char*)come_increment_ref_count(((char*)(right_value89=get_none_generics_name(type2_113->mClass->mName))));
                right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_name_120=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s_%s",none_generics_name_119,fun_name_112))));
                right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_124=((struct sGenericsFun*)(right_value91=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_120)));
                come_call_finalizer2(sGenericsFun_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(generics_fun_124) {
                    if(_if_conditional204=!create_generics_fun((char*)come_increment_ref_count(fun_name2_114),generics_fun_124,type,info),                    _if_conditional204) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_115=((struct sFun*)(right_value92=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_114)));
                    come_call_finalizer2(sFun_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                none_generics_name_119 = come_decrement_ref_count2(none_generics_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_120 = come_decrement_ref_count2(generics_fun_name_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_125=128-1;            i_125>=1;            i_125--            ){
                new_fun_name_126=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("%s_v%d",fun_name2_114,i_125))));
                right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                finalizer_115=((struct sFun*)(right_value94=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_126)));
                come_call_finalizer2(sFun_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(finalizer_115) {
                    __dec_obj49=fun_name2_114;
                    fun_name2_114=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(new_fun_name_126))));
                    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_126 = come_decrement_ref_count2(new_fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_126 = come_decrement_ref_count2(new_fun_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional206=finalizer_115==((void*)0),            _if_conditional206) {
                finalizer_115=((struct sFun*)(right_value96=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_114)));
                come_call_finalizer2(sFun_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
        }
        if(_if_conditional207=finalizer_115==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,        _if_conditional207) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value97=create_finalizer_automatically(type,fun_name_112,info)));
            fun_127=multiple_assign_var1->v1;
            new_fun_name_128=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj50=fun_name2_114;
            fun_name2_114=(char*)come_increment_ref_count(new_fun_name_128);
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_115=fun_127;
            new_fun_name_128 = come_decrement_ref_count2(new_fun_name_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional209=finalizer_115!=((void*)0),        _if_conditional209) {
            if(_if_conditional210=klass_110->mProtocol&&type->mPointerNum==1,            _if_conditional210) {
                type_name_129=(char*)come_increment_ref_count(((char*)(right_value98=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(c_value_109) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_114,c_value_109,type_name_129,c_value_109,type_name_129,c_value_109,type->mAllocaValue,no_decrement_107,no_free_108,force_delete_);
                }
                type_name_129 = come_decrement_ref_count2(type_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_109) {
                    add_come_last_code2(info,((char*)(right_value99=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_114,c_value_109,type->mAllocaValue,no_decrement_107,no_free_108,force_delete_))));
                    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            if(_if_conditional213=klass_110->mProtocol&&type->mPointerNum==1,            _if_conditional213) {
                type_name_130=(char*)come_increment_ref_count(((char*)(right_value100=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_last_code2(info,((char*)(right_value101=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_106,name_106,name_106,type_name_130,name_106,type_name_130,name_106))));
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                type_name_130 = come_decrement_ref_count2(type_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_last_code2(info,((char*)(right_value102=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_106,name_106))));
                right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        c_value_109 = come_decrement_ref_count2(c_value_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name2_114 = come_decrement_ref_count2(fun_name2_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj51=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_103);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj52=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_102);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_106 = come_decrement_ref_count2(name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_116;
unsigned int hash_117;
unsigned int it_118;
_Bool _while_condtional16;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct sFun* __result61__;
_Bool _if_conditional186;
_Bool _if_conditional187;
struct sFun* __result62__;
struct sFun* __result63__;
struct sFun* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_116, 0, sizeof(struct sFun*));
memset(&hash_117, 0, sizeof(unsigned int));
memset(&it_118, 0, sizeof(unsigned int));
            come_push_stackframe("04heap.c", 311);
                memset(&default_value_116,0,sizeof(struct sFun*));
                hash_117=string_get_hash_key(((char*)key))%self->size;
                it_118=hash_117;
                while(_while_condtional16=(_Bool)1,                _while_condtional16) {
                    if(_if_conditional169=self->item_existance[it_118],                    _if_conditional169) {
                        if(_if_conditional170=string_equals(self->keys[it_118],key),                        _if_conditional170) {
                            __result61__ = __result_obj__ = self->items[it_118];
                            come_call_finalizer2(sFun_finalize,default_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_pop_stackframe();
                            return __result61__;
                        }
                        it_118++;
                        if(_if_conditional186=it_118>=self->size,                        _if_conditional186) {
                            it_118=0;
                        }
                        else {
                            if(_if_conditional187=it_118==hash_117,                            _if_conditional187) {
                                __result62__ = __result_obj__ = default_value_116;
                                come_call_finalizer2(sFun_finalize,default_value_116, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_pop_stackframe();
                                return __result62__;
                            }
                        }
                    }
                    else {
                        __result63__ = __result_obj__ = default_value_116;
                        come_call_finalizer2(sFun_finalize,default_value_116, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        come_pop_stackframe();
                        return __result63__;
                    }
                }
                __result64__ = __result_obj__ = default_value_116;
                come_call_finalizer2(sFun_finalize,default_value_116, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
                return __result64__;
                come_call_finalizer2(sFun_finalize,default_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_pop_stackframe();
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
                            come_push_stackframe("sFun_finalize", 13);
                                if(_if_conditional171=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional171) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional172=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional172) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional173=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional173) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional174=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional174) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional175=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional175) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional176=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional176) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional177=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional177) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional180=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional180) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional181=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional181) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional182=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional182) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional183=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional183) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional184=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional184) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional185=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional185) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            come_pop_stackframe();
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
                                    come_push_stackframe("sBlock_finalize", 2);
                                        if(_if_conditional178=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional178) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional179=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional179) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    come_pop_stackframe();
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
struct sGenericsFun* default_value_121;
unsigned int hash_122;
unsigned int it_123;
_Bool _while_condtional17;
_Bool _if_conditional189;
_Bool _if_conditional190;
struct sGenericsFun* __result65__;
_Bool _if_conditional201;
_Bool _if_conditional202;
struct sGenericsFun* __result66__;
struct sGenericsFun* __result67__;
struct sGenericsFun* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_121, 0, sizeof(struct sGenericsFun*));
memset(&hash_122, 0, sizeof(unsigned int));
memset(&it_123, 0, sizeof(unsigned int));
                come_push_stackframe("04heap.c", 317);
                    memset(&default_value_121,0,sizeof(struct sGenericsFun*));
                    hash_122=string_get_hash_key(((char*)key))%self->size;
                    it_123=hash_122;
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        if(_if_conditional189=self->item_existance[it_123],                        _if_conditional189) {
                            if(_if_conditional190=string_equals(self->keys[it_123],key),                            _if_conditional190) {
                                __result65__ = __result_obj__ = self->items[it_123];
                                come_call_finalizer2(sGenericsFun_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_pop_stackframe();
                                return __result65__;
                            }
                            it_123++;
                            if(_if_conditional201=it_123>=self->size,                            _if_conditional201) {
                                it_123=0;
                            }
                            else {
                                if(_if_conditional202=it_123==hash_122,                                _if_conditional202) {
                                    __result66__ = __result_obj__ = default_value_121;
                                    come_call_finalizer2(sGenericsFun_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    come_pop_stackframe();
                                    return __result66__;
                                }
                            }
                        }
                        else {
                            __result67__ = __result_obj__ = default_value_121;
                            come_call_finalizer2(sGenericsFun_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            come_pop_stackframe();
                            return __result67__;
                        }
                    }
                    __result68__ = __result_obj__ = default_value_121;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
                    return __result68__;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_pop_stackframe();
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
memset(&__result_obj__, 0, sizeof(void*));
                                come_push_stackframe("sGenericsFun_finalize", 10);
                                    if(_if_conditional191=self!=((void*)0)&&self->mImplType!=((void*)0),                                    _if_conditional191) {
                                        come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional192=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                                    _if_conditional192) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional193=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                                    _if_conditional193) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional194=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional194) {
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional195=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional195) {
                                        come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional196=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional196) {
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional197=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional197) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional198=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                    _if_conditional198) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional199=self!=((void*)0)&&self->mBlock!=((void*)0),                                    _if_conditional199) {
                                        self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional200=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                                    _if_conditional200) {
                                        self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                come_pop_stackframe();
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
            come_push_stackframe("tuple2$2sFunpcharphp_finalize", 1);
                if(_if_conditional208=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional208) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            come_pop_stackframe();
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("list$1sRightValueObjectph_finalize", 0);
    come_pop_stackframe();
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("list$1CVALUEph_finalize", 0);
    come_pop_stackframe();
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_131;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_132;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_132, 0, sizeof(struct list_item$1CVALUEph*));
    come_push_stackframe("04heap.c", 383);
        it_131=self->head;
        while(_while_condtional18=it_131!=((void*)0),        _while_condtional18) {
            prev_it_132=it_131;
            it_131=it_131->next;
            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    come_pop_stackframe();
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional214;
memset(&__result_obj__, 0, sizeof(void*));
            come_push_stackframe("list_item$1CVALUEphp_finalize", 1);
                if(_if_conditional214=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional214) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            come_pop_stackframe();
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
                    come_push_stackframe("CVALUE_finalize", 2);
                        if(_if_conditional215=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional215) {
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional216=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional216) {
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    come_pop_stackframe();
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional217;
struct list$1CVALUEph* stack_saved_133;
struct list$1sRightValueObjectph* right_value_objects_134;
struct sType* type_before_135;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value103;
char* c_value_136;
struct sClass* klass_137;
char* class_name_138;
char* fun_name_139;
void* right_value104;
struct sType* type2_140;
void* right_value105;
char* fun_name2_141;
struct sFun* finalizer_142;
_Bool _if_conditional221;
void* right_value106;
_Bool _if_conditional222;
void* right_value107;
char* none_generics_name_143;
void* right_value108;
char* generics_fun_name_144;
void* right_value109;
struct sGenericsFun* generics_fun_145;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value110;
int i_146;
void* right_value111;
char* new_fun_name_147;
void* right_value112;
_Bool _if_conditional225;
void* right_value113;
char* __dec_obj53;
_Bool _if_conditional226;
void* right_value114;
_Bool _if_conditional227;
void* right_value115;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_148;
char* new_fun_name_149;
char* __dec_obj54;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value116;
char* type_name_150;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value117;
void* right_value118;
_Bool _if_conditional237;
void* right_value119;
void* right_value120;
_Bool _if_conditional238;
struct list$1tuple2$2charphsTypephph* o2_saved_151;
struct tuple2$2charphsTypeph* it_154;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_157;
struct sType* field_type_158;
_Bool _if_conditional243;
void* right_value121;
void* right_value122;
char* obj_159;
_Bool _if_conditional247;
struct list$1tuple2$2charphsTypephph* o2_saved_162;
struct tuple2$2charphsTypeph* it_163;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_164;
struct sType* field_type_165;
_Bool _if_conditional248;
void* right_value123;
void* right_value124;
char* obj_166;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value125;
char* type_name_167;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value126;
char* c_value_168;
struct sClass* klass_169;
char* class_name_170;
char* fun_name_171;
void* right_value127;
struct sType* type2_172;
void* right_value128;
char* fun_name2_173;
struct sFun* finalizer_174;
_Bool _if_conditional259;
void* right_value129;
_Bool _if_conditional260;
void* right_value130;
char* none_generics_name_175;
void* right_value131;
char* generics_fun_name_176;
void* right_value132;
struct sGenericsFun* generics_fun_177;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value133;
int i_178;
void* right_value134;
char* new_fun_name_179;
void* right_value135;
_Bool _if_conditional263;
void* right_value136;
char* __dec_obj55;
_Bool _if_conditional264;
void* right_value137;
_Bool _if_conditional265;
void* right_value138;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_180;
char* new_fun_name_181;
char* __dec_obj56;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value139;
char* type_name_182;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value140;
void* right_value141;
_Bool _if_conditional275;
void* right_value142;
void* right_value143;
_Bool _if_conditional276;
struct list$1tuple2$2charphsTypephph* o2_saved_183;
struct tuple2$2charphsTypeph* it_184;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_185;
struct sType* field_type_186;
_Bool _if_conditional277;
void* right_value144;
void* right_value145;
char* obj_187;
_Bool _if_conditional278;
struct list$1tuple2$2charphsTypephph* o2_saved_188;
struct tuple2$2charphsTypeph* it_189;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_190;
struct sType* field_type_191;
_Bool _if_conditional279;
void* right_value146;
void* right_value147;
char* obj_192;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value148;
char* type_name_193;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct list$1sRightValueObjectph* __dec_obj57;
struct list$1CVALUEph* __dec_obj58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_133, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_134, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_135, 0, sizeof(struct sType*));
right_value103 = (void*)0;
memset(&c_value_136, 0, sizeof(char*));
memset(&klass_137, 0, sizeof(struct sClass*));
memset(&class_name_138, 0, sizeof(char*));
memset(&fun_name_139, 0, sizeof(char*));
right_value104 = (void*)0;
memset(&type2_140, 0, sizeof(struct sType*));
right_value105 = (void*)0;
memset(&fun_name2_141, 0, sizeof(char*));
memset(&finalizer_142, 0, sizeof(struct sFun*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&none_generics_name_143, 0, sizeof(char*));
right_value108 = (void*)0;
memset(&generics_fun_name_144, 0, sizeof(char*));
right_value109 = (void*)0;
memset(&generics_fun_145, 0, sizeof(struct sGenericsFun*));
right_value110 = (void*)0;
memset(&i_146, 0, sizeof(int));
right_value111 = (void*)0;
memset(&new_fun_name_147, 0, sizeof(char*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&fun_148, 0, sizeof(struct sFun*));
memset(&new_fun_name_149, 0, sizeof(char*));
memset(&fun_148, 0, sizeof(struct sFun*));
memset(&new_fun_name_149, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&type_name_150, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&o2_saved_151, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_154, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_157, 0, sizeof(char*));
memset(&field_type_158, 0, sizeof(struct sType*));
memset(&name_157, 0, sizeof(char*));
memset(&field_type_158, 0, sizeof(struct sType*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&obj_159, 0, sizeof(char*));
memset(&o2_saved_162, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_163, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_164, 0, sizeof(char*));
memset(&field_type_165, 0, sizeof(struct sType*));
memset(&name_164, 0, sizeof(char*));
memset(&field_type_165, 0, sizeof(struct sType*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&obj_166, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&type_name_167, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&c_value_168, 0, sizeof(char*));
memset(&klass_169, 0, sizeof(struct sClass*));
memset(&class_name_170, 0, sizeof(char*));
memset(&fun_name_171, 0, sizeof(char*));
right_value127 = (void*)0;
memset(&type2_172, 0, sizeof(struct sType*));
right_value128 = (void*)0;
memset(&fun_name2_173, 0, sizeof(char*));
memset(&finalizer_174, 0, sizeof(struct sFun*));
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&none_generics_name_175, 0, sizeof(char*));
right_value131 = (void*)0;
memset(&generics_fun_name_176, 0, sizeof(char*));
right_value132 = (void*)0;
memset(&generics_fun_177, 0, sizeof(struct sGenericsFun*));
right_value133 = (void*)0;
memset(&i_178, 0, sizeof(int));
right_value134 = (void*)0;
memset(&new_fun_name_179, 0, sizeof(char*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&fun_180, 0, sizeof(struct sFun*));
memset(&new_fun_name_181, 0, sizeof(char*));
memset(&fun_180, 0, sizeof(struct sFun*));
memset(&new_fun_name_181, 0, sizeof(char*));
right_value139 = (void*)0;
memset(&type_name_182, 0, sizeof(char*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&o2_saved_183, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_184, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_185, 0, sizeof(char*));
memset(&field_type_186, 0, sizeof(struct sType*));
memset(&name_185, 0, sizeof(char*));
memset(&field_type_186, 0, sizeof(struct sType*));
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&obj_187, 0, sizeof(char*));
memset(&o2_saved_188, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_189, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_190, 0, sizeof(char*));
memset(&field_type_191, 0, sizeof(struct sType*));
memset(&name_190, 0, sizeof(char*));
memset(&field_type_191, 0, sizeof(struct sType*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&obj_192, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&type_name_193, 0, sizeof(char*));
come_push_stackframe("04heap.c", 751);
    if(gComeGC) {
        come_pop_stackframe();
        return;
    }
    stack_saved_133=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_134=info->right_value_objects;
    type_before_135=type;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional219=type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value),    _if_conditional219) {
        if(force_delete_) {
            c_value_136=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(obj))));
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_137=type->mClass;
            class_name_138=klass_137->mName;
            fun_name_139="force_finalize";
            type2_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_140->mHeap=(_Bool)0;
            fun_name2_141=(char*)come_increment_ref_count(((char*)(right_value105=create_method_name(type,(_Bool)0,fun_name_139,info))));
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_142=((void*)0);
            if(_if_conditional221=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional221) {
                finalizer_142=((struct sFun*)(right_value106=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_141)));
                come_call_finalizer2(sFun_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional222=finalizer_142==((void*)0),                _if_conditional222) {
                    none_generics_name_143=(char*)come_increment_ref_count(((char*)(right_value107=get_none_generics_name(type2_140->mClass->mName))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_144=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("%s_%s",none_generics_name_143,fun_name_139))));
                    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_145=((struct sGenericsFun*)(right_value109=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_144)));
                    come_call_finalizer2(sGenericsFun_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(generics_fun_145) {
                        if(_if_conditional224=!create_generics_fun((char*)come_increment_ref_count(fun_name2_141),generics_fun_145,type,info),                        _if_conditional224) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_142=((struct sFun*)(right_value110=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_141)));
                        come_call_finalizer2(sFun_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    none_generics_name_143 = come_decrement_ref_count2(none_generics_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_144 = come_decrement_ref_count2(generics_fun_name_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_146=128-1;                i_146>=1;                i_146--                ){
                    new_fun_name_147=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("%s_v%d",fun_name2_141,i_146))));
                    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_142=((struct sFun*)(right_value112=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_147)));
                    come_call_finalizer2(sFun_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(finalizer_142) {
                        __dec_obj53=fun_name2_141;
                        fun_name2_141=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(new_fun_name_147))));
                        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_147 = come_decrement_ref_count2(new_fun_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_147 = come_decrement_ref_count2(new_fun_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional226=finalizer_142==((void*)0),                _if_conditional226) {
                    finalizer_142=((struct sFun*)(right_value114=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_141)));
                    come_call_finalizer2(sFun_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
            if(_if_conditional227=finalizer_142==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional227) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value115=create_force_finalizer_automatically(type,fun_name_139,info)));
                fun_148=multiple_assign_var2->v1;
                new_fun_name_149=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj54=fun_name2_141;
                fun_name2_141=(char*)come_increment_ref_count(new_fun_name_149);
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_142=fun_148;
                new_fun_name_149 = come_decrement_ref_count2(new_fun_name_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional228=finalizer_142!=((void*)0),            _if_conditional228) {
                if(_if_conditional229=klass_137->mProtocol&&type->mPointerNum==1,                _if_conditional229) {
                    type_name_150=(char*)come_increment_ref_count(((char*)(right_value116=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_136) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_141,c_value_136,type_name_150,c_value_136,type_name_150,c_value_136,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_141,c_value_136,type_name_150,c_value_136,type_name_150,c_value_136,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_141,c_value_136,type_name_150,c_value_136,type_name_150,c_value_136,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_141,c_value_136,type_name_150,c_value_136,type_name_150,c_value_136,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_150 = come_decrement_ref_count2(type_name_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_136) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value117=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_141,c_value_136,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value118=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_141,c_value_136,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value119=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_141,c_value_136,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value120=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_141,c_value_136,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional238=klass_137->mStruct&&type->mPointerNum==0,                _if_conditional238) {
                    for(                    o2_saved_151=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_137->mFields)),it_154=list$1tuple2$2charphsTypephph_begin((o2_saved_151));                    !list$1tuple2$2charphsTypephph_end((o2_saved_151));                    it_154=list$1tuple2$2charphsTypephph_next((o2_saved_151))                    ){
                        multiple_assign_var3=it_154;
                        name_157=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_158=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(_if_conditional243=field_type_158->mHeap&&field_type_158->mPointerNum>0,                        _if_conditional243) {
                            obj_159=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("(((%s)%s).%s)",((char*)(right_value121=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_136,name_157))));
                            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            free_object(field_type_158,obj_159,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_159 = come_decrement_ref_count2(obj_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_157 = come_decrement_ref_count2(name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional247=klass_137->mStruct&&type->mPointerNum==1,                    _if_conditional247) {
                        for(                        o2_saved_162=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_137->mFields)),it_163=list$1tuple2$2charphsTypephph_begin((o2_saved_162));                        !list$1tuple2$2charphsTypephph_end((o2_saved_162));                        it_163=list$1tuple2$2charphsTypephph_next((o2_saved_162))                        ){
                            multiple_assign_var4=it_163;
                            name_164=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_165=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(_if_conditional248=field_type_165->mHeap&&field_type_165->mPointerNum>0,                            _if_conditional248) {
                                obj_166=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("(((%s)%s)->%s)",((char*)(right_value123=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_136,name_164))));
                                right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                free_object(field_type_165,obj_166,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_166 = come_decrement_ref_count2(obj_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_164 = come_decrement_ref_count2(name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional249=!type->mAllocaValue,                _if_conditional249) {
                    if(_if_conditional250=klass_137->mProtocol&&type->mPointerNum==1,                    _if_conditional250) {
                        if(c_value_136) {
                            type_name_167=(char*)come_increment_ref_count(((char*)(right_value125=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_136,c_value_136,c_value_136,type_name_167,c_value_136,type_name_167,c_value_136,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_136,c_value_136,c_value_136,type_name_167,c_value_136,type_name_167,c_value_136,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_136,c_value_136,c_value_136,type_name_167,c_value_136,type_name_167,c_value_136,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_136,c_value_136,c_value_136,type_name_167,c_value_136,type_name_167,c_value_136,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_167 = come_decrement_ref_count2(type_name_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_136) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_136,c_value_136,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_136,c_value_136,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_136,c_value_136,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_136,c_value_136,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_136 = come_decrement_ref_count2(c_value_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_141 = come_decrement_ref_count2(fun_name2_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            c_value_168=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(obj))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_169=type->mClass;
            class_name_170=klass_169->mName;
            fun_name_171="finalize";
            type2_172=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_172->mHeap=(_Bool)0;
            fun_name2_173=(char*)come_increment_ref_count(((char*)(right_value128=create_method_name(type,(_Bool)0,fun_name_171,info))));
            right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_174=((void*)0);
            if(_if_conditional259=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional259) {
                finalizer_174=((struct sFun*)(right_value129=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_173)));
                come_call_finalizer2(sFun_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional260=finalizer_174==((void*)0),                _if_conditional260) {
                    none_generics_name_175=(char*)come_increment_ref_count(((char*)(right_value130=get_none_generics_name(type2_172->mClass->mName))));
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%s_%s",none_generics_name_175,fun_name_171))));
                    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_177=((struct sGenericsFun*)(right_value132=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_176)));
                    come_call_finalizer2(sGenericsFun_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(generics_fun_177) {
                        if(_if_conditional262=!create_generics_fun((char*)come_increment_ref_count(fun_name2_173),generics_fun_177,type,info),                        _if_conditional262) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_174=((struct sFun*)(right_value133=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_173)));
                        come_call_finalizer2(sFun_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    none_generics_name_175 = come_decrement_ref_count2(none_generics_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_178=128-1;                i_178>=1;                i_178--                ){
                    new_fun_name_179=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s_v%d",fun_name2_173,i_178))));
                    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_174=((struct sFun*)(right_value135=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_179)));
                    come_call_finalizer2(sFun_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(finalizer_174) {
                        __dec_obj55=fun_name2_173;
                        fun_name2_173=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(new_fun_name_179))));
                        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_179 = come_decrement_ref_count2(new_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_179 = come_decrement_ref_count2(new_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional264=finalizer_174==((void*)0),                _if_conditional264) {
                    finalizer_174=((struct sFun*)(right_value137=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_173)));
                    come_call_finalizer2(sFun_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
            if(_if_conditional265=finalizer_174==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional265) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(right_value138=create_finalizer_automatically(type,fun_name_171,info)));
                fun_180=multiple_assign_var5->v1;
                new_fun_name_181=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj56=fun_name2_173;
                fun_name2_173=(char*)come_increment_ref_count(new_fun_name_181);
                __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_174=fun_180;
                new_fun_name_181 = come_decrement_ref_count2(new_fun_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional266=finalizer_174!=((void*)0),            _if_conditional266) {
                if(_if_conditional267=klass_169->mProtocol&&type->mPointerNum==1,                _if_conditional267) {
                    type_name_182=(char*)come_increment_ref_count(((char*)(right_value139=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_168) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_173,c_value_168,type_name_182,c_value_168,type_name_182,c_value_168,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_173,c_value_168,type_name_182,c_value_168,type_name_182,c_value_168,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_173,c_value_168,type_name_182,c_value_168,type_name_182,c_value_168,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_173,c_value_168,type_name_182,c_value_168,type_name_182,c_value_168,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_182 = come_decrement_ref_count2(type_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_168) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value140=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_173,c_value_168,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value141=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_173,c_value_168,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value142=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_173,c_value_168,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value143=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_173,c_value_168,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional276=klass_169->mStruct&&type->mPointerNum==0,                _if_conditional276) {
                    for(                    o2_saved_183=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_169->mFields)),it_184=list$1tuple2$2charphsTypephph_begin((o2_saved_183));                    !list$1tuple2$2charphsTypephph_end((o2_saved_183));                    it_184=list$1tuple2$2charphsTypephph_next((o2_saved_183))                    ){
                        multiple_assign_var6=it_184;
                        name_185=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_186=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(_if_conditional277=field_type_186->mHeap&&field_type_186->mPointerNum>0,                        _if_conditional277) {
                            obj_187=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("(((%s)%s).%s)",((char*)(right_value144=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_168,name_185))));
                            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            free_object(field_type_186,obj_187,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_187 = come_decrement_ref_count2(obj_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_185 = come_decrement_ref_count2(name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional278=klass_169->mStruct&&type->mPointerNum==1,                    _if_conditional278) {
                        for(                        o2_saved_188=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_169->mFields)),it_189=list$1tuple2$2charphsTypephph_begin((o2_saved_188));                        !list$1tuple2$2charphsTypephph_end((o2_saved_188));                        it_189=list$1tuple2$2charphsTypephph_next((o2_saved_188))                        ){
                            multiple_assign_var7=it_189;
                            name_190=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_191=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(_if_conditional279=field_type_191->mHeap&&field_type_191->mPointerNum>0,                            _if_conditional279) {
                                obj_192=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("(((%s)%s)->%s)",((char*)(right_value146=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_168,name_190))));
                                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                free_object(field_type_191,obj_192,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_192 = come_decrement_ref_count2(obj_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_190 = come_decrement_ref_count2(name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional280=!type->mAllocaValue,                _if_conditional280) {
                    if(_if_conditional281=klass_169->mProtocol&&type->mPointerNum==1,                    _if_conditional281) {
                        if(c_value_168) {
                            type_name_193=(char*)come_increment_ref_count(((char*)(right_value148=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_168,c_value_168,c_value_168,type_name_193,c_value_168,type_name_193,c_value_168,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_168,c_value_168,c_value_168,type_name_193,c_value_168,type_name_193,c_value_168,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_168,c_value_168,c_value_168,type_name_193,c_value_168,type_name_193,c_value_168,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_168,c_value_168,c_value_168,type_name_193,c_value_168,type_name_193,c_value_168,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_193 = come_decrement_ref_count2(type_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_168) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_168,c_value_168,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_168,c_value_168,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_168,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_168,c_value_168,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_168 = come_decrement_ref_count2(c_value_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_173 = come_decrement_ref_count2(fun_name2_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj57=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_134);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj58=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_133);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional239;
struct tuple2$2charphsTypeph* result_152;
struct tuple2$2charphsTypeph* __result69__;
_Bool _if_conditional240;
struct tuple2$2charphsTypeph* __result70__;
struct tuple2$2charphsTypeph* result_153;
struct tuple2$2charphsTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_152, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_153, 0, sizeof(struct tuple2$2charphsTypeph*));
                    come_push_stackframe("04heap.c", 505);
                        if(_if_conditional239=self==((void*)0),                        _if_conditional239) {
                            memset(&result_152,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result69__ = __result_obj__ = result_152;
                            come_pop_stackframe();
                            return __result69__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result70__ = __result_obj__ = self->it->item;
                            come_pop_stackframe();
                            return __result70__;
                        }
                        memset(&result_153,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result71__ = __result_obj__ = result_153;
                        come_pop_stackframe();
                        return __result71__;
                    come_pop_stackframe();
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                    come_push_stackframe("04heap.c", 505);
                        __result72__ = self==((void*)0)||self->it==((void*)0);
                        come_pop_stackframe();
                        return __result72__;
                    come_pop_stackframe();
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional241;
struct tuple2$2charphsTypeph* result_155;
struct tuple2$2charphsTypeph* __result73__;
_Bool _if_conditional242;
struct tuple2$2charphsTypeph* __result74__;
struct tuple2$2charphsTypeph* result_156;
struct tuple2$2charphsTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_156, 0, sizeof(struct tuple2$2charphsTypeph*));
                    come_push_stackframe("04heap.c", 505);
                        if(_if_conditional241=self==((void*)0)||self->it==((void*)0),                        _if_conditional241) {
                            memset(&result_155,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result73__ = __result_obj__ = result_155;
                            come_pop_stackframe();
                            return __result73__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result74__ = __result_obj__ = self->it->item;
                            come_pop_stackframe();
                            return __result74__;
                        }
                        memset(&result_156,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result75__ = __result_obj__ = result_156;
                        come_pop_stackframe();
                        return __result75__;
                    come_pop_stackframe();
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_160;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_161;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_160, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_161, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    come_push_stackframe("04heap.c", 513);
                        it_160=self->head;
                        while(_while_condtional19=it_160!=((void*)0),                        _while_condtional19) {
                            prev_it_161=it_160;
                            it_160=it_160->next;
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    come_pop_stackframe();
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional244;
memset(&__result_obj__, 0, sizeof(void*));
                            come_push_stackframe("list_item$1tuple2$2charphsTypephphp_finalize", 1);
                                if(_if_conditional244=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional244) {
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                            come_pop_stackframe();
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional245;
_Bool _if_conditional246;
memset(&__result_obj__, 0, sizeof(void*));
                                    come_push_stackframe("tuple2$2charphsTypephp_finalize", 2);
                                        if(_if_conditional245=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional245) {
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional246=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional246) {
                                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    come_pop_stackframe();
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value149;
struct sType* type2_194;
_Bool _if_conditional290;
char* result_195;
struct sType* result_type_196;
struct list$1CVALUEph* stack_saved_197;
struct list$1sRightValueObjectph* right_value_objects_198;
void* right_value150;
char* c_value_199;
struct sClass* klass_200;
char* class_name_201;
char* fun_name_202;
struct sFun* cloner_203;
char* fun_name2_204;
_Bool _if_conditional291;
void* right_value151;
char* none_generics_name_205;
void* right_value152;
struct sType* obj_type_206;
void* right_value153;
char* __dec_obj59;
void* right_value154;
char* fun_name3_207;
void* right_value155;
struct sGenericsFun* generics_fun_210;
_Bool _if_conditional296;
void* right_value156;
_Bool _if_conditional297;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
void* right_value161;
struct tuple2$2sTypephcharph* __result81__;
void* right_value162;
void* right_value163;
char* __dec_obj62;
int i_211;
void* right_value164;
char* new_fun_name_212;
void* right_value165;
_Bool _if_conditional300;
void* right_value166;
char* __dec_obj63;
_Bool _if_conditional301;
void* right_value167;
_Bool _if_conditional302;
void* right_value168;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_213;
char* new_fun_name_214;
char* __dec_obj64;
_Bool _if_conditional303;
struct sType* __dec_obj65;
void* right_value169;
struct sType* __dec_obj66;
void* right_value170;
char* __dec_obj67;
_Bool _if_conditional304;
void* right_value171;
char* __dec_obj68;
void* right_value172;
struct sType* __dec_obj69;
void* right_value173;
char* type_name_215;
void* right_value174;
char* __dec_obj70;
_Bool _if_conditional305;
void* right_value175;
char* __dec_obj71;
struct list$1sRightValueObjectph* __dec_obj72;
struct list$1CVALUEph* __dec_obj73;
void* right_value176;
void* right_value177;
struct tuple2$2sTypephcharph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&type2_194, 0, sizeof(struct sType*));
memset(&result_195, 0, sizeof(char*));
memset(&result_type_196, 0, sizeof(struct sType*));
memset(&stack_saved_197, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_198, 0, sizeof(struct list$1sRightValueObjectph*));
right_value150 = (void*)0;
memset(&c_value_199, 0, sizeof(char*));
memset(&klass_200, 0, sizeof(struct sClass*));
memset(&class_name_201, 0, sizeof(char*));
memset(&fun_name_202, 0, sizeof(char*));
memset(&cloner_203, 0, sizeof(struct sFun*));
memset(&fun_name2_204, 0, sizeof(char*));
right_value151 = (void*)0;
memset(&none_generics_name_205, 0, sizeof(char*));
right_value152 = (void*)0;
memset(&obj_type_206, 0, sizeof(struct sType*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&fun_name3_207, 0, sizeof(char*));
right_value155 = (void*)0;
memset(&generics_fun_210, 0, sizeof(struct sGenericsFun*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&i_211, 0, sizeof(int));
right_value164 = (void*)0;
memset(&new_fun_name_212, 0, sizeof(char*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&fun_213, 0, sizeof(struct sFun*));
memset(&new_fun_name_214, 0, sizeof(char*));
memset(&fun_213, 0, sizeof(struct sFun*));
memset(&new_fun_name_214, 0, sizeof(char*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&type_name_215, 0, sizeof(char*));
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
come_push_stackframe("04heap.c", 845);
    type2_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_195=((void*)0);
    result_type_196=((void*)0);
    stack_saved_197=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_198=info->right_value_objects;
    c_value_199=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(obj))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_200=type->mClass;
    class_name_201=klass_200->mName;
    fun_name_202="clone";
    cloner_203=((void*)0);
    if(_if_conditional291=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional291) {
        none_generics_name_205=(char*)come_increment_ref_count(((char*)(right_value151=get_none_generics_name(type->mClass->mName))));
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_206=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj59=fun_name2_204;
        fun_name2_204=(char*)come_increment_ref_count(((char*)(right_value153=create_method_name(obj_type_206,(_Bool)0,fun_name_202,info))));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_207=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s_%s",none_generics_name_205,fun_name_202))));
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_210=((struct sGenericsFun*)(right_value155=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_207,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_fun_210) {
            if(_if_conditional297=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(fun_name2_204)))),generics_fun_210,obj_type_206,info),            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional297) {
                __result81__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value161=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value160=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 785, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 785, "struct sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string("")))))));
                none_generics_name_205 = come_decrement_ref_count2(none_generics_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_207 = come_decrement_ref_count2(fun_name3_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_195 = come_decrement_ref_count2(result_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_199 = come_decrement_ref_count2(c_value_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_204 = come_decrement_ref_count2(fun_name2_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_pop_stackframe();
                return __result81__;
            }
        }
        cloner_203=((struct sFun*)(right_value162=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_204)));
        come_call_finalizer2(sFun_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        none_generics_name_205 = come_decrement_ref_count2(none_generics_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_207 = come_decrement_ref_count2(fun_name3_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj62=fun_name2_204;
        fun_name2_204=(char*)come_increment_ref_count(((char*)(right_value163=create_method_name(type,(_Bool)0,fun_name_202,info))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_211=128-1;        i_211>=1;        i_211--        ){
            new_fun_name_212=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("%s_v%d",fun_name2_204,i_211))));
            right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_203=((struct sFun*)(right_value165=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_212)));
            come_call_finalizer2(sFun_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(cloner_203) {
                __dec_obj63=fun_name2_204;
                fun_name2_204=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(new_fun_name_212))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_212 = come_decrement_ref_count2(new_fun_name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_212 = come_decrement_ref_count2(new_fun_name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional301=cloner_203==((void*)0),        _if_conditional301) {
            cloner_203=((struct sFun*)(right_value167=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_204)));
            come_call_finalizer2(sFun_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(_if_conditional302=cloner_203==((void*)0)&&!type->mClass->mNumber,    _if_conditional302) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(right_value168=create_cloner_automatically(type,fun_name_202,info)));
        fun_213=multiple_assign_var8->v1;
        new_fun_name_214=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj64=fun_name2_204;
        fun_name2_204=(char*)come_increment_ref_count(new_fun_name_214);
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_203=fun_213;
        new_fun_name_214 = come_decrement_ref_count2(new_fun_name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional303=cloner_203!=((void*)0),    _if_conditional303) {
        __dec_obj65=result_type_196;
        result_type_196=(struct sType*)come_increment_ref_count(cloner_203->mResultType);
        come_call_finalizer2(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj66=result_type_196;
        result_type_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=solve_generics(result_type_196,type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj67=result_195;
        result_195=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s(%s)",fun_name2_204,c_value_199))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj68=result_195;
            result_195=(char*)come_increment_ref_count(((char*)(right_value171=append_stackframe(result_195,result_type_196,info))));
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        __dec_obj69=result_type_196;
        result_type_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type2_194->mHeap=(_Bool)1;
        type_name_215=(char*)come_increment_ref_count(((char*)(right_value173=make_type_name_string(type2_194,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj70=result_195;
        result_195=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_215,c_value_199,info->sname,info->sline,type_name_215))));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj71=result_195;
            result_195=(char*)come_increment_ref_count(((char*)(right_value175=append_stackframe(result_195,result_type_196,info))));
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        type_name_215 = come_decrement_ref_count2(type_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj72=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_198);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj73=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_197);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result82__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value177=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value176=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 842, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_196),(char*)come_increment_ref_count(result_195))));
    come_call_finalizer2(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_195 = come_decrement_ref_count2(result_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_199 = come_decrement_ref_count2(c_value_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_204 = come_decrement_ref_count2(fun_name2_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_pop_stackframe();
    return __result82__;
    come_call_finalizer2(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_195 = come_decrement_ref_count2(result_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_199 = come_decrement_ref_count2(c_value_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_204 = come_decrement_ref_count2(fun_name2_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_208;
unsigned int it_209;
_Bool _while_condtional20;
_Bool _if_conditional292;
_Bool _if_conditional293;
struct sGenericsFun* __result76__;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct sGenericsFun* __result77__;
struct sGenericsFun* __result78__;
struct sGenericsFun* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_208, 0, sizeof(unsigned int));
memset(&it_209, 0, sizeof(unsigned int));
        come_push_stackframe("04heap.c", 781);
            hash_208=string_get_hash_key(((char*)key))%self->size;
            it_209=hash_208;
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                if(_if_conditional292=self->item_existance[it_209],                _if_conditional292) {
                    if(_if_conditional293=string_equals(self->keys[it_209],key),                    _if_conditional293) {
                        __result76__ = __result_obj__ = self->items[it_209];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        come_pop_stackframe();
                        return __result76__;
                    }
                    it_209++;
                    if(_if_conditional294=it_209>=self->size,                    _if_conditional294) {
                        it_209=0;
                    }
                    else {
                        if(_if_conditional295=it_209==hash_208,                        _if_conditional295) {
                            __result77__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            come_pop_stackframe();
                            return __result77__;
                        }
                    }
                }
                else {
                    __result78__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
                    return __result78__;
                }
            }
            __result79__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_pop_stackframe();
            return __result79__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_pop_stackframe();
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj60;
char* __dec_obj61;
struct tuple2$2sTypephcharph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
                come_push_stackframe("04heap.c", 785);
                    __dec_obj60=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    __dec_obj61=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __result80__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
                    return __result80__;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_pop_stackframe();
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional298;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
                    come_push_stackframe("tuple2$2sTypephcharphp_finalize", 2);
                        if(_if_conditional298=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional298) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional299=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional299) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    come_pop_stackframe();
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional306;
char* result_216;
struct list$1CVALUEph* stack_saved_217;
struct list$1sRightValueObjectph* right_value_objects_218;
struct sClass* klass_219;
char* class_name_220;
char* fun_name_221;
void* right_value178;
struct sType* type2_222;
struct sFun* cloner_223;
char* fun_name2_224;
_Bool _if_conditional307;
void* right_value179;
char* none_generics_name_225;
void* right_value180;
struct sType* obj_type_226;
void* right_value181;
char* __dec_obj74;
void* right_value182;
char* fun_name3_227;
void* right_value183;
struct sGenericsFun* generics_fun_228;
_Bool _if_conditional308;
void* right_value184;
_Bool _if_conditional309;
_Bool __result83__;
void* right_value185;
void* right_value186;
char* __dec_obj75;
int i_229;
void* right_value187;
char* new_fun_name_230;
void* right_value188;
_Bool _if_conditional310;
void* right_value189;
char* __dec_obj76;
_Bool _if_conditional311;
void* right_value190;
_Bool _if_conditional312;
void* right_value191;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_231;
char* new_fun_name_232;
char* __dec_obj77;
struct list$1sRightValueObjectph* __dec_obj78;
struct list$1CVALUEph* __dec_obj79;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_216, 0, sizeof(char*));
memset(&stack_saved_217, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_218, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_219, 0, sizeof(struct sClass*));
memset(&class_name_220, 0, sizeof(char*));
memset(&fun_name_221, 0, sizeof(char*));
right_value178 = (void*)0;
memset(&type2_222, 0, sizeof(struct sType*));
memset(&cloner_223, 0, sizeof(struct sFun*));
memset(&fun_name2_224, 0, sizeof(char*));
right_value179 = (void*)0;
memset(&none_generics_name_225, 0, sizeof(char*));
right_value180 = (void*)0;
memset(&obj_type_226, 0, sizeof(struct sType*));
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&fun_name3_227, 0, sizeof(char*));
right_value183 = (void*)0;
memset(&generics_fun_228, 0, sizeof(struct sGenericsFun*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&i_229, 0, sizeof(int));
right_value187 = (void*)0;
memset(&new_fun_name_230, 0, sizeof(char*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&fun_231, 0, sizeof(struct sFun*));
memset(&new_fun_name_232, 0, sizeof(char*));
memset(&fun_231, 0, sizeof(struct sFun*));
memset(&new_fun_name_232, 0, sizeof(char*));
come_push_stackframe("04heap.c", 916);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_216=((void*)0);
    stack_saved_217=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_218=info->right_value_objects;
    klass_219=type->mClass;
    class_name_220=klass_219->mName;
    fun_name_221="equals";
    type2_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_222->mHeap=(_Bool)0;
    cloner_223=((void*)0);
    if(_if_conditional307=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional307) {
        none_generics_name_225=(char*)come_increment_ref_count(((char*)(right_value179=get_none_generics_name(type->mClass->mName))));
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_226=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj74=fun_name2_224;
        fun_name2_224=(char*)come_increment_ref_count(((char*)(right_value181=create_method_name(obj_type_226,(_Bool)0,fun_name_221,info))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_227=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s_%s",none_generics_name_225,fun_name_221))));
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_228=((struct sGenericsFun*)(right_value183=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_227,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_fun_228) {
            if(_if_conditional309=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(fun_name2_224)))),generics_fun_228,obj_type_226,info),            right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional309) {
                __result83__ = (_Bool)0;
                none_generics_name_225 = come_decrement_ref_count2(none_generics_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_227 = come_decrement_ref_count2(fun_name3_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_216 = come_decrement_ref_count2(result_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_224 = come_decrement_ref_count2(fun_name2_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_pop_stackframe();
                return __result83__;
            }
        }
        cloner_223=((struct sFun*)(right_value185=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_224)));
        come_call_finalizer2(sFun_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        none_generics_name_225 = come_decrement_ref_count2(none_generics_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_227 = come_decrement_ref_count2(fun_name3_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj75=fun_name2_224;
        fun_name2_224=(char*)come_increment_ref_count(((char*)(right_value186=create_method_name(type,(_Bool)0,fun_name_221,info))));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_229=128-1;        i_229>=1;        i_229--        ){
            new_fun_name_230=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("%s_v%d",fun_name2_224,i_229))));
            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_223=((struct sFun*)(right_value188=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_230)));
            come_call_finalizer2(sFun_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(cloner_223) {
                __dec_obj76=fun_name2_224;
                fun_name2_224=(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string(new_fun_name_230))));
                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_230 = come_decrement_ref_count2(new_fun_name_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_230 = come_decrement_ref_count2(new_fun_name_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional311=cloner_223==((void*)0),        _if_conditional311) {
            cloner_223=((struct sFun*)(right_value190=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_224)));
            come_call_finalizer2(sFun_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(_if_conditional312=cloner_223==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional312) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(right_value191=create_equals_automatically(type,fun_name_221,info)));
        fun_231=multiple_assign_var9->v1;
        new_fun_name_232=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj77=fun_name2_224;
        fun_name2_224=(char*)come_increment_ref_count(new_fun_name_232);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_223=fun_231;
        new_fun_name_232 = come_decrement_ref_count2(new_fun_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj78=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_218);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj79=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_217);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result84__ = (_Bool)1;
    result_216 = come_decrement_ref_count2(result_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_224 = come_decrement_ref_count2(fun_name2_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_pop_stackframe();
    return __result84__;
    result_216 = come_decrement_ref_count2(result_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_224 = come_decrement_ref_count2(fun_name2_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional313;
char* result_233;
struct list$1CVALUEph* stack_saved_234;
struct list$1sRightValueObjectph* right_value_objects_235;
struct sClass* klass_236;
char* class_name_237;
char* fun_name_238;
void* right_value192;
struct sType* type2_239;
struct sFun* cloner_240;
char* fun_name2_241;
_Bool _if_conditional314;
void* right_value193;
char* none_generics_name_242;
void* right_value194;
struct sType* obj_type_243;
void* right_value195;
char* __dec_obj80;
void* right_value196;
char* fun_name3_244;
void* right_value197;
struct sGenericsFun* generics_fun_245;
_Bool _if_conditional315;
void* right_value198;
_Bool _if_conditional316;
_Bool __result85__;
void* right_value199;
void* right_value200;
char* __dec_obj81;
int i_246;
void* right_value201;
char* new_fun_name_247;
void* right_value202;
_Bool _if_conditional317;
void* right_value203;
char* __dec_obj82;
_Bool _if_conditional318;
void* right_value204;
_Bool _if_conditional319;
void* right_value205;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_248;
char* new_fun_name_249;
char* __dec_obj83;
struct list$1sRightValueObjectph* __dec_obj84;
struct list$1CVALUEph* __dec_obj85;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_233, 0, sizeof(char*));
memset(&stack_saved_234, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_235, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_236, 0, sizeof(struct sClass*));
memset(&class_name_237, 0, sizeof(char*));
memset(&fun_name_238, 0, sizeof(char*));
right_value192 = (void*)0;
memset(&type2_239, 0, sizeof(struct sType*));
memset(&cloner_240, 0, sizeof(struct sFun*));
memset(&fun_name2_241, 0, sizeof(char*));
right_value193 = (void*)0;
memset(&none_generics_name_242, 0, sizeof(char*));
right_value194 = (void*)0;
memset(&obj_type_243, 0, sizeof(struct sType*));
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&fun_name3_244, 0, sizeof(char*));
right_value197 = (void*)0;
memset(&generics_fun_245, 0, sizeof(struct sGenericsFun*));
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&i_246, 0, sizeof(int));
right_value201 = (void*)0;
memset(&new_fun_name_247, 0, sizeof(char*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&fun_248, 0, sizeof(struct sFun*));
memset(&new_fun_name_249, 0, sizeof(char*));
memset(&fun_248, 0, sizeof(struct sFun*));
memset(&new_fun_name_249, 0, sizeof(char*));
come_push_stackframe("04heap.c", 987);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_233=((void*)0);
    stack_saved_234=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_235=info->right_value_objects;
    klass_236=type->mClass;
    class_name_237=klass_236->mName;
    fun_name_238="operator_equals";
    type2_239=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_239->mHeap=(_Bool)0;
    cloner_240=((void*)0);
    if(_if_conditional314=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional314) {
        none_generics_name_242=(char*)come_increment_ref_count(((char*)(right_value193=get_none_generics_name(type->mClass->mName))));
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj80=fun_name2_241;
        fun_name2_241=(char*)come_increment_ref_count(((char*)(right_value195=create_method_name(obj_type_243,(_Bool)0,fun_name_238,info))));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_244=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("%s_%s",none_generics_name_242,fun_name_238))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_245=((struct sGenericsFun*)(right_value197=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_244,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_fun_245) {
            if(_if_conditional316=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value198=__builtin_string(fun_name2_241)))),generics_fun_245,obj_type_243,info),            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional316) {
                __result85__ = (_Bool)0;
                none_generics_name_242 = come_decrement_ref_count2(none_generics_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_244 = come_decrement_ref_count2(fun_name3_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_233 = come_decrement_ref_count2(result_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_241 = come_decrement_ref_count2(fun_name2_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_pop_stackframe();
                return __result85__;
            }
        }
        cloner_240=((struct sFun*)(right_value199=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_241)));
        come_call_finalizer2(sFun_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        none_generics_name_242 = come_decrement_ref_count2(none_generics_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_244 = come_decrement_ref_count2(fun_name3_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj81=fun_name2_241;
        fun_name2_241=(char*)come_increment_ref_count(((char*)(right_value200=create_method_name(type,(_Bool)0,fun_name_238,info))));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_246=128-1;        i_246>=1;        i_246--        ){
            new_fun_name_247=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s_v%d",fun_name2_241,i_246))));
            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_240=((struct sFun*)(right_value202=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_247)));
            come_call_finalizer2(sFun_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(cloner_240) {
                __dec_obj82=fun_name2_241;
                fun_name2_241=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(new_fun_name_247))));
                __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_247 = come_decrement_ref_count2(new_fun_name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_247 = come_decrement_ref_count2(new_fun_name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional318=cloner_240==((void*)0),        _if_conditional318) {
            cloner_240=((struct sFun*)(right_value204=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_241)));
            come_call_finalizer2(sFun_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(_if_conditional319=cloner_240==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional319) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(right_value205=create_operator_equals_automatically(type,fun_name_238,info)));
        fun_248=multiple_assign_var10->v1;
        new_fun_name_249=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj83=fun_name2_241;
        fun_name2_241=(char*)come_increment_ref_count(new_fun_name_249);
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_240=fun_248;
        new_fun_name_249 = come_decrement_ref_count2(new_fun_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj84=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_235);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj85=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_234);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result86__ = (_Bool)1;
    result_233 = come_decrement_ref_count2(result_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_241 = come_decrement_ref_count2(fun_name2_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_pop_stackframe();
    return __result86__;
    result_233 = come_decrement_ref_count2(result_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_241 = come_decrement_ref_count2(fun_name2_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional320;
char* result_250;
struct list$1CVALUEph* stack_saved_251;
struct list$1sRightValueObjectph* right_value_objects_252;
struct sClass* klass_253;
char* class_name_254;
char* fun_name_255;
void* right_value206;
struct sType* type2_256;
struct sFun* cloner_257;
char* fun_name2_258;
_Bool _if_conditional321;
void* right_value207;
char* none_generics_name_259;
void* right_value208;
struct sType* obj_type_260;
void* right_value209;
char* __dec_obj86;
void* right_value210;
char* fun_name3_261;
void* right_value211;
struct sGenericsFun* generics_fun_262;
_Bool _if_conditional322;
void* right_value212;
_Bool _if_conditional323;
_Bool __result87__;
void* right_value213;
void* right_value214;
char* __dec_obj87;
int i_263;
void* right_value215;
char* new_fun_name_264;
void* right_value216;
_Bool _if_conditional324;
void* right_value217;
char* __dec_obj88;
_Bool _if_conditional325;
void* right_value218;
_Bool _if_conditional326;
void* right_value219;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_265;
char* new_fun_name_266;
char* __dec_obj89;
struct list$1sRightValueObjectph* __dec_obj90;
struct list$1CVALUEph* __dec_obj91;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_250, 0, sizeof(char*));
memset(&stack_saved_251, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_252, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_253, 0, sizeof(struct sClass*));
memset(&class_name_254, 0, sizeof(char*));
memset(&fun_name_255, 0, sizeof(char*));
right_value206 = (void*)0;
memset(&type2_256, 0, sizeof(struct sType*));
memset(&cloner_257, 0, sizeof(struct sFun*));
memset(&fun_name2_258, 0, sizeof(char*));
right_value207 = (void*)0;
memset(&none_generics_name_259, 0, sizeof(char*));
right_value208 = (void*)0;
memset(&obj_type_260, 0, sizeof(struct sType*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&fun_name3_261, 0, sizeof(char*));
right_value211 = (void*)0;
memset(&generics_fun_262, 0, sizeof(struct sGenericsFun*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&i_263, 0, sizeof(int));
right_value215 = (void*)0;
memset(&new_fun_name_264, 0, sizeof(char*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&fun_265, 0, sizeof(struct sFun*));
memset(&new_fun_name_266, 0, sizeof(char*));
memset(&fun_265, 0, sizeof(struct sFun*));
memset(&new_fun_name_266, 0, sizeof(char*));
come_push_stackframe("04heap.c", 1058);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_250=((void*)0);
    stack_saved_251=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_252=info->right_value_objects;
    klass_253=type->mClass;
    class_name_254=klass_253->mName;
    fun_name_255="operator_not_equals";
    type2_256=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_256->mHeap=(_Bool)0;
    cloner_257=((void*)0);
    if(_if_conditional321=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional321) {
        none_generics_name_259=(char*)come_increment_ref_count(((char*)(right_value207=get_none_generics_name(type->mClass->mName))));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_260=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj86=fun_name2_258;
        fun_name2_258=(char*)come_increment_ref_count(((char*)(right_value209=create_method_name(obj_type_260,(_Bool)0,fun_name_255,info))));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_261=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("%s_%s",none_generics_name_259,fun_name_255))));
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_262=((struct sGenericsFun*)(right_value211=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_261,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_fun_262) {
            if(_if_conditional323=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(fun_name2_258)))),generics_fun_262,obj_type_260,info),            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional323) {
                __result87__ = (_Bool)0;
                none_generics_name_259 = come_decrement_ref_count2(none_generics_name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_261 = come_decrement_ref_count2(fun_name3_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_250 = come_decrement_ref_count2(result_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_258 = come_decrement_ref_count2(fun_name2_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_pop_stackframe();
                return __result87__;
            }
        }
        cloner_257=((struct sFun*)(right_value213=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_258)));
        come_call_finalizer2(sFun_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        none_generics_name_259 = come_decrement_ref_count2(none_generics_name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_261 = come_decrement_ref_count2(fun_name3_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj87=fun_name2_258;
        fun_name2_258=(char*)come_increment_ref_count(((char*)(right_value214=create_method_name(type,(_Bool)0,fun_name_255,info))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_263=128-1;        i_263>=1;        i_263--        ){
            new_fun_name_264=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s_v%d",fun_name2_258,i_263))));
            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_257=((struct sFun*)(right_value216=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_264)));
            come_call_finalizer2(sFun_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(cloner_257) {
                __dec_obj88=fun_name2_258;
                fun_name2_258=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(new_fun_name_264))));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_264 = come_decrement_ref_count2(new_fun_name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_264 = come_decrement_ref_count2(new_fun_name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional325=cloner_257==((void*)0),        _if_conditional325) {
            cloner_257=((struct sFun*)(right_value218=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_258)));
            come_call_finalizer2(sFun_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(_if_conditional326=cloner_257==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional326) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(right_value219=create_operator_not_equals_automatically(type,fun_name_255,info)));
        fun_265=multiple_assign_var11->v1;
        new_fun_name_266=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj89=fun_name2_258;
        fun_name2_258=(char*)come_increment_ref_count(new_fun_name_266);
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_257=fun_265;
        new_fun_name_266 = come_decrement_ref_count2(new_fun_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj90=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_252);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj91=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_251);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result88__ = (_Bool)1;
    result_250 = come_decrement_ref_count2(result_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_258 = come_decrement_ref_count2(fun_name2_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_pop_stackframe();
    return __result88__;
    result_250 = come_decrement_ref_count2(result_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_258 = come_decrement_ref_count2(fun_name2_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

_Bool existance_free_right_value_objects(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional327;
_Bool __result89__;
struct list$1sRightValueObjectph* right_value_objects_267;
struct list$1sRightValueObjectph* o2_saved_268;
struct sRightValueObject* it_269;
_Bool _if_conditional328;
_Bool _if_conditional329;
_Bool __result90__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&right_value_objects_267, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_268, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_269, 0, sizeof(struct sRightValueObject*));
come_push_stackframe("04heap.c", 1076);
    if(gComeGC) {
        __result89__ = (_Bool)0;
        come_pop_stackframe();
        return __result89__;
    }
    right_value_objects_267=info->right_value_objects;
    for(    o2_saved_268=(right_value_objects_267),it_269=list$1sRightValueObjectph_begin((o2_saved_268));    !list$1sRightValueObjectph_end((o2_saved_268));    it_269=list$1sRightValueObjectph_next((o2_saved_268))    ){
        if(_if_conditional328=it_269&&!it_269->mFreed,        _if_conditional328) {
            if(_if_conditional329=string_operator_equals(it_269->mFunName,info->come_fun->mName)&&it_269->mBlockLevel==info->block_level,            _if_conditional329) {
                __result90__ = (_Bool)1;
                come_pop_stackframe();
                return __result90__;
            }
        }
    }
    __result91__ = (_Bool)0;
    come_pop_stackframe();
    return __result91__;
come_pop_stackframe();
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool _if_conditional330;
_Bool free_right_value_270;
struct list$1sRightValueObjectph* right_value_objects_271;
int n_272;
struct list$1sRightValueObjectph* o2_saved_273;
struct sRightValueObject* it_274;
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value220;
struct sType* type_275;
void* right_value221;
struct sType* __dec_obj92;
memset(&__result_obj__, 0, sizeof(void*));
memset(&free_right_value_270, 0, sizeof(_Bool));
memset(&right_value_objects_271, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_272, 0, sizeof(int));
memset(&o2_saved_273, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_274, 0, sizeof(struct sRightValueObject*));
right_value220 = (void*)0;
memset(&type_275, 0, sizeof(struct sType*));
right_value221 = (void*)0;
come_push_stackframe("04heap.c", 1105);
    if(gComeGC) {
        come_pop_stackframe();
        return;
    }
    free_right_value_270=(_Bool)0;
    right_value_objects_271=info->right_value_objects;
    n_272=0;
    for(    o2_saved_273=(right_value_objects_271),it_274=list$1sRightValueObjectph_begin((o2_saved_273));    !list$1sRightValueObjectph_end((o2_saved_273));    it_274=list$1sRightValueObjectph_next((o2_saved_273))    ){
        if(_if_conditional331=it_274&&!it_274->mFreed,        _if_conditional331) {
            if(_if_conditional332=string_operator_equals(it_274->mFunName,info->come_fun->mName)&&it_274->mBlockLevel==info->block_level,            _if_conditional332) {
                type_275=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(it_274->mType))));
                come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj92=type_275;
                type_275=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=solve_type(type_275,info->generics_type,info->method_generics_types,info))));
                come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                free_object(type_275,it_274->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_274->mFreed=(_Bool)1;
                free_right_value_270=(_Bool)1;
                come_call_finalizer2(sType_finalize,type_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        n_272++;
    }
come_pop_stackframe();
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional333;
_Bool __result92__;
struct list$1sRightValueObjectph* o2_saved_276;
struct sRightValueObject* it_277;
_Bool _if_conditional334;
_Bool __result93__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_276, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_277, 0, sizeof(struct sRightValueObject*));
come_push_stackframe("04heap.c", 1120);
    if(gComeGC) {
        __result92__ = (_Bool)0;
        come_pop_stackframe();
        return __result92__;
    }
    for(    o2_saved_276=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_277=list$1sRightValueObjectph_begin((o2_saved_276));    !list$1sRightValueObjectph_end((o2_saved_276));    it_277=list$1sRightValueObjectph_next((o2_saved_276))    ){
        if(_if_conditional334=it_277->mID==right_value_num,        _if_conditional334) {
            __result93__ = (_Bool)1;
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_pop_stackframe();
            return __result93__;
        }
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result94__ = (_Bool)0;
    come_pop_stackframe();
    return __result94__;
come_pop_stackframe();
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_278;
void* right_value222;
struct sVar* var__282;
_Bool _if_conditional343;
struct sVar* __result99__;
struct sVar* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_278, 0, sizeof(struct sVarTable*));
right_value222 = (void*)0;
memset(&var__282, 0, sizeof(struct sVar*));
come_push_stackframe("04heap.c", 1137);
    it_278=table;
    while(it_278) {
        var__282=((struct sVar*)(right_value222=map$2charphsVarphp_operator_load_element(it_278->mVars,name)));
        come_call_finalizer2(sVar_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(var__282) {
            __result99__ = __result_obj__ = var__282;
            come_pop_stackframe();
            return __result99__;
        }
        it_278=it_278->mParent;
    }
    __result100__ = __result_obj__ = ((void*)0);
    come_pop_stackframe();
    return __result100__;
come_pop_stackframe();
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_279;
unsigned int hash_280;
unsigned int it_281;
_Bool _while_condtional21;
_Bool _if_conditional335;
_Bool _if_conditional336;
struct sVar* __result95__;
_Bool _if_conditional341;
_Bool _if_conditional342;
struct sVar* __result96__;
struct sVar* __result97__;
struct sVar* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_279, 0, sizeof(struct sVar*));
memset(&hash_280, 0, sizeof(unsigned int));
memset(&it_281, 0, sizeof(unsigned int));
        come_push_stackframe("04heap.c", 1125);
            memset(&default_value_279,0,sizeof(struct sVar*));
            hash_280=string_get_hash_key(((char*)key))%self->size;
            it_281=hash_280;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional335=self->item_existance[it_281],                _if_conditional335) {
                    if(_if_conditional336=string_equals(self->keys[it_281],key),                    _if_conditional336) {
                        __result95__ = __result_obj__ = self->items[it_281];
                        come_call_finalizer2(sVar_finalize,default_value_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_pop_stackframe();
                        return __result95__;
                    }
                    it_281++;
                    if(_if_conditional341=it_281>=self->size,                    _if_conditional341) {
                        it_281=0;
                    }
                    else {
                        if(_if_conditional342=it_281==hash_280,                        _if_conditional342) {
                            __result96__ = __result_obj__ = default_value_279;
                            come_call_finalizer2(sVar_finalize,default_value_279, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            come_pop_stackframe();
                            return __result96__;
                        }
                    }
                }
                else {
                    __result97__ = __result_obj__ = default_value_279;
                    come_call_finalizer2(sVar_finalize,default_value_279, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_pop_stackframe();
                    return __result97__;
                }
            }
            __result98__ = __result_obj__ = default_value_279;
            come_call_finalizer2(sVar_finalize,default_value_279, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_pop_stackframe();
            return __result98__;
            come_call_finalizer2(sVar_finalize,default_value_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_pop_stackframe();
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
memset(&__result_obj__, 0, sizeof(void*));
                        come_push_stackframe("sVar_finalize", 4);
                            if(_if_conditional337=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional337) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional338=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional338) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional339=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional339) {
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional340=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional340) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        come_pop_stackframe();
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional344;
struct map$2charphsVarph* o2_saved_283;
char* it_286;
void* right_value223;
struct sVar* p_289;
struct sType* type_290;
struct sClass* klass_291;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value224;
char* c_value_292;
void* right_value225;
struct sType* type2_293;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_283, 0, sizeof(struct map$2charphsVarph*));
memset(&it_286, 0, sizeof(char*));
right_value223 = (void*)0;
memset(&p_289, 0, sizeof(struct sVar*));
memset(&type_290, 0, sizeof(struct sType*));
memset(&klass_291, 0, sizeof(struct sClass*));
right_value224 = (void*)0;
memset(&c_value_292, 0, sizeof(char*));
right_value225 = (void*)0;
memset(&type2_293, 0, sizeof(struct sType*));
come_push_stackframe("04heap.c", 1168);
    if(gComeGC) {
        come_pop_stackframe();
        return;
    }
    for(    o2_saved_283=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_286=map$2charphsVarph_begin((o2_saved_283));    !map$2charphsVarph_end((o2_saved_283));    it_286=map$2charphsVarph_next((o2_saved_283))    ){
        p_289=((struct sVar*)(right_value223=map$2charphsVarphp_operator_load_element(table->mVars,it_286)));
        come_call_finalizer2(sVar_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type_290=p_289->mType;
        klass_291=type_290->mClass;
        if(_if_conditional349=ret_value!=((void*)0)&&p_289->mCValueName!=((void*)0)&&string_operator_equals(p_289->mCValueName,ret_value->mCValueName)&&type_290->mHeap,        _if_conditional349) {
            free_object(p_289->mType,p_289->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(_if_conditional350=type_290->mHeap&&p_289->mCValueName,            _if_conditional350) {
                if(type_290->mFunctionParam) {
                    free_object(p_289->mType,p_289->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    free_object(p_289->mType,p_289->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                if(_if_conditional352=klass_291->mStruct&&p_289->mCValueName&&type_290->mAllocaValue&&!type_290->mNoCallingDestructor,                _if_conditional352) {
                    c_value_292=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("(&%s)",p_289->mCValueName))));
                    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    type2_293=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(type_290))));
                    come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    type2_293->mPointerNum++;
                    free_object(type2_293,c_value_292,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_292 = come_decrement_ref_count2(c_value_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type2_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_283, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
come_pop_stackframe();
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional345;
char* result_284;
char* __result101__;
_Bool _if_conditional346;
char* __result102__;
char* result_285;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_284, 0, sizeof(char*));
memset(&result_285, 0, sizeof(char*));
    come_push_stackframe("04heap.c", 1142);
        if(_if_conditional345=self==((void*)0),        _if_conditional345) {
            memset(&result_284,0,sizeof(char*));
            __result101__ = __result_obj__ = result_284;
            come_pop_stackframe();
            return __result101__;
        }
        self->key_list->it=self->key_list->head;
        if(self->key_list->it) {
            __result102__ = __result_obj__ = self->key_list->it->item;
            come_pop_stackframe();
            return __result102__;
        }
        memset(&result_285,0,sizeof(char*));
        __result103__ = __result_obj__ = result_285;
        come_pop_stackframe();
        return __result103__;
    come_pop_stackframe();
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    come_push_stackframe("04heap.c", 1142);
        __result104__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        come_pop_stackframe();
        return __result104__;
    come_pop_stackframe();
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional347;
char* result_287;
char* __result105__;
_Bool _if_conditional348;
char* __result106__;
char* result_288;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_287, 0, sizeof(char*));
memset(&result_288, 0, sizeof(char*));
    come_push_stackframe("04heap.c", 1142);
        if(_if_conditional347=self==((void*)0)||self->key_list->it==((void*)0),        _if_conditional347) {
            memset(&result_287,0,sizeof(char*));
            __result105__ = __result_obj__ = result_287;
            come_pop_stackframe();
            return __result105__;
        }
        self->key_list->it=self->key_list->it->next;
        if(self->key_list->it) {
            __result106__ = __result_obj__ = self->key_list->it->item;
            come_pop_stackframe();
            return __result106__;
        }
        memset(&result_288,0,sizeof(char*));
        __result107__ = __result_obj__ = result_288;
        come_pop_stackframe();
        return __result107__;
    come_pop_stackframe();
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_294;
_Bool _if_conditional353;
_Bool _if_conditional354;
int i_295;
_Bool _if_conditional355;
_Bool _if_conditional356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_294, 0, sizeof(int));
memset(&i_295, 0, sizeof(int));
    come_push_stackframe("04heap.c", 1166);
        for(        i_294=0;        i_294<self->size;        i_294++        ){
            if(_if_conditional353=self->item_existance[i_294],            _if_conditional353) {
                if(_if_conditional354=1,                _if_conditional354) {
                    come_call_finalizer2(sVar_finalize,self->items[i_294], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_295=0;        i_295<self->size;        i_295++        ){
            if(_if_conditional355=self->item_existance[i_295],            _if_conditional355) {
                if(_if_conditional356=1,                _if_conditional356) {
                    self->keys[i_295] = come_decrement_ref_count2(self->keys[i_295], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_pop_stackframe();
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_296;
_Bool _while_condtional22;
struct list_item$1charp* prev_it_297;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_296, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_297, 0, sizeof(struct list_item$1charp*));
        come_push_stackframe("./comelang2.h", 1144);
            it_296=self->head;
            while(_while_condtional22=it_296!=((void*)0),            _while_condtional22) {
                prev_it_297=it_296;
                it_296=it_296->next;
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        come_pop_stackframe();
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
                come_push_stackframe("list_item$1charpp_finalize", 0);
                come_pop_stackframe();
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool _if_conditional357;
struct sVarTable* it_298;
_Bool _if_conditional358;
_Bool _while_condtional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_298, 0, sizeof(struct sVarTable*));
come_push_stackframe("04heap.c", 1188);
    if(gComeGC) {
        come_pop_stackframe();
        return;
    }
    it_298=info->lv_table;
    if(_if_conditional358=it_298==info->come_fun->mBlock->mVarTable,    _if_conditional358) {
        free_objects(it_298,ret_value,info);
    }
    else {
        while(_while_condtional23=it_298!=info->come_fun->mBlock->mVarTable,        _while_condtional23) {
            free_objects(it_298,ret_value,info);
            it_298=it_298->mParent;
        }
        free_objects(it_298,ret_value,info);
    }
come_pop_stackframe();
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional359;
struct sVar* ret_value_299;
struct sVarTable* current_loop_vtable_300;
_Bool _if_conditional360;
struct sVarTable* it_301;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ret_value_299, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_300, 0, sizeof(struct sVarTable*));
memset(&it_301, 0, sizeof(struct sVarTable*));
come_push_stackframe("04heap.c", 1208);
    if(gComeGC) {
        come_pop_stackframe();
        return;
    }
    ret_value_299=((void*)0);
    current_loop_vtable_300=info->current_loop_vtable;
    if(_if_conditional360=current_loop_vtable_300!=((void*)0),    _if_conditional360) {
        it_301=info->lv_table;
        while(_while_condtional24=it_301!=current_loop_vtable_300,        _while_condtional24) {
            free_objects(it_301,ret_value_299,info);
            it_301=it_301->mParent;
        }
        free_objects(it_301,ret_value_299,info);
    }
come_pop_stackframe();
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value226;
void* right_value227;
void* right_value228;
void* right_value229;
char* __result108__;
_Bool _if_conditional363;
static int n_302=0;
void* right_value230;
char* var_name_303;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
char* __result109__;
void* right_value238;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&var_name_303, 0, sizeof(char*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
come_push_stackframe("04heap.c", 1226);
    if(_if_conditional361=string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0,    _if_conditional361) {
        if(gComeDebug) {
            __result108__ = __result_obj__ = ((char*)(right_value229=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s,come_pop_stackframe())",((char*)(right_value226=string_to_string(info->sname))),((char*)(right_value227=int_to_string(info->sline))),((char*)(right_value228=charp_to_string(c_value))))));
            right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_pop_stackframe();
            return __result108__;
        }
    }
    else {
        if(gComeDebug) {
            ++n_302;
            var_name_303=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("__exception_result_var_b%d",n_302))));
            right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value231=make_define_var(type,var_name_303,(_Bool)0,info))));
            right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result109__ = __result_obj__ = ((char*)(right_value237=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value232=string_to_string(info->sname))),((char*)(right_value233=int_to_string(info->sline))),((char*)(right_value234=string_to_string(var_name_303))),((char*)(right_value235=charp_to_string(c_value))),((char*)(right_value236=string_to_string(var_name_303))))));
            var_name_303 = come_decrement_ref_count2(var_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_pop_stackframe();
            return __result109__;
            var_name_303 = come_decrement_ref_count2(var_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result110__ = __result_obj__ = ((char*)(right_value238=__builtin_string(c_value)));
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_pop_stackframe();
    return __result110__;
come_pop_stackframe();
}

