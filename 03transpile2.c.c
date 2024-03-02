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

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

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

void come_init_v3();

void come_final_v3();

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
void show_type(struct sType* type, struct sInfo* info);

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sType* sType_clone(struct sType* self);
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
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
_Bool output_source_file_v3(struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void list$1charpp_finalize(struct list$1charp* self);
_Bool output_header_file(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_last_code_to_source(struct sInfo* info);

void add_last_code_to_source_with_comma(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1947, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1957, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1967, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1977, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1987, "struct smart_pointer$1long"))));
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

void come_init_v3(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void come_final_v3(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* buf_5;
char* class_name_6;
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value12;
char* __result7__;
void* right_value13;
struct CVALUE* come_value_7;
void* right_value14;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
void* right_value15;
char* result_type_str_14;
int j_15;
struct list$1sTypeph* o2_saved_16;
struct sType* it_19;
void* right_value16;
char* param_type_str_22;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value17;
char* __result16__;
_Bool _if_conditional53;
int i_23;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value18;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&class_name_6, 0, sizeof(char*));
right_value12 = (void*)0;
right_value13 = (void*)0;
memset(&come_value_7, 0, sizeof(struct CVALUE*));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&result_type_str_14, 0, sizeof(char*));
memset(&j_15, 0, sizeof(int));
memset(&o2_saved_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct sType*));
right_value16 = (void*)0;
memset(&param_type_str_22, 0, sizeof(char*));
right_value17 = (void*)0;
memset(&i_23, 0, sizeof(int));
right_value18 = (void*)0;
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    class_name_6=type->mClass->mName;
    if(type->mAlignas) {
        if(_if_conditional6=!node_compile(type->mAlignas,info),        _if_conditional6) {
            printf("_Alignas error\n");
            __result7__ = __result_obj__ = ((char*)(right_value12=__builtin_string("")));
            come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result7__;
        }
        come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value13=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        buffer_append_str(buf_5,((char*)(right_value14=xsprintf("_Alignas(%s) ",come_value_7->c_value))));
        right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional25=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional25) {
        buffer_append_str(buf_5,"static ");
    }
    if(type->mConstant) {
        buffer_append_str(buf_5,"const ");
    }
    if(type->mUnsigned) {
        buffer_append_str(buf_5,"unsigned ");
    }
    if(type->mShort) {
        buffer_append_str(buf_5,"short ");
    }
    if(_if_conditional29=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional29) {
        buffer_append_str(buf_5,"va_list");
    }
    else {
        if(_if_conditional30=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional30) {
            buffer_append_str(buf_5,"__builtin_va_list");
        }
        else {
            if(_if_conditional31=charp_operator_equals(class_name_6,"__builtin_va_list"),            _if_conditional31) {
                if(in_header) {
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    buffer_append_str(buf_5,"va_list");
                }
            }
            else {
                if(type->mClass->mStruct) {
                    buffer_append_str(buf_5,"struct ");
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    if(type->mClass->mUnion) {
                        buffer_append_str(buf_5,"union ");
                        buffer_append_str(buf_5,class_name_6);
                    }
                    else {
                        if(type->mClass->mEnum) {
                            buffer_append_str(buf_5,"enum ");
                            buffer_append_str(buf_5,class_name_6);
                        }
                        else {
                            if(type->mLongLong) {
                                if(_if_conditional37=charp_operator_equals(class_name_6,"int"),                                _if_conditional37) {
                                    buffer_append_str(buf_5,"long long int");
                                }
                                else {
                                    if(_if_conditional38=charp_operator_equals(class_name_6,"long"),                                    _if_conditional38) {
                                        buffer_append_str(buf_5,"long long");
                                    }
                                }
                            }
                            else {
                                if(type->mLong) {
                                    if(_if_conditional40=charp_operator_equals(class_name_6,"int"),                                    _if_conditional40) {
                                        buffer_append_str(buf_5,"long int");
                                    }
                                    else {
                                        if(_if_conditional41=charp_operator_equals(class_name_6,"long"),                                        _if_conditional41) {
                                            buffer_append_str(buf_5,"long long");
                                        }
                                        else {
                                            if(_if_conditional42=charp_operator_equals(class_name_6,"double"),                                            _if_conditional42) {
                                                buffer_append_str(buf_5,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    if(_if_conditional43=charp_operator_equals(class_name_6,"long"),                                    _if_conditional43) {
                                        buffer_append_str(buf_5,"long");
                                    }
                                    else {
                                        if(_if_conditional44=charp_operator_equals(class_name_6,"__uint128_t"),                                        _if_conditional44) {
                                            buffer_append_str(buf_5,"__uint128_t");
                                        }
                                        else {
                                            if(_if_conditional45=charp_operator_equals(class_name_6,"bool"),                                            _if_conditional45) {
                                                buffer_append_str(buf_5,"_Bool");
                                            }
                                            else {
                                                if(_if_conditional46=charp_operator_equals(class_name_6,"lambda"),                                                _if_conditional46) {
                                                    result_type_str_14=(char*)come_increment_ref_count(((char*)(right_value15=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info))));
                                                    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    buffer_append_str(buf_5,result_type_str_14);
                                                    buffer_append_str(buf_5," (*)(");
                                                    j_15=0;
                                                    for(                                                    o2_saved_16=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_19=list$1sTypeph_begin((o2_saved_16));                                                    !list$1sTypeph_end((o2_saved_16));                                                    it_19=list$1sTypeph_next((o2_saved_16))                                                    ){
                                                        param_type_str_22=(char*)come_increment_ref_count(((char*)(right_value16=make_type_name_string(it_19,in_header,(_Bool)0,(_Bool)0,info))));
                                                        right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(buf_5,param_type_str_22);
                                                        if(_if_conditional51=j_15!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional51) {
                                                            buffer_append_str(buf_5,",");
                                                        }
                                                        j_15++;
                                                        param_type_str_22 = come_decrement_ref_count2(param_type_str_22, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    buffer_append_str(buf_5,")");
                                                    result_type_str_14 = come_decrement_ref_count2(result_type_str_14, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                else {
                                                    if(_if_conditional52=class_name_6==((void*)0),                                                    _if_conditional52) {
                                                        err_msg(info,"class name is null");
                                                        __result16__ = __result_obj__ = ((char*)(right_value17=__builtin_string("")));
                                                        come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        return __result16__;
                                                    }
                                                    buffer_append_str(buf_5,class_name_6);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(_if_conditional53=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_6,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional53) {
        for(        i_23=0;        i_23<type->mPointerNum;        i_23++        ){
            buffer_append_str(buf_5,"*");
        }
    }
    if(_if_conditional54=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional54) {
        buffer_append_str(buf_5,"*");
    }
    if(type->mRestrict) {
        buffer_append_str(buf_5,"restrict");
    }
    __result18__ = __result_obj__ = ((char*)(right_value18=buffer_to_string(buf_5)));
    come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result18__;
    come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional7=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional7) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional8=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional9=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional9) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional11=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional11) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional12=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional12) {
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional13=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional13) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional15) {
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional17) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional18) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional20) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional21) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional22) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional23) {
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional24) {
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional10=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional10) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_8;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                            it_8=self->head;
                            while(_while_condtional1=it_8!=((void*)0),                            _while_condtional1) {
                                prev_it_9=it_8;
                                it_8=it_8->next;
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional14) {
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                            it_10=self->head;
                            while(_while_condtional2=it_10!=((void*)0),                            _while_condtional2) {
                                prev_it_11=it_10;
                                it_10=it_10->next;
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional16) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_12;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                            it_12=self->head;
                            while(_while_condtional3=it_12!=((void*)0),                            _while_condtional3) {
                                prev_it_13=it_12;
                                it_12=it_12->next;
                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional19) {
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
struct sType* result_17;
struct sType* __result8__;
_Bool _if_conditional48;
struct sType* __result9__;
struct sType* result_18;
struct sType* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct sType*));
memset(&result_18, 0, sizeof(struct sType*));
                                                        if(_if_conditional47=self==((void*)0),                                                        _if_conditional47) {
                                                            memset(&result_17,0,sizeof(struct sType*));
                                                            __result8__ = __result_obj__ = result_17;
                                                            return __result8__;
                                                        }
                                                        self->it=self->head;
                                                        if(self->it) {
                                                            __result9__ = __result_obj__ = self->it->item;
                                                            return __result9__;
                                                        }
                                                        memset(&result_18,0,sizeof(struct sType*));
                                                        __result10__ = __result_obj__ = result_18;
                                                        return __result10__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                                                        __result11__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result11__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
struct sType* result_20;
struct sType* __result12__;
_Bool _if_conditional50;
struct sType* __result13__;
struct sType* result_21;
struct sType* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct sType*));
memset(&result_21, 0, sizeof(struct sType*));
                                                        if(_if_conditional49=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional49) {
                                                            memset(&result_20,0,sizeof(struct sType*));
                                                            __result12__ = __result_obj__ = result_20;
                                                            return __result12__;
                                                        }
                                                        self->it=self->it->next;
                                                        if(self->it) {
                                                            __result13__ = __result_obj__ = self->it->item;
                                                            return __result13__;
                                                        }
                                                        memset(&result_21,0,sizeof(struct sType*));
                                                        __result14__ = __result_obj__ = result_21;
                                                        return __result14__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            __result15__ = self->len;
                                                            return __result15__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
        __result17__ = self->len;
        return __result17__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value19;
void* right_value20;
struct buffer* buf_24;
char* class_name_25;
_Bool _if_conditional56;
int i_26;
struct sType* gtype_30;
void* right_value21;
_Bool _if_conditional59;
_Bool _if_conditional60;
int i_31;
_Bool _if_conditional61;
void* right_value22;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
right_value20 = (void*)0;
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&class_name_25, 0, sizeof(char*));
memset(&i_26, 0, sizeof(int));
memset(&gtype_30, 0, sizeof(struct sType*));
right_value21 = (void*)0;
memset(&i_31, 0, sizeof(int));
right_value22 = (void*)0;
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    class_name_25=type->mClass->mName;
    buffer_append_str(buf_24,class_name_25);
    if(_if_conditional56=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional56) {
        buffer_append_str(buf_24,"<");
        for(        i_26=0;        i_26<list$1sTypeph_length(type->mGenericsTypes);        i_26++        ){
            gtype_30=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_26);
            buffer_append_str(buf_24,((char*)(right_value21=make_come_type_name_string(gtype_30,info))));
            right_value21 = come_decrement_ref_count2(right_value21, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional59=i_26!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional59) {
                buffer_append_str(buf_24,",");
            }
        }
        buffer_append_str(buf_24,">");
    }
    if(_if_conditional60=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_25,"lambda"),    _if_conditional60) {
        for(        i_31=0;        i_31<type->mPointerNum;        i_31++        ){
            buffer_append_str(buf_24,"*");
        }
    }
    if(type->mHeap) {
        buffer_append_str(buf_24,"%");
    }
    __result21__ = __result_obj__ = ((char*)(right_value22=buffer_to_string(buf_24)));
    come_call_finalizer2(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result21__;
    come_call_finalizer2(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional57;
struct list_item$1sTypeph* it_27;
int i_28;
_Bool _while_condtional4;
_Bool _if_conditional58;
struct sType* __result19__;
struct sType* default_value_29;
struct sType* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_27, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_28, 0, sizeof(int));
memset(&default_value_29, 0, sizeof(struct sType*));
                if(_if_conditional57=position<0,                _if_conditional57) {
                    position+=self->len;
                }
                it_27=self->head;
                i_28=0;
                while(_while_condtional4=it_27!=((void*)0),                _while_condtional4) {
                    if(_if_conditional58=position==i_28,                    _if_conditional58) {
                        __result19__ = __result_obj__ = it_27->item;
                        return __result19__;
                    }
                    it_27=it_27->next;
                    i_28++;
                }
                memset(&default_value_29,0,sizeof(struct sType*));
                __result20__ = __result_obj__ = default_value_29;
                come_call_finalizer2(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result20__;
                come_call_finalizer2(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value23;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
    puts(((char*)(right_value23=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
void* right_value24;
void* right_value25;
struct buffer* buf_32;
_Bool _if_conditional62;
void* right_value26;
char* __result22__;
_Bool _if_conditional63;
void* right_value27;
int i_33;
struct list$1sTypeph* o2_saved_34;
struct sType* it_35;
void* right_value28;
_Bool _if_conditional64;
void* right_value29;
void* right_value30;
char* __result23__;
void* right_value31;
void* right_value32;
int i_36;
struct list$1sTypeph* o2_saved_37;
struct sType* it_38;
void* right_value33;
_Bool _if_conditional65;
void* right_value34;
char* __result24__;
void* right_value35;
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
right_value25 = (void*)0;
memset(&buf_32, 0, sizeof(struct buffer*));
right_value26 = (void*)0;
right_value27 = (void*)0;
memset(&i_33, 0, sizeof(int));
memset(&o2_saved_34, 0, sizeof(struct list$1sTypeph*));
memset(&it_35, 0, sizeof(struct sType*));
right_value28 = (void*)0;
right_value29 = (void*)0;
right_value30 = (void*)0;
right_value31 = (void*)0;
right_value32 = (void*)0;
memset(&i_36, 0, sizeof(int));
memset(&o2_saved_37, 0, sizeof(struct list$1sTypeph*));
memset(&it_38, 0, sizeof(struct sType*));
right_value33 = (void*)0;
right_value34 = (void*)0;
right_value35 = (void*)0;
    buf_32=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 188, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional62=type->mResultType==((void*)0),    _if_conditional62) {
        err_msg(info,"invalid lambda type");
        __result22__ = __result_obj__ = ((char*)(right_value26=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result22__;
    }
    if(_if_conditional63=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional63) {
        buffer_append_str(buf_32,((char*)(right_value27=xsprintf("(*%s)(",var_name))));
        right_value27 = come_decrement_ref_count2(right_value27, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_33=0;
        for(        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_35=list$1sTypeph_begin((o2_saved_34));        !list$1sTypeph_end((o2_saved_34));        it_35=list$1sTypeph_next((o2_saved_34))        ){
            buffer_append_str(buf_32,((char*)(right_value28=make_type_name_string(it_35,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional64=i_33!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional64) {
                buffer_append_str(buf_32,",");
            }
            i_33++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_32,")");
        __result23__ = __result_obj__ = ((char*)(right_value30=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value29=buffer_to_string(buf_32))),info)));
        come_call_finalizer2(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value29 = come_decrement_ref_count2(right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result23__;
    }
    else {
        buffer_append_str(buf_32,((char*)(right_value32=xsprintf("%s (*%s)(",((char*)(right_value31=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))),var_name))));
        right_value31 = come_decrement_ref_count2(right_value31, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value32 = come_decrement_ref_count2(right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_36=0;
        for(        o2_saved_37=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_38=list$1sTypeph_begin((o2_saved_37));        !list$1sTypeph_end((o2_saved_37));        it_38=list$1sTypeph_next((o2_saved_37))        ){
            buffer_append_str(buf_32,((char*)(right_value33=make_type_name_string(it_38,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value33 = come_decrement_ref_count2(right_value33, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional65=i_36!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional65) {
                buffer_append_str(buf_32,",");
            }
            i_36++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_32,")");
        __result24__ = __result_obj__ = ((char*)(right_value34=buffer_to_string(buf_32)));
        come_call_finalizer2(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result24__;
    }
    __result25__ = __result_obj__ = ((char*)(right_value35=buffer_to_string(buf_32)));
    come_call_finalizer2(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result25__;
    come_call_finalizer2(buffer_finalize,buf_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value36;
void* right_value37;
struct buffer* buf_39;
_Bool _if_conditional66;
void* right_value38;
char* str_40;
_Bool _if_conditional67;
void* right_value39;
char* str_41;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value40;
char* __result26__;
void* right_value41;
struct CVALUE* come_value_42;
void* right_value42;
char* type_str_43;
void* right_value43;
void* right_value44;
_Bool _if_conditional70;
void* right_value45;
_Bool _if_conditional71;
void* right_value46;
_Bool _if_conditional72;
void* right_value47;
char* type_str_44;
_Bool _if_conditional73;
void* right_value48;
_Bool _if_conditional74;
void* right_value49;
char* type_str_45;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list$1sNodeph* o2_saved_46;
struct sNode* it_49;
_Bool _if_conditional81;
void* right_value50;
char* __result34__;
void* right_value51;
struct CVALUE* cvalue_52;
void* right_value52;
_Bool _if_conditional82;
void* right_value53;
void* right_value54;
char* type_str_53;
_Bool _if_conditional83;
void* right_value55;
char* __result35__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value56;
void* right_value57;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
right_value37 = (void*)0;
memset(&buf_39, 0, sizeof(struct buffer*));
right_value38 = (void*)0;
memset(&str_40, 0, sizeof(char*));
right_value39 = (void*)0;
memset(&str_41, 0, sizeof(char*));
right_value40 = (void*)0;
right_value41 = (void*)0;
memset(&come_value_42, 0, sizeof(struct CVALUE*));
right_value42 = (void*)0;
memset(&type_str_43, 0, sizeof(char*));
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
memset(&type_str_44, 0, sizeof(char*));
right_value48 = (void*)0;
right_value49 = (void*)0;
memset(&type_str_45, 0, sizeof(char*));
memset(&o2_saved_46, 0, sizeof(struct list$1sNodeph*));
memset(&it_49, 0, sizeof(struct sNode*));
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&cvalue_52, 0, sizeof(struct CVALUE*));
right_value52 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&type_str_53, 0, sizeof(char*));
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
    buf_39=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 237, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional66=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional66) {
        str_40=(char*)come_increment_ref_count(((char*)(right_value38=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_39,str_40);
        str_40 = come_decrement_ref_count2(str_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional67=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional67) {
            str_41=(char*)come_increment_ref_count(((char*)(right_value39=make_lambda_type_name_string(type,name,info))));
            right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_39,str_41);
            str_41 = come_decrement_ref_count2(str_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional68=type->mSizeNum!=((void*)0),            _if_conditional68) {
                if(_if_conditional69=!node_compile(type->mSizeNum,info),                _if_conditional69) {
                    err_msg(info,"invalid bit field number");
                    __result26__ = __result_obj__ = ((char*)(right_value40=__builtin_string("")));
                    come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result26__;
                }
                come_value_42=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value41=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                type_str_43=(char*)come_increment_ref_count(((char*)(right_value42=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_39,((char*)(right_value43=xsprintf("%s ",type_str_43))));
                right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_39,((char*)(right_value44=xsprintf("%s:%s",name,come_value_42->c_value))));
                right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional70=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional70) {
                    buffer_append_str(buf_39,((char*)(right_value45=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional71=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional71) {
                    buffer_append_str(buf_39,((char*)(right_value46=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_str_43 = come_decrement_ref_count2(type_str_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(type->mOmitArrayNum) {
                    type_str_44=(char*)come_increment_ref_count(((char*)(right_value47=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                    right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(buf_39,type_str_44);
                    buffer_append_str(buf_39," ");
                    buffer_append_str(buf_39,name);
                    buffer_append_str(buf_39,"[]");
                    if(_if_conditional73=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional73) {
                        buffer_append_str(buf_39,((char*)(right_value48=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    type_str_44 = come_decrement_ref_count2(type_str_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional74=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional74) {
                        type_str_45=(char*)come_increment_ref_count(((char*)(right_value49=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(buf_39,type_str_45);
                        buffer_append_str(buf_39," ");
                        if(_if_conditional75=type->mNoArrayPointerNum>0,                        _if_conditional75) {
                            buffer_append_str(buf_39,"(*");
                        }
                        buffer_append_str(buf_39,name);
                        if(_if_conditional76=type->mNoArrayPointerNum>0,                        _if_conditional76) {
                            buffer_append_str(buf_39,")");
                        }
                        for(                        o2_saved_46=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_49=list$1sNodeph_begin((o2_saved_46));                        !list$1sNodeph_end((o2_saved_46));                        it_49=list$1sNodeph_next((o2_saved_46))                        ){
                            if(_if_conditional81=!node_compile(it_49,info),                            _if_conditional81) {
                                err_msg(info,"invalid array number");
                                __result34__ = __result_obj__ = ((char*)(right_value50=__builtin_string("")));
                                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_str_45 = come_decrement_ref_count2(type_str_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                return __result34__;
                            }
                            cvalue_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value51=get_value_from_stack(-1,info))));
                            come_call_finalizer2(CVALUE_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            dec_stack_ptr(1,info);
                            buffer_append_str(buf_39,((char*)(right_value52=xsprintf("[%s]",cvalue_52->c_value))));
                            right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(CVALUE_finalize,cvalue_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(_if_conditional82=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional82) {
                            buffer_append_str(buf_39,((char*)(right_value53=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_45 = come_decrement_ref_count2(type_str_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        type_str_53=(char*)come_increment_ref_count(((char*)(right_value54=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional83=string_operator_equals(type_str_53,""),                        _if_conditional83) {
                            __result35__ = __result_obj__ = ((char*)(right_value55=__builtin_string("")));
                            type_str_53 = come_decrement_ref_count2(type_str_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            return __result35__;
                        }
                        buffer_append_str(buf_39,type_str_53);
                        buffer_append_str(buf_39," ");
                        if(_if_conditional84=type->mNoArrayPointerNum>0,                        _if_conditional84) {
                            buffer_append_str(buf_39,"(*");
                        }
                        buffer_append_str(buf_39,name);
                        if(_if_conditional85=type->mNoArrayPointerNum>0,                        _if_conditional85) {
                            buffer_append_str(buf_39,")");
                        }
                        if(_if_conditional86=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional86) {
                            buffer_append_str(buf_39,((char*)(right_value56=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_53 = come_decrement_ref_count2(type_str_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    __result36__ = __result_obj__ = ((char*)(right_value57=buffer_to_string(buf_39)));
    come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
    come_call_finalizer2(buffer_finalize,buf_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional77;
struct sNode* result_47;
struct sNode* __result27__;
_Bool _if_conditional78;
struct sNode* __result28__;
struct sNode* result_48;
struct sNode* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_47, 0, sizeof(struct sNode*));
memset(&result_48, 0, sizeof(struct sNode*));
                            if(_if_conditional77=self==((void*)0),                            _if_conditional77) {
                                memset(&result_47,0,sizeof(struct sNode*));
                                __result27__ = __result_obj__ = result_47;
                                return __result27__;
                            }
                            self->it=self->head;
                            if(self->it) {
                                __result28__ = __result_obj__ = self->it->item;
                                return __result28__;
                            }
                            memset(&result_48,0,sizeof(struct sNode*));
                            __result29__ = __result_obj__ = result_48;
                            return __result29__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result30__ = self==((void*)0)||self->it==((void*)0);
                            return __result30__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional79;
struct sNode* result_50;
struct sNode* __result31__;
_Bool _if_conditional80;
struct sNode* __result32__;
struct sNode* result_51;
struct sNode* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_50, 0, sizeof(struct sNode*));
memset(&result_51, 0, sizeof(struct sNode*));
                            if(_if_conditional79=self==((void*)0)||self->it==((void*)0),                            _if_conditional79) {
                                memset(&result_50,0,sizeof(struct sNode*));
                                __result31__ = __result_obj__ = result_50;
                                return __result31__;
                            }
                            self->it=self->it->next;
                            if(self->it) {
                                __result32__ = __result_obj__ = self->it->item;
                                return __result32__;
                            }
                            memset(&result_51,0,sizeof(struct sNode*));
                            __result33__ = __result_obj__ = result_51;
                            return __result33__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value58;
void* right_value59;
struct buffer* output_54;
_Bool _if_conditional87;
void* right_value60;
void* right_value61;
struct buffer* output2_55;
int i_56;
struct list$1sTypeph* o2_saved_57;
struct sType* it_58;
char* name_62;
void* right_value62;
char* str_63;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value63;
void* right_value64;
char* str_64;
void* right_value65;
_Bool _if_conditional92;
void* right_value100;
struct sType* base_result_type_83;
void* right_value101;
void* right_value102;
struct list$1sNodeph* __dec_obj28;
void* right_value103;
char* result_type_str_84;
int i_85;
struct list$1sTypeph* o2_saved_86;
struct sType* it_87;
char* name_88;
void* right_value104;
char* str_89;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct sNode* node_93;
_Bool _if_conditional167;
void* right_value105;
char* __result59__;
void* right_value106;
struct CVALUE* cvalue_94;
void* right_value107;
void* right_value108;
void* right_value109;
char* result_type_str_95;
int i_96;
struct list$1sTypeph* o2_saved_97;
struct sType* it_98;
char* name_99;
void* right_value110;
char* str_100;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value111;
void* right_value112;
void* right_value113;
void* right_value114;
void* right_value115;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&output_54, 0, sizeof(struct buffer*));
right_value60 = (void*)0;
right_value61 = (void*)0;
memset(&output2_55, 0, sizeof(struct buffer*));
memset(&i_56, 0, sizeof(int));
memset(&o2_saved_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct sType*));
memset(&name_62, 0, sizeof(char*));
right_value62 = (void*)0;
memset(&str_63, 0, sizeof(char*));
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&str_64, 0, sizeof(char*));
right_value65 = (void*)0;
right_value100 = (void*)0;
memset(&base_result_type_83, 0, sizeof(struct sType*));
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_type_str_84, 0, sizeof(char*));
memset(&i_85, 0, sizeof(int));
memset(&o2_saved_86, 0, sizeof(struct list$1sTypeph*));
memset(&it_87, 0, sizeof(struct sType*));
memset(&name_88, 0, sizeof(char*));
right_value104 = (void*)0;
memset(&str_89, 0, sizeof(char*));
memset(&node_93, 0, sizeof(struct sNode*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&cvalue_94, 0, sizeof(struct CVALUE*));
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&result_type_str_95, 0, sizeof(char*));
memset(&i_96, 0, sizeof(int));
memset(&o2_saved_97, 0, sizeof(struct list$1sTypeph*));
memset(&it_98, 0, sizeof(struct sType*));
memset(&name_99, 0, sizeof(char*));
right_value110 = (void*)0;
memset(&str_100, 0, sizeof(char*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
    output_54=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value59=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value58=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 341, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(fun->mResultType->mResultType) {
        output2_55=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value61=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value60=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 343, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(output2_55,fun->mName);
        buffer_append_str(output2_55,"(");
        i_56=0;
        for(        o2_saved_57=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_58=list$1sTypeph_begin((o2_saved_57));        !list$1sTypeph_end((o2_saved_57));        it_58=list$1sTypeph_next((o2_saved_57))        ){
            name_62=list$1charphp_operator_load_element(fun->mParamNames,i_56);
            str_63=(char*)come_increment_ref_count(((char*)(right_value62=make_define_var(it_58,name_62,(_Bool)0,info))));
            right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output2_55,str_63);
            if(_if_conditional90=i_56==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional90) {
                if(fun->mVarArgs) {
                    buffer_append_str(output2_55,", ...");
                }
            }
            else {
                buffer_append_str(output2_55,", ");
            }
            i_56++;
            str_63 = come_decrement_ref_count2(str_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_55,")");
        str_64=(char*)come_increment_ref_count(((char*)(right_value64=make_lambda_type_name_string(fun->mResultType,((char*)(right_value63=buffer_to_string(output2_55))),info))));
        right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_54,str_64);
        buffer_append_str(info->module->mSourceHead,((char*)(right_value65=buffer_to_string(output_54))));
        right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer2(buffer_finalize,output2_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_64 = come_decrement_ref_count2(str_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional92=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional92) {
            base_result_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj28=base_result_type_83->mArrayNum;
            base_result_type_83->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 379, "struct list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_str_84=(char*)come_increment_ref_count(((char*)(right_value103=make_type_name_string(base_result_type_83,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_54,result_type_str_84);
            buffer_append_str(output_54," (*");
            buffer_append_str(output_54,fun->mName);
            buffer_append_str(output_54,"(");
            i_85=0;
            for(            o2_saved_86=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_87=list$1sTypeph_begin((o2_saved_86));            !list$1sTypeph_end((o2_saved_86));            it_87=list$1sTypeph_next((o2_saved_86))            ){
                name_88=list$1charphp_operator_load_element(fun->mParamNames,i_85);
                str_89=(char*)come_increment_ref_count(((char*)(right_value104=make_define_var(it_87,name_88,(_Bool)0,info))));
                right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_54,str_89);
                if(_if_conditional163=i_85==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional163) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    buffer_append_str(output_54,", ");
                }
                i_85++;
                str_89 = come_decrement_ref_count2(str_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            node_93=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            if(_if_conditional167=!node_compile(node_93,info),            _if_conditional167) {
                err_msg(info,"invalid array number");
                __result59__ = __result_obj__ = ((char*)(right_value105=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_84 = come_decrement_ref_count2(result_type_str_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result59__;
            }
            cvalue_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            buffer_append_str(output_54,((char*)(right_value107=xsprintf("))[%s]",cvalue_94->c_value))));
            right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,((char*)(right_value108=buffer_to_string(output_54))));
            right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,";\n");
            come_call_finalizer2(sType_finalize,base_result_type_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_84 = come_decrement_ref_count2(result_type_str_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_95=(char*)come_increment_ref_count(((char*)(right_value109=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_54,result_type_str_95);
            buffer_append_str(output_54," ");
            buffer_append_str(output_54,fun->mName);
            buffer_append_str(output_54,"(");
            i_96=0;
            for(            o2_saved_97=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_98=list$1sTypeph_begin((o2_saved_97));            !list$1sTypeph_end((o2_saved_97));            it_98=list$1sTypeph_next((o2_saved_97))            ){
                name_99=list$1charphp_operator_load_element(fun->mParamNames,i_96);
                str_100=(char*)come_increment_ref_count(((char*)(right_value110=make_define_var(it_98,name_99,(_Bool)0,info))));
                right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_54,str_100);
                if(_if_conditional168=i_96==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional168) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_54,", ...");
                    }
                }
                else {
                    buffer_append_str(output_54,", ");
                }
                i_96++;
                str_100 = come_decrement_ref_count2(str_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(output_54,")");
            buffer_append_str(info->module->mSourceHead,((char*)(right_value111=buffer_to_string(output_54))));
            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,";\n");
            result_type_str_95 = come_decrement_ref_count2(result_type_str_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    buffer_append_str(output_54,"{\n");
    buffer_append_str(output_54,((char*)(right_value112=buffer_to_string(fun->mSourceHead))));
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_54,((char*)(right_value113=buffer_to_string(fun->mSourceHead2))));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_54,((char*)(right_value114=buffer_to_string(fun->mSource))));
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_54,"}\n");
    __result60__ = __result_obj__ = ((char*)(right_value115=buffer_to_string(output_54)));
    come_call_finalizer2(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
    come_call_finalizer2(buffer_finalize,output_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional88;
struct list_item$1charph* it_59;
int i_60;
_Bool _while_condtional5;
_Bool _if_conditional89;
char* __result37__;
char* default_value_61;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1charph*));
memset(&i_60, 0, sizeof(int));
memset(&default_value_61, 0, sizeof(char*));
                if(_if_conditional88=position<0,                _if_conditional88) {
                    position+=self->len;
                }
                it_59=self->head;
                i_60=0;
                while(_while_condtional5=it_59!=((void*)0),                _while_condtional5) {
                    if(_if_conditional89=position==i_60,                    _if_conditional89) {
                        __result37__ = __result_obj__ = it_59->item;
                        return __result37__;
                    }
                    it_59=it_59->next;
                    i_60++;
                }
                memset(&default_value_61,0,sizeof(char*));
                __result38__ = __result_obj__ = default_value_61;
                default_value_61 = come_decrement_ref_count2(default_value_61, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result38__;
                default_value_61 = come_decrement_ref_count2(default_value_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional93;
struct sType* __result39__;
void* right_value66;
struct sType* result_65;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value69;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional99;
void* right_value70;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional100;
void* right_value71;
char* __dec_obj9;
_Bool _if_conditional101;
void* right_value78;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional105;
void* right_value86;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value87;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional120;
void* right_value94;
struct list$1charph* __dec_obj22;
_Bool _if_conditional124;
void* right_value95;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value96;
struct sNode* __dec_obj24;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value97;
struct sNode* __dec_obj25;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value98;
char* __dec_obj26;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value99;
char* __dec_obj27;
struct sType* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
memset(&result_65, 0, sizeof(struct sType*));
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value78 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
                if(_if_conditional93=self==(void*)0,                _if_conditional93) {
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                result_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_65->mClass=self->mClass;
                }
                if(_if_conditional95=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional95) {
                    __dec_obj7=result_65->mNoSolvedGenericsType;
                    result_65->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value69=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional99=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional99) {
                    __dec_obj8=result_65->mOriginalLoadVarType;
                    result_65->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value70=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional100=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional100) {
                    __dec_obj9=result_65->mGenericsName;
                    result_65->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(self->mGenericsName))));
                    __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional101=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional101) {
                    __dec_obj13=result_65->mGenericsTypes;
                    result_65->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value78=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional105=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional105) {
                    __dec_obj17=result_65->mArrayNum;
                    result_65->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value86=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    result_65->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional119=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional119) {
                    __dec_obj18=result_65->mParamTypes;
                    result_65->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional120=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional120) {
                    __dec_obj22=result_65->mParamNames;
                    result_65->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional124=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional124) {
                    __dec_obj23=result_65->mResultType;
                    result_65->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional125=self!=((void*)0),                _if_conditional125) {
                    result_65->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional126=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional126) {
                    __dec_obj24=result_65->mAlignas;
                    result_65->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(self->mAlignas))));
                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    result_65->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional128=self!=((void*)0),                _if_conditional128) {
                    result_65->mShort=self->mShort;
                }
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    result_65->mLong=self->mLong;
                }
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    result_65->mLongLong=self->mLongLong;
                }
                if(_if_conditional131=self!=((void*)0),                _if_conditional131) {
                    result_65->mConstant=self->mConstant;
                }
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    result_65->mRegister=self->mRegister;
                }
                if(_if_conditional133=self!=((void*)0),                _if_conditional133) {
                    result_65->mVolatile=self->mVolatile;
                }
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    result_65->mStatic=self->mStatic;
                }
                if(_if_conditional135=self!=((void*)0),                _if_conditional135) {
                    result_65->mExtern=self->mExtern;
                }
                if(_if_conditional136=self!=((void*)0),                _if_conditional136) {
                    result_65->mRestrict=self->mRestrict;
                }
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    result_65->mImmutable=self->mImmutable;
                }
                if(_if_conditional138=self!=((void*)0),                _if_conditional138) {
                    result_65->mHeap=self->mHeap;
                }
                if(_if_conditional139=self!=((void*)0),                _if_conditional139) {
                    result_65->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional140=self!=((void*)0),                _if_conditional140) {
                    result_65->mDelegate=self->mDelegate;
                }
                if(_if_conditional141=self!=((void*)0),                _if_conditional141) {
                    result_65->mShare=self->mShare;
                }
                if(_if_conditional142=self!=((void*)0),                _if_conditional142) {
                    result_65->mClone=self->mClone;
                }
                if(_if_conditional143=self!=((void*)0),                _if_conditional143) {
                    result_65->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional144=self!=((void*)0),                _if_conditional144) {
                    result_65->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional145=self!=((void*)0),                _if_conditional145) {
                    result_65->mRefference=self->mRefference;
                }
                if(_if_conditional146=self!=((void*)0),                _if_conditional146) {
                    result_65->mException=self->mException;
                }
                if(_if_conditional147=self!=((void*)0),                _if_conditional147) {
                    result_65->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional148=self!=((void*)0),                _if_conditional148) {
                    result_65->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional149=self!=((void*)0),                _if_conditional149) {
                    result_65->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional150=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional150) {
                    __dec_obj25=result_65->mSizeNum;
                    result_65->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=sNode_clone(self->mSizeNum))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional151=self!=((void*)0),                _if_conditional151) {
                    result_65->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional152=self!=((void*)0),                _if_conditional152) {
                    result_65->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional153=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional153) {
                    __dec_obj26=result_65->mOriginalTypeName;
                    result_65->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value98=string_clone(self->mOriginalTypeName))));
                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional154=self!=((void*)0),                _if_conditional154) {
                    result_65->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional155=self!=((void*)0),                _if_conditional155) {
                    result_65->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional156=self!=((void*)0),                _if_conditional156) {
                    result_65->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional157=self!=((void*)0),                _if_conditional157) {
                    result_65->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional158=self!=((void*)0),                _if_conditional158) {
                    result_65->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional159=self!=((void*)0),                _if_conditional159) {
                    result_65->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional160=self!=((void*)0),                _if_conditional160) {
                    result_65->mInline=self->mInline;
                }
                if(_if_conditional161=self!=((void*)0),                _if_conditional161) {
                    result_65->mNullValue=self->mNullValue;
                }
                if(_if_conditional162=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional162) {
                    __dec_obj27=result_65->mAsmName;
                    result_65->mAsmName=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(self->mAsmName))));
                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result56__ = __result_obj__ = result_65;
                come_call_finalizer2(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer2(sType_finalize,result_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional96;
struct tuple1$1sTypeph* __result40__;
void* right_value67;
struct tuple1$1sTypeph* result_66;
_Bool _if_conditional98;
void* right_value68;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&result_66, 0, sizeof(struct tuple1$1sTypeph*));
right_value68 = (void*)0;
                        if(_if_conditional96=self==(void*)0,                        _if_conditional96) {
                            __result40__ = __result_obj__ = (void*)0;
                            return __result40__;
                        }
                        result_66=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value67=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional98=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional98) {
                            __dec_obj6=result_66->v1;
                            result_66->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result41__ = __result_obj__ = result_66;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result41__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional97=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional97) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional102;
struct list$1sTypeph* __result42__;
void* right_value72;
void* right_value73;
struct list$1sTypeph* result_67;
struct list_item$1sTypeph* it_68;
_Bool _while_condtional6;
void* right_value77;
struct list$1sTypeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
right_value73 = (void*)0;
memset(&result_67, 0, sizeof(struct list$1sTypeph*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
right_value77 = (void*)0;
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            __result42__ = __result_obj__ = ((void*)0);
                            return __result42__;
                        }
                        result_67=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value73=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value72=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_68=self->head;
                        while(_while_condtional6=it_68!=((void*)0),                        _while_condtional6) {
                            list$1sTypeph_add(result_67,(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(it_68->item)))));
                            come_call_finalizer2(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_68=it_68->next;
                        }
                        __result45__ = __result_obj__ = result_67;
                        come_call_finalizer2(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result45__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result43__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result43__;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional103;
void* right_value74;
struct list_item$1sTypeph* litem_69;
struct sType* __dec_obj10;
_Bool _if_conditional104;
void* right_value75;
struct list_item$1sTypeph* litem_70;
struct sType* __dec_obj11;
void* right_value76;
struct list_item$1sTypeph* litem_71;
struct sType* __dec_obj12;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1sTypeph*));
right_value75 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1sTypeph*));
right_value76 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional103=self->len==0,                                _if_conditional103) {
                                    litem_69=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value74=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_69->prev=((void*)0);
                                    litem_69->next=((void*)0);
                                    __dec_obj10=litem_69->item;
                                    litem_69->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_69;
                                    self->head=litem_69;
                                }
                                else {
                                    if(_if_conditional104=self->len==1,                                    _if_conditional104) {
                                        litem_70=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value75=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_70->prev=self->head;
                                        litem_70->next=((void*)0);
                                        __dec_obj11=litem_70->item;
                                        litem_70->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_70;
                                        self->head->next=litem_70;
                                    }
                                    else {
                                        litem_71=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value76=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_71->prev=self->tail;
                                        litem_71->next=((void*)0);
                                        __dec_obj12=litem_71->item;
                                        litem_71->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_71;
                                        self->tail=litem_71;
                                    }
                                }
                                self->len++;
                                __result44__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result44__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional106;
struct list$1sNodeph* __result46__;
void* right_value79;
void* right_value80;
struct list$1sNodeph* result_72;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional7;
void* right_value85;
struct list$1sNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&result_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
right_value85 = (void*)0;
                        if(_if_conditional106=self==((void*)0),                        _if_conditional106) {
                            __result46__ = __result_obj__ = ((void*)0);
                            return __result46__;
                        }
                        result_72=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value80=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value79=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_73=self->head;
                        while(_while_condtional7=it_73!=((void*)0),                        _while_condtional7) {
                            list$1sNodeph_add(result_72,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(it_73->item)))));
                            if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_73=it_73->next;
                        }
                        __result51__ = __result_obj__ = result_72;
                        come_call_finalizer2(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result51__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result47__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result47__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional107;
void* right_value81;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj14;
_Bool _if_conditional108;
void* right_value82;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj15;
void* right_value83;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sNodeph*));
right_value82 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
right_value83 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional107=self->len==0,                                _if_conditional107) {
                                    litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value81=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_74->prev=((void*)0);
                                    litem_74->next=((void*)0);
                                    __dec_obj14=litem_74->item;
                                    litem_74->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_74;
                                    self->head=litem_74;
                                }
                                else {
                                    if(_if_conditional108=self->len==1,                                    _if_conditional108) {
                                        litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value82=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_75->prev=self->head;
                                        litem_75->next=((void*)0);
                                        __dec_obj15=litem_75->item;
                                        litem_75->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_75;
                                        self->head->next=litem_75;
                                    }
                                    else {
                                        litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value83=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_76->prev=self->tail;
                                        litem_76->next=((void*)0);
                                        __dec_obj16=litem_76->item;
                                        litem_76->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_76;
                                        self->tail=litem_76;
                                    }
                                }
                                self->len++;
                                __result48__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result48__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional109;
struct sNode* __result49__;
void* right_value84;
struct sNode* result_77;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct sNode* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&result_77, 0, sizeof(struct sNode*));
                                if(_if_conditional109=self==(void*)0,                                _if_conditional109) {
                                    __result49__ = __result_obj__ = (void*)0;
                                    return __result49__;
                                }
                                result_77=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional110=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional110) {
                                    result_77->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional111=self!=((void*)0),                                _if_conditional111) {
                                    result_77->finalize=self->finalize;
                                }
                                if(_if_conditional112=self!=((void*)0),                                _if_conditional112) {
                                    result_77->clone=self->clone;
                                }
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    result_77->compile=self->compile;
                                }
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    result_77->sline=self->sline;
                                }
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    result_77->sname=self->sname;
                                }
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    result_77->terminated=self->terminated;
                                }
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    result_77->kind=self->kind;
                                }
                                __result50__ = __result_obj__ = result_77;
                                if(result_77) { result_77 = come_decrement_ref_count2(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result50__;
                                if(result_77) { result_77 = come_decrement_ref_count2(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional121;
struct list$1charph* __result52__;
void* right_value88;
void* right_value89;
struct list$1charph* result_78;
struct list_item$1charph* it_79;
_Bool _while_condtional8;
void* right_value93;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_78, 0, sizeof(struct list$1charph*));
memset(&it_79, 0, sizeof(struct list_item$1charph*));
right_value93 = (void*)0;
                        if(_if_conditional121=self==((void*)0),                        _if_conditional121) {
                            __result52__ = __result_obj__ = ((void*)0);
                            return __result52__;
                        }
                        result_78=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_79=self->head;
                        while(_while_condtional8=it_79!=((void*)0),                        _while_condtional8) {
                            list$1charph_add(result_78,(char*)come_increment_ref_count(((char*)(right_value93=string_clone(it_79->item)))));
                            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_79=it_79->next;
                        }
                        __result55__ = __result_obj__ = result_78;
                        come_call_finalizer2(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer2(list$1charphp_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result53__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result53__;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional122;
void* right_value90;
struct list_item$1charph* litem_80;
char* __dec_obj19;
_Bool _if_conditional123;
void* right_value91;
struct list_item$1charph* litem_81;
char* __dec_obj20;
void* right_value92;
struct list_item$1charph* litem_82;
char* __dec_obj21;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1charph*));
right_value91 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
right_value92 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional122=self->len==0,                                _if_conditional122) {
                                    litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_80->prev=((void*)0);
                                    litem_80->next=((void*)0);
                                    __dec_obj19=litem_80->item;
                                    litem_80->item=(char*)come_increment_ref_count(item);
                                    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_80;
                                    self->head=litem_80;
                                }
                                else {
                                    if(_if_conditional123=self->len==1,                                    _if_conditional123) {
                                        litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_81->prev=self->head;
                                        litem_81->next=((void*)0);
                                        __dec_obj20=litem_81->item;
                                        litem_81->item=(char*)come_increment_ref_count(item);
                                        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_81;
                                        self->head->next=litem_81;
                                    }
                                    else {
                                        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_82->prev=self->tail;
                                        litem_82->next=((void*)0);
                                        __dec_obj21=litem_82->item;
                                        litem_82->item=(char*)come_increment_ref_count(item);
                                        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_82;
                                        self->tail=litem_82;
                                    }
                                }
                                self->len++;
                                __result54__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result54__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional165;
struct list_item$1sNodeph* it_90;
int i_91;
_Bool _while_condtional9;
_Bool _if_conditional166;
struct sNode* __result57__;
struct sNode* default_value_92;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_90, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_91, 0, sizeof(int));
memset(&default_value_92, 0, sizeof(struct sNode*));
                if(_if_conditional165=position<0,                _if_conditional165) {
                    position+=self->len;
                }
                it_90=self->head;
                i_91=0;
                while(_while_condtional9=it_90!=((void*)0),                _while_condtional9) {
                    if(_if_conditional166=position==i_91,                    _if_conditional166) {
                        __result57__ = __result_obj__ = it_90->item;
                        return __result57__;
                    }
                    it_90=it_90->next;
                    i_91++;
                }
                memset(&default_value_92,0,sizeof(struct sNode*));
                __result58__ = __result_obj__ = default_value_92;
                if(default_value_92) { default_value_92 = come_decrement_ref_count2(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result58__;
                if(default_value_92) { default_value_92 = come_decrement_ref_count2(default_value_92, ((struct sNode*)default_value_92)->finalize, ((struct sNode*)default_value_92)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value116;
void* right_value117;
struct buffer* output_101;
_Bool _if_conditional170;
void* right_value118;
void* right_value119;
struct buffer* output2_102;
int i_103;
struct list$1sTypeph* o2_saved_104;
struct sType* it_105;
char* name_106;
void* right_value120;
char* str_107;
_Bool _if_conditional171;
void* right_value121;
void* right_value122;
char* str_108;
_Bool _if_conditional172;
void* right_value123;
struct sType* base_result_type_109;
void* right_value124;
void* right_value125;
struct list$1sNodeph* __dec_obj29;
void* right_value126;
char* result_type_str_110;
int i_111;
struct list$1sTypeph* o2_saved_112;
struct sType* it_113;
char* name_114;
void* right_value127;
char* str_115;
_Bool _if_conditional173;
_Bool _if_conditional174;
struct sNode* node_116;
_Bool _if_conditional175;
void* right_value128;
char* __result61__;
void* right_value129;
struct CVALUE* cvalue_117;
void* right_value130;
void* right_value131;
char* result_type_str_118;
int i_119;
struct list$1sTypeph* o2_saved_120;
struct sType* it_121;
char* name_122;
void* right_value132;
char* str_123;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value133;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&output_101, 0, sizeof(struct buffer*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&output2_102, 0, sizeof(struct buffer*));
memset(&i_103, 0, sizeof(int));
memset(&o2_saved_104, 0, sizeof(struct list$1sTypeph*));
memset(&it_105, 0, sizeof(struct sType*));
memset(&name_106, 0, sizeof(char*));
right_value120 = (void*)0;
memset(&str_107, 0, sizeof(char*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&str_108, 0, sizeof(char*));
right_value123 = (void*)0;
memset(&base_result_type_109, 0, sizeof(struct sType*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&result_type_str_110, 0, sizeof(char*));
memset(&i_111, 0, sizeof(int));
memset(&o2_saved_112, 0, sizeof(struct list$1sTypeph*));
memset(&it_113, 0, sizeof(struct sType*));
memset(&name_114, 0, sizeof(char*));
right_value127 = (void*)0;
memset(&str_115, 0, sizeof(char*));
memset(&node_116, 0, sizeof(struct sNode*));
right_value128 = (void*)0;
right_value129 = (void*)0;
memset(&cvalue_117, 0, sizeof(struct CVALUE*));
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&result_type_str_118, 0, sizeof(char*));
memset(&i_119, 0, sizeof(int));
memset(&o2_saved_120, 0, sizeof(struct list$1sTypeph*));
memset(&it_121, 0, sizeof(struct sType*));
memset(&name_122, 0, sizeof(char*));
right_value132 = (void*)0;
memset(&str_123, 0, sizeof(char*));
right_value133 = (void*)0;
    output_101=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value117=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value116=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 468, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(fun->mResultType->mResultType) {
        output2_102=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value118=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 471, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(output2_102,fun->mName);
        buffer_append_str(output2_102,"(");
        i_103=0;
        for(        o2_saved_104=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_105=list$1sTypeph_begin((o2_saved_104));        !list$1sTypeph_end((o2_saved_104));        it_105=list$1sTypeph_next((o2_saved_104))        ){
            name_106=list$1charphp_operator_load_element(fun->mParamNames,i_103);
            str_107=(char*)come_increment_ref_count(((char*)(right_value120=make_define_var(it_105,name_106,(_Bool)0,info))));
            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output2_102,str_107);
            if(_if_conditional171=i_103!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional171) {
                buffer_append_str(output2_102,", ");
            }
            i_103++;
            str_107 = come_decrement_ref_count2(str_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_102,")");
        str_108=(char*)come_increment_ref_count(((char*)(right_value122=make_lambda_type_name_string(fun->mResultType,((char*)(right_value121=buffer_to_string(output2_102))),info))));
        right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_101,str_108);
        buffer_append_str(output_101,";\n");
        come_call_finalizer2(buffer_finalize,output2_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_108 = come_decrement_ref_count2(str_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional172=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional172) {
            base_result_type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj29=base_result_type_109->mArrayNum;
            base_result_type_109->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value125=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value124=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 497, "struct list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_str_110=(char*)come_increment_ref_count(((char*)(right_value126=make_type_name_string(base_result_type_109,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_101,result_type_str_110);
            buffer_append_str(output_101," (*");
            buffer_append_str(output_101,fun->mName);
            buffer_append_str(output_101,"(");
            i_111=0;
            for(            o2_saved_112=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_113=list$1sTypeph_begin((o2_saved_112));            !list$1sTypeph_end((o2_saved_112));            it_113=list$1sTypeph_next((o2_saved_112))            ){
                name_114=list$1charphp_operator_load_element(fun->mParamNames,i_111);
                str_115=(char*)come_increment_ref_count(((char*)(right_value127=make_define_var(it_113,name_114,(_Bool)0,info))));
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_101,str_115);
                if(_if_conditional173=i_111==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional173) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    buffer_append_str(output_101,", ");
                }
                i_111++;
                str_115 = come_decrement_ref_count2(str_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            node_116=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0);
            if(_if_conditional175=!node_compile(node_116,info),            _if_conditional175) {
                err_msg(info,"invalid array number");
                __result61__ = __result_obj__ = ((char*)(right_value128=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_110 = come_decrement_ref_count2(result_type_str_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result61__;
            }
            cvalue_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            buffer_append_str(output_101,((char*)(right_value130=xsprintf("))[%s];\n",cvalue_117->c_value))));
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,base_result_type_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_110 = come_decrement_ref_count2(result_type_str_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_118=(char*)come_increment_ref_count(((char*)(right_value131=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_101,result_type_str_118);
            buffer_append_str(output_101," ");
            buffer_append_str(output_101,fun->mName);
            buffer_append_str(output_101,"(");
            i_119=0;
            for(            o2_saved_120=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_121=list$1sTypeph_begin((o2_saved_120));            !list$1sTypeph_end((o2_saved_120));            it_121=list$1sTypeph_next((o2_saved_120))            ){
                name_122=list$1charphp_operator_load_element(fun->mParamNames,i_119);
                str_123=(char*)come_increment_ref_count(((char*)(right_value132=make_define_var(it_121,name_122,(_Bool)0,info))));
                right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_101,str_123);
                if(_if_conditional176=i_119==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional176) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_101,", ...");
                    }
                }
                else {
                    buffer_append_str(output_101,", ");
                }
                i_119++;
                str_123 = come_decrement_ref_count2(str_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(output_101,");\n");
            result_type_str_118 = come_decrement_ref_count2(result_type_str_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result62__ = __result_obj__ = ((char*)(right_value133=buffer_to_string(output_101)));
    come_call_finalizer2(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
    come_call_finalizer2(buffer_finalize,output_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value134;
void* right_value135;
struct buffer* output_124;
void* right_value136;
char* result_type_str_125;
int i_126;
struct list$1sTypeph* o2_saved_127;
struct sType* it_128;
char* name_129;
void* right_value137;
char* str_130;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value138;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&output_124, 0, sizeof(struct buffer*));
right_value136 = (void*)0;
memset(&result_type_str_125, 0, sizeof(char*));
memset(&i_126, 0, sizeof(int));
memset(&o2_saved_127, 0, sizeof(struct list$1sTypeph*));
memset(&it_128, 0, sizeof(struct sType*));
memset(&name_129, 0, sizeof(char*));
right_value137 = (void*)0;
memset(&str_130, 0, sizeof(char*));
right_value138 = (void*)0;
    output_124=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value134=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 570, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type_str_125=(char*)come_increment_ref_count(((char*)(right_value136=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_124,result_type_str_125);
    buffer_append_str(output_124," ");
    buffer_append_str(output_124,name);
    buffer_append_str(output_124,"(");
    i_126=0;
    for(    o2_saved_127=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_128=list$1sTypeph_begin((o2_saved_127));    !list$1sTypeph_end((o2_saved_127));    it_128=list$1sTypeph_next((o2_saved_127))    ){
        name_129=list$1charphp_operator_load_element(lambda_type->mParamNames,i_126);
        str_130=(char*)come_increment_ref_count(((char*)(right_value137=make_define_var(it_128,name_129,(_Bool)0,info))));
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_124,str_130);
        if(_if_conditional178=i_126==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional178) {
            if(lambda_type->mVarArgs) {
                buffer_append_str(output_124,", ...");
            }
        }
        else {
            buffer_append_str(output_124,", ");
        }
        i_126++;
        str_130 = come_decrement_ref_count2(str_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(output_124,");\n");
    __result63__ = __result_obj__ = ((char*)(right_value138=buffer_to_string(output_124)));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_125 = come_decrement_ref_count2(result_type_str_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_125 = come_decrement_ref_count2(result_type_str_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional180;
char* msg2_131;
va_list args_132;
int len_133;
_Bool _if_conditional181;
int i_134;
void* right_value139;
void* right_value140;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_131, 0, sizeof(char*));
memset(&args_132, 0, sizeof(va_list));
memset(&len_133, 0, sizeof(int));
memset(&i_134, 0, sizeof(int));
right_value139 = (void*)0;
right_value140 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_132,msg);
    len_133=vasprintf(&msg2_131,msg,args_132);
    __builtin_va_end(args_132);
    if(info->come_fun) {
        for(        i_134=0;        i_134<info->block_level;        i_134++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(right_value139=xsprintf("%s",msg2_131))));
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(right_value140=xsprintf("%s",msg2_131))));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    free(msg2_131);
    come_call_finalizer2(va_list_finalize,(&args_132), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional182;
char* msg2_135;
va_list args_136;
int len_137;
void* right_value141;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_135, 0, sizeof(char*));
memset(&args_136, 0, sizeof(va_list));
memset(&len_137, 0, sizeof(int));
right_value141 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_136,msg);
    len_137=vasprintf(&msg2_135,msg,args_136);
    __builtin_va_end(args_136);
    buffer_append_str(info->module->mSourceHead,((char*)(right_value141=xsprintf("%s",msg2_135))));
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_135);
    come_call_finalizer2(va_list_finalize,(&args_136), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
void* right_value142;
char* name_138;
void* right_value143;
void* right_value144;
struct sType* result_type_139;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value148;
struct sType* __list_values1___140[2];
void* right_value152;
void* right_value153;
struct list$1sTypeph* param_types_145;
void* right_value154;
void* right_value155;
char* __list_values2___146[2];
void* right_value159;
void* right_value160;
struct list$1charph* param_names_151;
void* right_value161;
void* right_value162;
struct list$1charph* param_default_parametors_152;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
struct sFun* main_fun_153;
void* right_value173;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&name_138, 0, sizeof(char*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&result_type_139, 0, sizeof(struct sType*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&param_types_145, 0, sizeof(struct list$1sTypeph*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&param_names_151, 0, sizeof(struct list$1charph*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&param_default_parametors_152, 0, sizeof(struct list$1charph*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&main_fun_153, 0, sizeof(struct sFun*));
right_value173 = (void*)0;
    name_138=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("main"))));
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 651, "struct sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    {__list_values1___140[0]=come_increment_ref_count(((struct sType*)(right_value146=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value145=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___140[1]=come_increment_ref_count(((struct sType*)(right_value148=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value147=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652, "struct sType")))),"char**",(_Bool)0,info))));
}    param_types_145=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value153=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value152=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 652, "struct list$1sTypeph")))),2,__list_values1___140))));
    come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypeph_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    {__list_values2___146[0]=come_increment_ref_count(((char*)(right_value154=__builtin_string("argc"))));
__list_values2___146[1]=come_increment_ref_count(((char*)(right_value155=__builtin_string("argv"))));
}    param_names_151=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value160=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value159=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 653, "struct list$1charph")))),2,__list_values2___146))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charph_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_152=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value162=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value161=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 654, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    main_fun_153=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value166=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value163=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 655, "struct sFun")))),(char*)come_increment_ref_count(name_138),(struct sType*)come_increment_ref_count(result_type_139),(struct list$1sTypeph*)come_increment_ref_count(param_types_145),(struct list$1charph*)come_increment_ref_count(param_names_151),(struct list$1charph*)come_increment_ref_count(param_default_parametors_152),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(name_138)))),(struct sFun*)come_increment_ref_count(main_fun_153));
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,"#include <stdio.h>\n");
    info->come_fun=main_fun_153;
    info->block_level++;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    add_come_code(info,"return 0;\n");
    info->block_level--;
    __result92__ = 0;
    name_138 = come_decrement_ref_count2(name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result92__;
    name_138 = come_decrement_ref_count2(name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_141;
struct list$1sTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_141, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_141=0;        i_141<num_value;        i_141++        ){
            list$1sTypeph_push_back(self,values[i_141]);
        }
        __result65__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result65__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional183;
void* right_value149;
struct list_item$1sTypeph* litem_142;
struct sType* __dec_obj30;
_Bool _if_conditional184;
void* right_value150;
struct list_item$1sTypeph* litem_143;
struct sType* __dec_obj31;
void* right_value151;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj32;
struct list$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1sTypeph*));
right_value150 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1sTypeph*));
right_value151 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional183=self->len==0,                _if_conditional183) {
                    litem_142=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value149=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 225, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_142->prev=((void*)0);
                    litem_142->next=((void*)0);
                    __dec_obj30=litem_142->item;
                    litem_142->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_142;
                    self->head=litem_142;
                }
                else {
                    if(_if_conditional184=self->len==1,                    _if_conditional184) {
                        litem_143=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value150=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 235, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_143->prev=self->head;
                        litem_143->next=((void*)0);
                        __dec_obj31=litem_143->item;
                        litem_143->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_143;
                        self->head->next=litem_143;
                    }
                    else {
                        litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value151=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 245, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_144->prev=self->tail;
                        litem_144->next=((void*)0);
                        __dec_obj32=litem_144->item;
                        litem_144->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_144;
                        self->tail=litem_144;
                    }
                }
                self->len++;
                __result64__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_147;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_147, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_147=0;        i_147<num_value;        i_147++        ){
            list$1charph_push_back(self,values[i_147]);
        }
        __result67__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result67__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional185;
void* right_value156;
struct list_item$1charph* litem_148;
char* __dec_obj33;
_Bool _if_conditional186;
void* right_value157;
struct list_item$1charph* litem_149;
char* __dec_obj34;
void* right_value158;
struct list_item$1charph* litem_150;
char* __dec_obj35;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1charph*));
right_value157 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charph*));
right_value158 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional185=self->len==0,                _if_conditional185) {
                    litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value156=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 225, "struct list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_148->prev=((void*)0);
                    litem_148->next=((void*)0);
                    __dec_obj33=litem_148->item;
                    litem_148->item=(char*)come_increment_ref_count(item);
                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_148;
                    self->head=litem_148;
                }
                else {
                    if(_if_conditional186=self->len==1,                    _if_conditional186) {
                        litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value157=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 235, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_149->prev=self->head;
                        litem_149->next=((void*)0);
                        __dec_obj34=litem_149->item;
                        litem_149->item=(char*)come_increment_ref_count(item);
                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_149;
                        self->head->next=litem_149;
                    }
                    else {
                        litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value158=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 245, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_150->prev=self->tail;
                        litem_150->next=((void*)0);
                        __dec_obj35=litem_150->item;
                        litem_150->item=(char*)come_increment_ref_count(item);
                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_150;
                        self->tail=litem_150;
                    }
                }
                self->len++;
                __result66__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result66__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional187=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional187) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional188=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional188) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional189=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional189) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional190=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional190) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional191=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional191) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional192=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional192) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional193=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional193) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional196=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional196) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional197=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional197) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional198=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional198) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional199=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional199) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional200=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional200) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional201=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional201) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional194=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional194) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional195=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional195) {
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional202;
unsigned int hash_171;
unsigned int it_172;
_Bool _while_condtional12;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool same_key_exist_189;
char* it2_192;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct map$2charphsFunph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_171, 0, sizeof(unsigned int));
memset(&it_172, 0, sizeof(unsigned int));
memset(&same_key_exist_189, 0, sizeof(_Bool));
memset(&it2_192, 0, sizeof(char*));
        if(_if_conditional202=self->len*10>=self->size,        _if_conditional202) {
            map$2charphsFunph_rehash(self);
        }
        hash_171=string_get_hash_key(key)%self->size;
        it_172=hash_171;
        while(_while_condtional12=(_Bool)1,        _while_condtional12) {
            if(_if_conditional214=self->item_existance[it_172],            _if_conditional214) {
                if(_if_conditional215=string_equals(self->keys[it_172],key),                _if_conditional215) {
                    if(_if_conditional216=1,                    _if_conditional216) {
                        list$1charp_remove(self->key_list,self->keys[it_172]);
                        self->keys[it_172] = come_decrement_ref_count2(self->keys[it_172], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_172]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_172]);
                        self->keys[it_172]=key;
                    }
                    if(_if_conditional236=1,                    _if_conditional236) {
                        come_call_finalizer2(sFun_finalize,self->items[it_172], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_172]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_172]=item;
                    }
                    break;
                }
                it_172++;
                if(_if_conditional237=it_172>=self->size,                _if_conditional237) {
                    it_172=0;
                }
                else {
                    if(_if_conditional238=it_172==hash_171,                    _if_conditional238) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_172]=(_Bool)1;
                if(_if_conditional239=1,                _if_conditional239) {
                    self->keys[it_172]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_172]=key;
                }
                if(_if_conditional240=1,                _if_conditional240) {
                    self->items[it_172]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_172]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_189=(_Bool)0;
        for(        it2_192=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_192=list$1charp_next(self->key_list)        ){
            if(_if_conditional245=string_equals(it2_192,key),            _if_conditional245) {
                puts("SAME KEY");
                same_key_exist_189=(_Bool)1;
            }
        }
        if(_if_conditional246=!same_key_exist_189,        _if_conditional246) {
            list$1charp_push_back(self->key_list,key);
        }
        __result91__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result91__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_154;
