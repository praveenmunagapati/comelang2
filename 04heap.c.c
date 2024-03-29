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
    if(gComeGC) {
        return;
    }
    if(right_value->var) {
        if(right_value->var->mType->mDelegate) {
            __dec_obj12=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(right_value->var->mType->mShare) {
                __dec_obj13=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value49=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(right_value->var->mType->mClone) {
                    __dec_obj14=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value50=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj15=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value51=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    else {
        if(right_value->type->mDelegate) {
        }
        else {
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
_Bool _if_conditional102;
struct sType* __result52__;
_Bool _if_conditional103;
struct sType* __result54__;
struct sClass* klass_36;
_Bool _if_conditional104;
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
_Bool _if_conditional111;
int generics_number_50;
_Bool _if_conditional112;
void* right_value97;
struct list$1sNodeph* array_num_51;
_Bool immutable__52;
int pointer_num_53;
_Bool heap_54;
_Bool no_heap_55;
_Bool no_calling_destructor_56;
_Bool null_value_57;
void* right_value98;
struct sType* __dec_obj45;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct list$1sNodeph* __dec_obj46;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
int generics_number_61;
_Bool _if_conditional123;
struct sClass* klass2_62;
int generics_number2_63;
_Bool _if_conditional124;
void* right_value99;
struct list$1sNodeph* array_num_64;
_Bool immutable__65;
int pointer_num_66;
_Bool heap_67;
_Bool no_heap_68;
_Bool no_calling_destructor_69;
_Bool null_value_70;
void* right_value100;
struct sType* __dec_obj47;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct list$1sNodeph* __dec_obj48;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct list$1sTypeph* o2_saved_71;
struct sType* it_72;
void* right_value101;
struct sType* type_73;
void* right_value102;
struct list$1sTypeph* o2_saved_74;
struct sType* it_75;
void* right_value103;
struct sType* type_76;
void* right_value104;
_Bool _if_conditional132;
void* right_value105;
char* new_name_77;
struct sType* __result68__;
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
memset(&no_heap_55, 0, sizeof(_Bool));
memset(&no_calling_destructor_56, 0, sizeof(_Bool));
memset(&null_value_57, 0, sizeof(_Bool));
right_value98 = (void*)0;
memset(&generics_number_61, 0, sizeof(int));
memset(&klass2_62, 0, sizeof(struct sClass*));
memset(&generics_number2_63, 0, sizeof(int));
right_value99 = (void*)0;
memset(&array_num_64, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__65, 0, sizeof(_Bool));
memset(&pointer_num_66, 0, sizeof(int));
memset(&heap_67, 0, sizeof(_Bool));
memset(&no_heap_68, 0, sizeof(_Bool));
memset(&no_calling_destructor_69, 0, sizeof(_Bool));
memset(&null_value_70, 0, sizeof(_Bool));
right_value100 = (void*)0;
memset(&o2_saved_71, 0, sizeof(struct list$1sTypeph*));
memset(&it_72, 0, sizeof(struct sType*));
right_value101 = (void*)0;
memset(&type_73, 0, sizeof(struct sType*));
right_value102 = (void*)0;
memset(&o2_saved_74, 0, sizeof(struct list$1sTypeph*));
memset(&it_75, 0, sizeof(struct sType*));
right_value103 = (void*)0;
memset(&type_76, 0, sizeof(struct sType*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&new_name_77, 0, sizeof(char*));
    result_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional102=generics_type==((void*)0),    _if_conditional102) {
        __result52__ = __result_obj__ = result_35;
        come_call_finalizer2(sType_finalize,result_35, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result52__;
    }
    if(_if_conditional103=list$1sTypeph_length(generics_type->mGenericsTypes)==0,    _if_conditional103) {
        __result54__ = __result_obj__ = result_35;
        come_call_finalizer2(sType_finalize,result_35, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result54__;
    }
    klass_36=type->mClass;
    if(_if_conditional104=string_operator_equals(klass_36->mName,"lambda"),    _if_conditional104) {
        result_type_37=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=solve_generics(type->mResultType->v1,generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj41=result_35->mResultType;
        result_35->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_37)))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_reset(result_35->mParamTypes);
        for(        o2_saved_40=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_43=list$1sTypeph_begin((o2_saved_40));        !list$1sTypeph_end((o2_saved_40));        it_43=list$1sTypeph_next((o2_saved_40))        ){
            new_param_type_46=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=solve_generics(it_43,generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(result_35->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(new_param_type_46)))));
            come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,new_param_type_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional111=klass_36->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0,        _if_conditional111) {
            generics_number_50=klass_36->mMethodGenericsNum;
            if(_if_conditional112=generics_number_50>=list$1sTypeph_length(info->method_generics_types),            _if_conditional112) {
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_50,list$1sTypeph_length(info->method_generics_types));
                exit(2);
            }
            array_num_51=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=list$1sNodephp_clone(type->mArrayNum))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            immutable__52=type->mImmutable;
            pointer_num_53=type->mPointerNum;
            heap_54=type->mHeap;
            no_heap_55=type->mNoHeap;
            no_calling_destructor_56=type->mNoCallingDestructor;
            null_value_57=type->mNullValue;
            __dec_obj45=result_35;
            result_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_50)))));
            come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(heap_54) {
                result_35->mHeap=heap_54;
            }
            if(no_heap_55) {
                result_35->mNoHeap=(_Bool)1;
                result_35->mHeap=(_Bool)0;
            }
            if(no_calling_destructor_56) {
                result_35->mNoCallingDestructor=(_Bool)1;
            }
            if(immutable__52) {
                result_35->mImmutable=immutable__52;
            }
            if(_if_conditional119=list$1sNodeph_length(array_num_51)>0,            _if_conditional119) {
                __dec_obj46=result_35->mArrayNum;
                result_35->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_51);
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(null_value_57) {
                result_35->mNullValue=null_value_57;
            }
            if(_if_conditional121=pointer_num_53>0,            _if_conditional121) {
                result_35->mPointerNum+=pointer_num_53;
            }
            come_call_finalizer2(list$1sNodephp_finalize,array_num_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(klass_36->mGenerics) {
                generics_number_61=klass_36->mGenericsNum;
                if(_if_conditional123=generics_number_61>=list$1sTypeph_length(generics_type->mGenericsTypes),                _if_conditional123) {
                    err_msg(info,"invalid generics parametor number");
                    exit(2);
                }
                klass2_62=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_61)->mClass;
                generics_number2_63=klass2_62->mGenericsNum;
                if(_if_conditional124=generics_number_61!=generics_number2_63,                _if_conditional124) {
                    array_num_64=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value99=list$1sNodephp_clone(type->mArrayNum))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    immutable__65=type->mImmutable;
                    pointer_num_66=type->mPointerNum;
                    heap_67=type->mHeap;
                    no_heap_68=type->mNoHeap;
                    no_calling_destructor_69=type->mNoCallingDestructor;
                    null_value_70=type->mNullValue;
                    __dec_obj47=result_35;
                    result_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_61)))));
                    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(heap_67) {
                        result_35->mHeap=heap_67;
                    }
                    if(no_heap_68) {
                        result_35->mNoHeap=(_Bool)1;
                        result_35->mHeap=(_Bool)0;
                    }
                    if(no_calling_destructor_69) {
                        result_35->mNoCallingDestructor=(_Bool)1;
                    }
                    if(immutable__65) {
                        result_35->mImmutable=immutable__65;
                    }
                    if(_if_conditional129=list$1sNodeph_length(array_num_64)>0,                    _if_conditional129) {
                        __dec_obj48=result_35->mArrayNum;
                        result_35->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_64);
                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(null_value_70) {
                        result_35->mNullValue=null_value_70;
                    }
                    if(_if_conditional131=pointer_num_66>0,                    _if_conditional131) {
                        result_35->mPointerNum+=pointer_num_66;
                    }
                    come_call_finalizer2(list$1sNodephp_finalize,array_num_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                list$1sTypeph_reset(result_35->mGenericsTypes);
                for(                o2_saved_71=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_72=list$1sTypeph_begin((o2_saved_71));                !list$1sTypeph_end((o2_saved_71));                it_72=list$1sTypeph_next((o2_saved_71))                ){
                    type_73=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=solve_generics(it_72,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_35->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(type_73)))));
                    come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                list$1sTypeph_reset(result_35->mMultipleTypes);
                for(                o2_saved_74=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_75=list$1sTypeph_begin((o2_saved_74));                !list$1sTypeph_end((o2_saved_74));                it_75=list$1sTypeph_next((o2_saved_74))                ){
                    type_76=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=solve_generics(it_75,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_35->mMultipleTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(type_76)))));
                    come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(_if_conditional132=!output_generics_struct(result_35,generics_type,info),                _if_conditional132) {
                    new_name_77=(char*)come_increment_ref_count(((char*)(right_value105=create_generics_name(type,info))));
                    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    printf("output generics is failed(%s)",new_name_77);
                    exit(1);
                    new_name_77 = come_decrement_ref_count2(new_name_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result68__ = __result_obj__ = result_35;
    come_call_finalizer2(sType_finalize,result_35, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result68__;
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
void* right_value87;
char* __dec_obj39;
_Bool _if_conditional101;
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
        if(_if_conditional13=self==(void*)0,        _if_conditional13) {
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional31=self!=((void*)0),        _if_conditional31) {
            result_11->mClass=self->mClass;
        }
        if(_if_conditional32=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional32) {
            __dec_obj20=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional36=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional36) {
            __dec_obj22=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value63=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional40=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional40) {
            __dec_obj23=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value64=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional41=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional41) {
            __dec_obj24=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(self->mGenericsName))));
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional42=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional42) {
            __dec_obj25=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value66=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional43=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional43) {
            __dec_obj29=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value74=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional57=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional57) {
            __dec_obj30=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value75=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional58=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional58) {
            __dec_obj34=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value82=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional62=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional62) {
            __dec_obj35=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value83=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_11->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional64=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional64) {
            __dec_obj36=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(self->mAlignas))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_11->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_11->mShort=self->mShort;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_11->mLong=self->mLong;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_11->mLongLong=self->mLongLong;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_11->mConstant=self->mConstant;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_11->mRegister=self->mRegister;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_11->mVolatile=self->mVolatile;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_11->mStatic=self->mStatic;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_11->mExtern=self->mExtern;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_11->mRestrict=self->mRestrict;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_11->mImmutable=self->mImmutable;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_11->mHeap=self->mHeap;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_11->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_11->mDelegate=self->mDelegate;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_11->mShare=self->mShare;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_11->mClone=self->mClone;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_11->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_11->mRefference=self->mRefference;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_11->mException=self->mException;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_11->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional88=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional88) {
            __dec_obj37=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(self->mSizeNum))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional91=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional91) {
            __dec_obj38=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value86=string_clone(self->mOriginalTypeName))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_11->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_11->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_11->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_11->mInline=self->mInline;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_11->mNullValue=self->mNullValue;
        }
        if(_if_conditional100=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional100) {
            __dec_obj39=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value87=string_clone(self->mAsmName))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_11->mArrayPointerType=self->mArrayPointerType;
        }
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
            if(_if_conditional14=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional16=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional16) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional19=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional19) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional20=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional20) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional21) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional23=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional23) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional24) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional26=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional26) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional27) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional28=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional28) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional29=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional29) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional30=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional30) {
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
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional15) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional17=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional17) {
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
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
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
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional25) {
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
                if(_if_conditional33=self==((void*)0),                _if_conditional33) {
                    __result35__ = __result_obj__ = ((void*)0);
                    return __result35__;
                }
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value55=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value54=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                        if(_if_conditional34=self->len==0,                        _if_conditional34) {
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj17=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional35=self->len==1,                            _if_conditional35) {
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj18=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value58=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj19=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                if(_if_conditional37=self==(void*)0,                _if_conditional37) {
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value61=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional39=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional39) {
                    __dec_obj21=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result40__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional38=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional38) {
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
                if(_if_conditional44=self==((void*)0),                _if_conditional44) {
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value68=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value67=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value73=sNode_clone(it_25->item)))));
                    if(right_value73) { right_value73 = come_decrement_ref_count2(right_value73, ((struct sNode*)right_value73)->finalize, ((struct sNode*)right_value73)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
                        if(_if_conditional45=self->len==0,                        _if_conditional45) {
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value69=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj26=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional46=self->len==1,                            _if_conditional46) {
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value70=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj27=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value71=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj28=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
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
                        if(_if_conditional47=self==(void*)0,                        _if_conditional47) {
                            __result44__ = __result_obj__ = (void*)0;
                            return __result44__;
                        }
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional48=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional48) {
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_29->finalize=self->finalize;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_29->clone=self->clone;
                        }
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            result_29->compile=self->compile;
                        }
                        if(_if_conditional52=self!=((void*)0),                        _if_conditional52) {
                            result_29->sline=self->sline;
                        }
                        if(_if_conditional53=self!=((void*)0),                        _if_conditional53) {
                            result_29->sname=self->sname;
                        }
                        if(_if_conditional54=self!=((void*)0),                        _if_conditional54) {
                            result_29->terminated=self->terminated;
                        }
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
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
                if(_if_conditional59=self==((void*)0),                _if_conditional59) {
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value77=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_31=self->head;
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value81=string_clone(it_31->item)))));
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                        if(_if_conditional60=self->len==0,                        _if_conditional60) {
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value78=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_32->prev=((void*)0);
                            litem_32->next=((void*)0);
                            __dec_obj31=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_32;
                            self->head=litem_32;
                        }
                        else {
                            if(_if_conditional61=self->len==1,                            _if_conditional61) {
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value79=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_33->prev=self->head;
                                litem_33->next=((void*)0);
                                __dec_obj32=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_33;
                                self->head->next=litem_33;
                            }
                            else {
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value80=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_34->prev=self->tail;
                                litem_34->next=((void*)0);
                                __dec_obj33=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
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
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
        __result53__ = self->len;
        return __result53__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj40;
struct tuple1$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj40=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __result55__ = __result_obj__ = self;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result55__;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_38;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_39;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_38, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_39, 0, sizeof(struct list_item$1sTypeph*));
            it_38=self->head;
            while(_while_condtional7=it_38!=((void*)0),            _while_condtional7) {
                prev_it_39=it_38;
                it_38=it_38->next;
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result56__ = __result_obj__ = self;
            return __result56__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional105;
struct sType* result_41;
struct sType* __result57__;
_Bool _if_conditional106;
struct sType* __result58__;
struct sType* result_42;
struct sType* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_41, 0, sizeof(struct sType*));
memset(&result_42, 0, sizeof(struct sType*));
            if(_if_conditional105=self==((void*)0),            _if_conditional105) {
                memset(&result_41,0,sizeof(struct sType*));
                __result57__ = __result_obj__ = result_41;
                return __result57__;
            }
            self->it=self->head;
            if(self->it) {
                __result58__ = __result_obj__ = self->it->item;
                return __result58__;
            }
            memset(&result_42,0,sizeof(struct sType*));
            __result59__ = __result_obj__ = result_42;
            return __result59__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
            __result60__ = self==((void*)0)||self->it==((void*)0);
            return __result60__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional107;
struct sType* result_44;
struct sType* __result61__;
_Bool _if_conditional108;
struct sType* __result62__;
struct sType* result_45;
struct sType* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_44, 0, sizeof(struct sType*));
memset(&result_45, 0, sizeof(struct sType*));
            if(_if_conditional107=self==((void*)0)||self->it==((void*)0),            _if_conditional107) {
                memset(&result_44,0,sizeof(struct sType*));
                __result61__ = __result_obj__ = result_44;
                return __result61__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result62__ = __result_obj__ = self->it->item;
                return __result62__;
            }
            memset(&result_45,0,sizeof(struct sType*));
            __result63__ = __result_obj__ = result_45;
            return __result63__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional109;