void* right_value167;
char** keys_155;
void* right_value168;
struct sFun** items_156;
void* right_value169;
_Bool* item_existance_157;
int len_158;
char* it_161;
struct sFun* default_value_164;
struct sFun* it2_167;
unsigned int hash_168;
int n_169;
_Bool _while_condtional11;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sFun* default_value_170;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_154, 0, sizeof(int));
right_value167 = (void*)0;
memset(&keys_155, 0, sizeof(char**));
right_value168 = (void*)0;
memset(&items_156, 0, sizeof(struct sFun**));
right_value169 = (void*)0;
memset(&item_existance_157, 0, sizeof(_Bool*));
memset(&len_158, 0, sizeof(int));
memset(&it_161, 0, sizeof(char*));
memset(&default_value_164, 0, sizeof(struct sFun*));
memset(&it2_167, 0, sizeof(struct sFun*));
memset(&hash_168, 0, sizeof(unsigned int));
memset(&n_169, 0, sizeof(int));
memset(&default_value_170, 0, sizeof(struct sFun*));
                size_154=self->size*10;
                keys_155=(char**)come_increment_ref_count(((char**)(right_value167=(char**)come_calloc(1, sizeof(char*)*(1*(size_154)), "./comelang2.h", 1334, "char*"))));
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_156=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value168=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_154)), "./comelang2.h", 1335, "struct sFun*"))));
                come_call_finalizer2(sFun_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_157=(_Bool*)come_increment_ref_count(((_Bool*)(right_value169=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_154)), "./comelang2.h", 1336, "_Bool"))));
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_158=0;
                for(                it_161=map$2charphsFunph_begin(self);                !map$2charphsFunph_end(self);                it_161=map$2charphsFunph_next(self)                ){
                    memset(&default_value_164,0,sizeof(struct sFun*));
                    it2_167=map$2charphsFunph_at(self,it_161,default_value_164);
                    hash_168=string_get_hash_key(it_161)%size_154;
                    n_169=hash_168;
                    while(_while_condtional11=(_Bool)1,                    _while_condtional11) {
                        if(_if_conditional211=item_existance_157[n_169],                        _if_conditional211) {
                            n_169++;
                            if(_if_conditional212=n_169>=size_154,                            _if_conditional212) {
                                n_169=0;
                            }
                            else {
                                if(_if_conditional213=n_169==hash_168,                                _if_conditional213) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_157[n_169]=(_Bool)1;
                            keys_155[n_169]=it_161;
                            items_156[n_169]=map$2charphsFunph_at(self,it_161,default_value_170);
                            len_158++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_155;
                self->items=items_156;
                self->item_existance=item_existance_157;
                self->size=size_154;
                self->len=len_158;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional203;
char* result_159;
char* __result68__;
_Bool _if_conditional204;
char* __result69__;
char* result_160;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_159, 0, sizeof(char*));
memset(&result_160, 0, sizeof(char*));
                    if(_if_conditional203=self==((void*)0),                    _if_conditional203) {
                        memset(&result_159,0,sizeof(char*));
                        __result68__ = __result_obj__ = result_159;
                        return __result68__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result69__ = __result_obj__ = self->key_list->it->item;
                        return __result69__;
                    }
                    memset(&result_160,0,sizeof(char*));
                    __result70__ = __result_obj__ = result_160;
                    return __result70__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result71__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result71__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional205;
char* result_162;
char* __result72__;
_Bool _if_conditional206;
char* __result73__;
char* result_163;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_162, 0, sizeof(char*));
memset(&result_163, 0, sizeof(char*));
                    if(_if_conditional205=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional205) {
                        memset(&result_162,0,sizeof(char*));
                        __result72__ = __result_obj__ = result_162;
                        return __result72__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result73__ = __result_obj__ = self->key_list->it->item;
                        return __result73__;
                    }
                    memset(&result_163,0,sizeof(char*));
                    __result74__ = __result_obj__ = result_163;
                    return __result74__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_165;
unsigned int it_166;
_Bool _while_condtional10;
_Bool _if_conditional207;
_Bool _if_conditional208;
struct sFun* __result75__;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct sFun* __result76__;
struct sFun* __result77__;
struct sFun* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&it_166, 0, sizeof(unsigned int));
                        hash_165=string_get_hash_key(((char*)key))%self->size;
                        it_166=hash_165;
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            if(_if_conditional207=self->item_existance[it_166],                            _if_conditional207) {
                                if(_if_conditional208=string_equals(self->keys[it_166],key),                                _if_conditional208) {
                                    __result75__ = __result_obj__ = self->items[it_166];
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result75__;
                                }
                                it_166++;
                                if(_if_conditional209=it_166>=self->size,                                _if_conditional209) {
                                    it_166=0;
                                }
                                else {
                                    if(_if_conditional210=it_166==hash_165,                                    _if_conditional210) {
                                        __result76__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result76__;
                                    }
                                }
                            }
                            else {
                                __result77__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result77__;
                            }
                        }
                        __result78__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result78__;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_173;