void* right_value93;
struct list_item$1sTypeph* litem_47;
struct sType* __dec_obj42;
_Bool _if_conditional110;
void* right_value94;
struct list_item$1sTypeph* litem_48;
struct sType* __dec_obj43;
void* right_value95;
struct list_item$1sTypeph* litem_49;
struct sType* __dec_obj44;
struct list$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sTypeph*));
right_value94 = (void*)0;
memset(&litem_48, 0, sizeof(struct list_item$1sTypeph*));
right_value95 = (void*)0;
memset(&litem_49, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional109=self->len==0,                _if_conditional109) {
                    litem_47=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value93=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_47->prev=((void*)0);
                    litem_47->next=((void*)0);
                    __dec_obj42=litem_47->item;
                    litem_47->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_47;
                    self->head=litem_47;
                }
                else {
                    if(_if_conditional110=self->len==1,                    _if_conditional110) {
                        litem_48=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_48->prev=self->head;
                        litem_48->next=((void*)0);
                        __dec_obj43=litem_48->item;
                        litem_48->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_48;
                        self->head->next=litem_48;
                    }
                    else {
                        litem_49=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value95=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_49->prev=self->tail;
                        litem_49->next=((void*)0);
                        __dec_obj44=litem_49->item;
                        litem_49->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_49;
                        self->tail=litem_49;
                    }
                }
                self->len++;
                __result64__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional113;
struct list_item$1sTypeph* it_58;
int i_59;
_Bool _while_condtional8;
_Bool _if_conditional114;
struct sType* __result65__;
struct sType* default_value_60;
struct sType* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_59, 0, sizeof(int));
memset(&default_value_60, 0, sizeof(struct sType*));
                if(_if_conditional113=position<0,                _if_conditional113) {
                    position+=self->len;
                }
                it_58=self->head;
                i_59=0;
                while(_while_condtional8=it_58!=((void*)0),                _while_condtional8) {
                    if(_if_conditional114=position==i_59,                    _if_conditional114) {
                        __result65__ = __result_obj__ = it_58->item;
                        return __result65__;
                    }
                    it_58=it_58->next;
                    i_59++;
                }
                memset(&default_value_60,0,sizeof(struct sType*));
                __result66__ = __result_obj__ = default_value_60;
                come_call_finalizer2(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result66__;
                come_call_finalizer2(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
                __result67__ = self->len;
                return __result67__;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value106;
struct sType* result_78;
_Bool _if_conditional133;
void* right_value107;
struct sType* __dec_obj49;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_78, 0, sizeof(struct sType*));
right_value107 = (void*)0;
    result_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(generics_type) {
        __dec_obj49=result_78;
        result_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=solve_generics(result_78,generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    __result69__ = __result_obj__ = result_78;
    come_call_finalizer2(sType_finalize,result_78, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result69__;
    come_call_finalizer2(sType_finalize,result_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
char* p_79;
_Bool _if_conditional134;
_Bool _while_condtional9;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
int n_80;
_Bool _while_condtional10;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_79, 0, sizeof(char*));
memset(&n_80, 0, sizeof(int));
    p_79=obj;
    if(_if_conditional134=*p_79==40,    _if_conditional134) {
        p_79++;
        while(_while_condtional9=*p_79!=41,        _while_condtional9) {
            p_79++;
        }
        p_79++;
        if(_if_conditional135=*p_79==40,        _if_conditional135) {
            p_79++;
            if(_if_conditional136=strcmp(p_79,"right_value")==0,            _if_conditional136) {
                p_79+=strlen("right_value");
                if(_if_conditional137=xisdigit(*p_79),                _if_conditional137) {
                    n_80=0;
                    while(_while_condtional10=xisdigit(*p_79),                    _while_condtional10) {
                        n_80=n_80*10+*p_79-48;
                        p_79++;
                    }
                    __result70__ = n_80;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result70__;
                }
            }
        }
    }
    __result71__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result71__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional138;
void* right_value108;
char* __result72__;
_Bool _if_conditional139;
void* right_value109;
char* __result73__;
void* right_value110;
struct sRightValueObject* new_value_81;
struct sType* __dec_obj50;
void* right_value111;
char* __dec_obj51;
void* right_value112;
char* __dec_obj52;
void* right_value116;
char* buf_85;
void* right_value117;
void* right_value118;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&new_value_81, 0, sizeof(struct sRightValueObject*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value116 = (void*)0;
memset(&buf_85, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
    if(gComeGC) {
        __result72__ = __result_obj__ = ((char*)(right_value108=__builtin_string(obj)));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result72__;
    }
    if(info->no_output_come_code) {
        __result73__ = __result_obj__ = ((char*)(right_value109=__builtin_string("")));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result73__;
    }
    new_value_81=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value110=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 234, "sRightValueObject"))));
    come_call_finalizer2(sRightValueObject_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=new_value_81->mType;
    new_value_81->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer2(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    new_value_81->mFreed=(_Bool)0;
    new_value_81->mID=gRightValueNum;
    __dec_obj51=new_value_81->mVarName;
    new_value_81->mVarName=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj52=new_value_81->mFunName;
    new_value_81->mFunName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(info->come_fun->mName))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    new_value_81->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_81));
    buf_85=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf_85);
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    __result75__ = __result_obj__ = ((char*)(right_value118=xsprintf("((%s)(%s=%s))",((char*)(right_value117=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_81->mVarName,obj)));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_85 = come_decrement_ref_count2(buf_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_85 = come_decrement_ref_count2(buf_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional140=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional140) {
            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional141=self!=((void*)0)&&self->mVarName!=((void*)0),        _if_conditional141) {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional142=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional142) {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool _if_conditional143;
void* right_value113;
struct list_item$1sRightValueObjectph* litem_82;
struct sRightValueObject* __dec_obj53;
_Bool _if_conditional145;
void* right_value114;
struct list_item$1sRightValueObjectph* litem_83;
struct sRightValueObject* __dec_obj54;
void* right_value115;
struct list_item$1sRightValueObjectph* litem_84;
struct sRightValueObject* __dec_obj55;
struct list$1sRightValueObjectph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value114 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value115 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional143=self->len==0,        _if_conditional143) {
            litem_82=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value113=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 226, "list_item$1sRightValueObjectph"))));
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_82->prev=((void*)0);
            litem_82->next=((void*)0);
            __dec_obj53=litem_82->item;
            litem_82->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer2(sRightValueObject_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_82;
            self->head=litem_82;
        }
        else {
            if(_if_conditional145=self->len==1,            _if_conditional145) {
                litem_83=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value114=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 236, "list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_83->prev=self->head;
                litem_83->next=((void*)0);
                __dec_obj54=litem_83->item;
                litem_83->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_83;
                self->head->next=litem_83;
            }
            else {
                litem_84=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value115=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 246, "list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_84->prev=self->tail;
                litem_84->next=((void*)0);
                __dec_obj55=litem_84->item;
                litem_84->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_84;
                self->tail=litem_84;
            }
        }
        self->len++;
        __result74__ = __result_obj__ = self;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional144=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional144) {
                    come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional146;
int i_86;
struct list$1sRightValueObjectph* o2_saved_87;
struct sRightValueObject* it_90;
_Bool _if_conditional151;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_86, 0, sizeof(int));
memset(&o2_saved_87, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_90, 0, sizeof(struct sRightValueObject*));
    if(gComeGC) {
        return;
    }
    i_86=0;
    for(    o2_saved_87=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_90=list$1sRightValueObjectph_begin((o2_saved_87));    !list$1sRightValueObjectph_end((o2_saved_87));    it_90=list$1sRightValueObjectph_next((o2_saved_87))    ){
        if(_if_conditional151=it_90->mID==right_value_num,        _if_conditional151) {
            break;
        }
        i_86++;
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_86,i_86+1);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional147;
struct sRightValueObject* result_88;
struct sRightValueObject* __result76__;
_Bool _if_conditional148;
struct sRightValueObject* __result77__;
struct sRightValueObject* result_89;
struct sRightValueObject* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_88, 0, sizeof(struct sRightValueObject*));
memset(&result_89, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional147=self==((void*)0),        _if_conditional147) {
            memset(&result_88,0,sizeof(struct sRightValueObject*));
            __result76__ = __result_obj__ = result_88;
            return __result76__;
        }
        self->it=self->head;
        if(self->it) {
            __result77__ = __result_obj__ = self->it->item;
            return __result77__;
        }
        memset(&result_89,0,sizeof(struct sRightValueObject*));
        __result78__ = __result_obj__ = result_89;
        return __result78__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
        __result79__ = self==((void*)0)||self->it==((void*)0);
        return __result79__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional149;
struct sRightValueObject* result_91;
struct sRightValueObject* __result80__;
_Bool _if_conditional150;
struct sRightValueObject* __result81__;
struct sRightValueObject* result_92;
struct sRightValueObject* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_91, 0, sizeof(struct sRightValueObject*));
memset(&result_92, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional149=self==((void*)0)||self->it==((void*)0),        _if_conditional149) {
            memset(&result_91,0,sizeof(struct sRightValueObject*));
            __result80__ = __result_obj__ = result_91;
            return __result80__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result81__ = __result_obj__ = self->it->item;
            return __result81__;
        }
        memset(&result_92,0,sizeof(struct sRightValueObject*));
        __result82__ = __result_obj__ = result_92;
        return __result82__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_93;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_94;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_93, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_94, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_93=self->head;
        while(_while_condtional11=it_93!=((void*)0),        _while_condtional11) {
            prev_it_94=it_93;
            it_93=it_93->next;
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
int tmp_95;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list$1sRightValueObjectph* __result83__;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1sRightValueObjectph* it_98;
int i_99;
_Bool _while_condtional13;
_Bool _if_conditional160;
struct list_item$1sRightValueObjectph* prev_it_100;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list_item$1sRightValueObjectph* it_101;
int i_102;
_Bool _while_condtional14;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list_item$1sRightValueObjectph* prev_it_103;
struct list_item$1sRightValueObjectph* it_104;
struct list_item$1sRightValueObjectph* head_prev_it_105;
struct list_item$1sRightValueObjectph* tail_it_106;
int i_107;
_Bool _while_condtional15;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct list_item$1sRightValueObjectph* prev_it_108;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct list$1sRightValueObjectph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_95, 0, sizeof(int));
memset(&it_98, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_99, 0, sizeof(int));
memset(&prev_it_100, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_101, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_102, 0, sizeof(int));
memset(&prev_it_103, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_104, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_105, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_106, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_107, 0, sizeof(int));
memset(&prev_it_108, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional152=head<0,        _if_conditional152) {
            head+=self->len;
        }
        if(_if_conditional153=tail<0,        _if_conditional153) {
            tail+=self->len+1;
        }
        if(_if_conditional154=head>tail,        _if_conditional154) {
            tmp_95=tail;
            tail=head;
            head=tmp_95;
        }
        if(_if_conditional155=head<0,        _if_conditional155) {
            head=0;
        }
        if(_if_conditional156=tail>self->len,        _if_conditional156) {
            tail=self->len;
        }
        if(_if_conditional157=head==tail,        _if_conditional157) {
            __result83__ = __result_obj__ = self;
            return __result83__;
        }
        if(_if_conditional158=head==0&&tail==self->len,        _if_conditional158) {
            list$1sRightValueObjectph_reset(self);
        }
        else {
            if(_if_conditional159=head==0,            _if_conditional159) {
                it_98=self->head;
                i_99=0;
                while(_while_condtional13=it_98!=((void*)0),                _while_condtional13) {
                    if(_if_conditional160=i_99<tail,                    _if_conditional160) {
                        prev_it_100=it_98;
                        it_98=it_98->next;
                        i_99++;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(_if_conditional161=i_99==tail,                        _if_conditional161) {
                            self->head=it_98;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_98=it_98->next;
                            i_99++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional162=tail==self->len,                _if_conditional162) {
                    it_101=self->head;
                    i_102=0;
                    while(_while_condtional14=it_101!=((void*)0),                    _while_condtional14) {
                        if(_if_conditional163=i_102==head,                        _if_conditional163) {
                            self->tail=it_101->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional164=i_102>=head,                        _if_conditional164) {
                            prev_it_103=it_101;
                            it_101=it_101->next;
                            i_102++;
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_101=it_101->next;
                            i_102++;
                        }
                    }
                }
                else {
                    it_104=self->head;
                    head_prev_it_105=((void*)0);
                    tail_it_106=((void*)0);
                    i_107=0;
                    while(_while_condtional15=it_104!=((void*)0),                    _while_condtional15) {
                        if(_if_conditional165=i_107==head,                        _if_conditional165) {
                            head_prev_it_105=it_104->prev;
                        }
                        if(_if_conditional166=i_107==tail,                        _if_conditional166) {
                            tail_it_106=it_104;
                        }
                        if(_if_conditional167=i_107>=head&&i_107<tail,                        _if_conditional167) {
                            prev_it_108=it_104;
                            it_104=it_104->next;
                            i_107++;
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_104=it_104->next;
                            i_107++;
                        }
                    }
                    if(_if_conditional168=head_prev_it_105!=((void*)0),                    _if_conditional168) {
                        head_prev_it_105->next=tail_it_106;
                    }
                    if(_if_conditional169=tail_it_106!=((void*)0),                    _if_conditional169) {
                        tail_it_106->prev=head_prev_it_105;
                    }
                }
            }
        }
        __result85__ = __result_obj__ = self;
        return __result85__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_96;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_97;
struct list$1sRightValueObjectph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_97, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_96=self->head;
                while(_while_condtional12=it_96!=((void*)0),                _while_condtional12) {
                    prev_it_97=it_96;
                    it_96=it_96->next;
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result84__ = __result_obj__ = self;
                return __result84__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional170;
void* right_value119;
char* __result86__;
struct sClass* klass_109;
void* right_value120;
char* type_name_110;
void* right_value121;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&klass_109, 0, sizeof(struct sClass*));
right_value120 = (void*)0;
memset(&type_name_110, 0, sizeof(char*));
right_value121 = (void*)0;
    if(gComeGC) {
        __result86__ = __result_obj__ = ((char*)(right_value119=__builtin_string(obj)));
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result86__;
    }
    klass_109=type->mClass;
    type_name_110=(char*)come_increment_ref_count(((char*)(right_value120=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result87__ = __result_obj__ = ((char*)(right_value121=xsprintf("(%s)come_increment_ref_count(%s)",type_name_110,obj)));
    type_name_110 = come_decrement_ref_count2(type_name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
    type_name_110 = come_decrement_ref_count2(type_name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional171;
struct list$1CVALUEph* stack_saved_111;
struct list$1sRightValueObjectph* right_value_objects_112;
struct sClass* klass_113;
static int dec_num_114=0;
void* right_value122;
char* name_115;
void* right_value123;
_Bool no_decrement_116;
_Bool no_free_117;
_Bool _if_conditional172;
void* right_value124;
char* c_value_118;
struct sClass* klass_119;
char* class_name_120;
char* fun_name_121;
void* right_value125;
struct sType* type2_122;
void* right_value126;
char* fun_name2_123;
struct sFun* finalizer_124;
_Bool _if_conditional173;
_Bool _if_conditional193;
void* right_value127;
char* none_generics_name_128;
void* right_value128;
char* generics_fun_name_129;
struct sGenericsFun* generics_fun_133;
_Bool _if_conditional208;
_Bool _if_conditional209;
int i_134;
void* right_value129;
char* new_fun_name_135;
_Bool _if_conditional210;
void* right_value130;
char* __dec_obj56;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value131;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_136;
char* new_fun_name_137;
char* __dec_obj57;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value132;
char* type_name_138;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value133;
_Bool _if_conditional218;
void* right_value134;
char* type_name_139;
void* right_value135;
void* right_value136;
struct list$1sRightValueObjectph* __dec_obj58;
struct list$1CVALUEph* __dec_obj59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_111, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_112, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_113, 0, sizeof(struct sClass*));
right_value122 = (void*)0;
memset(&name_115, 0, sizeof(char*));
right_value123 = (void*)0;
memset(&no_decrement_116, 0, sizeof(_Bool));
memset(&no_free_117, 0, sizeof(_Bool));
right_value124 = (void*)0;
memset(&c_value_118, 0, sizeof(char*));
memset(&klass_119, 0, sizeof(struct sClass*));
memset(&class_name_120, 0, sizeof(char*));
memset(&fun_name_121, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&type2_122, 0, sizeof(struct sType*));
right_value126 = (void*)0;
memset(&fun_name2_123, 0, sizeof(char*));
memset(&finalizer_124, 0, sizeof(struct sFun*));
right_value127 = (void*)0;
memset(&none_generics_name_128, 0, sizeof(char*));
right_value128 = (void*)0;
memset(&generics_fun_name_129, 0, sizeof(char*));
memset(&generics_fun_133, 0, sizeof(struct sGenericsFun*));
memset(&i_134, 0, sizeof(int));
right_value129 = (void*)0;
memset(&new_fun_name_135, 0, sizeof(char*));
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&fun_136, 0, sizeof(struct sFun*));
memset(&new_fun_name_137, 0, sizeof(char*));
memset(&fun_136, 0, sizeof(struct sFun*));
memset(&new_fun_name_137, 0, sizeof(char*));
right_value132 = (void*)0;
memset(&type_name_138, 0, sizeof(char*));
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&type_name_139, 0, sizeof(char*));
right_value135 = (void*)0;
right_value136 = (void*)0;
    if(gComeGC) {
        return;
    }
    stack_saved_111=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_112=info->right_value_objects;
    klass_113=type->mClass;
    name_115=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("__dec_obj%d",++dec_num_114))));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value123=make_define_var(type,name_115,(_Bool)0,info))));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,"%s=%s;\n",name_115,obj);
    obj=name_115;
    no_decrement_116=(_Bool)0;
    no_free_117=(_Bool)0;
    if(_if_conditional172=type->mPointerNum>0,    _if_conditional172) {
        c_value_118=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(obj))));
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        klass_119=type->mClass;
        class_name_120=klass_119->mName;
        fun_name_121="finalize";
        type2_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type2_122->mHeap=(_Bool)0;
        fun_name2_123=(char*)come_increment_ref_count(((char*)(right_value126=create_method_name(type,(_Bool)0,fun_name_121,info,(_Bool)1))));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        finalizer_124=((void*)0);
        if(_if_conditional173=list$1sTypeph_length(type->mGenericsTypes)>0,        _if_conditional173) {
            finalizer_124=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_123);
            if(_if_conditional193=finalizer_124==((void*)0),            _if_conditional193) {
                none_generics_name_128=(char*)come_increment_ref_count(((char*)(right_value127=get_none_generics_name(type2_122->mClass->mName))));
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_name_129=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("%s_%s",none_generics_name_128,fun_name_121))));
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_133=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_129);
                if(generics_fun_133) {
                    if(_if_conditional209=!create_generics_fun((char*)come_increment_ref_count(fun_name2_123),generics_fun_133,type,info),                    _if_conditional209) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_124=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_123);
                }
                none_generics_name_128 = come_decrement_ref_count2(none_generics_name_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_129 = come_decrement_ref_count2(generics_fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_134=128-1;            i_134>=1;            i_134--            ){
                new_fun_name_135=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("%s_v%d",fun_name2_123,i_134))));
                right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                finalizer_124=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_135);
                if(finalizer_124) {
                    __dec_obj56=fun_name2_123;
                    fun_name2_123=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(new_fun_name_135))));
                    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_135 = come_decrement_ref_count2(new_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_135 = come_decrement_ref_count2(new_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional211=finalizer_124==((void*)0),            _if_conditional211) {
                finalizer_124=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_123);
            }
        }
        if(_if_conditional212=finalizer_124==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,        _if_conditional212) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value131=create_finalizer_automatically(type,fun_name_121,info)));
            fun_136=multiple_assign_var1->v1;
            new_fun_name_137=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj57=fun_name2_123;
            fun_name2_123=(char*)come_increment_ref_count(new_fun_name_137);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_124=fun_136;
            new_fun_name_137 = come_decrement_ref_count2(new_fun_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional214=finalizer_124!=((void*)0),        _if_conditional214) {
            if(_if_conditional215=klass_119->mProtocol&&type->mPointerNum==1,            _if_conditional215) {
                type_name_138=(char*)come_increment_ref_count(((char*)(right_value132=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(c_value_118) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_123,c_value_118,type_name_138,c_value_118,type_name_138,c_value_118,type->mAllocaValue,no_decrement_116,no_free_117,force_delete_);
                }
                type_name_138 = come_decrement_ref_count2(type_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_118) {
                    add_come_last_code2(info,((char*)(right_value133=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_123,c_value_118,type->mAllocaValue,no_decrement_116,no_free_117,force_delete_))));
                    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            if(_if_conditional218=klass_119->mProtocol&&type->mPointerNum==1,            _if_conditional218) {
                type_name_139=(char*)come_increment_ref_count(((char*)(right_value134=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_last_code2(info,((char*)(right_value135=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_115,name_115,name_115,type_name_139,name_115,type_name_139,name_115))));
                right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                type_name_139 = come_decrement_ref_count2(type_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_last_code2(info,((char*)(right_value136=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_115,name_115))));
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        c_value_118 = come_decrement_ref_count2(c_value_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name2_123 = come_decrement_ref_count2(fun_name2_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj58=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_112);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj59=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_111);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_115 = come_decrement_ref_count2(name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_125;
unsigned int hash_126;
unsigned int it_127;
_Bool _while_condtional16;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct sFun* __result88__;
_Bool _if_conditional191;
_Bool _if_conditional192;
struct sFun* __result89__;
struct sFun* __result90__;
struct sFun* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_125, 0, sizeof(struct sFun*));
memset(&hash_126, 0, sizeof(unsigned int));
memset(&it_127, 0, sizeof(unsigned int));
                memset(&default_value_125,0,sizeof(struct sFun*));
                hash_126=string_get_hash_key(((char*)key))%self->size;
                it_127=hash_126;
                while(_while_condtional16=(_Bool)1,                _while_condtional16) {
                    if(_if_conditional174=self->item_existance[it_127],                    _if_conditional174) {
                        if(_if_conditional175=string_equals(self->keys[it_127],key),                        _if_conditional175) {
                            __result88__ = __result_obj__ = self->items[it_127];
                            come_call_finalizer2(sFun_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result88__;
                        }
                        it_127++;
                        if(_if_conditional191=it_127>=self->size,                        _if_conditional191) {
                            it_127=0;
                        }
                        else {
                            if(_if_conditional192=it_127==hash_126,                            _if_conditional192) {
                                __result89__ = __result_obj__ = default_value_125;
                                come_call_finalizer2(sFun_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result89__;
                            }
                        }
                    }
                    else {
                        __result90__ = __result_obj__ = default_value_125;
                        come_call_finalizer2(sFun_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result90__;
                    }
                }
                __result91__ = __result_obj__ = default_value_125;
                come_call_finalizer2(sFun_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result91__;
                come_call_finalizer2(sFun_finalize,default_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional176=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional176) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional177=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional177) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional178=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional178) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional179=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional179) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional180=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional180) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional181=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional181) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional182=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional182) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional185=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional185) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional186=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional186) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional187=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional187) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional188=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional188) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional189=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional189) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional190=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional190) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional183;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional183=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional183) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional184=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional184) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