struct list_item$1charp* it_174;
_Bool _while_condtional13;
_Bool _if_conditional217;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_173, 0, sizeof(int));
memset(&it_174, 0, sizeof(struct list_item$1charp*));
                            it2_173=0;
                            it_174=self->head;
                            while(_while_condtional13=it_174!=((void*)0),                            _while_condtional13) {
                                if(_if_conditional217=string_equals(it_174->item,item),                                _if_conditional217) {
                                    list$1charp_delete(self,it2_173,it2_173+1);
                                    break;
                                }
                                it2_173++;
                                it_174=it_174->next;
                            }
                            __result82__ = __result_obj__ = self;
                            return __result82__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
int tmp_175;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct list$1charp* __result79__;
_Bool _if_conditional224;
_Bool _if_conditional225;
struct list_item$1charp* it_178;
int i_179;
_Bool _while_condtional15;
_Bool _if_conditional226;
struct list_item$1charp* prev_it_180;
_Bool _if_conditional227;
_Bool _if_conditional228;
struct list_item$1charp* it_181;
int i_182;
_Bool _while_condtional16;
_Bool _if_conditional229;
_Bool _if_conditional230;
struct list_item$1charp* prev_it_183;
struct list_item$1charp* it_184;
struct list_item$1charp* head_prev_it_185;
struct list_item$1charp* tail_it_186;
int i_187;
_Bool _while_condtional17;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct list_item$1charp* prev_it_188;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct list$1charp* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_175, 0, sizeof(int));
memset(&it_178, 0, sizeof(struct list_item$1charp*));
memset(&i_179, 0, sizeof(int));
memset(&prev_it_180, 0, sizeof(struct list_item$1charp*));
memset(&it_181, 0, sizeof(struct list_item$1charp*));
memset(&i_182, 0, sizeof(int));
memset(&prev_it_183, 0, sizeof(struct list_item$1charp*));
memset(&it_184, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_185, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_186, 0, sizeof(struct list_item$1charp*));
memset(&i_187, 0, sizeof(int));
memset(&prev_it_188, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional218=head<0,                                        _if_conditional218) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional219=tail<0,                                        _if_conditional219) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional220=head>tail,                                        _if_conditional220) {
                                            tmp_175=tail;
                                            tail=head;
                                            head=tmp_175;
                                        }
                                        if(_if_conditional221=head<0,                                        _if_conditional221) {
                                            head=0;
                                        }
                                        if(_if_conditional222=tail>self->len,                                        _if_conditional222) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional223=head==tail,                                        _if_conditional223) {
                                            __result79__ = __result_obj__ = self;
                                            return __result79__;
                                        }
                                        if(_if_conditional224=head==0&&tail==self->len,                                        _if_conditional224) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional225=head==0,                                            _if_conditional225) {
                                                it_178=self->head;
                                                i_179=0;
                                                while(_while_condtional15=it_178!=((void*)0),                                                _while_condtional15) {
                                                    if(_if_conditional226=i_179<tail,                                                    _if_conditional226) {
                                                        prev_it_180=it_178;
                                                        it_178=it_178->next;
                                                        i_179++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional227=i_179==tail,                                                        _if_conditional227) {
                                                            self->head=it_178;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_178=it_178->next;
                                                            i_179++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional228=tail==self->len,                                                _if_conditional228) {
                                                    it_181=self->head;
                                                    i_182=0;
                                                    while(_while_condtional16=it_181!=((void*)0),                                                    _while_condtional16) {
                                                        if(_if_conditional229=i_182==head,                                                        _if_conditional229) {
                                                            self->tail=it_181->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional230=i_182>=head,                                                        _if_conditional230) {
                                                            prev_it_183=it_181;
                                                            it_181=it_181->next;
                                                            i_182++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_181=it_181->next;
                                                            i_182++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_184=self->head;
                                                    head_prev_it_185=((void*)0);
                                                    tail_it_186=((void*)0);
                                                    i_187=0;
                                                    while(_while_condtional17=it_184!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional231=i_187==head,                                                        _if_conditional231) {
                                                            head_prev_it_185=it_184->prev;
                                                        }
                                                        if(_if_conditional232=i_187==tail,                                                        _if_conditional232) {
                                                            tail_it_186=it_184;
                                                        }
                                                        if(_if_conditional233=i_187>=head&&i_187<tail,                                                        _if_conditional233) {
                                                            prev_it_188=it_184;
                                                            it_184=it_184->next;
                                                            i_187++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_184=it_184->next;
                                                            i_187++;
                                                        }
                                                    }
                                                    if(_if_conditional234=head_prev_it_185!=((void*)0),                                                    _if_conditional234) {
                                                        head_prev_it_185->next=tail_it_186;
                                                    }
                                                    if(_if_conditional235=tail_it_186!=((void*)0),                                                    _if_conditional235) {
                                                        tail_it_186->prev=head_prev_it_185;
                                                    }
                                                }
                                            }
                                        }
                                        __result81__ = __result_obj__ = self;
                                        return __result81__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_176;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_177;
struct list$1charp* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_176, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_177, 0, sizeof(struct list_item$1charp*));
                                                it_176=self->head;
                                                while(_while_condtional14=it_176!=((void*)0),                                                _while_condtional14) {
                                                    prev_it_177=it_176;
                                                    it_176=it_176->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result80__ = __result_obj__ = self;
                                                return __result80__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional241;
char* result_190;
char* __result83__;
_Bool _if_conditional242;
char* __result84__;
char* result_191;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_190, 0, sizeof(char*));
memset(&result_191, 0, sizeof(char*));
            if(_if_conditional241=self==((void*)0),            _if_conditional241) {
                memset(&result_190,0,sizeof(char*));
                __result83__ = __result_obj__ = result_190;
                return __result83__;
            }
            self->it=self->head;
            if(self->it) {
                __result84__ = __result_obj__ = self->it->item;
                return __result84__;
            }
            memset(&result_191,0,sizeof(char*));
            __result85__ = __result_obj__ = result_191;
            return __result85__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
            __result86__ = self==((void*)0)||self->it==((void*)0);
            return __result86__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional243;
char* result_193;
char* __result87__;
_Bool _if_conditional244;
char* __result88__;
char* result_194;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_193, 0, sizeof(char*));
memset(&result_194, 0, sizeof(char*));
            if(_if_conditional243=self==((void*)0)||self->it==((void*)0),            _if_conditional243) {
                memset(&result_193,0,sizeof(char*));
                __result87__ = __result_obj__ = result_193;
                return __result87__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result88__ = __result_obj__ = self->it->item;
                return __result88__;
            }
            memset(&result_194,0,sizeof(char*));
            __result89__ = __result_obj__ = result_194;
            return __result89__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional247;
void* right_value170;
struct list_item$1charp* litem_195;
_Bool _if_conditional248;
void* right_value171;
struct list_item$1charp* litem_196;
void* right_value172;
struct list_item$1charp* litem_197;
struct list$1charp* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1charp*));
right_value171 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1charp*));
right_value172 = (void*)0;
memset(&litem_197, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional247=self->len==0,                _if_conditional247) {
                    litem_195=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value170=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_195->prev=((void*)0);
                    litem_195->next=((void*)0);
                    litem_195->item=item;
                    self->tail=litem_195;
                    self->head=litem_195;
                }
                else {
                    if(_if_conditional248=self->len==1,                    _if_conditional248) {
                        litem_196=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value171=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_196->prev=self->head;
                        litem_196->next=((void*)0);
                        litem_196->item=item;
                        self->tail=litem_196;
                        self->head->next=litem_196;
                    }
                    else {
                        litem_197=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value172=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_197->prev=self->tail;
                        litem_197->next=((void*)0);
                        litem_197->item=item;
                        self->tail->next=litem_197;
                        self->tail=litem_197;
                    }
                }
                self->len++;
                __result90__ = __result_obj__ = self;
                return __result90__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