struct sGenericsFun* default_value_130;
unsigned int hash_131;
unsigned int it_132;
_Bool _while_condtional17;
_Bool _if_conditional194;
_Bool _if_conditional195;
struct sGenericsFun* __result92__;
_Bool _if_conditional206;
_Bool _if_conditional207;
struct sGenericsFun* __result93__;
struct sGenericsFun* __result94__;
struct sGenericsFun* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_130, 0, sizeof(struct sGenericsFun*));
memset(&hash_131, 0, sizeof(unsigned int));
memset(&it_132, 0, sizeof(unsigned int));
                    memset(&default_value_130,0,sizeof(struct sGenericsFun*));
                    hash_131=string_get_hash_key(((char*)key))%self->size;
                    it_132=hash_131;
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        if(_if_conditional194=self->item_existance[it_132],                        _if_conditional194) {
                            if(_if_conditional195=string_equals(self->keys[it_132],key),                            _if_conditional195) {
                                __result92__ = __result_obj__ = self->items[it_132];
                                come_call_finalizer2(sGenericsFun_finalize,default_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result92__;
                            }
                            it_132++;
                            if(_if_conditional206=it_132>=self->size,                            _if_conditional206) {
                                it_132=0;
                            }
                            else {
                                if(_if_conditional207=it_132==hash_131,                                _if_conditional207) {
                                    __result93__ = __result_obj__ = default_value_130;
                                    come_call_finalizer2(sGenericsFun_finalize,default_value_130, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result93__;
                                }
                            }
                        }
                        else {
                            __result94__ = __result_obj__ = default_value_130;
                            come_call_finalizer2(sGenericsFun_finalize,default_value_130, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result94__;
                        }
                    }
                    __result95__ = __result_obj__ = default_value_130;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_130, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result95__;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional196=self!=((void*)0)&&self->mImplType!=((void*)0),                                    _if_conditional196) {
                                        come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional197=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                                    _if_conditional197) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional198=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                                    _if_conditional198) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional199=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional199) {
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional200=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional200) {
                                        come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional201=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional201) {
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional202=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional202) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional203=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                    _if_conditional203) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional204=self!=((void*)0)&&self->mBlock!=((void*)0),                                    _if_conditional204) {
                                        self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional205=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                                    _if_conditional205) {
                                        self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional213;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional213=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional213) {
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
struct list_item$1CVALUEph* it_140;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_141;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_140, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_141, 0, sizeof(struct list_item$1CVALUEph*));
        it_140=self->head;
        while(_while_condtional18=it_140!=((void*)0),        _while_condtional18) {
            prev_it_141=it_140;
            it_140=it_140->next;
            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional219=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional219) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional220;