void* right_value174;
char* output_file_name_198;
struct _IO_FILE* f_199;
void* right_value175;
struct map$2charphsFunph* o2_saved_200;
char* it_201;
void* right_value176;
struct sFun* it2_205;
void* right_value177;
char* header_206;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct map$2charphsFunph* o2_saved_211;
char* it_212;
void* right_value178;
struct sFun* it2_213;
void* right_value179;
char* header_214;
_Bool _if_conditional261;
void* right_value180;
char* output_215;
_Bool _if_conditional262;
void* right_value181;
char* output_216;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct map$2charphsFunph* o2_saved_217;
char* it_218;
struct sFun* it2_219;
_Bool _if_conditional265;
void* right_value182;
char* output_220;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
memset(&output_file_name_198, 0, sizeof(char*));
memset(&f_199, 0, sizeof(struct _IO_FILE*));
right_value175 = (void*)0;
memset(&o2_saved_200, 0, sizeof(struct map$2charphsFunph*));
memset(&it_201, 0, sizeof(char*));
right_value176 = (void*)0;
memset(&it2_205, 0, sizeof(struct sFun*));
right_value177 = (void*)0;
memset(&header_206, 0, sizeof(char*));
memset(&o2_saved_211, 0, sizeof(struct map$2charphsFunph*));
memset(&it_212, 0, sizeof(char*));
right_value178 = (void*)0;
memset(&it2_213, 0, sizeof(struct sFun*));
right_value179 = (void*)0;
memset(&header_214, 0, sizeof(char*));
right_value180 = (void*)0;
memset(&output_215, 0, sizeof(char*));
right_value181 = (void*)0;
memset(&output_216, 0, sizeof(char*));
memset(&o2_saved_217, 0, sizeof(struct map$2charphsFunph*));
memset(&it_218, 0, sizeof(char*));
memset(&it2_219, 0, sizeof(struct sFun*));
right_value182 = (void*)0;
memset(&output_220, 0, sizeof(char*));
    output_file_name_198=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s.c",info->sname))));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    f_199=fopen(output_file_name_198,"w");
    fprintf(f_199,"// source head\n");
    fprintf(f_199,"%s\n",((char*)(right_value175=buffer_to_string(info->module->mSourceHead))));
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fprintf(f_199,"// header function\n");
    for(    o2_saved_200=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_201=map$2charphsFunph_begin((o2_saved_200));    !map$2charphsFunph_end((o2_saved_200));    it_201=map$2charphsFunph_next((o2_saved_200))    ){
        it2_205=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value176=__builtin_string(it_201))));
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_206=(char*)come_increment_ref_count(((char*)(right_value177=header_function(it2_205,info))));
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional253=it2_205->mStatic&&it2_205->mResultType->mInline,        _if_conditional253) {
        }
        else {
            if(it2_205->mStatic) {
                fprintf(f_199,"static %s",header_206);
            }
            else {
                if(it2_205->mResultType->mInline) {
                }
                else {
                    if(_if_conditional256=string_operator_not_equals(it_201,"__builtin_va_start")&&string_operator_not_equals(it_201,"__builtin_va_end"),                    _if_conditional256) {
                        fprintf(f_199,"%s\n",header_206,it_201);
                    }
                }
            }
        }
        header_206 = come_decrement_ref_count2(header_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_199,"// inline function\n");
    for(    o2_saved_211=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_212=map$2charphsFunph_begin((o2_saved_211));    !map$2charphsFunph_end((o2_saved_211));    it_212=map$2charphsFunph_next((o2_saved_211))    ){
        it2_213=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value178=__builtin_string(it_212))));
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_214=(char*)come_increment_ref_count(((char*)(right_value179=header_function(it2_213,info))));
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional261=it2_213->mStatic&&it2_213->mResultType->mInline,        _if_conditional261) {
            output_215=(char*)come_increment_ref_count(((char*)(right_value180=output_function(it2_213,info))));
            right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fprintf(f_199,"static inline %s",output_215);
            output_215 = come_decrement_ref_count2(output_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(it2_213->mResultType->mInline) {
                output_216=(char*)come_increment_ref_count(((char*)(right_value181=output_function(it2_213,info))));
                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fprintf(f_199,"static inline %s",output_216);
                output_216 = come_decrement_ref_count2(output_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(it2_213->mStatic) {
                }
                else {
                    if(_if_conditional264=string_operator_not_equals(it_212,"__builtin_va_start")&&string_operator_not_equals(it_212,"__builtin_va_end"),                    _if_conditional264) {
                    }
                }
            }
        }
        header_214 = come_decrement_ref_count2(header_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_199,"\n");
    fprintf(f_199,"// body function\n");
    for(    o2_saved_217=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_218=map$2charphsFunph_begin((o2_saved_217));    !map$2charphsFunph_end((o2_saved_217));    it_218=map$2charphsFunph_next((o2_saved_217))    ){
        it2_219=map$2charphsFunphp_operator_load_element(info->funcs,it_218);
        if(_if_conditional265=!it2_219->mExternal,        _if_conditional265) {
            output_220=(char*)come_increment_ref_count(((char*)(right_value182=output_function(it2_219,info))));
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional266=it2_219->mStatic&&it2_219->mResultType->mInline,            _if_conditional266) {
            }
            else {
                if(it2_219->mStatic) {
                    fprintf(f_199,"static %s",output_220);
                }
                else {
                    if(it2_219->mResultType->mInline) {
                    }
                    else {
                        fprintf(f_199,"%s",output_220);
                    }
                }
            }
            fprintf(f_199,"\n");
            output_220 = come_decrement_ref_count2(output_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fclose(f_199);
    __result97__ = (_Bool)1;
    output_file_name_198 = come_decrement_ref_count2(output_file_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result97__;
    output_file_name_198 = come_decrement_ref_count2(output_file_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_202;
unsigned int hash_203;
unsigned int it_204;
_Bool _while_condtional18;
_Bool _if_conditional249;
_Bool _if_conditional250;
struct sFun* __result93__;
_Bool _if_conditional251;
_Bool _if_conditional252;
struct sFun* __result94__;
struct sFun* __result95__;
struct sFun* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_202, 0, sizeof(struct sFun*));
memset(&hash_203, 0, sizeof(unsigned int));
memset(&it_204, 0, sizeof(unsigned int));
            memset(&default_value_202,0,sizeof(struct sFun*));
            hash_203=string_get_hash_key(((char*)key))%self->size;
            it_204=hash_203;
            while(_while_condtional18=(_Bool)1,            _while_condtional18) {
                if(_if_conditional249=self->item_existance[it_204],                _if_conditional249) {
                    if(_if_conditional250=string_equals(self->keys[it_204],key),                    _if_conditional250) {
                        __result93__ = __result_obj__ = self->items[it_204];
                        come_call_finalizer2(sFun_finalize,default_value_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result93__;
                    }
                    it_204++;
                    if(_if_conditional251=it_204>=self->size,                    _if_conditional251) {
                        it_204=0;
                    }
                    else {
                        if(_if_conditional252=it_204==hash_203,                        _if_conditional252) {
                            __result94__ = __result_obj__ = default_value_202;
                            come_call_finalizer2(sFun_finalize,default_value_202, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result94__;
                        }
                    }
                }
                else {
                    __result95__ = __result_obj__ = default_value_202;
                    come_call_finalizer2(sFun_finalize,default_value_202, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result95__;
                }
            }
            __result96__ = __result_obj__ = default_value_202;
            come_call_finalizer2(sFun_finalize,default_value_202, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result96__;
            come_call_finalizer2(sFun_finalize,default_value_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_207;
_Bool _if_conditional257;
_Bool _if_conditional258;
int i_208;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_207, 0, sizeof(int));
memset(&i_208, 0, sizeof(int));
        for(        i_207=0;        i_207<self->size;        i_207++        ){
            if(_if_conditional257=self->item_existance[i_207],            _if_conditional257) {
                if(_if_conditional258=1,                _if_conditional258) {
                    come_call_finalizer2(sFun_finalize,self->items[i_207], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_208=0;        i_208<self->size;        i_208++        ){
            if(_if_conditional259=self->item_existance[i_208],            _if_conditional259) {
                if(_if_conditional260=1,                _if_conditional260) {
                    self->keys[i_208] = come_decrement_ref_count2(self->keys[i_208], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_209;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_210;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_209, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_210, 0, sizeof(struct list_item$1charp*));
            it_209=self->head;
            while(_while_condtional19=it_209!=((void*)0),            _while_condtional19) {
                prev_it_210=it_209;
                it_209=it_209->next;
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
char* output_file_name_221;
struct _IO_FILE* f_222;
_Bool _if_conditional269;
void* right_value183;
struct map$2charphsFunph* o2_saved_223;
char* it_224;
void* right_value184;
struct sFun* it2_225;
void* right_value185;
char* header_226;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
struct map$2charphsFunph* o2_saved_227;
char* it_228;
void* right_value186;
struct sFun* it2_229;
void* right_value187;
char* header_230;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value188;
char* output_231;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value189;
char* output_232;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_221, 0, sizeof(char*));
memset(&f_222, 0, sizeof(struct _IO_FILE*));
right_value183 = (void*)0;
memset(&o2_saved_223, 0, sizeof(struct map$2charphsFunph*));
memset(&it_224, 0, sizeof(char*));
right_value184 = (void*)0;
memset(&it2_225, 0, sizeof(struct sFun*));
right_value185 = (void*)0;
memset(&header_226, 0, sizeof(char*));
memset(&o2_saved_227, 0, sizeof(struct map$2charphsFunph*));
memset(&it_228, 0, sizeof(char*));
right_value186 = (void*)0;
memset(&it2_229, 0, sizeof(struct sFun*));
right_value187 = (void*)0;
memset(&header_230, 0, sizeof(char*));
right_value188 = (void*)0;
memset(&output_231, 0, sizeof(char*));
right_value189 = (void*)0;
memset(&output_232, 0, sizeof(char*));
    output_file_name_221=(char*)come_increment_ref_count(info->output_file_name);
    f_222=fopen(output_file_name_221,"a");
    if(_if_conditional269=info->num_source_files==0&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional269) {
        fprintf(f_222,"#ifndef __COMMON_H__\n");
        fprintf(f_222,"#define __COMMON_H__\n");
        fprintf(f_222,"#include <comelang2.h>\n");
    }
    fprintf(f_222,"// source head\n");
    fprintf(f_222,"%s\n",((char*)(right_value183=buffer_to_string(info->module->mSourceHead))));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fprintf(f_222,"// header function\n");
    for(    o2_saved_223=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_224=map$2charphsFunph_begin((o2_saved_223));    !map$2charphsFunph_end((o2_saved_223));    it_224=map$2charphsFunph_next((o2_saved_223))    ){
        it2_225=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value184=__builtin_string(it_224))));
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_226=(char*)come_increment_ref_count(((char*)(right_value185=header_function(it2_225,info))));
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional270=it2_225->mStatic&&it2_225->mResultType->mInline,        _if_conditional270) {
        }
        else {
            if(it2_225->mStatic) {
            }
            else {
                if(it2_225->mResultType->mInline) {
                }
                else {
                    if(_if_conditional273=string_operator_not_equals(it_224,"__builtin_va_start")&&string_operator_not_equals(it_224,"__builtin_va_end"),                    _if_conditional273) {
                        if(_if_conditional274=string_operator_equals(it2_225->mDeclareSName,info->base_sname),                        _if_conditional274) {
                            fprintf(f_222,"%s\n",header_226,it_224);
                        }
                    }
                }
            }
        }
        header_226 = come_decrement_ref_count2(header_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_222,"// inline function\n");
    for(    o2_saved_227=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_228=map$2charphsFunph_begin((o2_saved_227));    !map$2charphsFunph_end((o2_saved_227));    it_228=map$2charphsFunph_next((o2_saved_227))    ){
        it2_229=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value186=__builtin_string(it_228))));
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        header_230=(char*)come_increment_ref_count(((char*)(right_value187=header_function(it2_229,info))));
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional275=it2_229->mStatic&&it2_229->mResultType->mInline,        _if_conditional275) {
            if(_if_conditional276=string_operator_equals(it2_229->mDeclareSName,info->base_sname),            _if_conditional276) {
                output_231=(char*)come_increment_ref_count(((char*)(right_value188=output_function(it2_229,info))));
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fprintf(f_222,"static inline %s",output_231);
                output_231 = come_decrement_ref_count2(output_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(it2_229->mResultType->mInline) {
                if(_if_conditional278=string_operator_equals(it2_229->mDeclareSName,info->base_sname),                _if_conditional278) {
                    output_232=(char*)come_increment_ref_count(((char*)(right_value189=output_function(it2_229,info))));
                    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    fprintf(f_222,"static inline %s",output_232);
                    output_232 = come_decrement_ref_count2(output_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(it2_229->mStatic) {
                }
                else {
                    if(_if_conditional280=string_operator_not_equals(it_228,"__builtin_va_start")&&string_operator_not_equals(it_228,"__builtin_va_end"),                    _if_conditional280) {
                    }
                }
            }
        }
        header_230 = come_decrement_ref_count2(header_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_222,"\n");
    if(_if_conditional281=info->num_source_files==info->max_source_files-1&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional281) {
        fprintf(f_222,"#endif\n");
    }
    fclose(f_222);
    __result98__ = (_Bool)1;
    output_file_name_221 = come_decrement_ref_count2(output_file_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result98__;
    output_file_name_221 = come_decrement_ref_count2(output_file_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional282;
char* msg2_233;
va_list args_234;
int len_235;
_Bool _if_conditional283;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_233, 0, sizeof(char*));
memset(&args_234, 0, sizeof(va_list));
memset(&len_235, 0, sizeof(int));
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_234,code);
    len_235=vasprintf(&msg2_233,code,args_234);
    __builtin_va_end(args_234);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_233);
    }
    free(msg2_233);
    come_call_finalizer2(va_list_finalize,(&args_234), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional284;
char* msg2_236;
va_list args_237;
int len_238;
_Bool _if_conditional285;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_236, 0, sizeof(char*));
memset(&args_237, 0, sizeof(va_list));
memset(&len_238, 0, sizeof(int));
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_237,code);
    len_238=vasprintf(&msg2_236,code,args_237);
    __builtin_va_end(args_237);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_236);
    }
    free(msg2_236);
    come_call_finalizer2(va_list_finalize,(&args_237), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional286;
_Bool _if_conditional287;
char* __dec_obj36;
_Bool _if_conditional288;
char* __dec_obj37;
_Bool _if_conditional289;
char* __dec_obj38;
memset(&__result_obj__, 0, sizeof(void*));
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s",info->module->mLastCode);
        __dec_obj36=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s",info->module->mLastCode2);
        __dec_obj37=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode3) {
        add_come_code(info,"%s",info->module->mLastCode3);
        __dec_obj38=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value190;
char* __dec_obj39;
_Bool _if_conditional292;
void* right_value191;
char* __dec_obj40;
_Bool _if_conditional293;
void* right_value192;
char* __dec_obj41;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s ,",((char*)(right_value190=string_substring(info->module->mLastCode,0,-3))));
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj39=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s ,",((char*)(right_value191=string_substring(info->module->mLastCode2,0,-3))));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj40=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode3) {
        add_come_code(info,"%s ,",((char*)(right_value192=string_substring(info->module->mLastCode3,0,-3))));
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj41=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional294;
char* msg2_239;
va_list args_240;
int len_241;
void* right_value193;
char* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_239, 0, sizeof(char*));
memset(&args_240, 0, sizeof(va_list));
memset(&len_241, 0, sizeof(int));
right_value193 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_240,msg);
    len_241=vasprintf(&msg2_239,msg,args_240);
    __builtin_va_end(args_240);
    __dec_obj42=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s",msg2_239))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_239);
    come_call_finalizer2(va_list_finalize,(&args_240), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional295;
char* msg2_242;
va_list args_243;
int len_244;
void* right_value194;
char* __dec_obj43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_242, 0, sizeof(char*));
memset(&args_243, 0, sizeof(va_list));
memset(&len_244, 0, sizeof(int));
right_value194 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_243,msg);
    len_244=vasprintf(&msg2_242,msg,args_243);
    __builtin_va_end(args_243);
    __dec_obj43=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("%s",msg2_242))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_242);
    come_call_finalizer2(va_list_finalize,(&args_243), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional296;
char* msg2_245;
va_list args_246;
int len_247;
void* right_value195;
char* __dec_obj44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_245, 0, sizeof(char*));
memset(&args_246, 0, sizeof(va_list));
memset(&len_247, 0, sizeof(int));
right_value195 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_246,msg);
    len_247=vasprintf(&msg2_245,msg,args_246);
    __builtin_va_end(args_246);
    __dec_obj44=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("%s",msg2_245))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_245);
    come_call_finalizer2(va_list_finalize,(&args_246), (void*)0, (void*)0, 1, 0, 0, 0, (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
int tmp_248;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct list$1CVALUEph* __result99__;
_Bool _if_conditional303;
_Bool _if_conditional305;
struct list_item$1CVALUEph* it_251;
int i_252;
_Bool _while_condtional21;
_Bool _if_conditional306;
struct list_item$1CVALUEph* prev_it_253;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct list_item$1CVALUEph* it_254;
int i_255;
_Bool _while_condtional22;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list_item$1CVALUEph* prev_it_256;
struct list_item$1CVALUEph* it_257;
struct list_item$1CVALUEph* head_prev_it_258;
struct list_item$1CVALUEph* tail_it_259;
int i_260;
_Bool _while_condtional23;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
struct list_item$1CVALUEph* prev_it_261;
_Bool _if_conditional314;
_Bool _if_conditional315;
struct list$1CVALUEph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_248, 0, sizeof(int));
memset(&it_251, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_252, 0, sizeof(int));
memset(&prev_it_253, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_254, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_255, 0, sizeof(int));
memset(&prev_it_256, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_257, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_258, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_259, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_260, 0, sizeof(int));
memset(&prev_it_261, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional297=head<0,        _if_conditional297) {
            head+=self->len;
        }
        if(_if_conditional298=tail<0,        _if_conditional298) {
            tail+=self->len+1;
        }
        if(_if_conditional299=head>tail,        _if_conditional299) {
            tmp_248=tail;
            tail=head;
            head=tmp_248;
        }
        if(_if_conditional300=head<0,        _if_conditional300) {
            head=0;
        }
        if(_if_conditional301=tail>self->len,        _if_conditional301) {
            tail=self->len;
        }
        if(_if_conditional302=head==tail,        _if_conditional302) {
            __result99__ = __result_obj__ = self;
            return __result99__;
        }
        if(_if_conditional303=head==0&&tail==self->len,        _if_conditional303) {
            list$1CVALUEph_reset(self);
        }
        else {
            if(_if_conditional305=head==0,            _if_conditional305) {
                it_251=self->head;
                i_252=0;
                while(_while_condtional21=it_251!=((void*)0),                _while_condtional21) {
                    if(_if_conditional306=i_252<tail,                    _if_conditional306) {
                        prev_it_253=it_251;
                        it_251=it_251->next;
                        i_252++;
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(_if_conditional307=i_252==tail,                        _if_conditional307) {
                            self->head=it_251;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_251=it_251->next;
                            i_252++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional308=tail==self->len,                _if_conditional308) {
                    it_254=self->head;
                    i_255=0;
                    while(_while_condtional22=it_254!=((void*)0),                    _while_condtional22) {
                        if(_if_conditional309=i_255==head,                        _if_conditional309) {
                            self->tail=it_254->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional310=i_255>=head,                        _if_conditional310) {
                            prev_it_256=it_254;
                            it_254=it_254->next;
                            i_255++;
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_254=it_254->next;
                            i_255++;
                        }
                    }
                }
                else {
                    it_257=self->head;
                    head_prev_it_258=((void*)0);
                    tail_it_259=((void*)0);
                    i_260=0;
                    while(_while_condtional23=it_257!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional311=i_260==head,                        _if_conditional311) {
                            head_prev_it_258=it_257->prev;
                        }
                        if(_if_conditional312=i_260==tail,                        _if_conditional312) {
                            tail_it_259=it_257;
                        }
                        if(_if_conditional313=i_260>=head&&i_260<tail,                        _if_conditional313) {
                            prev_it_261=it_257;
                            it_257=it_257->next;
                            i_260++;
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_257=it_257->next;
                            i_260++;
                        }
                    }
                    if(_if_conditional314=head_prev_it_258!=((void*)0),                    _if_conditional314) {
                        head_prev_it_258->next=tail_it_259;
                    }
                    if(_if_conditional315=tail_it_259!=((void*)0),                    _if_conditional315) {
                        tail_it_259->prev=head_prev_it_258;
                    }
                }
            }
        }
        __result101__ = __result_obj__ = self;
        return __result101__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_249;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_250;
struct list$1CVALUEph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_249, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_250, 0, sizeof(struct list_item$1CVALUEph*));
                it_249=self->head;
                while(_while_condtional20=it_249!=((void*)0),                _while_condtional20) {
                    prev_it_250=it_249;
                    it_249=it_249->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result100__ = __result_obj__ = self;
                return __result100__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional304=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional304) {
                            come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
char* __dec_obj45;
void* right_value199;
struct CVALUE* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
    __dec_obj45=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result106__ = __result_obj__ = ((struct CVALUE*)(right_value199=CVALUE_clone(list$1CVALUEphp_operator_load_element(info->stack,offset))));
    come_call_finalizer2(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result106__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional316;
struct list_item$1CVALUEph* it_262;
int i_263;
_Bool _while_condtional24;
_Bool _if_conditional317;
struct CVALUE* __result102__;
struct CVALUE* default_value_264;
struct CVALUE* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_262, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_263, 0, sizeof(int));
memset(&default_value_264, 0, sizeof(struct CVALUE*));
        if(_if_conditional316=position<0,        _if_conditional316) {
            position+=self->len;
        }
        it_262=self->head;
        i_263=0;
        while(_while_condtional24=it_262!=((void*)0),        _while_condtional24) {
            if(_if_conditional317=position==i_263,            _if_conditional317) {
                __result102__ = __result_obj__ = it_262->item;
                return __result102__;
            }
            it_262=it_262->next;
            i_263++;
        }
        memset(&default_value_264,0,sizeof(struct CVALUE*));
        __result103__ = __result_obj__ = default_value_264;
        come_call_finalizer2(CVALUE_finalize,default_value_264, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result103__;
        come_call_finalizer2(CVALUE_finalize,default_value_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional318;
struct CVALUE* __result104__;
void* right_value196;
struct CVALUE* result_265;
_Bool _if_conditional319;
void* right_value197;
char* __dec_obj46;
_Bool _if_conditional320;
void* right_value198;
struct sType* __dec_obj47;
_Bool _if_conditional321;
struct CVALUE* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
memset(&result_265, 0, sizeof(struct CVALUE*));
right_value197 = (void*)0;
right_value198 = (void*)0;
        if(_if_conditional318=self==(void*)0,        _if_conditional318) {
            __result104__ = __result_obj__ = (void*)0;
            return __result104__;
        }
        result_265=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value196=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional319=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional319) {
            __dec_obj46=result_265->c_value;
            result_265->c_value=(char*)come_increment_ref_count(((char*)(right_value197=string_clone(self->c_value))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional320=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional320) {
            __dec_obj47=result_265->type;
            result_265->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(self->type))));
            come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional321=self!=((void*)0),        _if_conditional321) {
            result_265->var=self->var;
        }
        __result105__ = __result_obj__ = result_265;
        come_call_finalizer2(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result105__;
        come_call_finalizer2(CVALUE_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj48=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj49=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj50=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
}