_Bool _if_conditional221;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional220=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional220) {
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional221=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional221) {
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional222;
struct list$1CVALUEph* stack_saved_142;
struct list$1sRightValueObjectph* right_value_objects_143;
struct sType* type_before_144;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value137;
char* c_value_145;
struct sClass* klass_146;
char* class_name_147;
char* fun_name_148;
void* right_value138;
struct sType* type2_149;
void* right_value139;
char* fun_name2_150;
struct sFun* finalizer_151;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value140;
char* none_generics_name_152;
void* right_value141;
char* generics_fun_name_153;
struct sGenericsFun* generics_fun_154;
_Bool _if_conditional228;
_Bool _if_conditional229;
int i_155;
void* right_value142;
char* new_fun_name_156;
_Bool _if_conditional230;
void* right_value143;
char* __dec_obj60;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value144;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_157;
char* new_fun_name_158;
char* __dec_obj61;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value145;
char* type_name_159;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value146;
void* right_value147;
_Bool _if_conditional242;
void* right_value148;
void* right_value149;
_Bool _if_conditional243;
struct list$1tuple2$2charphsTypephph* o2_saved_160;
struct tuple2$2charphsTypeph* it_163;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_166;
struct sType* field_type_167;
_Bool _if_conditional248;
void* right_value150;
void* right_value151;
char* obj_168;
_Bool _if_conditional252;
struct list$1tuple2$2charphsTypephph* o2_saved_171;
struct tuple2$2charphsTypeph* it_172;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_173;
struct sType* field_type_174;
_Bool _if_conditional253;
void* right_value152;
void* right_value153;
char* obj_175;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value154;
char* type_name_176;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value155;
char* c_value_177;
struct sClass* klass_178;
char* class_name_179;
char* fun_name_180;
void* right_value156;
struct sType* type2_181;
void* right_value157;
char* fun_name2_182;
struct sFun* finalizer_183;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value158;
char* none_generics_name_184;
void* right_value159;
char* generics_fun_name_185;
struct sGenericsFun* generics_fun_186;
_Bool _if_conditional266;
_Bool _if_conditional267;
int i_187;
void* right_value160;
char* new_fun_name_188;
_Bool _if_conditional268;
void* right_value161;
char* __dec_obj62;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value162;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_189;
char* new_fun_name_190;
char* __dec_obj63;
_Bool _if_conditional271;
_Bool _if_conditional272;
void* right_value163;
char* type_name_191;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value164;
void* right_value165;
_Bool _if_conditional280;
void* right_value166;
void* right_value167;
_Bool _if_conditional281;
struct list$1tuple2$2charphsTypephph* o2_saved_192;
struct tuple2$2charphsTypeph* it_193;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_194;
struct sType* field_type_195;
_Bool _if_conditional282;
void* right_value168;
void* right_value169;
char* obj_196;
_Bool _if_conditional283;
struct list$1tuple2$2charphsTypephph* o2_saved_197;
struct tuple2$2charphsTypeph* it_198;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_199;
struct sType* field_type_200;
_Bool _if_conditional284;
void* right_value170;
void* right_value171;
char* obj_201;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value172;
char* type_name_202;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct list$1sRightValueObjectph* __dec_obj64;
struct list$1CVALUEph* __dec_obj65;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_142, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_143, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_144, 0, sizeof(struct sType*));
right_value137 = (void*)0;
memset(&c_value_145, 0, sizeof(char*));
memset(&klass_146, 0, sizeof(struct sClass*));
memset(&class_name_147, 0, sizeof(char*));
memset(&fun_name_148, 0, sizeof(char*));
right_value138 = (void*)0;
memset(&type2_149, 0, sizeof(struct sType*));
right_value139 = (void*)0;
memset(&fun_name2_150, 0, sizeof(char*));
memset(&finalizer_151, 0, sizeof(struct sFun*));
right_value140 = (void*)0;
memset(&none_generics_name_152, 0, sizeof(char*));
right_value141 = (void*)0;
memset(&generics_fun_name_153, 0, sizeof(char*));
memset(&generics_fun_154, 0, sizeof(struct sGenericsFun*));
memset(&i_155, 0, sizeof(int));
right_value142 = (void*)0;
memset(&new_fun_name_156, 0, sizeof(char*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&fun_157, 0, sizeof(struct sFun*));
memset(&new_fun_name_158, 0, sizeof(char*));
memset(&fun_157, 0, sizeof(struct sFun*));
memset(&new_fun_name_158, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&type_name_159, 0, sizeof(char*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&o2_saved_160, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_163, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_166, 0, sizeof(char*));
memset(&field_type_167, 0, sizeof(struct sType*));
memset(&name_166, 0, sizeof(char*));
memset(&field_type_167, 0, sizeof(struct sType*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&obj_168, 0, sizeof(char*));
memset(&o2_saved_171, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_172, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_173, 0, sizeof(char*));
memset(&field_type_174, 0, sizeof(struct sType*));
memset(&name_173, 0, sizeof(char*));
memset(&field_type_174, 0, sizeof(struct sType*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&obj_175, 0, sizeof(char*));
right_value154 = (void*)0;
memset(&type_name_176, 0, sizeof(char*));
right_value155 = (void*)0;
memset(&c_value_177, 0, sizeof(char*));
memset(&klass_178, 0, sizeof(struct sClass*));
memset(&class_name_179, 0, sizeof(char*));
memset(&fun_name_180, 0, sizeof(char*));
right_value156 = (void*)0;
memset(&type2_181, 0, sizeof(struct sType*));
right_value157 = (void*)0;
memset(&fun_name2_182, 0, sizeof(char*));
memset(&finalizer_183, 0, sizeof(struct sFun*));
right_value158 = (void*)0;
memset(&none_generics_name_184, 0, sizeof(char*));
right_value159 = (void*)0;
memset(&generics_fun_name_185, 0, sizeof(char*));
memset(&generics_fun_186, 0, sizeof(struct sGenericsFun*));
memset(&i_187, 0, sizeof(int));
right_value160 = (void*)0;
memset(&new_fun_name_188, 0, sizeof(char*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&fun_189, 0, sizeof(struct sFun*));
memset(&new_fun_name_190, 0, sizeof(char*));
memset(&fun_189, 0, sizeof(struct sFun*));
memset(&new_fun_name_190, 0, sizeof(char*));
right_value163 = (void*)0;
memset(&type_name_191, 0, sizeof(char*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&o2_saved_192, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_193, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_194, 0, sizeof(char*));
memset(&field_type_195, 0, sizeof(struct sType*));
memset(&name_194, 0, sizeof(char*));
memset(&field_type_195, 0, sizeof(struct sType*));
right_value168 = (void*)0;
right_value169 = (void*)0;
memset(&obj_196, 0, sizeof(char*));
memset(&o2_saved_197, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_198, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_199, 0, sizeof(char*));
memset(&field_type_200, 0, sizeof(struct sType*));
memset(&name_199, 0, sizeof(char*));
memset(&field_type_200, 0, sizeof(struct sType*));
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&obj_201, 0, sizeof(char*));
right_value172 = (void*)0;
memset(&type_name_202, 0, sizeof(char*));
    if(gComeGC) {
        return;
    }
    stack_saved_142=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_143=info->right_value_objects;
    type_before_144=type;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional224=type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value),    _if_conditional224) {
        if(force_delete_) {
            c_value_145=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(obj))));
            right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_146=type->mClass;
            class_name_147=klass_146->mName;
            fun_name_148="force_finalize";
            type2_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_149->mHeap=(_Bool)0;
            fun_name2_150=(char*)come_increment_ref_count(((char*)(right_value139=create_method_name(type,(_Bool)0,fun_name_148,info,(_Bool)1))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_151=((void*)0);
            if(_if_conditional226=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional226) {
                finalizer_151=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_150);
                if(_if_conditional227=finalizer_151==((void*)0),                _if_conditional227) {
                    none_generics_name_152=(char*)come_increment_ref_count(((char*)(right_value140=get_none_generics_name(type2_149->mClass->mName))));
                    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_153=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("%s_%s",none_generics_name_152,fun_name_148))));
                    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_154=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_153);
                    if(generics_fun_154) {
                        if(_if_conditional229=!create_generics_fun((char*)come_increment_ref_count(fun_name2_150),generics_fun_154,type,info),                        _if_conditional229) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_151=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_150);
                    }
                    none_generics_name_152 = come_decrement_ref_count2(none_generics_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_153 = come_decrement_ref_count2(generics_fun_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_155=128-1;                i_155>=1;                i_155--                ){
                    new_fun_name_156=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("%s_v%d",fun_name2_150,i_155))));
                    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_151=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_156);
                    if(finalizer_151) {
                        __dec_obj60=fun_name2_150;
                        fun_name2_150=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(new_fun_name_156))));
                        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_156 = come_decrement_ref_count2(new_fun_name_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_156 = come_decrement_ref_count2(new_fun_name_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional231=finalizer_151==((void*)0),                _if_conditional231) {
                    finalizer_151=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_150);
                }
            }
            if(_if_conditional232=finalizer_151==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional232) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value144=create_force_finalizer_automatically(type,fun_name_148,info)));
                fun_157=multiple_assign_var2->v1;
                new_fun_name_158=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj61=fun_name2_150;
                fun_name2_150=(char*)come_increment_ref_count(new_fun_name_158);
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_151=fun_157;
                new_fun_name_158 = come_decrement_ref_count2(new_fun_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional233=finalizer_151!=((void*)0),            _if_conditional233) {
                if(_if_conditional234=klass_146->mProtocol&&type->mPointerNum==1,                _if_conditional234) {
                    type_name_159=(char*)come_increment_ref_count(((char*)(right_value145=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_145) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_150,c_value_145,type_name_159,c_value_145,type_name_159,c_value_145,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_150,c_value_145,type_name_159,c_value_145,type_name_159,c_value_145,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_150,c_value_145,type_name_159,c_value_145,type_name_159,c_value_145,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_150,c_value_145,type_name_159,c_value_145,type_name_159,c_value_145,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_159 = come_decrement_ref_count2(type_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_145) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value146=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_150,c_value_145,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value147=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_150,c_value_145,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value148=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_150,c_value_145,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value149=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_150,c_value_145,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional243=klass_146->mStruct&&type->mPointerNum==0,                _if_conditional243) {
                    for(                    o2_saved_160=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_146->mFields)),it_163=list$1tuple2$2charphsTypephph_begin((o2_saved_160));                    !list$1tuple2$2charphsTypephph_end((o2_saved_160));                    it_163=list$1tuple2$2charphsTypephph_next((o2_saved_160))                    ){
                        multiple_assign_var3=it_163;
                        name_166=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_167=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(_if_conditional248=field_type_167->mHeap&&field_type_167->mPointerNum>0,                        _if_conditional248) {
                            obj_168=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("(((%s)%s).%s)",((char*)(right_value150=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_145,name_166))));
                            right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            free_object(field_type_167,obj_168,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_168 = come_decrement_ref_count2(obj_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_166 = come_decrement_ref_count2(name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional252=klass_146->mStruct&&type->mPointerNum==1,                    _if_conditional252) {
                        for(                        o2_saved_171=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_146->mFields)),it_172=list$1tuple2$2charphsTypephph_begin((o2_saved_171));                        !list$1tuple2$2charphsTypephph_end((o2_saved_171));                        it_172=list$1tuple2$2charphsTypephph_next((o2_saved_171))                        ){
                            multiple_assign_var4=it_172;
                            name_173=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_174=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(_if_conditional253=field_type_174->mHeap&&field_type_174->mPointerNum>0,                            _if_conditional253) {
                                obj_175=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("(((%s)%s)->%s)",((char*)(right_value152=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_145,name_173))));
                                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                free_object(field_type_174,obj_175,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_175 = come_decrement_ref_count2(obj_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_173 = come_decrement_ref_count2(name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional254=!type->mAllocaValue,                _if_conditional254) {
                    if(_if_conditional255=klass_146->mProtocol&&type->mPointerNum==1,                    _if_conditional255) {
                        if(c_value_145) {
                            type_name_176=(char*)come_increment_ref_count(((char*)(right_value154=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_145,c_value_145,c_value_145,type_name_176,c_value_145,type_name_176,c_value_145,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_145,c_value_145,c_value_145,type_name_176,c_value_145,type_name_176,c_value_145,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_145,c_value_145,c_value_145,type_name_176,c_value_145,type_name_176,c_value_145,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_145,c_value_145,c_value_145,type_name_176,c_value_145,type_name_176,c_value_145,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_176 = come_decrement_ref_count2(type_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_145) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_145,c_value_145,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_145,c_value_145,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_145,c_value_145,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_145,c_value_145,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_145 = come_decrement_ref_count2(c_value_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_150 = come_decrement_ref_count2(fun_name2_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            c_value_177=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(obj))));
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_178=type->mClass;
            class_name_179=klass_178->mName;
            fun_name_180="finalize";
            type2_181=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_181->mHeap=(_Bool)0;
            fun_name2_182=(char*)come_increment_ref_count(((char*)(right_value157=create_method_name(type,(_Bool)0,fun_name_180,info,(_Bool)1))));
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_183=((void*)0);
            if(_if_conditional264=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional264) {
                finalizer_183=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_182);
                if(_if_conditional265=finalizer_183==((void*)0),                _if_conditional265) {
                    none_generics_name_184=(char*)come_increment_ref_count(((char*)(right_value158=get_none_generics_name(type2_181->mClass->mName))));
                    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_185=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s_%s",none_generics_name_184,fun_name_180))));
                    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_186=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_185);
                    if(generics_fun_186) {
                        if(_if_conditional267=!create_generics_fun((char*)come_increment_ref_count(fun_name2_182),generics_fun_186,type,info),                        _if_conditional267) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_183=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_182);
                    }
                    none_generics_name_184 = come_decrement_ref_count2(none_generics_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_185 = come_decrement_ref_count2(generics_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_187=128-1;                i_187>=1;                i_187--                ){
                    new_fun_name_188=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s_v%d",fun_name2_182,i_187))));
                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_183=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_188);
                    if(finalizer_183) {
                        __dec_obj62=fun_name2_182;
                        fun_name2_182=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string(new_fun_name_188))));
                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_188 = come_decrement_ref_count2(new_fun_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_188 = come_decrement_ref_count2(new_fun_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional269=finalizer_183==((void*)0),                _if_conditional269) {
                    finalizer_183=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_182);
                }
            }
            if(_if_conditional270=finalizer_183==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional270) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(right_value162=create_finalizer_automatically(type,fun_name_180,info)));
                fun_189=multiple_assign_var5->v1;
                new_fun_name_190=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj63=fun_name2_182;
                fun_name2_182=(char*)come_increment_ref_count(new_fun_name_190);
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_183=fun_189;
                new_fun_name_190 = come_decrement_ref_count2(new_fun_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional271=finalizer_183!=((void*)0),            _if_conditional271) {
                if(_if_conditional272=klass_178->mProtocol&&type->mPointerNum==1,                _if_conditional272) {
                    type_name_191=(char*)come_increment_ref_count(((char*)(right_value163=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_177) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_182,c_value_177,type_name_191,c_value_177,type_name_191,c_value_177,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_182,c_value_177,type_name_191,c_value_177,type_name_191,c_value_177,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_182,c_value_177,type_name_191,c_value_177,type_name_191,c_value_177,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_182,c_value_177,type_name_191,c_value_177,type_name_191,c_value_177,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_191 = come_decrement_ref_count2(type_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_177) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value164=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_182,c_value_177,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value165=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_182,c_value_177,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value166=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_182,c_value_177,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value167=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_182,c_value_177,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional281=klass_178->mStruct&&type->mPointerNum==0,                _if_conditional281) {
                    for(                    o2_saved_192=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),it_193=list$1tuple2$2charphsTypephph_begin((o2_saved_192));                    !list$1tuple2$2charphsTypephph_end((o2_saved_192));                    it_193=list$1tuple2$2charphsTypephph_next((o2_saved_192))                    ){
                        multiple_assign_var6=it_193;
                        name_194=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_195=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(_if_conditional282=field_type_195->mHeap&&field_type_195->mPointerNum>0,                        _if_conditional282) {
                            obj_196=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("(((%s)%s).%s)",((char*)(right_value168=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_177,name_194))));
                            right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            free_object(field_type_195,obj_196,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_196 = come_decrement_ref_count2(obj_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_194 = come_decrement_ref_count2(name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional283=klass_178->mStruct&&type->mPointerNum==1,                    _if_conditional283) {
                        for(                        o2_saved_197=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),it_198=list$1tuple2$2charphsTypephph_begin((o2_saved_197));                        !list$1tuple2$2charphsTypephph_end((o2_saved_197));                        it_198=list$1tuple2$2charphsTypephph_next((o2_saved_197))                        ){
                            multiple_assign_var7=it_198;
                            name_199=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_200=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(_if_conditional284=field_type_200->mHeap&&field_type_200->mPointerNum>0,                            _if_conditional284) {
                                obj_201=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("(((%s)%s)->%s)",((char*)(right_value170=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_177,name_199))));
                                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                free_object(field_type_200,obj_201,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_201 = come_decrement_ref_count2(obj_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_199 = come_decrement_ref_count2(name_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional285=!type->mAllocaValue,                _if_conditional285) {
                    if(_if_conditional286=klass_178->mProtocol&&type->mPointerNum==1,                    _if_conditional286) {
                        if(c_value_177) {
                            type_name_202=(char*)come_increment_ref_count(((char*)(right_value172=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_177,c_value_177,c_value_177,type_name_202,c_value_177,type_name_202,c_value_177,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_177,c_value_177,c_value_177,type_name_202,c_value_177,type_name_202,c_value_177,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_177,c_value_177,c_value_177,type_name_202,c_value_177,type_name_202,c_value_177,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_177,c_value_177,c_value_177,type_name_202,c_value_177,type_name_202,c_value_177,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_202 = come_decrement_ref_count2(type_name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_177) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_177,c_value_177,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_177,c_value_177,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_177,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_177,c_value_177,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_177 = come_decrement_ref_count2(c_value_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_182 = come_decrement_ref_count2(fun_name2_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj64=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_143);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj65=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_142);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional244;
struct tuple2$2charphsTypeph* result_161;
struct tuple2$2charphsTypeph* __result96__;
_Bool _if_conditional245;
struct tuple2$2charphsTypeph* __result97__;
struct tuple2$2charphsTypeph* result_162;
struct tuple2$2charphsTypeph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_161, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_162, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional244=self==((void*)0),                        _if_conditional244) {
                            memset(&result_161,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result96__ = __result_obj__ = result_161;
                            return __result96__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result97__ = __result_obj__ = self->it->item;
                            return __result97__;
                        }
                        memset(&result_162,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result98__ = __result_obj__ = result_162;
                        return __result98__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result99__ = self==((void*)0)||self->it==((void*)0);
                        return __result99__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional246;
struct tuple2$2charphsTypeph* result_164;
struct tuple2$2charphsTypeph* __result100__;
_Bool _if_conditional247;
struct tuple2$2charphsTypeph* __result101__;
struct tuple2$2charphsTypeph* result_165;
struct tuple2$2charphsTypeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_165, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional246=self==((void*)0)||self->it==((void*)0),                        _if_conditional246) {
                            memset(&result_164,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result100__ = __result_obj__ = result_164;
                            return __result100__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result101__ = __result_obj__ = self->it->item;
                            return __result101__;
                        }
                        memset(&result_165,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result102__ = __result_obj__ = result_165;
                        return __result102__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_169;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_170;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_169, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_170, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_169=self->head;
                        while(_while_condtional19=it_169!=((void*)0),                        _while_condtional19) {
                            prev_it_170=it_169;
                            it_169=it_169->next;
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional249=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional249) {
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional250;
_Bool _if_conditional251;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional250=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional250) {
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional251=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional251) {
                                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value173;
struct sType* type2_203;
_Bool _if_conditional295;
char* result_204;
struct sType* result_type_205;
struct list$1CVALUEph* stack_saved_206;
struct list$1sRightValueObjectph* right_value_objects_207;
void* right_value174;
char* c_value_208;
struct sClass* klass_209;
char* class_name_210;
char* fun_name_211;
struct sFun* cloner_212;
char* fun_name2_213;
_Bool _if_conditional296;
void* right_value175;
char* none_generics_name_214;
void* right_value176;
struct sType* obj_type_215;
void* right_value177;
char* __dec_obj66;
void* right_value178;
char* fun_name3_216;
struct sGenericsFun* generics_fun_219;
_Bool _if_conditional301;
void* right_value179;
_Bool _if_conditional302;
void* right_value180;
void* right_value181;
void* right_value182;
void* right_value183;
void* right_value184;
struct tuple2$2sTypephcharph* __result108__;
void* right_value185;
char* __dec_obj69;
int i_220;
void* right_value186;
char* new_fun_name_221;
_Bool _if_conditional305;
void* right_value187;
char* __dec_obj70;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value188;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_222;
char* new_fun_name_223;
char* __dec_obj71;
_Bool _if_conditional308;
struct sType* __dec_obj72;
void* right_value189;
struct sType* __dec_obj73;
void* right_value190;
char* __dec_obj74;
_Bool _if_conditional309;
void* right_value191;
char* __dec_obj75;
void* right_value192;
struct sType* __dec_obj76;
void* right_value193;
char* type_name_224;
void* right_value194;
char* __dec_obj77;
_Bool _if_conditional310;
void* right_value195;
char* __dec_obj78;
struct list$1sRightValueObjectph* __dec_obj79;
struct list$1CVALUEph* __dec_obj80;
void* right_value196;
void* right_value197;
struct tuple2$2sTypephcharph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&type2_203, 0, sizeof(struct sType*));
memset(&result_204, 0, sizeof(char*));
memset(&result_type_205, 0, sizeof(struct sType*));
memset(&stack_saved_206, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_207, 0, sizeof(struct list$1sRightValueObjectph*));
right_value174 = (void*)0;
memset(&c_value_208, 0, sizeof(char*));
memset(&klass_209, 0, sizeof(struct sClass*));
memset(&class_name_210, 0, sizeof(char*));
memset(&fun_name_211, 0, sizeof(char*));
memset(&cloner_212, 0, sizeof(struct sFun*));
memset(&fun_name2_213, 0, sizeof(char*));
right_value175 = (void*)0;
memset(&none_generics_name_214, 0, sizeof(char*));
right_value176 = (void*)0;
memset(&obj_type_215, 0, sizeof(struct sType*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&fun_name3_216, 0, sizeof(char*));
memset(&generics_fun_219, 0, sizeof(struct sGenericsFun*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&i_220, 0, sizeof(int));
right_value186 = (void*)0;
memset(&new_fun_name_221, 0, sizeof(char*));
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&fun_222, 0, sizeof(struct sFun*));
memset(&new_fun_name_223, 0, sizeof(char*));
memset(&fun_222, 0, sizeof(struct sFun*));
memset(&new_fun_name_223, 0, sizeof(char*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&type_name_224, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
    type2_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_204=((void*)0);
    result_type_205=((void*)0);
    stack_saved_206=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_207=info->right_value_objects;
    c_value_208=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(obj))));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_209=type->mClass;
    class_name_210=klass_209->mName;
    fun_name_211="clone";
    cloner_212=((void*)0);
    if(_if_conditional296=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional296) {
        none_generics_name_214=(char*)come_increment_ref_count(((char*)(right_value175=get_none_generics_name(type->mClass->mName))));
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj66=fun_name2_213;
        fun_name2_213=(char*)come_increment_ref_count(((char*)(right_value177=create_method_name(obj_type_215,(_Bool)0,fun_name_211,info,(_Bool)1))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_216=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s_%s",none_generics_name_214,fun_name_211))));
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_219=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_216,((void*)0));
        if(generics_fun_219) {
            if(_if_conditional302=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(fun_name2_213)))),generics_fun_219,obj_type_215,info),            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional302) {
                __result108__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value184=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value183=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 790, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value180=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 790, "sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string("")))))));
                none_generics_name_214 = come_decrement_ref_count2(none_generics_name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_216 = come_decrement_ref_count2(fun_name3_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_204 = come_decrement_ref_count2(result_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_208 = come_decrement_ref_count2(c_value_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_213 = come_decrement_ref_count2(fun_name2_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result108__;
            }
        }
        cloner_212=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_213);
        none_generics_name_214 = come_decrement_ref_count2(none_generics_name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_216 = come_decrement_ref_count2(fun_name3_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj69=fun_name2_213;
        fun_name2_213=(char*)come_increment_ref_count(((char*)(right_value185=create_method_name(type,(_Bool)0,fun_name_211,info,(_Bool)1))));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_220=128-1;        i_220>=1;        i_220--        ){
            new_fun_name_221=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s_v%d",fun_name2_213,i_220))));
            right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_212=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_221);
            if(cloner_212) {
                __dec_obj70=fun_name2_213;
                fun_name2_213=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(new_fun_name_221))));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_221 = come_decrement_ref_count2(new_fun_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_221 = come_decrement_ref_count2(new_fun_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional306=cloner_212==((void*)0),        _if_conditional306) {
            cloner_212=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_213);
        }
    }
    if(_if_conditional307=cloner_212==((void*)0)&&!type->mClass->mNumber,    _if_conditional307) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(right_value188=create_cloner_automatically(type,fun_name_211,info)));
        fun_222=multiple_assign_var8->v1;
        new_fun_name_223=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj71=fun_name2_213;
        fun_name2_213=(char*)come_increment_ref_count(new_fun_name_223);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_212=fun_222;
        new_fun_name_223 = come_decrement_ref_count2(new_fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional308=cloner_212!=((void*)0),    _if_conditional308) {
        __dec_obj72=result_type_205;
        result_type_205=(struct sType*)come_increment_ref_count(cloner_212->mResultType);
        come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj73=result_type_205;
        result_type_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=solve_generics(result_type_205,type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj74=result_204;
        result_204=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s(%s)",fun_name2_213,c_value_208))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj75=result_204;
            result_204=(char*)come_increment_ref_count(((char*)(right_value191=append_stackframe(result_204,result_type_205,info))));
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        __dec_obj76=result_type_205;
        result_type_205=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type2_203->mHeap=(_Bool)1;
        type_name_224=(char*)come_increment_ref_count(((char*)(right_value193=make_type_name_string(type2_203,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj77=result_204;
        result_204=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_224,c_value_208,info->sname,info->sline,type_name_224))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj78=result_204;
            result_204=(char*)come_increment_ref_count(((char*)(right_value195=append_stackframe(result_204,result_type_205,info))));
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        type_name_224 = come_decrement_ref_count2(type_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj79=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_207);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj80=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_206);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result109__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value197=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value196=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 847, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_205),(char*)come_increment_ref_count(result_204))));
    come_call_finalizer2(sType_finalize,type2_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_204 = come_decrement_ref_count2(result_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_208 = come_decrement_ref_count2(c_value_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_213 = come_decrement_ref_count2(fun_name2_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result109__;
    come_call_finalizer2(sType_finalize,type2_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_204 = come_decrement_ref_count2(result_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_208 = come_decrement_ref_count2(c_value_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_213 = come_decrement_ref_count2(fun_name2_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_217;
unsigned int it_218;
_Bool _while_condtional20;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct sGenericsFun* __result103__;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct sGenericsFun* __result104__;
struct sGenericsFun* __result105__;
struct sGenericsFun* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_217, 0, sizeof(unsigned int));
memset(&it_218, 0, sizeof(unsigned int));
            hash_217=string_get_hash_key(((char*)key))%self->size;
            it_218=hash_217;
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                if(_if_conditional297=self->item_existance[it_218],                _if_conditional297) {
                    if(_if_conditional298=string_equals(self->keys[it_218],key),                    _if_conditional298) {
                        __result103__ = __result_obj__ = self->items[it_218];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result103__;
                    }
                    it_218++;
                    if(_if_conditional299=it_218>=self->size,                    _if_conditional299) {
                        it_218=0;
                    }
                    else {
                        if(_if_conditional300=it_218==hash_217,                        _if_conditional300) {
                            __result104__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result104__;
                        }
                    }
                }
                else {
                    __result105__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result105__;
                }
            }
            __result106__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result106__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj67;
char* __dec_obj68;
struct tuple2$2sTypephcharph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj67=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    __dec_obj68=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __result107__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result107__;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional303=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional303) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional304=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional304) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional311;
char* result_225;
struct list$1CVALUEph* stack_saved_226;
struct list$1sRightValueObjectph* right_value_objects_227;
struct sClass* klass_228;
char* class_name_229;
char* fun_name_230;
void* right_value198;
struct sType* type2_231;
struct sFun* cloner_232;
char* fun_name2_233;
_Bool _if_conditional312;
void* right_value199;
char* none_generics_name_234;
void* right_value200;
struct sType* obj_type_235;
void* right_value201;
char* __dec_obj81;
void* right_value202;
char* fun_name3_236;
struct sGenericsFun* generics_fun_237;
_Bool _if_conditional313;
void* right_value203;
_Bool _if_conditional314;
_Bool __result110__;
void* right_value204;
char* __dec_obj82;
int i_238;
void* right_value205;
char* new_fun_name_239;
_Bool _if_conditional315;
void* right_value206;
char* __dec_obj83;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value207;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_240;
char* new_fun_name_241;
char* __dec_obj84;
struct list$1sRightValueObjectph* __dec_obj85;
struct list$1CVALUEph* __dec_obj86;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_225, 0, sizeof(char*));
memset(&stack_saved_226, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_227, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_228, 0, sizeof(struct sClass*));
memset(&class_name_229, 0, sizeof(char*));
memset(&fun_name_230, 0, sizeof(char*));
right_value198 = (void*)0;
memset(&type2_231, 0, sizeof(struct sType*));
memset(&cloner_232, 0, sizeof(struct sFun*));
memset(&fun_name2_233, 0, sizeof(char*));
right_value199 = (void*)0;
memset(&none_generics_name_234, 0, sizeof(char*));
right_value200 = (void*)0;
memset(&obj_type_235, 0, sizeof(struct sType*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&fun_name3_236, 0, sizeof(char*));
memset(&generics_fun_237, 0, sizeof(struct sGenericsFun*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&i_238, 0, sizeof(int));
right_value205 = (void*)0;
memset(&new_fun_name_239, 0, sizeof(char*));
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&fun_240, 0, sizeof(struct sFun*));
memset(&new_fun_name_241, 0, sizeof(char*));
memset(&fun_240, 0, sizeof(struct sFun*));
memset(&new_fun_name_241, 0, sizeof(char*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_225=((void*)0);
    stack_saved_226=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_227=info->right_value_objects;
    klass_228=type->mClass;
    class_name_229=klass_228->mName;
    fun_name_230="equals";
    type2_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_231->mHeap=(_Bool)0;
    cloner_232=((void*)0);
    if(_if_conditional312=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional312) {
        none_generics_name_234=(char*)come_increment_ref_count(((char*)(right_value199=get_none_generics_name(type->mClass->mName))));
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj81=fun_name2_233;
        fun_name2_233=(char*)come_increment_ref_count(((char*)(right_value201=create_method_name(obj_type_235,(_Bool)0,fun_name_230,info,(_Bool)1))));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_236=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s_%s",none_generics_name_234,fun_name_230))));
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_237=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_236,((void*)0));
        if(generics_fun_237) {
            if(_if_conditional314=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(fun_name2_233)))),generics_fun_237,obj_type_235,info),            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional314) {
                __result110__ = (_Bool)0;
                none_generics_name_234 = come_decrement_ref_count2(none_generics_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_236 = come_decrement_ref_count2(fun_name3_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_225 = come_decrement_ref_count2(result_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_233 = come_decrement_ref_count2(fun_name2_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result110__;
            }
        }
        cloner_232=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_233);
        none_generics_name_234 = come_decrement_ref_count2(none_generics_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_236 = come_decrement_ref_count2(fun_name3_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj82=fun_name2_233;
        fun_name2_233=(char*)come_increment_ref_count(((char*)(right_value204=create_method_name(type,(_Bool)0,fun_name_230,info,(_Bool)1))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_238=128-1;        i_238>=1;        i_238--        ){
            new_fun_name_239=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("%s_v%d",fun_name2_233,i_238))));
            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_232=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_239);
            if(cloner_232) {
                __dec_obj83=fun_name2_233;
                fun_name2_233=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(new_fun_name_239))));
                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_239 = come_decrement_ref_count2(new_fun_name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_239 = come_decrement_ref_count2(new_fun_name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional316=cloner_232==((void*)0),        _if_conditional316) {
            cloner_232=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_233);
        }
    }
    if(_if_conditional317=cloner_232==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional317) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(right_value207=create_equals_automatically(type,fun_name_230,info)));
        fun_240=multiple_assign_var9->v1;
        new_fun_name_241=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj84=fun_name2_233;
        fun_name2_233=(char*)come_increment_ref_count(new_fun_name_241);
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_232=fun_240;
        new_fun_name_241 = come_decrement_ref_count2(new_fun_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj85=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_227);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj86=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_226);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result111__ = (_Bool)1;
    result_225 = come_decrement_ref_count2(result_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_233 = come_decrement_ref_count2(fun_name2_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result111__;
    result_225 = come_decrement_ref_count2(result_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_233 = come_decrement_ref_count2(fun_name2_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional318;
char* result_242;
struct list$1CVALUEph* stack_saved_243;
struct list$1sRightValueObjectph* right_value_objects_244;
struct sClass* klass_245;
char* class_name_246;
char* fun_name_247;
void* right_value208;
struct sType* type2_248;
struct sFun* cloner_249;
char* fun_name2_250;
_Bool _if_conditional319;
void* right_value209;
char* none_generics_name_251;
void* right_value210;
struct sType* obj_type_252;
void* right_value211;
char* __dec_obj87;
void* right_value212;
char* fun_name3_253;
struct sGenericsFun* generics_fun_254;
_Bool _if_conditional320;
void* right_value213;
_Bool _if_conditional321;
_Bool __result112__;
void* right_value214;
char* __dec_obj88;
int i_255;
void* right_value215;
char* new_fun_name_256;
_Bool _if_conditional322;
void* right_value216;
char* __dec_obj89;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value217;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_257;
char* new_fun_name_258;
char* __dec_obj90;
struct list$1sRightValueObjectph* __dec_obj91;
struct list$1CVALUEph* __dec_obj92;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_242, 0, sizeof(char*));
memset(&stack_saved_243, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_244, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_245, 0, sizeof(struct sClass*));
memset(&class_name_246, 0, sizeof(char*));
memset(&fun_name_247, 0, sizeof(char*));
right_value208 = (void*)0;
memset(&type2_248, 0, sizeof(struct sType*));
memset(&cloner_249, 0, sizeof(struct sFun*));
memset(&fun_name2_250, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&none_generics_name_251, 0, sizeof(char*));
right_value210 = (void*)0;
memset(&obj_type_252, 0, sizeof(struct sType*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&fun_name3_253, 0, sizeof(char*));
memset(&generics_fun_254, 0, sizeof(struct sGenericsFun*));
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&i_255, 0, sizeof(int));
right_value215 = (void*)0;
memset(&new_fun_name_256, 0, sizeof(char*));
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&fun_257, 0, sizeof(struct sFun*));
memset(&new_fun_name_258, 0, sizeof(char*));
memset(&fun_257, 0, sizeof(struct sFun*));
memset(&new_fun_name_258, 0, sizeof(char*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_242=((void*)0);
    stack_saved_243=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_244=info->right_value_objects;
    klass_245=type->mClass;
    class_name_246=klass_245->mName;
    fun_name_247="operator_equals";
    type2_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_248->mHeap=(_Bool)0;
    cloner_249=((void*)0);
    if(_if_conditional319=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional319) {
        none_generics_name_251=(char*)come_increment_ref_count(((char*)(right_value209=get_none_generics_name(type->mClass->mName))));
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_252=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj87=fun_name2_250;
        fun_name2_250=(char*)come_increment_ref_count(((char*)(right_value211=create_method_name(obj_type_252,(_Bool)0,fun_name_247,info,(_Bool)1))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_253=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("%s_%s",none_generics_name_251,fun_name_247))));
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_254=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_253,((void*)0));
        if(generics_fun_254) {
            if(_if_conditional321=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(fun_name2_250)))),generics_fun_254,obj_type_252,info),            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional321) {
                __result112__ = (_Bool)0;
                none_generics_name_251 = come_decrement_ref_count2(none_generics_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_253 = come_decrement_ref_count2(fun_name3_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_242 = come_decrement_ref_count2(result_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_250 = come_decrement_ref_count2(fun_name2_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result112__;
            }
        }
        cloner_249=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_250);
        none_generics_name_251 = come_decrement_ref_count2(none_generics_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_253 = come_decrement_ref_count2(fun_name3_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj88=fun_name2_250;
        fun_name2_250=(char*)come_increment_ref_count(((char*)(right_value214=create_method_name(type,(_Bool)0,fun_name_247,info,(_Bool)1))));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_255=128-1;        i_255>=1;        i_255--        ){
            new_fun_name_256=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s_v%d",fun_name2_250,i_255))));
            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_249=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_256);
            if(cloner_249) {
                __dec_obj89=fun_name2_250;
                fun_name2_250=(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(new_fun_name_256))));
                __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_256 = come_decrement_ref_count2(new_fun_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_256 = come_decrement_ref_count2(new_fun_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional323=cloner_249==((void*)0),        _if_conditional323) {
            cloner_249=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_250);
        }
    }
    if(_if_conditional324=cloner_249==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional324) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(right_value217=create_operator_equals_automatically(type,fun_name_247,info)));
        fun_257=multiple_assign_var10->v1;
        new_fun_name_258=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj90=fun_name2_250;
        fun_name2_250=(char*)come_increment_ref_count(new_fun_name_258);
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_249=fun_257;
        new_fun_name_258 = come_decrement_ref_count2(new_fun_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj91=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_244);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj92=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_243);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result113__ = (_Bool)1;
    result_242 = come_decrement_ref_count2(result_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_250 = come_decrement_ref_count2(fun_name2_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result113__;
    result_242 = come_decrement_ref_count2(result_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_248, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_250 = come_decrement_ref_count2(fun_name2_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional325;
char* result_259;
struct list$1CVALUEph* stack_saved_260;
struct list$1sRightValueObjectph* right_value_objects_261;
struct sClass* klass_262;
char* class_name_263;
char* fun_name_264;
void* right_value218;
struct sType* type2_265;
struct sFun* cloner_266;
char* fun_name2_267;
_Bool _if_conditional326;
void* right_value219;
char* none_generics_name_268;
void* right_value220;
struct sType* obj_type_269;
void* right_value221;
char* __dec_obj93;
void* right_value222;
char* fun_name3_270;
struct sGenericsFun* generics_fun_271;
_Bool _if_conditional327;
void* right_value223;
_Bool _if_conditional328;
_Bool __result114__;
void* right_value224;
char* __dec_obj94;
int i_272;
void* right_value225;
char* new_fun_name_273;
_Bool _if_conditional329;
void* right_value226;
char* __dec_obj95;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value227;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_274;
char* new_fun_name_275;
char* __dec_obj96;
struct list$1sRightValueObjectph* __dec_obj97;
struct list$1CVALUEph* __dec_obj98;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_259, 0, sizeof(char*));
memset(&stack_saved_260, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_261, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_262, 0, sizeof(struct sClass*));
memset(&class_name_263, 0, sizeof(char*));
memset(&fun_name_264, 0, sizeof(char*));
right_value218 = (void*)0;
memset(&type2_265, 0, sizeof(struct sType*));
memset(&cloner_266, 0, sizeof(struct sFun*));
memset(&fun_name2_267, 0, sizeof(char*));
right_value219 = (void*)0;
memset(&none_generics_name_268, 0, sizeof(char*));
right_value220 = (void*)0;
memset(&obj_type_269, 0, sizeof(struct sType*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&fun_name3_270, 0, sizeof(char*));
memset(&generics_fun_271, 0, sizeof(struct sGenericsFun*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&i_272, 0, sizeof(int));
right_value225 = (void*)0;
memset(&new_fun_name_273, 0, sizeof(char*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&fun_274, 0, sizeof(struct sFun*));
memset(&new_fun_name_275, 0, sizeof(char*));
memset(&fun_274, 0, sizeof(struct sFun*));
memset(&new_fun_name_275, 0, sizeof(char*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_259=((void*)0);
    stack_saved_260=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_261=info->right_value_objects;
    klass_262=type->mClass;
    class_name_263=klass_262->mName;
    fun_name_264="operator_not_equals";
    type2_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_265->mHeap=(_Bool)0;
    cloner_266=((void*)0);
    if(_if_conditional326=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional326) {
        none_generics_name_268=(char*)come_increment_ref_count(((char*)(right_value219=get_none_generics_name(type->mClass->mName))));
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj93=fun_name2_267;
        fun_name2_267=(char*)come_increment_ref_count(((char*)(right_value221=create_method_name(obj_type_269,(_Bool)0,fun_name_264,info,(_Bool)1))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_270=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("%s_%s",none_generics_name_268,fun_name_264))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_271=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_270,((void*)0));
        if(generics_fun_271) {
            if(_if_conditional328=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(fun_name2_267)))),generics_fun_271,obj_type_269,info),            right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional328) {
                __result114__ = (_Bool)0;
                none_generics_name_268 = come_decrement_ref_count2(none_generics_name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_270 = come_decrement_ref_count2(fun_name3_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_267 = come_decrement_ref_count2(fun_name2_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result114__;
            }
        }
        cloner_266=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_267);
        none_generics_name_268 = come_decrement_ref_count2(none_generics_name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_270 = come_decrement_ref_count2(fun_name3_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj94=fun_name2_267;
        fun_name2_267=(char*)come_increment_ref_count(((char*)(right_value224=create_method_name(type,(_Bool)0,fun_name_264,info,(_Bool)1))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_272=128-1;        i_272>=1;        i_272--        ){
            new_fun_name_273=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("%s_v%d",fun_name2_267,i_272))));
            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_266=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_273);
            if(cloner_266) {
                __dec_obj95=fun_name2_267;
                fun_name2_267=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(new_fun_name_273))));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_273 = come_decrement_ref_count2(new_fun_name_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_273 = come_decrement_ref_count2(new_fun_name_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional330=cloner_266==((void*)0),        _if_conditional330) {
            cloner_266=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_267);
        }
    }
    if(_if_conditional331=cloner_266==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional331) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(right_value227=create_operator_not_equals_automatically(type,fun_name_264,info)));
        fun_274=multiple_assign_var11->v1;
        new_fun_name_275=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj96=fun_name2_267;
        fun_name2_267=(char*)come_increment_ref_count(new_fun_name_275);
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_266=fun_274;
        new_fun_name_275 = come_decrement_ref_count2(new_fun_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj97=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_261);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj98=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_260);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result115__ = (_Bool)1;
    result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_267 = come_decrement_ref_count2(fun_name2_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result115__;
    result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_267 = come_decrement_ref_count2(fun_name2_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool existance_free_right_value_objects(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional332;
_Bool __result116__;
struct list$1sRightValueObjectph* right_value_objects_276;
struct list$1sRightValueObjectph* o2_saved_277;
struct sRightValueObject* it_278;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool __result117__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&right_value_objects_276, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_277, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_278, 0, sizeof(struct sRightValueObject*));
    if(gComeGC) {
        __result116__ = (_Bool)0;
        return __result116__;
    }
    right_value_objects_276=info->right_value_objects;
    for(    o2_saved_277=(right_value_objects_276),it_278=list$1sRightValueObjectph_begin((o2_saved_277));    !list$1sRightValueObjectph_end((o2_saved_277));    it_278=list$1sRightValueObjectph_next((o2_saved_277))    ){
        if(_if_conditional333=it_278&&!it_278->mFreed,        _if_conditional333) {
            if(_if_conditional334=string_operator_equals(it_278->mFunName,info->come_fun->mName)&&it_278->mBlockLevel==info->block_level,            _if_conditional334) {
                __result117__ = (_Bool)1;
                return __result117__;
            }
        }
    }
    __result118__ = (_Bool)0;
    return __result118__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool _if_conditional335;
_Bool free_right_value_279;
struct list$1sRightValueObjectph* right_value_objects_280;
int n_281;
struct list$1sRightValueObjectph* o2_saved_282;
struct sRightValueObject* it_283;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value228;
struct sType* type_284;
void* right_value229;
struct sType* __dec_obj99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&free_right_value_279, 0, sizeof(_Bool));
memset(&right_value_objects_280, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_281, 0, sizeof(int));
memset(&o2_saved_282, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_283, 0, sizeof(struct sRightValueObject*));
right_value228 = (void*)0;
memset(&type_284, 0, sizeof(struct sType*));
right_value229 = (void*)0;
    if(gComeGC) {
        return;
    }
    free_right_value_279=(_Bool)0;
    right_value_objects_280=info->right_value_objects;
    n_281=0;
    for(    o2_saved_282=(right_value_objects_280),it_283=list$1sRightValueObjectph_begin((o2_saved_282));    !list$1sRightValueObjectph_end((o2_saved_282));    it_283=list$1sRightValueObjectph_next((o2_saved_282))    ){
        if(_if_conditional336=it_283&&!it_283->mFreed,        _if_conditional336) {
            if(_if_conditional337=string_operator_equals(it_283->mFunName,info->come_fun->mName)&&it_283->mBlockLevel==info->block_level,            _if_conditional337) {
                type_284=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(it_283->mType))));
                come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj99=type_284;
                type_284=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=solve_type(type_284,info->generics_type,info->method_generics_types,info))));
                come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                free_object(type_284,it_283->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_283->mFreed=(_Bool)1;
                free_right_value_279=(_Bool)1;
                come_call_finalizer2(sType_finalize,type_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        n_281++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional338;
_Bool __result119__;
struct list$1sRightValueObjectph* o2_saved_285;
struct sRightValueObject* it_286;
_Bool _if_conditional339;
_Bool __result120__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_285, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_286, 0, sizeof(struct sRightValueObject*));
    if(gComeGC) {
        __result119__ = (_Bool)0;
        return __result119__;
    }
    for(    o2_saved_285=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_286=list$1sRightValueObjectph_begin((o2_saved_285));    !list$1sRightValueObjectph_end((o2_saved_285));    it_286=list$1sRightValueObjectph_next((o2_saved_285))    ){
        if(_if_conditional339=it_286->mID==right_value_num,        _if_conditional339) {
            __result120__ = (_Bool)1;
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result120__;
        }
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result121__ = (_Bool)0;
    return __result121__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_287;
struct sVar* var__291;
_Bool _if_conditional348;
struct sVar* __result126__;
struct sVar* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_287, 0, sizeof(struct sVarTable*));
memset(&var__291, 0, sizeof(struct sVar*));
    it_287=table;
    while(it_287) {
        var__291=map$2charphsVarphp_operator_load_element(it_287->mVars,name);
        if(var__291) {
            __result126__ = __result_obj__ = var__291;
            return __result126__;
        }
        it_287=it_287->mParent;
    }
    __result127__ = __result_obj__ = ((void*)0);
    return __result127__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_288;
unsigned int hash_289;
unsigned int it_290;
_Bool _while_condtional21;
_Bool _if_conditional340;
_Bool _if_conditional341;
struct sVar* __result122__;
_Bool _if_conditional346;
_Bool _if_conditional347;
struct sVar* __result123__;
struct sVar* __result124__;
struct sVar* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_288, 0, sizeof(struct sVar*));
memset(&hash_289, 0, sizeof(unsigned int));
memset(&it_290, 0, sizeof(unsigned int));
            memset(&default_value_288,0,sizeof(struct sVar*));
            hash_289=string_get_hash_key(((char*)key))%self->size;
            it_290=hash_289;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional340=self->item_existance[it_290],                _if_conditional340) {
                    if(_if_conditional341=string_equals(self->keys[it_290],key),                    _if_conditional341) {
                        __result122__ = __result_obj__ = self->items[it_290];
                        come_call_finalizer2(sVar_finalize,default_value_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result122__;
                    }
                    it_290++;
                    if(_if_conditional346=it_290>=self->size,                    _if_conditional346) {
                        it_290=0;
                    }
                    else {
                        if(_if_conditional347=it_290==hash_289,                        _if_conditional347) {
                            __result123__ = __result_obj__ = default_value_288;
                            come_call_finalizer2(sVar_finalize,default_value_288, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result123__;
                        }
                    }
                }
                else {
                    __result124__ = __result_obj__ = default_value_288;
                    come_call_finalizer2(sVar_finalize,default_value_288, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result124__;
                }
            }
            __result125__ = __result_obj__ = default_value_288;
            come_call_finalizer2(sVar_finalize,default_value_288, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result125__;
            come_call_finalizer2(sVar_finalize,default_value_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional342=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional342) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional343=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional343) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional344=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional344) {
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional345=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional345) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional349;
struct map$2charphsVarph* o2_saved_292;
char* it_295;
struct sVar* p_298;
struct sType* type_299;
struct sClass* klass_300;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
void* right_value230;
char* c_value_301;
void* right_value231;
struct sType* type2_302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_292, 0, sizeof(struct map$2charphsVarph*));
memset(&it_295, 0, sizeof(char*));
memset(&p_298, 0, sizeof(struct sVar*));
memset(&type_299, 0, sizeof(struct sType*));
memset(&klass_300, 0, sizeof(struct sClass*));
right_value230 = (void*)0;
memset(&c_value_301, 0, sizeof(char*));
right_value231 = (void*)0;
memset(&type2_302, 0, sizeof(struct sType*));
    if(gComeGC) {
        return;
    }
    for(    o2_saved_292=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_295=map$2charphsVarph_begin((o2_saved_292));    !map$2charphsVarph_end((o2_saved_292));    it_295=map$2charphsVarph_next((o2_saved_292))    ){
        p_298=map$2charphsVarphp_operator_load_element(table->mVars,it_295);
        type_299=p_298->mType;
        klass_300=type_299->mClass;
        if(_if_conditional354=ret_value!=((void*)0)&&p_298->mCValueName!=((void*)0)&&string_operator_equals(p_298->mCValueName,ret_value->mCValueName)&&type_299->mHeap,        _if_conditional354) {
            free_object(p_298->mType,p_298->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(_if_conditional355=type_299->mHeap&&p_298->mCValueName,            _if_conditional355) {
                if(type_299->mFunctionParam) {
                    free_object(p_298->mType,p_298->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    free_object(p_298->mType,p_298->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                if(_if_conditional357=klass_300->mStruct&&p_298->mCValueName&&type_299->mAllocaValue&&!type_299->mNoCallingDestructor,                _if_conditional357) {
                    c_value_301=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("(&%s)",p_298->mCValueName))));
                    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    type2_302=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(type_299))));
                    come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    type2_302->mPointerNum++;
                    free_object(type2_302,c_value_301,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_301 = come_decrement_ref_count2(c_value_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type2_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional350;
char* result_293;
char* __result128__;
_Bool _if_conditional351;
char* __result129__;
char* result_294;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_293, 0, sizeof(char*));
memset(&result_294, 0, sizeof(char*));
        if(_if_conditional350=self==((void*)0),        _if_conditional350) {
            memset(&result_293,0,sizeof(char*));
            __result128__ = __result_obj__ = result_293;
            return __result128__;
        }
        self->key_list->it=self->key_list->head;
        if(self->key_list->it) {
            __result129__ = __result_obj__ = self->key_list->it->item;
            return __result129__;
        }
        memset(&result_294,0,sizeof(char*));
        __result130__ = __result_obj__ = result_294;
        return __result130__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
        __result131__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        return __result131__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional352;
char* result_296;
char* __result132__;
_Bool _if_conditional353;
char* __result133__;
char* result_297;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_296, 0, sizeof(char*));
memset(&result_297, 0, sizeof(char*));
        if(_if_conditional352=self==((void*)0)||self->key_list->it==((void*)0),        _if_conditional352) {
            memset(&result_296,0,sizeof(char*));
            __result132__ = __result_obj__ = result_296;
            return __result132__;
        }
        self->key_list->it=self->key_list->it->next;
        if(self->key_list->it) {
            __result133__ = __result_obj__ = self->key_list->it->item;
            return __result133__;
        }
        memset(&result_297,0,sizeof(char*));
        __result134__ = __result_obj__ = result_297;
        return __result134__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_303;
_Bool _if_conditional358;
_Bool _if_conditional359;
int i_304;
_Bool _if_conditional360;
_Bool _if_conditional361;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_303, 0, sizeof(int));
memset(&i_304, 0, sizeof(int));
        for(        i_303=0;        i_303<self->size;        i_303++        ){
            if(_if_conditional358=self->item_existance[i_303],            _if_conditional358) {
                if(_if_conditional359=1,                _if_conditional359) {
                    come_call_finalizer2(sVar_finalize,self->items[i_303], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_304=0;        i_304<self->size;        i_304++        ){
            if(_if_conditional360=self->item_existance[i_304],            _if_conditional360) {
                if(_if_conditional361=1,                _if_conditional361) {
                    self->keys[i_304] = come_decrement_ref_count2(self->keys[i_304], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_305;
_Bool _while_condtional22;
struct list_item$1charp* prev_it_306;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_305, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_306, 0, sizeof(struct list_item$1charp*));
            it_305=self->head;
            while(_while_condtional22=it_305!=((void*)0),            _while_condtional22) {
                prev_it_306=it_305;
                it_305=it_305->next;
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool _if_conditional362;
struct sVarTable* it_307;
_Bool _if_conditional363;
_Bool _while_condtional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_307, 0, sizeof(struct sVarTable*));
    if(gComeGC) {
        return;
    }
    it_307=info->lv_table;
    if(_if_conditional363=it_307==info->come_fun->mBlock->mVarTable,    _if_conditional363) {
        free_objects(it_307,ret_value,info);
    }
    else {
        while(_while_condtional23=it_307!=info->come_fun->mBlock->mVarTable,        _while_condtional23) {
            free_objects(it_307,ret_value,info);
            it_307=it_307->mParent;
        }
        free_objects(it_307,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional364;
struct sVar* ret_value_308;
struct sVarTable* current_loop_vtable_309;
_Bool _if_conditional365;
struct sVarTable* it_310;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ret_value_308, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_309, 0, sizeof(struct sVarTable*));
memset(&it_310, 0, sizeof(struct sVarTable*));
    if(gComeGC) {
        return;
    }
    ret_value_308=((void*)0);
    current_loop_vtable_309=info->current_loop_vtable;
    if(_if_conditional365=current_loop_vtable_309!=((void*)0),    _if_conditional365) {
        it_310=info->lv_table;
        while(_while_condtional24=it_310!=current_loop_vtable_309,        _while_condtional24) {
            free_objects(it_310,ret_value_308,info);
            it_310=it_310->mParent;
        }
        free_objects(it_310,ret_value_308,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional366;
_Bool _if_conditional367;
void* right_value232;
void* right_value233;
void* right_value234;
void* right_value235;
void* right_value236;
char* __result135__;
_Bool _if_conditional368;
static int n_311=0;
void* right_value237;
char* var_name_312;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
void* right_value242;
void* right_value243;
void* right_value244;
void* right_value245;
char* __result136__;
void* right_value246;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&var_name_312, 0, sizeof(char*));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
    if(_if_conditional366=string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0,    _if_conditional366) {
        if(gComeDebug) {
            __result135__ = __result_obj__ = ((char*)(right_value236=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(right_value232=string_to_string(info->sname))),((char*)(right_value233=int_to_string(info->sline))),((char*)(right_value234=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value235=charp_to_string(c_value))))));
            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result135__;
        }
    }
    else {
        if(gComeDebug) {
            ++n_311;
            var_name_312=(char*)come_increment_ref_count(((char*)(right_value237=xsprintf("__exception_result_var_b%d",n_311))));
            right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value238=make_define_var(type,var_name_312,(_Bool)0,info))));
            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result136__ = __result_obj__ = ((char*)(right_value245=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value239=string_to_string(info->sname))),((char*)(right_value240=int_to_string(info->sline))),((char*)(right_value241=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value242=string_to_string(var_name_312))),((char*)(right_value243=charp_to_string(c_value))),((char*)(right_value244=string_to_string(var_name_312))))));
            var_name_312 = come_decrement_ref_count2(var_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result136__;
            var_name_312 = come_decrement_ref_count2(var_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result137__ = __result_obj__ = ((char*)(right_value246=__builtin_string(c_value)));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result137__;
}

