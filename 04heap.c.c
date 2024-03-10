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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "struct smart_pointer$1long"))));
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
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value10;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result7__ = __result_obj__ = ((char*)(right_value10=xsprintf(msg,self)));
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result7__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value11;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result8__ = __result_obj__ = ((char*)(right_value11=xsprintf(msg,self)));
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value12;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value12=xsprintf(msg,self)));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
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




void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
char* __dec_obj6;
_Bool _if_conditional8;
void* right_value13;
char* __dec_obj7;
_Bool _if_conditional9;
void* right_value14;
char* __dec_obj8;
void* right_value15;
char* __dec_obj9;
_Bool _if_conditional10;
void* right_value16;
char* __dec_obj10;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value14 = (void*)0;
right_value15 = (void*)0;
right_value16 = (void*)0;
    if(gComeGC) {
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
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value13=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(right_value->var->mType->mClone) {
                    __dec_obj8=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value14=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj9=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value15=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    else {
        if(right_value->type->mDelegate) {
        }
        else {
            __dec_obj10=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value16=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value52;
struct sType* result_29;
_Bool _if_conditional99;
struct sType* __result28__;
_Bool _if_conditional100;
struct sType* __result30__;
struct sClass* klass_30;
_Bool _if_conditional101;
void* right_value53;
struct sType* result_type_31;
void* right_value54;
void* right_value55;
struct tuple1$1sTypeph* __dec_obj35;
struct list$1sTypeph* o2_saved_34;
struct sType* it_37;
void* right_value56;
struct sType* new_param_type_40;
void* right_value60;
_Bool _if_conditional108;
int generics_number_44;
_Bool _if_conditional109;
void* right_value61;
struct list$1sNodeph* array_num_45;
_Bool immutable__46;
int pointer_num_47;
_Bool heap_48;
_Bool no_heap_49;
_Bool no_calling_destructor_50;
_Bool null_value_51;
void* right_value62;
struct sType* __dec_obj39;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct list$1sNodeph* __dec_obj40;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
int generics_number_55;
_Bool _if_conditional120;
struct sClass* klass2_56;
int generics_number2_57;
_Bool _if_conditional121;
void* right_value63;
struct list$1sNodeph* array_num_58;
_Bool immutable__59;
int pointer_num_60;
_Bool heap_61;
_Bool no_heap_62;
_Bool no_calling_destructor_63;
_Bool null_value_64;
void* right_value64;
struct sType* __dec_obj41;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
struct list$1sNodeph* __dec_obj42;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct list$1sTypeph* o2_saved_65;
struct sType* it_66;
void* right_value65;
struct sType* type_67;
void* right_value66;
struct list$1sTypeph* o2_saved_68;
struct sType* it_69;
void* right_value67;
struct sType* type_70;
void* right_value68;
_Bool _if_conditional129;
void* right_value69;
char* new_name_71;
struct sType* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&result_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
right_value53 = (void*)0;
memset(&result_type_31, 0, sizeof(struct sType*));
right_value54 = (void*)0;
right_value55 = (void*)0;
memset(&o2_saved_34, 0, sizeof(struct list$1sTypeph*));
memset(&it_37, 0, sizeof(struct sType*));
right_value56 = (void*)0;
memset(&new_param_type_40, 0, sizeof(struct sType*));
right_value60 = (void*)0;
memset(&generics_number_44, 0, sizeof(int));
right_value61 = (void*)0;
memset(&array_num_45, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__46, 0, sizeof(_Bool));
memset(&pointer_num_47, 0, sizeof(int));
memset(&heap_48, 0, sizeof(_Bool));
memset(&no_heap_49, 0, sizeof(_Bool));
memset(&no_calling_destructor_50, 0, sizeof(_Bool));
memset(&null_value_51, 0, sizeof(_Bool));
right_value62 = (void*)0;
memset(&generics_number_55, 0, sizeof(int));
memset(&klass2_56, 0, sizeof(struct sClass*));
memset(&generics_number2_57, 0, sizeof(int));
right_value63 = (void*)0;
memset(&array_num_58, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__59, 0, sizeof(_Bool));
memset(&pointer_num_60, 0, sizeof(int));
memset(&heap_61, 0, sizeof(_Bool));
memset(&no_heap_62, 0, sizeof(_Bool));
memset(&no_calling_destructor_63, 0, sizeof(_Bool));
memset(&null_value_64, 0, sizeof(_Bool));
right_value64 = (void*)0;
memset(&o2_saved_65, 0, sizeof(struct list$1sTypeph*));
memset(&it_66, 0, sizeof(struct sType*));
right_value65 = (void*)0;
memset(&type_67, 0, sizeof(struct sType*));
right_value66 = (void*)0;
memset(&o2_saved_68, 0, sizeof(struct list$1sTypeph*));
memset(&it_69, 0, sizeof(struct sType*));
right_value67 = (void*)0;
memset(&type_70, 0, sizeof(struct sType*));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&new_name_71, 0, sizeof(char*));
    result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional99=generics_type==((void*)0),    _if_conditional99) {
        __result28__ = __result_obj__ = result_29;
        come_call_finalizer2(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result28__;
    }
    if(_if_conditional100=list$1sTypeph_length(generics_type->mGenericsTypes)==0,    _if_conditional100) {
        __result30__ = __result_obj__ = result_29;
        come_call_finalizer2(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result30__;
    }
    klass_30=type->mClass;
    if(_if_conditional101=string_operator_equals(klass_30->mName,"lambda"),    _if_conditional101) {
        result_type_31=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=solve_generics(type->mResultType->v1,generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj35=result_29->mResultType;
        result_29->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value55=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_31)))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_reset(result_29->mParamTypes);
        for(        o2_saved_34=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_37=list$1sTypeph_begin((o2_saved_34));        !list$1sTypeph_end((o2_saved_34));        it_37=list$1sTypeph_next((o2_saved_34))        ){
            new_param_type_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=solve_generics(it_37,generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(result_29->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(new_param_type_40)))));
            come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,new_param_type_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional108=klass_30->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0,        _if_conditional108) {
            generics_number_44=klass_30->mMethodGenericsNum;
            if(_if_conditional109=generics_number_44>=list$1sTypeph_length(info->method_generics_types),            _if_conditional109) {
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_44,list$1sTypeph_length(info->method_generics_types));
                exit(2);
            }
            array_num_45=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value61=list$1sNodephp_clone(type->mArrayNum))));
            come_call_finalizer2(list$1sNodephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            immutable__46=type->mImmutable;
            pointer_num_47=type->mPointerNum;
            heap_48=type->mHeap;
            no_heap_49=type->mNoHeap;
            no_calling_destructor_50=type->mNoCallingDestructor;
            null_value_51=type->mNullValue;
            __dec_obj39=result_29;
            result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_44)))));
            come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
            if(_if_conditional116=list$1sNodeph_length(array_num_45)>0,            _if_conditional116) {
                __dec_obj40=result_29->mArrayNum;
                result_29->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_45);
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(null_value_51) {
                result_29->mNullValue=null_value_51;
            }
            if(_if_conditional118=pointer_num_47>0,            _if_conditional118) {
                result_29->mPointerNum+=pointer_num_47;
            }
            come_call_finalizer2(list$1sNodephp_finalize,array_num_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(klass_30->mGenerics) {
                generics_number_55=klass_30->mGenericsNum;
                if(_if_conditional120=generics_number_55>=list$1sTypeph_length(generics_type->mGenericsTypes),                _if_conditional120) {
                    err_msg(info,"invalid generics parametor number");
                    exit(2);
                }
                klass2_56=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_55)->mClass;
                generics_number2_57=klass2_56->mGenericsNum;
                if(_if_conditional121=generics_number_55!=generics_number2_57,                _if_conditional121) {
                    array_num_58=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value63=list$1sNodephp_clone(type->mArrayNum))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    immutable__59=type->mImmutable;
                    pointer_num_60=type->mPointerNum;
                    heap_61=type->mHeap;
                    no_heap_62=type->mNoHeap;
                    no_calling_destructor_63=type->mNoCallingDestructor;
                    null_value_64=type->mNullValue;
                    __dec_obj41=result_29;
                    result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_55)))));
                    come_call_finalizer2(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                    if(_if_conditional126=list$1sNodeph_length(array_num_58)>0,                    _if_conditional126) {
                        __dec_obj42=result_29->mArrayNum;
                        result_29->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_58);
                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(null_value_64) {
                        result_29->mNullValue=null_value_64;
                    }
                    if(_if_conditional128=pointer_num_60>0,                    _if_conditional128) {
                        result_29->mPointerNum+=pointer_num_60;
                    }
                    come_call_finalizer2(list$1sNodephp_finalize,array_num_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                list$1sTypeph_reset(result_29->mGenericsTypes);
                for(                o2_saved_65=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_66=list$1sTypeph_begin((o2_saved_65));                !list$1sTypeph_end((o2_saved_65));                it_66=list$1sTypeph_next((o2_saved_65))                ){
                    type_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=solve_generics(it_66,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_29->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(type_67)))));
                    come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                list$1sTypeph_reset(result_29->mMultipleTypes);
                for(                o2_saved_68=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_69=list$1sTypeph_begin((o2_saved_68));                !list$1sTypeph_end((o2_saved_68));                it_69=list$1sTypeph_next((o2_saved_68))                ){
                    type_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=solve_generics(it_69,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_29->mMultipleTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=sType_clone(type_70)))));
                    come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(_if_conditional129=!output_generics_struct(result_29,generics_type,info),                _if_conditional129) {
                    new_name_71=(char*)come_increment_ref_count(((char*)(right_value69=create_generics_name(type,info))));
                    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    printf("output generics is failed(%s)",new_name_71);
                    exit(1);
                    new_name_71 = come_decrement_ref_count2(new_name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result44__ = __result_obj__ = result_29;
    come_call_finalizer2(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result44__;
    come_call_finalizer2(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional11;
struct sType* __result10__;
void* right_value17;
struct sType* result_5;
_Bool _if_conditional29;
_Bool _if_conditional30;
void* right_value24;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional34;
void* right_value27;
struct tuple1$1sTypeph* __dec_obj16;
_Bool _if_conditional38;
void* right_value28;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional39;
void* right_value29;
char* __dec_obj18;
_Bool _if_conditional40;
void* right_value30;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional41;
void* right_value38;
struct list$1sNodeph* __dec_obj23;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value39;
struct list$1sTypeph* __dec_obj24;
_Bool _if_conditional56;
void* right_value46;
struct list$1charph* __dec_obj28;
_Bool _if_conditional60;
void* right_value47;
struct tuple1$1sTypeph* __dec_obj29;
_Bool _if_conditional61;
_Bool _if_conditional62;
void* right_value48;
struct sNode* __dec_obj30;
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
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value49;
struct sNode* __dec_obj31;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value50;
char* __dec_obj32;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value51;
char* __dec_obj33;
struct sType* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value24 = (void*)0;
right_value27 = (void*)0;
right_value28 = (void*)0;
right_value29 = (void*)0;
right_value30 = (void*)0;
right_value38 = (void*)0;
right_value39 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
        if(_if_conditional11=self==(void*)0,        _if_conditional11) {
            __result10__ = __result_obj__ = (void*)0;
            return __result10__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value17=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional29=self!=((void*)0),        _if_conditional29) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional30=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional30) {
            __dec_obj14=result_5->mMultipleTypes;
            result_5->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value24=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional34) {
            __dec_obj16=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value27=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional38=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional38) {
            __dec_obj17=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value28=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional39=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional39) {
            __dec_obj18=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value29=string_clone(self->mGenericsName))));
            __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value29 = come_decrement_ref_count2(right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional40=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional40) {
            __dec_obj19=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value30=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional41=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional41) {
            __dec_obj23=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value38=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0),        _if_conditional54) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional55=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional55) {
            __dec_obj24=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value39=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional56=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional56) {
            __dec_obj28=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional60=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional60) {
            __dec_obj29=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value47=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional62=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional62) {
            __dec_obj30=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value48=sNode_clone(self->mAlignas))));
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, ((struct sNode*)right_value48)->finalize, ((struct sNode*)right_value48)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mException=self->mException;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional86=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional86) {
            __dec_obj31=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=sNode_clone(self->mSizeNum))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional89=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional89) {
            __dec_obj32=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value50=string_clone(self->mOriginalTypeName))));
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional98=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional98) {
            __dec_obj33=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value51=string_clone(self->mAsmName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result27__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result27__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional12=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional16=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional16) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional17) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional19=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional19) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional21) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional22) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional24) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional25=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional25) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional26=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional26) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional27=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional27) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional28=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional28) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional13) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional15=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional15) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional20=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional20) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional23) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct list$1sTypeph* __result11__;
void* right_value18;
void* right_value19;
struct list$1sTypeph* result_12;
struct list_item$1sTypeph* it_13;
_Bool _while_condtional4;
void* right_value23;
struct list$1sTypeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
right_value19 = (void*)0;
memset(&result_12, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
right_value23 = (void*)0;
                if(_if_conditional31=self==((void*)0),                _if_conditional31) {
                    __result11__ = __result_obj__ = ((void*)0);
                    return __result11__;
                }
                result_12=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_13=self->head;
                while(_while_condtional4=it_13!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_12,(struct sType*)come_increment_ref_count(((struct sType*)(right_value23=sType_clone(it_13->item)))));
                    come_call_finalizer2(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_13=it_13->next;
                }
                __result14__ = __result_obj__ = result_12;
                come_call_finalizer2(list$1sTypephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result14__;
                come_call_finalizer2(list$1sTypephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result12__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result12__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional32;
void* right_value20;
struct list_item$1sTypeph* litem_14;
struct sType* __dec_obj11;
_Bool _if_conditional33;
void* right_value21;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj12;
void* right_value22;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj13;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*));
right_value21 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value22 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional32=self->len==0,                        _if_conditional32) {
                            litem_14=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_14->prev=((void*)0);
                            litem_14->next=((void*)0);
                            __dec_obj11=litem_14->item;
                            litem_14->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_14;
                            self->head=litem_14;
                        }
                        else {
                            if(_if_conditional33=self->len==1,                            _if_conditional33) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_15->prev=self->head;
                                litem_15->next=((void*)0);
                                __dec_obj12=litem_15->item;
                                litem_15->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_15;
                                self->head->next=litem_15;
                            }
                            else {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=self->tail;
                                litem_16->next=((void*)0);
                                __dec_obj13=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_16;
                                self->tail=litem_16;
                            }
                        }
                        self->len++;
                        __result13__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result13__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional35;
struct tuple1$1sTypeph* __result15__;
void* right_value25;
struct tuple1$1sTypeph* result_17;
_Bool _if_conditional37;
void* right_value26;
struct sType* __dec_obj15;
struct tuple1$1sTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
memset(&result_17, 0, sizeof(struct tuple1$1sTypeph*));
right_value26 = (void*)0;
                if(_if_conditional35=self==(void*)0,                _if_conditional35) {
                    __result15__ = __result_obj__ = (void*)0;
                    return __result15__;
                }
                result_17=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value25=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional37=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional37) {
                    __dec_obj15=result_17->v1;
                    result_17->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value26=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result16__ = __result_obj__ = result_17;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result16__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional36=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional36) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional42;
struct list$1sNodeph* __result17__;
void* right_value31;
void* right_value32;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value37;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value37 = (void*)0;
                if(_if_conditional42=self==((void*)0),                _if_conditional42) {
                    __result17__ = __result_obj__ = ((void*)0);
                    return __result17__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value37=sNode_clone(it_19->item)))));
                    if(right_value37) { right_value37 = come_decrement_ref_count2(right_value37, ((struct sNode*)right_value37)->finalize, ((struct sNode*)right_value37)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_19=it_19->next;
                }
                __result22__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result22__;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result18__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result18__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional43;
void* right_value33;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj20;
_Bool _if_conditional44;
void* right_value34;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj21;
void* right_value35;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj22;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value33 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value34 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value35 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional43=self->len==0,                        _if_conditional43) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value33=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj20=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional44=self->len==1,                            _if_conditional44) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value34=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj21=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value35=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj22=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result19__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result19__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional45;
struct sNode* __result20__;
void* right_value36;
struct sNode* result_23;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
struct sNode* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional45=self==(void*)0,                        _if_conditional45) {
                            __result20__ = __result_obj__ = (void*)0;
                            return __result20__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value36) { right_value36 = come_decrement_ref_count2(right_value36, ((struct sNode*)right_value36)->finalize, ((struct sNode*)right_value36)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional46=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional46) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional52=self!=((void*)0),                        _if_conditional52) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional53=self!=((void*)0),                        _if_conditional53) {
                            result_23->kind=self->kind;
                        }
                        __result21__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result21__;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional57;
struct list$1charph* __result23__;
void* right_value40;
void* right_value41;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value45;
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
right_value41 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value45 = (void*)0;
                if(_if_conditional57=self==((void*)0),                _if_conditional57) {
                    __result23__ = __result_obj__ = ((void*)0);
                    return __result23__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value40=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value45=string_clone(it_25->item)))));
                    right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_25=it_25->next;
                }
                __result26__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result26__;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result24__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result24__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional58;
void* right_value42;
struct list_item$1charph* litem_26;
char* __dec_obj25;
_Bool _if_conditional59;
void* right_value43;
struct list_item$1charph* litem_27;
char* __dec_obj26;
void* right_value44;
struct list_item$1charph* litem_28;
char* __dec_obj27;
struct list$1charph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value43 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value44 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional58=self->len==0,                        _if_conditional58) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value42=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj25=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional59=self->len==1,                            _if_conditional59) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value43=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj26=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value44=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj27=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result25__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result25__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
        __result29__ = self->len;
        return __result29__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj34;
struct tuple1$1sTypeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj34=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __result31__ = __result_obj__ = self;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result31__;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_32;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_33;
struct list$1sTypeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_32, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_33, 0, sizeof(struct list_item$1sTypeph*));
            it_32=self->head;
            while(_while_condtional7=it_32!=((void*)0),            _while_condtional7) {
                prev_it_33=it_32;
                it_32=it_32->next;
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result32__ = __result_obj__ = self;
            return __result32__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional102;
struct sType* result_35;
struct sType* __result33__;
_Bool _if_conditional103;
struct sType* __result34__;
struct sType* result_36;
struct sType* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_35, 0, sizeof(struct sType*));
memset(&result_36, 0, sizeof(struct sType*));
            if(_if_conditional102=self==((void*)0),            _if_conditional102) {
                memset(&result_35,0,sizeof(struct sType*));
                __result33__ = __result_obj__ = result_35;
                return __result33__;
            }
            self->it=self->head;
            if(self->it) {
                __result34__ = __result_obj__ = self->it->item;
                return __result34__;
            }
            memset(&result_36,0,sizeof(struct sType*));
            __result35__ = __result_obj__ = result_36;
            return __result35__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
            __result36__ = self==((void*)0)||self->it==((void*)0);
            return __result36__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional104;
struct sType* result_38;
struct sType* __result37__;
_Bool _if_conditional105;
struct sType* __result38__;
struct sType* result_39;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_38, 0, sizeof(struct sType*));
memset(&result_39, 0, sizeof(struct sType*));
            if(_if_conditional104=self==((void*)0)||self->it==((void*)0),            _if_conditional104) {
                memset(&result_38,0,sizeof(struct sType*));
                __result37__ = __result_obj__ = result_38;
                return __result37__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result38__ = __result_obj__ = self->it->item;
                return __result38__;
            }
            memset(&result_39,0,sizeof(struct sType*));
            __result39__ = __result_obj__ = result_39;
            return __result39__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional106;
void* right_value57;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj36;
_Bool _if_conditional107;
void* right_value58;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj37;
void* right_value59;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj38;
struct list$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
right_value58 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
right_value59 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional106=self->len==0,                _if_conditional106) {
                    litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_41->prev=((void*)0);
                    litem_41->next=((void*)0);
                    __dec_obj36=litem_41->item;
                    litem_41->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_41;
                    self->head=litem_41;
                }
                else {
                    if(_if_conditional107=self->len==1,                    _if_conditional107) {
                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value58=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 236, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_42->prev=self->head;
                        litem_42->next=((void*)0);
                        __dec_obj37=litem_42->item;
                        litem_42->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_42;
                        self->head->next=litem_42;
                    }
                    else {
                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value59=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 246, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->tail;
                        litem_43->next=((void*)0);
                        __dec_obj38=litem_43->item;
                        litem_43->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_43;
                        self->tail=litem_43;
                    }
                }
                self->len++;
                __result40__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional110;
struct list_item$1sTypeph* it_52;
int i_53;
_Bool _while_condtional8;
_Bool _if_conditional111;
struct sType* __result41__;
struct sType* default_value_54;
struct sType* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_53, 0, sizeof(int));
memset(&default_value_54, 0, sizeof(struct sType*));
                if(_if_conditional110=position<0,                _if_conditional110) {
                    position+=self->len;
                }
                it_52=self->head;
                i_53=0;
                while(_while_condtional8=it_52!=((void*)0),                _while_condtional8) {
                    if(_if_conditional111=position==i_53,                    _if_conditional111) {
                        __result41__ = __result_obj__ = it_52->item;
                        return __result41__;
                    }
                    it_52=it_52->next;
                    i_53++;
                }
                memset(&default_value_54,0,sizeof(struct sType*));
                __result42__ = __result_obj__ = default_value_54;
                come_call_finalizer2(sType_finalize,default_value_54, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result42__;
                come_call_finalizer2(sType_finalize,default_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
                __result43__ = self->len;
                return __result43__;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value70;
struct sType* result_72;
_Bool _if_conditional130;
void* right_value71;
struct sType* __dec_obj43;
struct sType* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&result_72, 0, sizeof(struct sType*));
right_value71 = (void*)0;
    result_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(generics_type) {
        __dec_obj43=result_72;
        result_72=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=solve_generics(result_72,generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    __result45__ = __result_obj__ = result_72;
    come_call_finalizer2(sType_finalize,result_72, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result45__;
    come_call_finalizer2(sType_finalize,result_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
char* p_73;
_Bool _if_conditional131;
_Bool _while_condtional9;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
int n_74;
_Bool _while_condtional10;
int __result46__;
int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_73, 0, sizeof(char*));
memset(&n_74, 0, sizeof(int));
    p_73=obj;
    if(_if_conditional131=*p_73==40,    _if_conditional131) {
        p_73++;
        while(_while_condtional9=*p_73!=41,        _while_condtional9) {
            p_73++;
        }
        p_73++;
        if(_if_conditional132=*p_73==40,        _if_conditional132) {
            p_73++;
            if(_if_conditional133=strcmp(p_73,"right_value")==0,            _if_conditional133) {
                p_73+=strlen("right_value");
                if(_if_conditional134=xisdigit(*p_73),                _if_conditional134) {
                    n_74=0;
                    while(_while_condtional10=xisdigit(*p_73),                    _while_condtional10) {
                        n_74=n_74*10+*p_73-48;
                        p_73++;
                    }
                    __result46__ = n_74;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result46__;
                }
            }
        }
    }
    __result47__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result47__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional135;
void* right_value72;
char* __result48__;
_Bool _if_conditional136;
void* right_value73;
char* __result49__;
void* right_value74;
struct sRightValueObject* new_value_75;
struct sType* __dec_obj44;
void* right_value75;
char* __dec_obj45;
void* right_value76;
char* __dec_obj46;
void* right_value80;
char* buf_79;
void* right_value81;
void* right_value82;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
memset(&new_value_75, 0, sizeof(struct sRightValueObject*));
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value80 = (void*)0;
memset(&buf_79, 0, sizeof(char*));
right_value81 = (void*)0;
right_value82 = (void*)0;
    if(gComeGC) {
        __result48__ = __result_obj__ = ((char*)(right_value72=__builtin_string(obj)));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result48__;
    }
    if(info->no_output_come_code) {
        __result49__ = __result_obj__ = ((char*)(right_value73=__builtin_string("")));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result49__;
    }
    new_value_75=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value74=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 234, "struct sRightValueObject"))));
    come_call_finalizer2(sRightValueObject_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj44=new_value_75->mType;
    new_value_75->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    new_value_75->mFreed=(_Bool)0;
    new_value_75->mID=gRightValueNum;
    __dec_obj45=new_value_75->mVarName;
    new_value_75->mVarName=(char*)come_increment_ref_count(((char*)(right_value75=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj46=new_value_75->mFunName;
    new_value_75->mFunName=(char*)come_increment_ref_count(((char*)(right_value76=string_clone(info->come_fun->mName))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    new_value_75->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_75));
    buf_79=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf_79);
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    __result51__ = __result_obj__ = ((char*)(right_value82=xsprintf("((%s)(%s=%s))",((char*)(right_value81=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_75->mVarName,obj)));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_79 = come_decrement_ref_count2(buf_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_79 = come_decrement_ref_count2(buf_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional137=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional137) {
            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional138=self!=((void*)0)&&self->mVarName!=((void*)0),        _if_conditional138) {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional139=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional139) {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool _if_conditional140;
void* right_value77;
struct list_item$1sRightValueObjectph* litem_76;
struct sRightValueObject* __dec_obj47;
_Bool _if_conditional142;
void* right_value78;
struct list_item$1sRightValueObjectph* litem_77;
struct sRightValueObject* __dec_obj48;
void* right_value79;
struct list_item$1sRightValueObjectph* litem_78;
struct sRightValueObject* __dec_obj49;
struct list$1sRightValueObjectph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value78 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value79 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional140=self->len==0,        _if_conditional140) {
            litem_76=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value77=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 226, "struct list_item$1sRightValueObjectph"))));
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_76->prev=((void*)0);
            litem_76->next=((void*)0);
            __dec_obj47=litem_76->item;
            litem_76->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer2(sRightValueObject_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_76;
            self->head=litem_76;
        }
        else {
            if(_if_conditional142=self->len==1,            _if_conditional142) {
                litem_77=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value78=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 236, "struct list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_77->prev=self->head;
                litem_77->next=((void*)0);
                __dec_obj48=litem_77->item;
                litem_77->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_77;
                self->head->next=litem_77;
            }
            else {
                litem_78=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value79=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 246, "struct list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_78->prev=self->tail;
                litem_78->next=((void*)0);
                __dec_obj49=litem_78->item;
                litem_78->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_78;
                self->tail=litem_78;
            }
        }
        self->len++;
        __result50__ = __result_obj__ = self;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result50__;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional141;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional141=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional141) {
                    come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional143;
int i_80;
struct list$1sRightValueObjectph* o2_saved_81;
struct sRightValueObject* it_84;
_Bool _if_conditional148;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_80, 0, sizeof(int));
memset(&o2_saved_81, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_84, 0, sizeof(struct sRightValueObject*));
    if(gComeGC) {
        return;
    }
    i_80=0;
    for(    o2_saved_81=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_84=list$1sRightValueObjectph_begin((o2_saved_81));    !list$1sRightValueObjectph_end((o2_saved_81));    it_84=list$1sRightValueObjectph_next((o2_saved_81))    ){
        if(_if_conditional148=it_84->mID==right_value_num,        _if_conditional148) {
            break;
        }
        i_80++;
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_80,i_80+1);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional144;
struct sRightValueObject* result_82;
struct sRightValueObject* __result52__;
_Bool _if_conditional145;
struct sRightValueObject* __result53__;
struct sRightValueObject* result_83;
struct sRightValueObject* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(struct sRightValueObject*));
memset(&result_83, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional144=self==((void*)0),        _if_conditional144) {
            memset(&result_82,0,sizeof(struct sRightValueObject*));
            __result52__ = __result_obj__ = result_82;
            return __result52__;
        }
        self->it=self->head;
        if(self->it) {
            __result53__ = __result_obj__ = self->it->item;
            return __result53__;
        }
        memset(&result_83,0,sizeof(struct sRightValueObject*));
        __result54__ = __result_obj__ = result_83;
        return __result54__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
        __result55__ = self==((void*)0)||self->it==((void*)0);
        return __result55__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional146;
struct sRightValueObject* result_85;
struct sRightValueObject* __result56__;
_Bool _if_conditional147;
struct sRightValueObject* __result57__;
struct sRightValueObject* result_86;
struct sRightValueObject* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(struct sRightValueObject*));
memset(&result_86, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional146=self==((void*)0)||self->it==((void*)0),        _if_conditional146) {
            memset(&result_85,0,sizeof(struct sRightValueObject*));
            __result56__ = __result_obj__ = result_85;
            return __result56__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result57__ = __result_obj__ = self->it->item;
            return __result57__;
        }
        memset(&result_86,0,sizeof(struct sRightValueObject*));
        __result58__ = __result_obj__ = result_86;
        return __result58__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_87;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_87, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_88, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_87=self->head;
        while(_while_condtional11=it_87!=((void*)0),        _while_condtional11) {
            prev_it_88=it_87;
            it_87=it_87->next;
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
int tmp_89;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list$1sRightValueObjectph* __result59__;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list_item$1sRightValueObjectph* it_92;
int i_93;
_Bool _while_condtional13;
_Bool _if_conditional157;
struct list_item$1sRightValueObjectph* prev_it_94;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1sRightValueObjectph* it_95;
int i_96;
_Bool _while_condtional14;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct list_item$1sRightValueObjectph* prev_it_97;
struct list_item$1sRightValueObjectph* it_98;
struct list_item$1sRightValueObjectph* head_prev_it_99;
struct list_item$1sRightValueObjectph* tail_it_100;
int i_101;
_Bool _while_condtional15;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list_item$1sRightValueObjectph* prev_it_102;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct list$1sRightValueObjectph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_89, 0, sizeof(int));
memset(&it_92, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_93, 0, sizeof(int));
memset(&prev_it_94, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_95, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_96, 0, sizeof(int));
memset(&prev_it_97, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_98, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_99, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_100, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_101, 0, sizeof(int));
memset(&prev_it_102, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional149=head<0,        _if_conditional149) {
            head+=self->len;
        }
        if(_if_conditional150=tail<0,        _if_conditional150) {
            tail+=self->len+1;
        }
        if(_if_conditional151=head>tail,        _if_conditional151) {
            tmp_89=tail;
            tail=head;
            head=tmp_89;
        }
        if(_if_conditional152=head<0,        _if_conditional152) {
            head=0;
        }
        if(_if_conditional153=tail>self->len,        _if_conditional153) {
            tail=self->len;
        }
        if(_if_conditional154=head==tail,        _if_conditional154) {
            __result59__ = __result_obj__ = self;
            return __result59__;
        }
        if(_if_conditional155=head==0&&tail==self->len,        _if_conditional155) {
            list$1sRightValueObjectph_reset(self);
        }
        else {
            if(_if_conditional156=head==0,            _if_conditional156) {
                it_92=self->head;
                i_93=0;
                while(_while_condtional13=it_92!=((void*)0),                _while_condtional13) {
                    if(_if_conditional157=i_93<tail,                    _if_conditional157) {
                        prev_it_94=it_92;
                        it_92=it_92->next;
                        i_93++;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(_if_conditional158=i_93==tail,                        _if_conditional158) {
                            self->head=it_92;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_92=it_92->next;
                            i_93++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional159=tail==self->len,                _if_conditional159) {
                    it_95=self->head;
                    i_96=0;
                    while(_while_condtional14=it_95!=((void*)0),                    _while_condtional14) {
                        if(_if_conditional160=i_96==head,                        _if_conditional160) {
                            self->tail=it_95->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional161=i_96>=head,                        _if_conditional161) {
                            prev_it_97=it_95;
                            it_95=it_95->next;
                            i_96++;
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_95=it_95->next;
                            i_96++;
                        }
                    }
                }
                else {
                    it_98=self->head;
                    head_prev_it_99=((void*)0);
                    tail_it_100=((void*)0);
                    i_101=0;
                    while(_while_condtional15=it_98!=((void*)0),                    _while_condtional15) {
                        if(_if_conditional162=i_101==head,                        _if_conditional162) {
                            head_prev_it_99=it_98->prev;
                        }
                        if(_if_conditional163=i_101==tail,                        _if_conditional163) {
                            tail_it_100=it_98;
                        }
                        if(_if_conditional164=i_101>=head&&i_101<tail,                        _if_conditional164) {
                            prev_it_102=it_98;
                            it_98=it_98->next;
                            i_101++;
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_98=it_98->next;
                            i_101++;
                        }
                    }
                    if(_if_conditional165=head_prev_it_99!=((void*)0),                    _if_conditional165) {
                        head_prev_it_99->next=tail_it_100;
                    }
                    if(_if_conditional166=tail_it_100!=((void*)0),                    _if_conditional166) {
                        tail_it_100->prev=head_prev_it_99;
                    }
                }
            }
        }
        __result61__ = __result_obj__ = self;
        return __result61__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_90;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_91;
struct list$1sRightValueObjectph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_90, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_91, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_90=self->head;
                while(_while_condtional12=it_90!=((void*)0),                _while_condtional12) {
                    prev_it_91=it_90;
                    it_90=it_90->next;
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result60__ = __result_obj__ = self;
                return __result60__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional167;
void* right_value83;
char* __result62__;
struct sClass* klass_103;
void* right_value84;
char* type_name_104;
void* right_value85;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&klass_103, 0, sizeof(struct sClass*));
right_value84 = (void*)0;
memset(&type_name_104, 0, sizeof(char*));
right_value85 = (void*)0;
    if(gComeGC) {
        __result62__ = __result_obj__ = ((char*)(right_value83=__builtin_string(obj)));
        right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result62__;
    }
    klass_103=type->mClass;
    type_name_104=(char*)come_increment_ref_count(((char*)(right_value84=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result63__ = __result_obj__ = ((char*)(right_value85=xsprintf("(%s)come_increment_ref_count(%s)",type_name_104,obj)));
    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional168;
struct list$1CVALUEph* stack_saved_105;
struct list$1sRightValueObjectph* right_value_objects_106;
struct sClass* klass_107;
static int dec_num_108=0;
void* right_value86;
char* name_109;
void* right_value87;
_Bool no_decrement_110;
_Bool no_free_111;
_Bool _if_conditional169;
void* right_value88;
char* c_value_112;
struct sClass* klass_113;
char* class_name_114;
char* fun_name_115;
void* right_value89;
struct sType* type2_116;
void* right_value90;
char* fun_name2_117;
struct sFun* finalizer_118;
_Bool _if_conditional170;
_Bool _if_conditional190;
void* right_value91;
char* none_generics_name_122;
void* right_value92;
char* generics_fun_name_123;
struct sGenericsFun* generics_fun_127;
_Bool _if_conditional205;
_Bool _if_conditional206;
int i_128;
void* right_value93;
char* new_fun_name_129;
_Bool _if_conditional207;
void* right_value94;
char* __dec_obj50;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value95;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_130;
char* new_fun_name_131;
char* __dec_obj51;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value96;
char* type_name_132;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value97;
_Bool _if_conditional215;
void* right_value98;
char* type_name_133;
void* right_value99;
void* right_value100;
struct list$1sRightValueObjectph* __dec_obj52;
struct list$1CVALUEph* __dec_obj53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_105, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_106, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_107, 0, sizeof(struct sClass*));
right_value86 = (void*)0;
memset(&name_109, 0, sizeof(char*));
right_value87 = (void*)0;
memset(&no_decrement_110, 0, sizeof(_Bool));
memset(&no_free_111, 0, sizeof(_Bool));
right_value88 = (void*)0;
memset(&c_value_112, 0, sizeof(char*));
memset(&klass_113, 0, sizeof(struct sClass*));
memset(&class_name_114, 0, sizeof(char*));
memset(&fun_name_115, 0, sizeof(char*));
right_value89 = (void*)0;
memset(&type2_116, 0, sizeof(struct sType*));
right_value90 = (void*)0;
memset(&fun_name2_117, 0, sizeof(char*));
memset(&finalizer_118, 0, sizeof(struct sFun*));
right_value91 = (void*)0;
memset(&none_generics_name_122, 0, sizeof(char*));
right_value92 = (void*)0;
memset(&generics_fun_name_123, 0, sizeof(char*));
memset(&generics_fun_127, 0, sizeof(struct sGenericsFun*));
memset(&i_128, 0, sizeof(int));
right_value93 = (void*)0;
memset(&new_fun_name_129, 0, sizeof(char*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&fun_130, 0, sizeof(struct sFun*));
memset(&new_fun_name_131, 0, sizeof(char*));
memset(&fun_130, 0, sizeof(struct sFun*));
memset(&new_fun_name_131, 0, sizeof(char*));
right_value96 = (void*)0;
memset(&type_name_132, 0, sizeof(char*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&type_name_133, 0, sizeof(char*));
right_value99 = (void*)0;
right_value100 = (void*)0;
    if(gComeGC) {
        return;
    }
    stack_saved_105=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_106=info->right_value_objects;
    klass_107=type->mClass;
    name_109=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("__dec_obj%d",++dec_num_108))));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value87=make_define_var(type,name_109,(_Bool)0,info))));
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,"%s=%s;\n",name_109,obj);
    obj=name_109;
    no_decrement_110=(_Bool)0;
    no_free_111=(_Bool)0;
    if(_if_conditional169=type->mPointerNum>0,    _if_conditional169) {
        c_value_112=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(obj))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        klass_113=type->mClass;
        class_name_114=klass_113->mName;
        fun_name_115="finalize";
        type2_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type2_116->mHeap=(_Bool)0;
        fun_name2_117=(char*)come_increment_ref_count(((char*)(right_value90=create_method_name(type,(_Bool)0,fun_name_115,info))));
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        finalizer_118=((void*)0);
        if(_if_conditional170=list$1sTypeph_length(type->mGenericsTypes)>0,        _if_conditional170) {
            finalizer_118=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_117);
            if(_if_conditional190=finalizer_118==((void*)0),            _if_conditional190) {
                none_generics_name_122=(char*)come_increment_ref_count(((char*)(right_value91=get_none_generics_name(type2_116->mClass->mName))));
                right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_name_123=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("%s_%s",none_generics_name_122,fun_name_115))));
                right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_127=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_123);
                if(generics_fun_127) {
                    if(_if_conditional206=!create_generics_fun((char*)come_increment_ref_count(fun_name2_117),generics_fun_127,type,info),                    _if_conditional206) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_118=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_117);
                }
                none_generics_name_122 = come_decrement_ref_count2(none_generics_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_123 = come_decrement_ref_count2(generics_fun_name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_128=128-1;            i_128>=1;            i_128--            ){
                new_fun_name_129=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("%s_v%d",fun_name2_117,i_128))));
                right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                finalizer_118=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_129);
                if(finalizer_118) {
                    __dec_obj50=fun_name2_117;
                    fun_name2_117=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(new_fun_name_129))));
                    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_129 = come_decrement_ref_count2(new_fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_129 = come_decrement_ref_count2(new_fun_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional208=finalizer_118==((void*)0),            _if_conditional208) {
                finalizer_118=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_117);
            }
        }
        if(_if_conditional209=finalizer_118==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,        _if_conditional209) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value95=create_finalizer_automatically(type,fun_name_115,info)));
            fun_130=multiple_assign_var1->v1;
            new_fun_name_131=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj51=fun_name2_117;
            fun_name2_117=(char*)come_increment_ref_count(new_fun_name_131);
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_118=fun_130;
            new_fun_name_131 = come_decrement_ref_count2(new_fun_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional211=finalizer_118!=((void*)0),        _if_conditional211) {
            if(_if_conditional212=klass_113->mProtocol&&type->mPointerNum==1,            _if_conditional212) {
                type_name_132=(char*)come_increment_ref_count(((char*)(right_value96=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(c_value_112) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_117,c_value_112,type_name_132,c_value_112,type_name_132,c_value_112,type->mAllocaValue,no_decrement_110,no_free_111,force_delete_);
                }
                type_name_132 = come_decrement_ref_count2(type_name_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_112) {
                    add_come_last_code2(info,((char*)(right_value97=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_117,c_value_112,type->mAllocaValue,no_decrement_110,no_free_111,force_delete_))));
                    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            if(_if_conditional215=klass_113->mProtocol&&type->mPointerNum==1,            _if_conditional215) {
                type_name_133=(char*)come_increment_ref_count(((char*)(right_value98=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_last_code2(info,((char*)(right_value99=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_109,name_109,name_109,type_name_133,name_109,type_name_133,name_109))));
                right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                type_name_133 = come_decrement_ref_count2(type_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_last_code2(info,((char*)(right_value100=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_109,name_109))));
                right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        c_value_112 = come_decrement_ref_count2(c_value_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name2_117 = come_decrement_ref_count2(fun_name2_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj52=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_106);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj53=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_105);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_109 = come_decrement_ref_count2(name_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_119;
unsigned int hash_120;
unsigned int it_121;
_Bool _while_condtional16;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sFun* __result64__;
_Bool _if_conditional188;
_Bool _if_conditional189;
struct sFun* __result65__;
struct sFun* __result66__;
struct sFun* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_119, 0, sizeof(struct sFun*));
memset(&hash_120, 0, sizeof(unsigned int));
memset(&it_121, 0, sizeof(unsigned int));
                memset(&default_value_119,0,sizeof(struct sFun*));
                hash_120=string_get_hash_key(((char*)key))%self->size;
                it_121=hash_120;
                while(_while_condtional16=(_Bool)1,                _while_condtional16) {
                    if(_if_conditional171=self->item_existance[it_121],                    _if_conditional171) {
                        if(_if_conditional172=string_equals(self->keys[it_121],key),                        _if_conditional172) {
                            __result64__ = __result_obj__ = self->items[it_121];
                            come_call_finalizer2(sFun_finalize,default_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result64__;
                        }
                        it_121++;
                        if(_if_conditional188=it_121>=self->size,                        _if_conditional188) {
                            it_121=0;
                        }
                        else {
                            if(_if_conditional189=it_121==hash_120,                            _if_conditional189) {
                                __result65__ = __result_obj__ = default_value_119;
                                come_call_finalizer2(sFun_finalize,default_value_119, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result65__;
                            }
                        }
                    }
                    else {
                        __result66__ = __result_obj__ = default_value_119;
                        come_call_finalizer2(sFun_finalize,default_value_119, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result66__;
                    }
                }
                __result67__ = __result_obj__ = default_value_119;
                come_call_finalizer2(sFun_finalize,default_value_119, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer2(sFun_finalize,default_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional173=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional173) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional174=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional174) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional175=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional175) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional176=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional176) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional177=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional177) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional178=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional178) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional179=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional179) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional182=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional182) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional183=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional183) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional184=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional184) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional185=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional185) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional186=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional186) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional187=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional187) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional180;
_Bool _if_conditional181;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional180=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional180) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional181=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional181) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
struct sGenericsFun* default_value_124;
unsigned int hash_125;
unsigned int it_126;
_Bool _while_condtional17;
_Bool _if_conditional191;
_Bool _if_conditional192;
struct sGenericsFun* __result68__;
_Bool _if_conditional203;
_Bool _if_conditional204;
struct sGenericsFun* __result69__;
struct sGenericsFun* __result70__;
struct sGenericsFun* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_124, 0, sizeof(struct sGenericsFun*));
memset(&hash_125, 0, sizeof(unsigned int));
memset(&it_126, 0, sizeof(unsigned int));
                    memset(&default_value_124,0,sizeof(struct sGenericsFun*));
                    hash_125=string_get_hash_key(((char*)key))%self->size;
                    it_126=hash_125;
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        if(_if_conditional191=self->item_existance[it_126],                        _if_conditional191) {
                            if(_if_conditional192=string_equals(self->keys[it_126],key),                            _if_conditional192) {
                                __result68__ = __result_obj__ = self->items[it_126];
                                come_call_finalizer2(sGenericsFun_finalize,default_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result68__;
                            }
                            it_126++;
                            if(_if_conditional203=it_126>=self->size,                            _if_conditional203) {
                                it_126=0;
                            }
                            else {
                                if(_if_conditional204=it_126==hash_125,                                _if_conditional204) {
                                    __result69__ = __result_obj__ = default_value_124;
                                    come_call_finalizer2(sGenericsFun_finalize,default_value_124, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result69__;
                                }
                            }
                        }
                        else {
                            __result70__ = __result_obj__ = default_value_124;
                            come_call_finalizer2(sGenericsFun_finalize,default_value_124, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result70__;
                        }
                    }
                    __result71__ = __result_obj__ = default_value_124;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_124, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result71__;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional193=self!=((void*)0)&&self->mImplType!=((void*)0),                                    _if_conditional193) {
                                        come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional194=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                                    _if_conditional194) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional195=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                                    _if_conditional195) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional196=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional196) {
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional197=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional197) {
                                        come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional198=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional198) {
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional199=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional199) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional200=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                    _if_conditional200) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional201=self!=((void*)0)&&self->mBlock!=((void*)0),                                    _if_conditional201) {
                                        self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional202=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                                    _if_conditional202) {
                                        self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional210=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional210) {
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
struct list_item$1CVALUEph* it_134;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_134, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_135, 0, sizeof(struct list_item$1CVALUEph*));
        it_134=self->head;
        while(_while_condtional18=it_134!=((void*)0),        _while_condtional18) {
            prev_it_135=it_134;
            it_134=it_134->next;
            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional216=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional216) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional217=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional217) {
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional218=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional218) {
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional219;
struct list$1CVALUEph* stack_saved_136;
struct list$1sRightValueObjectph* right_value_objects_137;
struct sType* type_before_138;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value101;
char* c_value_139;
struct sClass* klass_140;
char* class_name_141;
char* fun_name_142;
void* right_value102;
struct sType* type2_143;
void* right_value103;
char* fun_name2_144;
struct sFun* finalizer_145;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value104;
char* none_generics_name_146;
void* right_value105;
char* generics_fun_name_147;
struct sGenericsFun* generics_fun_148;
_Bool _if_conditional225;
_Bool _if_conditional226;
int i_149;
void* right_value106;
char* new_fun_name_150;
_Bool _if_conditional227;
void* right_value107;
char* __dec_obj54;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value108;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_151;
char* new_fun_name_152;
char* __dec_obj55;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value109;
char* type_name_153;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value110;
void* right_value111;
_Bool _if_conditional239;
void* right_value112;
void* right_value113;
_Bool _if_conditional240;
struct list$1tuple2$2charphsTypephph* o2_saved_154;
struct tuple2$2charphsTypeph* it_157;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_160;
struct sType* field_type_161;
_Bool _if_conditional245;
void* right_value114;
void* right_value115;
char* obj_162;
_Bool _if_conditional249;
struct list$1tuple2$2charphsTypephph* o2_saved_165;
struct tuple2$2charphsTypeph* it_166;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_167;
struct sType* field_type_168;
_Bool _if_conditional250;
void* right_value116;
void* right_value117;
char* obj_169;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value118;
char* type_name_170;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value119;
char* c_value_171;
struct sClass* klass_172;
char* class_name_173;
char* fun_name_174;
void* right_value120;
struct sType* type2_175;
void* right_value121;
char* fun_name2_176;
struct sFun* finalizer_177;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value122;
char* none_generics_name_178;
void* right_value123;
char* generics_fun_name_179;
struct sGenericsFun* generics_fun_180;
_Bool _if_conditional263;
_Bool _if_conditional264;
int i_181;
void* right_value124;
char* new_fun_name_182;
_Bool _if_conditional265;
void* right_value125;
char* __dec_obj56;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value126;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_183;
char* new_fun_name_184;
char* __dec_obj57;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value127;
char* type_name_185;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value128;
void* right_value129;
_Bool _if_conditional277;
void* right_value130;
void* right_value131;
_Bool _if_conditional278;
struct list$1tuple2$2charphsTypephph* o2_saved_186;
struct tuple2$2charphsTypeph* it_187;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_188;
struct sType* field_type_189;
_Bool _if_conditional279;
void* right_value132;
void* right_value133;
char* obj_190;
_Bool _if_conditional280;
struct list$1tuple2$2charphsTypephph* o2_saved_191;
struct tuple2$2charphsTypeph* it_192;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_193;
struct sType* field_type_194;
_Bool _if_conditional281;
void* right_value134;
void* right_value135;
char* obj_195;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value136;
char* type_name_196;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
struct list$1sRightValueObjectph* __dec_obj58;
struct list$1CVALUEph* __dec_obj59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_136, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_137, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_138, 0, sizeof(struct sType*));
right_value101 = (void*)0;
memset(&c_value_139, 0, sizeof(char*));
memset(&klass_140, 0, sizeof(struct sClass*));
memset(&class_name_141, 0, sizeof(char*));
memset(&fun_name_142, 0, sizeof(char*));
right_value102 = (void*)0;
memset(&type2_143, 0, sizeof(struct sType*));
right_value103 = (void*)0;
memset(&fun_name2_144, 0, sizeof(char*));
memset(&finalizer_145, 0, sizeof(struct sFun*));
right_value104 = (void*)0;
memset(&none_generics_name_146, 0, sizeof(char*));
right_value105 = (void*)0;
memset(&generics_fun_name_147, 0, sizeof(char*));
memset(&generics_fun_148, 0, sizeof(struct sGenericsFun*));
memset(&i_149, 0, sizeof(int));
right_value106 = (void*)0;
memset(&new_fun_name_150, 0, sizeof(char*));
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&fun_151, 0, sizeof(struct sFun*));
memset(&new_fun_name_152, 0, sizeof(char*));
memset(&fun_151, 0, sizeof(struct sFun*));
memset(&new_fun_name_152, 0, sizeof(char*));
right_value109 = (void*)0;
memset(&type_name_153, 0, sizeof(char*));
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&o2_saved_154, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_157, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_160, 0, sizeof(char*));
memset(&field_type_161, 0, sizeof(struct sType*));
memset(&name_160, 0, sizeof(char*));
memset(&field_type_161, 0, sizeof(struct sType*));
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&obj_162, 0, sizeof(char*));
memset(&o2_saved_165, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_166, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_167, 0, sizeof(char*));
memset(&field_type_168, 0, sizeof(struct sType*));
memset(&name_167, 0, sizeof(char*));
memset(&field_type_168, 0, sizeof(struct sType*));
right_value116 = (void*)0;
right_value117 = (void*)0;
memset(&obj_169, 0, sizeof(char*));
right_value118 = (void*)0;
memset(&type_name_170, 0, sizeof(char*));
right_value119 = (void*)0;
memset(&c_value_171, 0, sizeof(char*));
memset(&klass_172, 0, sizeof(struct sClass*));
memset(&class_name_173, 0, sizeof(char*));
memset(&fun_name_174, 0, sizeof(char*));
right_value120 = (void*)0;
memset(&type2_175, 0, sizeof(struct sType*));
right_value121 = (void*)0;
memset(&fun_name2_176, 0, sizeof(char*));
memset(&finalizer_177, 0, sizeof(struct sFun*));
right_value122 = (void*)0;
memset(&none_generics_name_178, 0, sizeof(char*));
right_value123 = (void*)0;
memset(&generics_fun_name_179, 0, sizeof(char*));
memset(&generics_fun_180, 0, sizeof(struct sGenericsFun*));
memset(&i_181, 0, sizeof(int));
right_value124 = (void*)0;
memset(&new_fun_name_182, 0, sizeof(char*));
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&fun_183, 0, sizeof(struct sFun*));
memset(&new_fun_name_184, 0, sizeof(char*));
memset(&fun_183, 0, sizeof(struct sFun*));
memset(&new_fun_name_184, 0, sizeof(char*));
right_value127 = (void*)0;
memset(&type_name_185, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&o2_saved_186, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_187, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_188, 0, sizeof(char*));
memset(&field_type_189, 0, sizeof(struct sType*));
memset(&name_188, 0, sizeof(char*));
memset(&field_type_189, 0, sizeof(struct sType*));
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&obj_190, 0, sizeof(char*));
memset(&o2_saved_191, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_192, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_193, 0, sizeof(char*));
memset(&field_type_194, 0, sizeof(struct sType*));
memset(&name_193, 0, sizeof(char*));
memset(&field_type_194, 0, sizeof(struct sType*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&obj_195, 0, sizeof(char*));
right_value136 = (void*)0;
memset(&type_name_196, 0, sizeof(char*));
    if(gComeGC) {
        return;
    }
    stack_saved_136=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_137=info->right_value_objects;
    type_before_138=type;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional221=type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value),    _if_conditional221) {
        if(force_delete_) {
            c_value_139=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(obj))));
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_140=type->mClass;
            class_name_141=klass_140->mName;
            fun_name_142="force_finalize";
            type2_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_143->mHeap=(_Bool)0;
            fun_name2_144=(char*)come_increment_ref_count(((char*)(right_value103=create_method_name(type,(_Bool)0,fun_name_142,info))));
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_145=((void*)0);
            if(_if_conditional223=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional223) {
                finalizer_145=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_144);
                if(_if_conditional224=finalizer_145==((void*)0),                _if_conditional224) {
                    none_generics_name_146=(char*)come_increment_ref_count(((char*)(right_value104=get_none_generics_name(type2_143->mClass->mName))));
                    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_147=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("%s_%s",none_generics_name_146,fun_name_142))));
                    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_148=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_147);
                    if(generics_fun_148) {
                        if(_if_conditional226=!create_generics_fun((char*)come_increment_ref_count(fun_name2_144),generics_fun_148,type,info),                        _if_conditional226) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_145=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_144);
                    }
                    none_generics_name_146 = come_decrement_ref_count2(none_generics_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_147 = come_decrement_ref_count2(generics_fun_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_149=128-1;                i_149>=1;                i_149--                ){
                    new_fun_name_150=(char*)come_increment_ref_count(((char*)(right_value106=xsprintf("%s_v%d",fun_name2_144,i_149))));
                    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_145=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_150);
                    if(finalizer_145) {
                        __dec_obj54=fun_name2_144;
                        fun_name2_144=(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string(new_fun_name_150))));
                        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_150 = come_decrement_ref_count2(new_fun_name_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_150 = come_decrement_ref_count2(new_fun_name_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional228=finalizer_145==((void*)0),                _if_conditional228) {
                    finalizer_145=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_144);
                }
            }
            if(_if_conditional229=finalizer_145==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional229) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value108=create_force_finalizer_automatically(type,fun_name_142,info)));
                fun_151=multiple_assign_var2->v1;
                new_fun_name_152=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj55=fun_name2_144;
                fun_name2_144=(char*)come_increment_ref_count(new_fun_name_152);
                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_145=fun_151;
                new_fun_name_152 = come_decrement_ref_count2(new_fun_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional230=finalizer_145!=((void*)0),            _if_conditional230) {
                if(_if_conditional231=klass_140->mProtocol&&type->mPointerNum==1,                _if_conditional231) {
                    type_name_153=(char*)come_increment_ref_count(((char*)(right_value109=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_139) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_144,c_value_139,type_name_153,c_value_139,type_name_153,c_value_139,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_144,c_value_139,type_name_153,c_value_139,type_name_153,c_value_139,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_144,c_value_139,type_name_153,c_value_139,type_name_153,c_value_139,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_144,c_value_139,type_name_153,c_value_139,type_name_153,c_value_139,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_153 = come_decrement_ref_count2(type_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_139) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value110=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_144,c_value_139,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value111=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_144,c_value_139,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value112=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_144,c_value_139,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value113=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_144,c_value_139,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional240=klass_140->mStruct&&type->mPointerNum==0,                _if_conditional240) {
                    for(                    o2_saved_154=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_140->mFields)),it_157=list$1tuple2$2charphsTypephph_begin((o2_saved_154));                    !list$1tuple2$2charphsTypephph_end((o2_saved_154));                    it_157=list$1tuple2$2charphsTypephph_next((o2_saved_154))                    ){
                        multiple_assign_var3=it_157;
                        name_160=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_161=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(_if_conditional245=field_type_161->mHeap&&field_type_161->mPointerNum>0,                        _if_conditional245) {
                            obj_162=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("(((%s)%s).%s)",((char*)(right_value114=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_139,name_160))));
                            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            free_object(field_type_161,obj_162,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_162 = come_decrement_ref_count2(obj_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_160 = come_decrement_ref_count2(name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional249=klass_140->mStruct&&type->mPointerNum==1,                    _if_conditional249) {
                        for(                        o2_saved_165=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_140->mFields)),it_166=list$1tuple2$2charphsTypephph_begin((o2_saved_165));                        !list$1tuple2$2charphsTypephph_end((o2_saved_165));                        it_166=list$1tuple2$2charphsTypephph_next((o2_saved_165))                        ){
                            multiple_assign_var4=it_166;
                            name_167=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_168=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(_if_conditional250=field_type_168->mHeap&&field_type_168->mPointerNum>0,                            _if_conditional250) {
                                obj_169=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("(((%s)%s)->%s)",((char*)(right_value116=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_139,name_167))));
                                right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                free_object(field_type_168,obj_169,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_169 = come_decrement_ref_count2(obj_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_167 = come_decrement_ref_count2(name_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional251=!type->mAllocaValue,                _if_conditional251) {
                    if(_if_conditional252=klass_140->mProtocol&&type->mPointerNum==1,                    _if_conditional252) {
                        if(c_value_139) {
                            type_name_170=(char*)come_increment_ref_count(((char*)(right_value118=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_139,c_value_139,c_value_139,type_name_170,c_value_139,type_name_170,c_value_139,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_139,c_value_139,c_value_139,type_name_170,c_value_139,type_name_170,c_value_139,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_139,c_value_139,c_value_139,type_name_170,c_value_139,type_name_170,c_value_139,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_139,c_value_139,c_value_139,type_name_170,c_value_139,type_name_170,c_value_139,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_170 = come_decrement_ref_count2(type_name_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_139) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_139,c_value_139,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_139,c_value_139,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_139,c_value_139,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_139,c_value_139,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_139 = come_decrement_ref_count2(c_value_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_144 = come_decrement_ref_count2(fun_name2_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            c_value_171=(char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(obj))));
            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_172=type->mClass;
            class_name_173=klass_172->mName;
            fun_name_174="finalize";
            type2_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_175->mHeap=(_Bool)0;
            fun_name2_176=(char*)come_increment_ref_count(((char*)(right_value121=create_method_name(type,(_Bool)0,fun_name_174,info))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_177=((void*)0);
            if(_if_conditional261=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional261) {
                finalizer_177=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_176);
                if(_if_conditional262=finalizer_177==((void*)0),                _if_conditional262) {
                    none_generics_name_178=(char*)come_increment_ref_count(((char*)(right_value122=get_none_generics_name(type2_175->mClass->mName))));
                    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_179=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("%s_%s",none_generics_name_178,fun_name_174))));
                    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_180=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_179);
                    if(generics_fun_180) {
                        if(_if_conditional264=!create_generics_fun((char*)come_increment_ref_count(fun_name2_176),generics_fun_180,type,info),                        _if_conditional264) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_177=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_176);
                    }
                    none_generics_name_178 = come_decrement_ref_count2(none_generics_name_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_179 = come_decrement_ref_count2(generics_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_181=128-1;                i_181>=1;                i_181--                ){
                    new_fun_name_182=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("%s_v%d",fun_name2_176,i_181))));
                    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_177=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_182);
                    if(finalizer_177) {
                        __dec_obj56=fun_name2_176;
                        fun_name2_176=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(new_fun_name_182))));
                        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_182 = come_decrement_ref_count2(new_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_182 = come_decrement_ref_count2(new_fun_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional266=finalizer_177==((void*)0),                _if_conditional266) {
                    finalizer_177=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_176);
                }
            }
            if(_if_conditional267=finalizer_177==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional267) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(right_value126=create_finalizer_automatically(type,fun_name_174,info)));
                fun_183=multiple_assign_var5->v1;
                new_fun_name_184=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj57=fun_name2_176;
                fun_name2_176=(char*)come_increment_ref_count(new_fun_name_184);
                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_177=fun_183;
                new_fun_name_184 = come_decrement_ref_count2(new_fun_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional268=finalizer_177!=((void*)0),            _if_conditional268) {
                if(_if_conditional269=klass_172->mProtocol&&type->mPointerNum==1,                _if_conditional269) {
                    type_name_185=(char*)come_increment_ref_count(((char*)(right_value127=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_171) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_176,c_value_171,type_name_185,c_value_171,type_name_185,c_value_171,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_176,c_value_171,type_name_185,c_value_171,type_name_185,c_value_171,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_176,c_value_171,type_name_185,c_value_171,type_name_185,c_value_171,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_176,c_value_171,type_name_185,c_value_171,type_name_185,c_value_171,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_185 = come_decrement_ref_count2(type_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_171) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value128=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_176,c_value_171,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value129=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_176,c_value_171,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value130=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_176,c_value_171,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value131=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_176,c_value_171,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional278=klass_172->mStruct&&type->mPointerNum==0,                _if_conditional278) {
                    for(                    o2_saved_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_172->mFields)),it_187=list$1tuple2$2charphsTypephph_begin((o2_saved_186));                    !list$1tuple2$2charphsTypephph_end((o2_saved_186));                    it_187=list$1tuple2$2charphsTypephph_next((o2_saved_186))                    ){
                        multiple_assign_var6=it_187;
                        name_188=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_189=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(_if_conditional279=field_type_189->mHeap&&field_type_189->mPointerNum>0,                        _if_conditional279) {
                            obj_190=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("(((%s)%s).%s)",((char*)(right_value132=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_171,name_188))));
                            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            free_object(field_type_189,obj_190,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_190 = come_decrement_ref_count2(obj_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_188 = come_decrement_ref_count2(name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional280=klass_172->mStruct&&type->mPointerNum==1,                    _if_conditional280) {
                        for(                        o2_saved_191=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_172->mFields)),it_192=list$1tuple2$2charphsTypephph_begin((o2_saved_191));                        !list$1tuple2$2charphsTypephph_end((o2_saved_191));                        it_192=list$1tuple2$2charphsTypephph_next((o2_saved_191))                        ){
                            multiple_assign_var7=it_192;
                            name_193=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_194=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(_if_conditional281=field_type_194->mHeap&&field_type_194->mPointerNum>0,                            _if_conditional281) {
                                obj_195=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("(((%s)%s)->%s)",((char*)(right_value134=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_171,name_193))));
                                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                free_object(field_type_194,obj_195,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_195 = come_decrement_ref_count2(obj_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_193 = come_decrement_ref_count2(name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional282=!type->mAllocaValue,                _if_conditional282) {
                    if(_if_conditional283=klass_172->mProtocol&&type->mPointerNum==1,                    _if_conditional283) {
                        if(c_value_171) {
                            type_name_196=(char*)come_increment_ref_count(((char*)(right_value136=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_171,c_value_171,c_value_171,type_name_196,c_value_171,type_name_196,c_value_171,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_171,c_value_171,c_value_171,type_name_196,c_value_171,type_name_196,c_value_171,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_171,c_value_171,c_value_171,type_name_196,c_value_171,type_name_196,c_value_171,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_171,c_value_171,c_value_171,type_name_196,c_value_171,type_name_196,c_value_171,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_196 = come_decrement_ref_count2(type_name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_171) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_171,c_value_171,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_171,c_value_171,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_171,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_171,c_value_171,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_171 = come_decrement_ref_count2(c_value_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_176 = come_decrement_ref_count2(fun_name2_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj58=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_137);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj59=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_136);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional241;
struct tuple2$2charphsTypeph* result_155;
struct tuple2$2charphsTypeph* __result72__;
_Bool _if_conditional242;
struct tuple2$2charphsTypeph* __result73__;
struct tuple2$2charphsTypeph* result_156;
struct tuple2$2charphsTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_156, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional241=self==((void*)0),                        _if_conditional241) {
                            memset(&result_155,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result72__ = __result_obj__ = result_155;
                            return __result72__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result73__ = __result_obj__ = self->it->item;
                            return __result73__;
                        }
                        memset(&result_156,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result74__ = __result_obj__ = result_156;
                        return __result74__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result75__ = self==((void*)0)||self->it==((void*)0);
                        return __result75__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional243;
struct tuple2$2charphsTypeph* result_158;
struct tuple2$2charphsTypeph* __result76__;
_Bool _if_conditional244;
struct tuple2$2charphsTypeph* __result77__;
struct tuple2$2charphsTypeph* result_159;
struct tuple2$2charphsTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_159, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional243=self==((void*)0)||self->it==((void*)0),                        _if_conditional243) {
                            memset(&result_158,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result76__ = __result_obj__ = result_158;
                            return __result76__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result77__ = __result_obj__ = self->it->item;
                            return __result77__;
                        }
                        memset(&result_159,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result78__ = __result_obj__ = result_159;
                        return __result78__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_163;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_164;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_163, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_164, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_163=self->head;
                        while(_while_condtional19=it_163!=((void*)0),                        _while_condtional19) {
                            prev_it_164=it_163;
                            it_163=it_163->next;
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional246;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional246=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional246) {
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional247;
_Bool _if_conditional248;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional247=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional247) {
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional248=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional248) {
                                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value137;
struct sType* type2_197;
_Bool _if_conditional292;
char* result_198;
struct sType* result_type_199;
struct list$1CVALUEph* stack_saved_200;
struct list$1sRightValueObjectph* right_value_objects_201;
void* right_value138;
char* c_value_202;
struct sClass* klass_203;
char* class_name_204;
char* fun_name_205;
struct sFun* cloner_206;
char* fun_name2_207;
_Bool _if_conditional293;
void* right_value139;
char* none_generics_name_208;
void* right_value140;
struct sType* obj_type_209;
void* right_value141;
char* __dec_obj60;
void* right_value142;
char* fun_name3_210;
struct sGenericsFun* generics_fun_213;
_Bool _if_conditional298;
void* right_value143;
_Bool _if_conditional299;
void* right_value144;
void* right_value145;
void* right_value146;
void* right_value147;
void* right_value148;
struct tuple2$2sTypephcharph* __result84__;
void* right_value149;
char* __dec_obj63;
int i_214;
void* right_value150;
char* new_fun_name_215;
_Bool _if_conditional302;
void* right_value151;
char* __dec_obj64;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value152;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_216;
char* new_fun_name_217;
char* __dec_obj65;
_Bool _if_conditional305;
struct sType* __dec_obj66;
void* right_value153;
struct sType* __dec_obj67;
void* right_value154;
char* __dec_obj68;
_Bool _if_conditional306;
void* right_value155;
char* __dec_obj69;
void* right_value156;
struct sType* __dec_obj70;
void* right_value157;
char* type_name_218;
void* right_value158;
char* __dec_obj71;
_Bool _if_conditional307;
void* right_value159;
char* __dec_obj72;
struct list$1sRightValueObjectph* __dec_obj73;
struct list$1CVALUEph* __dec_obj74;
void* right_value160;
void* right_value161;
struct tuple2$2sTypephcharph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&type2_197, 0, sizeof(struct sType*));
memset(&result_198, 0, sizeof(char*));
memset(&result_type_199, 0, sizeof(struct sType*));
memset(&stack_saved_200, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_201, 0, sizeof(struct list$1sRightValueObjectph*));
right_value138 = (void*)0;
memset(&c_value_202, 0, sizeof(char*));
memset(&klass_203, 0, sizeof(struct sClass*));
memset(&class_name_204, 0, sizeof(char*));
memset(&fun_name_205, 0, sizeof(char*));
memset(&cloner_206, 0, sizeof(struct sFun*));
memset(&fun_name2_207, 0, sizeof(char*));
right_value139 = (void*)0;
memset(&none_generics_name_208, 0, sizeof(char*));
right_value140 = (void*)0;
memset(&obj_type_209, 0, sizeof(struct sType*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&fun_name3_210, 0, sizeof(char*));
memset(&generics_fun_213, 0, sizeof(struct sGenericsFun*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
memset(&i_214, 0, sizeof(int));
right_value150 = (void*)0;
memset(&new_fun_name_215, 0, sizeof(char*));
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&fun_216, 0, sizeof(struct sFun*));
memset(&new_fun_name_217, 0, sizeof(char*));
memset(&fun_216, 0, sizeof(struct sFun*));
memset(&new_fun_name_217, 0, sizeof(char*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&type_name_218, 0, sizeof(char*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
    type2_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_198=((void*)0);
    result_type_199=((void*)0);
    stack_saved_200=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_201=info->right_value_objects;
    c_value_202=(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(obj))));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_203=type->mClass;
    class_name_204=klass_203->mName;
    fun_name_205="clone";
    cloner_206=((void*)0);
    if(_if_conditional293=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional293) {
        none_generics_name_208=(char*)come_increment_ref_count(((char*)(right_value139=get_none_generics_name(type->mClass->mName))));
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_209=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj60=fun_name2_207;
        fun_name2_207=(char*)come_increment_ref_count(((char*)(right_value141=create_method_name(obj_type_209,(_Bool)0,fun_name_205,info))));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_210=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("%s_%s",none_generics_name_208,fun_name_205))));
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_213=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_210,((void*)0));
        if(generics_fun_213) {
            if(_if_conditional299=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(fun_name2_207)))),generics_fun_213,obj_type_209,info),            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional299) {
                __result84__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value148=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value147=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 790, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 790, "struct sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string("")))))));
                none_generics_name_208 = come_decrement_ref_count2(none_generics_name_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_210 = come_decrement_ref_count2(fun_name3_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_198 = come_decrement_ref_count2(result_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_202 = come_decrement_ref_count2(c_value_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_207 = come_decrement_ref_count2(fun_name2_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result84__;
            }
        }
        cloner_206=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_207);
        none_generics_name_208 = come_decrement_ref_count2(none_generics_name_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_210 = come_decrement_ref_count2(fun_name3_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj63=fun_name2_207;
        fun_name2_207=(char*)come_increment_ref_count(((char*)(right_value149=create_method_name(type,(_Bool)0,fun_name_205,info))));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_214=128-1;        i_214>=1;        i_214--        ){
            new_fun_name_215=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s_v%d",fun_name2_207,i_214))));
            right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_206=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_215);
            if(cloner_206) {
                __dec_obj64=fun_name2_207;
                fun_name2_207=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(new_fun_name_215))));
                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_215 = come_decrement_ref_count2(new_fun_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_215 = come_decrement_ref_count2(new_fun_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional303=cloner_206==((void*)0),        _if_conditional303) {
            cloner_206=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_207);
        }
    }
    if(_if_conditional304=cloner_206==((void*)0)&&!type->mClass->mNumber,    _if_conditional304) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(right_value152=create_cloner_automatically(type,fun_name_205,info)));
        fun_216=multiple_assign_var8->v1;
        new_fun_name_217=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj65=fun_name2_207;
        fun_name2_207=(char*)come_increment_ref_count(new_fun_name_217);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_206=fun_216;
        new_fun_name_217 = come_decrement_ref_count2(new_fun_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional305=cloner_206!=((void*)0),    _if_conditional305) {
        __dec_obj66=result_type_199;
        result_type_199=(struct sType*)come_increment_ref_count(cloner_206->mResultType);
        come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj67=result_type_199;
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=solve_generics(result_type_199,type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj68=result_198;
        result_198=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s(%s)",fun_name2_207,c_value_202))));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj69=result_198;
            result_198=(char*)come_increment_ref_count(((char*)(right_value155=append_stackframe(result_198,result_type_199,info))));
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        __dec_obj70=result_type_199;
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type2_197->mHeap=(_Bool)1;
        type_name_218=(char*)come_increment_ref_count(((char*)(right_value157=make_type_name_string(type2_197,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj71=result_198;
        result_198=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_218,c_value_202,info->sname,info->sline,type_name_218))));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj72=result_198;
            result_198=(char*)come_increment_ref_count(((char*)(right_value159=append_stackframe(result_198,result_type_199,info))));
            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        type_name_218 = come_decrement_ref_count2(type_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj73=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_201);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj74=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_200);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result85__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value161=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value160=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 847, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_199),(char*)come_increment_ref_count(result_198))));
    come_call_finalizer2(sType_finalize,type2_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_198 = come_decrement_ref_count2(result_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_202 = come_decrement_ref_count2(c_value_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_207 = come_decrement_ref_count2(fun_name2_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result85__;
    come_call_finalizer2(sType_finalize,type2_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_198 = come_decrement_ref_count2(result_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_202 = come_decrement_ref_count2(c_value_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_207 = come_decrement_ref_count2(fun_name2_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_211;
unsigned int it_212;
_Bool _while_condtional20;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct sGenericsFun* __result79__;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct sGenericsFun* __result80__;
struct sGenericsFun* __result81__;
struct sGenericsFun* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_211, 0, sizeof(unsigned int));
memset(&it_212, 0, sizeof(unsigned int));
            hash_211=string_get_hash_key(((char*)key))%self->size;
            it_212=hash_211;
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                if(_if_conditional294=self->item_existance[it_212],                _if_conditional294) {
                    if(_if_conditional295=string_equals(self->keys[it_212],key),                    _if_conditional295) {
                        __result79__ = __result_obj__ = self->items[it_212];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result79__;
                    }
                    it_212++;
                    if(_if_conditional296=it_212>=self->size,                    _if_conditional296) {
                        it_212=0;
                    }
                    else {
                        if(_if_conditional297=it_212==hash_211,                        _if_conditional297) {
                            __result80__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result80__;
                        }
                    }
                }
                else {
                    __result81__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                }
            }
            __result82__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj61;
char* __dec_obj62;
struct tuple2$2sTypephcharph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj61=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    __dec_obj62=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __result83__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result83__;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional300;
_Bool _if_conditional301;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional300=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional300) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional301=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional301) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional308;
char* result_219;
struct list$1CVALUEph* stack_saved_220;
struct list$1sRightValueObjectph* right_value_objects_221;
struct sClass* klass_222;
char* class_name_223;
char* fun_name_224;
void* right_value162;
struct sType* type2_225;
struct sFun* cloner_226;
char* fun_name2_227;
_Bool _if_conditional309;
void* right_value163;
char* none_generics_name_228;
void* right_value164;
struct sType* obj_type_229;
void* right_value165;
char* __dec_obj75;
void* right_value166;
char* fun_name3_230;
struct sGenericsFun* generics_fun_231;
_Bool _if_conditional310;
void* right_value167;
_Bool _if_conditional311;
_Bool __result86__;
void* right_value168;
char* __dec_obj76;
int i_232;
void* right_value169;
char* new_fun_name_233;
_Bool _if_conditional312;
void* right_value170;
char* __dec_obj77;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value171;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_234;
char* new_fun_name_235;
char* __dec_obj78;
struct list$1sRightValueObjectph* __dec_obj79;
struct list$1CVALUEph* __dec_obj80;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(char*));
memset(&stack_saved_220, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_221, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_222, 0, sizeof(struct sClass*));
memset(&class_name_223, 0, sizeof(char*));
memset(&fun_name_224, 0, sizeof(char*));
right_value162 = (void*)0;
memset(&type2_225, 0, sizeof(struct sType*));
memset(&cloner_226, 0, sizeof(struct sFun*));
memset(&fun_name2_227, 0, sizeof(char*));
right_value163 = (void*)0;
memset(&none_generics_name_228, 0, sizeof(char*));
right_value164 = (void*)0;
memset(&obj_type_229, 0, sizeof(struct sType*));
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&fun_name3_230, 0, sizeof(char*));
memset(&generics_fun_231, 0, sizeof(struct sGenericsFun*));
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&i_232, 0, sizeof(int));
right_value169 = (void*)0;
memset(&new_fun_name_233, 0, sizeof(char*));
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&fun_234, 0, sizeof(struct sFun*));
memset(&new_fun_name_235, 0, sizeof(char*));
memset(&fun_234, 0, sizeof(struct sFun*));
memset(&new_fun_name_235, 0, sizeof(char*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_219=((void*)0);
    stack_saved_220=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_221=info->right_value_objects;
    klass_222=type->mClass;
    class_name_223=klass_222->mName;
    fun_name_224="equals";
    type2_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_225->mHeap=(_Bool)0;
    cloner_226=((void*)0);
    if(_if_conditional309=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional309) {
        none_generics_name_228=(char*)come_increment_ref_count(((char*)(right_value163=get_none_generics_name(type->mClass->mName))));
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj75=fun_name2_227;
        fun_name2_227=(char*)come_increment_ref_count(((char*)(right_value165=create_method_name(obj_type_229,(_Bool)0,fun_name_224,info))));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_230=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("%s_%s",none_generics_name_228,fun_name_224))));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_231=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_230,((void*)0));
        if(generics_fun_231) {
            if(_if_conditional311=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(fun_name2_227)))),generics_fun_231,obj_type_229,info),            right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional311) {
                __result86__ = (_Bool)0;
                none_generics_name_228 = come_decrement_ref_count2(none_generics_name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_230 = come_decrement_ref_count2(fun_name3_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_219 = come_decrement_ref_count2(result_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_227 = come_decrement_ref_count2(fun_name2_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result86__;
            }
        }
        cloner_226=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_227);
        none_generics_name_228 = come_decrement_ref_count2(none_generics_name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_230 = come_decrement_ref_count2(fun_name3_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj76=fun_name2_227;
        fun_name2_227=(char*)come_increment_ref_count(((char*)(right_value168=create_method_name(type,(_Bool)0,fun_name_224,info))));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_232=128-1;        i_232>=1;        i_232--        ){
            new_fun_name_233=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s_v%d",fun_name2_227,i_232))));
            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_226=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_233);
            if(cloner_226) {
                __dec_obj77=fun_name2_227;
                fun_name2_227=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(new_fun_name_233))));
                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_233 = come_decrement_ref_count2(new_fun_name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_233 = come_decrement_ref_count2(new_fun_name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional313=cloner_226==((void*)0),        _if_conditional313) {
            cloner_226=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_227);
        }
    }
    if(_if_conditional314=cloner_226==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional314) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(right_value171=create_equals_automatically(type,fun_name_224,info)));
        fun_234=multiple_assign_var9->v1;
        new_fun_name_235=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj78=fun_name2_227;
        fun_name2_227=(char*)come_increment_ref_count(new_fun_name_235);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_226=fun_234;
        new_fun_name_235 = come_decrement_ref_count2(new_fun_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj79=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_221);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj80=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_220);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result87__ = (_Bool)1;
    result_219 = come_decrement_ref_count2(result_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_227 = come_decrement_ref_count2(fun_name2_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result87__;
    result_219 = come_decrement_ref_count2(result_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_227 = come_decrement_ref_count2(fun_name2_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional315;
char* result_236;
struct list$1CVALUEph* stack_saved_237;
struct list$1sRightValueObjectph* right_value_objects_238;
struct sClass* klass_239;
char* class_name_240;
char* fun_name_241;
void* right_value172;
struct sType* type2_242;
struct sFun* cloner_243;
char* fun_name2_244;
_Bool _if_conditional316;
void* right_value173;
char* none_generics_name_245;
void* right_value174;
struct sType* obj_type_246;
void* right_value175;
char* __dec_obj81;
void* right_value176;
char* fun_name3_247;
struct sGenericsFun* generics_fun_248;
_Bool _if_conditional317;
void* right_value177;
_Bool _if_conditional318;
_Bool __result88__;
void* right_value178;
char* __dec_obj82;
int i_249;
void* right_value179;
char* new_fun_name_250;
_Bool _if_conditional319;
void* right_value180;
char* __dec_obj83;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value181;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_251;
char* new_fun_name_252;
char* __dec_obj84;
struct list$1sRightValueObjectph* __dec_obj85;
struct list$1CVALUEph* __dec_obj86;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_236, 0, sizeof(char*));
memset(&stack_saved_237, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_238, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_239, 0, sizeof(struct sClass*));
memset(&class_name_240, 0, sizeof(char*));
memset(&fun_name_241, 0, sizeof(char*));
right_value172 = (void*)0;
memset(&type2_242, 0, sizeof(struct sType*));
memset(&cloner_243, 0, sizeof(struct sFun*));
memset(&fun_name2_244, 0, sizeof(char*));
right_value173 = (void*)0;
memset(&none_generics_name_245, 0, sizeof(char*));
right_value174 = (void*)0;
memset(&obj_type_246, 0, sizeof(struct sType*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&fun_name3_247, 0, sizeof(char*));
memset(&generics_fun_248, 0, sizeof(struct sGenericsFun*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&i_249, 0, sizeof(int));
right_value179 = (void*)0;
memset(&new_fun_name_250, 0, sizeof(char*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&fun_251, 0, sizeof(struct sFun*));
memset(&new_fun_name_252, 0, sizeof(char*));
memset(&fun_251, 0, sizeof(struct sFun*));
memset(&new_fun_name_252, 0, sizeof(char*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_236=((void*)0);
    stack_saved_237=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_238=info->right_value_objects;
    klass_239=type->mClass;
    class_name_240=klass_239->mName;
    fun_name_241="operator_equals";
    type2_242=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_242->mHeap=(_Bool)0;
    cloner_243=((void*)0);
    if(_if_conditional316=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional316) {
        none_generics_name_245=(char*)come_increment_ref_count(((char*)(right_value173=get_none_generics_name(type->mClass->mName))));
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_246=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj81=fun_name2_244;
        fun_name2_244=(char*)come_increment_ref_count(((char*)(right_value175=create_method_name(obj_type_246,(_Bool)0,fun_name_241,info))));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_247=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s_%s",none_generics_name_245,fun_name_241))));
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_248=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_247,((void*)0));
        if(generics_fun_248) {
            if(_if_conditional318=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(fun_name2_244)))),generics_fun_248,obj_type_246,info),            right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional318) {
                __result88__ = (_Bool)0;
                none_generics_name_245 = come_decrement_ref_count2(none_generics_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_247 = come_decrement_ref_count2(fun_name3_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_236 = come_decrement_ref_count2(result_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_244 = come_decrement_ref_count2(fun_name2_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result88__;
            }
        }
        cloner_243=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_244);
        none_generics_name_245 = come_decrement_ref_count2(none_generics_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_247 = come_decrement_ref_count2(fun_name3_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj82=fun_name2_244;
        fun_name2_244=(char*)come_increment_ref_count(((char*)(right_value178=create_method_name(type,(_Bool)0,fun_name_241,info))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_249=128-1;        i_249>=1;        i_249--        ){
            new_fun_name_250=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s_v%d",fun_name2_244,i_249))));
            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_243=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_250);
            if(cloner_243) {
                __dec_obj83=fun_name2_244;
                fun_name2_244=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(new_fun_name_250))));
                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_250 = come_decrement_ref_count2(new_fun_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_250 = come_decrement_ref_count2(new_fun_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional320=cloner_243==((void*)0),        _if_conditional320) {
            cloner_243=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_244);
        }
    }
    if(_if_conditional321=cloner_243==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional321) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(right_value181=create_operator_equals_automatically(type,fun_name_241,info)));
        fun_251=multiple_assign_var10->v1;
        new_fun_name_252=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj84=fun_name2_244;
        fun_name2_244=(char*)come_increment_ref_count(new_fun_name_252);
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_243=fun_251;
        new_fun_name_252 = come_decrement_ref_count2(new_fun_name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj85=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_238);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj86=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_237);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result89__ = (_Bool)1;
    result_236 = come_decrement_ref_count2(result_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_244 = come_decrement_ref_count2(fun_name2_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result89__;
    result_236 = come_decrement_ref_count2(result_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_244 = come_decrement_ref_count2(fun_name2_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional322;
char* result_253;
struct list$1CVALUEph* stack_saved_254;
struct list$1sRightValueObjectph* right_value_objects_255;
struct sClass* klass_256;
char* class_name_257;
char* fun_name_258;
void* right_value182;
struct sType* type2_259;
struct sFun* cloner_260;
char* fun_name2_261;
_Bool _if_conditional323;
void* right_value183;
char* none_generics_name_262;
void* right_value184;
struct sType* obj_type_263;
void* right_value185;
char* __dec_obj87;
void* right_value186;
char* fun_name3_264;
struct sGenericsFun* generics_fun_265;
_Bool _if_conditional324;
void* right_value187;
_Bool _if_conditional325;
_Bool __result90__;
void* right_value188;
char* __dec_obj88;
int i_266;
void* right_value189;
char* new_fun_name_267;
_Bool _if_conditional326;
void* right_value190;
char* __dec_obj89;
_Bool _if_conditional327;
_Bool _if_conditional328;
void* right_value191;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_268;
char* new_fun_name_269;
char* __dec_obj90;
struct list$1sRightValueObjectph* __dec_obj91;
struct list$1CVALUEph* __dec_obj92;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_253, 0, sizeof(char*));
memset(&stack_saved_254, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_255, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_256, 0, sizeof(struct sClass*));
memset(&class_name_257, 0, sizeof(char*));
memset(&fun_name_258, 0, sizeof(char*));
right_value182 = (void*)0;
memset(&type2_259, 0, sizeof(struct sType*));
memset(&cloner_260, 0, sizeof(struct sFun*));
memset(&fun_name2_261, 0, sizeof(char*));
right_value183 = (void*)0;
memset(&none_generics_name_262, 0, sizeof(char*));
right_value184 = (void*)0;
memset(&obj_type_263, 0, sizeof(struct sType*));
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&fun_name3_264, 0, sizeof(char*));
memset(&generics_fun_265, 0, sizeof(struct sGenericsFun*));
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&i_266, 0, sizeof(int));
right_value189 = (void*)0;
memset(&new_fun_name_267, 0, sizeof(char*));
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&fun_268, 0, sizeof(struct sFun*));
memset(&new_fun_name_269, 0, sizeof(char*));
memset(&fun_268, 0, sizeof(struct sFun*));
memset(&new_fun_name_269, 0, sizeof(char*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_253=((void*)0);
    stack_saved_254=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_255=info->right_value_objects;
    klass_256=type->mClass;
    class_name_257=klass_256->mName;
    fun_name_258="operator_not_equals";
    type2_259=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_259->mHeap=(_Bool)0;
    cloner_260=((void*)0);
    if(_if_conditional323=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional323) {
        none_generics_name_262=(char*)come_increment_ref_count(((char*)(right_value183=get_none_generics_name(type->mClass->mName))));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj87=fun_name2_261;
        fun_name2_261=(char*)come_increment_ref_count(((char*)(right_value185=create_method_name(obj_type_263,(_Bool)0,fun_name_258,info))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_264=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s_%s",none_generics_name_262,fun_name_258))));
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_265=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_264,((void*)0));
        if(generics_fun_265) {
            if(_if_conditional325=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(fun_name2_261)))),generics_fun_265,obj_type_263,info),            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional325) {
                __result90__ = (_Bool)0;
                none_generics_name_262 = come_decrement_ref_count2(none_generics_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_264 = come_decrement_ref_count2(fun_name3_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_261 = come_decrement_ref_count2(fun_name2_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result90__;
            }
        }
        cloner_260=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_261);
        none_generics_name_262 = come_decrement_ref_count2(none_generics_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_264 = come_decrement_ref_count2(fun_name3_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj88=fun_name2_261;
        fun_name2_261=(char*)come_increment_ref_count(((char*)(right_value188=create_method_name(type,(_Bool)0,fun_name_258,info))));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_266=128-1;        i_266>=1;        i_266--        ){
            new_fun_name_267=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s_v%d",fun_name2_261,i_266))));
            right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_260=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_267);
            if(cloner_260) {
                __dec_obj89=fun_name2_261;
                fun_name2_261=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(new_fun_name_267))));
                __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_267 = come_decrement_ref_count2(new_fun_name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_267 = come_decrement_ref_count2(new_fun_name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional327=cloner_260==((void*)0),        _if_conditional327) {
            cloner_260=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_261);
        }
    }
    if(_if_conditional328=cloner_260==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional328) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(right_value191=create_operator_not_equals_automatically(type,fun_name_258,info)));
        fun_268=multiple_assign_var11->v1;
        new_fun_name_269=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj90=fun_name2_261;
        fun_name2_261=(char*)come_increment_ref_count(new_fun_name_269);
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_260=fun_268;
        new_fun_name_269 = come_decrement_ref_count2(new_fun_name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj91=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_255);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj92=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_254);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result91__ = (_Bool)1;
    result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_261 = come_decrement_ref_count2(fun_name2_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result91__;
    result_253 = come_decrement_ref_count2(result_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_261 = come_decrement_ref_count2(fun_name2_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool existance_free_right_value_objects(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional329;
_Bool __result92__;
struct list$1sRightValueObjectph* right_value_objects_270;
struct list$1sRightValueObjectph* o2_saved_271;
struct sRightValueObject* it_272;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool __result93__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&right_value_objects_270, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_271, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_272, 0, sizeof(struct sRightValueObject*));
    if(gComeGC) {
        __result92__ = (_Bool)0;
        return __result92__;
    }
    right_value_objects_270=info->right_value_objects;
    for(    o2_saved_271=(right_value_objects_270),it_272=list$1sRightValueObjectph_begin((o2_saved_271));    !list$1sRightValueObjectph_end((o2_saved_271));    it_272=list$1sRightValueObjectph_next((o2_saved_271))    ){
        if(_if_conditional330=it_272&&!it_272->mFreed,        _if_conditional330) {
            if(_if_conditional331=string_operator_equals(it_272->mFunName,info->come_fun->mName)&&it_272->mBlockLevel==info->block_level,            _if_conditional331) {
                __result93__ = (_Bool)1;
                return __result93__;
            }
        }
    }
    __result94__ = (_Bool)0;
    return __result94__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool _if_conditional332;
_Bool free_right_value_273;
struct list$1sRightValueObjectph* right_value_objects_274;
int n_275;
struct list$1sRightValueObjectph* o2_saved_276;
struct sRightValueObject* it_277;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value192;
struct sType* type_278;
void* right_value193;
struct sType* __dec_obj93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&free_right_value_273, 0, sizeof(_Bool));
memset(&right_value_objects_274, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_275, 0, sizeof(int));
memset(&o2_saved_276, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_277, 0, sizeof(struct sRightValueObject*));
right_value192 = (void*)0;
memset(&type_278, 0, sizeof(struct sType*));
right_value193 = (void*)0;
    if(gComeGC) {
        return;
    }
    free_right_value_273=(_Bool)0;
    right_value_objects_274=info->right_value_objects;
    n_275=0;
    for(    o2_saved_276=(right_value_objects_274),it_277=list$1sRightValueObjectph_begin((o2_saved_276));    !list$1sRightValueObjectph_end((o2_saved_276));    it_277=list$1sRightValueObjectph_next((o2_saved_276))    ){
        if(_if_conditional333=it_277&&!it_277->mFreed,        _if_conditional333) {
            if(_if_conditional334=string_operator_equals(it_277->mFunName,info->come_fun->mName)&&it_277->mBlockLevel==info->block_level,            _if_conditional334) {
                type_278=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(it_277->mType))));
                come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj93=type_278;
                type_278=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=solve_type(type_278,info->generics_type,info->method_generics_types,info))));
                come_call_finalizer2(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                free_object(type_278,it_277->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_277->mFreed=(_Bool)1;
                free_right_value_273=(_Bool)1;
                come_call_finalizer2(sType_finalize,type_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        n_275++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional335;
_Bool __result95__;
struct list$1sRightValueObjectph* o2_saved_279;
struct sRightValueObject* it_280;
_Bool _if_conditional336;
_Bool __result96__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_279, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_280, 0, sizeof(struct sRightValueObject*));
    if(gComeGC) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    for(    o2_saved_279=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_280=list$1sRightValueObjectph_begin((o2_saved_279));    !list$1sRightValueObjectph_end((o2_saved_279));    it_280=list$1sRightValueObjectph_next((o2_saved_279))    ){
        if(_if_conditional336=it_280->mID==right_value_num,        _if_conditional336) {
            __result96__ = (_Bool)1;
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result96__;
        }
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result97__ = (_Bool)0;
    return __result97__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_281;
struct sVar* var__285;
_Bool _if_conditional345;
struct sVar* __result102__;
struct sVar* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_281, 0, sizeof(struct sVarTable*));
memset(&var__285, 0, sizeof(struct sVar*));
    it_281=table;
    while(it_281) {
        var__285=map$2charphsVarphp_operator_load_element(it_281->mVars,name);
        if(var__285) {
            __result102__ = __result_obj__ = var__285;
            return __result102__;
        }
        it_281=it_281->mParent;
    }
    __result103__ = __result_obj__ = ((void*)0);
    return __result103__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_282;
unsigned int hash_283;
unsigned int it_284;
_Bool _while_condtional21;
_Bool _if_conditional337;
_Bool _if_conditional338;
struct sVar* __result98__;
_Bool _if_conditional343;
_Bool _if_conditional344;
struct sVar* __result99__;
struct sVar* __result100__;
struct sVar* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_282, 0, sizeof(struct sVar*));
memset(&hash_283, 0, sizeof(unsigned int));
memset(&it_284, 0, sizeof(unsigned int));
            memset(&default_value_282,0,sizeof(struct sVar*));
            hash_283=string_get_hash_key(((char*)key))%self->size;
            it_284=hash_283;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional337=self->item_existance[it_284],                _if_conditional337) {
                    if(_if_conditional338=string_equals(self->keys[it_284],key),                    _if_conditional338) {
                        __result98__ = __result_obj__ = self->items[it_284];
                        come_call_finalizer2(sVar_finalize,default_value_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result98__;
                    }
                    it_284++;
                    if(_if_conditional343=it_284>=self->size,                    _if_conditional343) {
                        it_284=0;
                    }
                    else {
                        if(_if_conditional344=it_284==hash_283,                        _if_conditional344) {
                            __result99__ = __result_obj__ = default_value_282;
                            come_call_finalizer2(sVar_finalize,default_value_282, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result99__;
                        }
                    }
                }
                else {
                    __result100__ = __result_obj__ = default_value_282;
                    come_call_finalizer2(sVar_finalize,default_value_282, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result100__;
                }
            }
            __result101__ = __result_obj__ = default_value_282;
            come_call_finalizer2(sVar_finalize,default_value_282, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result101__;
            come_call_finalizer2(sVar_finalize,default_value_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional339=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional339) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional340=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional340) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional341=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional341) {
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional342=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional342) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional346;
struct map$2charphsVarph* o2_saved_286;
char* it_289;
struct sVar* p_292;
struct sType* type_293;
struct sClass* klass_294;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value194;
char* c_value_295;
void* right_value195;
struct sType* type2_296;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_286, 0, sizeof(struct map$2charphsVarph*));
memset(&it_289, 0, sizeof(char*));
memset(&p_292, 0, sizeof(struct sVar*));
memset(&type_293, 0, sizeof(struct sType*));
memset(&klass_294, 0, sizeof(struct sClass*));
right_value194 = (void*)0;
memset(&c_value_295, 0, sizeof(char*));
right_value195 = (void*)0;
memset(&type2_296, 0, sizeof(struct sType*));
    if(gComeGC) {
        return;
    }
    for(    o2_saved_286=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_289=map$2charphsVarph_begin((o2_saved_286));    !map$2charphsVarph_end((o2_saved_286));    it_289=map$2charphsVarph_next((o2_saved_286))    ){
        p_292=map$2charphsVarphp_operator_load_element(table->mVars,it_289);
        type_293=p_292->mType;
        klass_294=type_293->mClass;
        if(_if_conditional351=ret_value!=((void*)0)&&p_292->mCValueName!=((void*)0)&&string_operator_equals(p_292->mCValueName,ret_value->mCValueName)&&type_293->mHeap,        _if_conditional351) {
            free_object(p_292->mType,p_292->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(_if_conditional352=type_293->mHeap&&p_292->mCValueName,            _if_conditional352) {
                if(type_293->mFunctionParam) {
                    free_object(p_292->mType,p_292->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    free_object(p_292->mType,p_292->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                if(_if_conditional354=klass_294->mStruct&&p_292->mCValueName&&type_293->mAllocaValue&&!type_293->mNoCallingDestructor,                _if_conditional354) {
                    c_value_295=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("(&%s)",p_292->mCValueName))));
                    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    type2_296=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(type_293))));
                    come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    type2_296->mPointerNum++;
                    free_object(type2_296,c_value_295,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_295 = come_decrement_ref_count2(c_value_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type2_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional347;
char* result_287;
char* __result104__;
_Bool _if_conditional348;
char* __result105__;
char* result_288;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_287, 0, sizeof(char*));
memset(&result_288, 0, sizeof(char*));
        if(_if_conditional347=self==((void*)0),        _if_conditional347) {
            memset(&result_287,0,sizeof(char*));
            __result104__ = __result_obj__ = result_287;
            return __result104__;
        }
        self->key_list->it=self->key_list->head;
        if(self->key_list->it) {
            __result105__ = __result_obj__ = self->key_list->it->item;
            return __result105__;
        }
        memset(&result_288,0,sizeof(char*));
        __result106__ = __result_obj__ = result_288;
        return __result106__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
        __result107__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        return __result107__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional349;
char* result_290;
char* __result108__;
_Bool _if_conditional350;
char* __result109__;
char* result_291;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_290, 0, sizeof(char*));
memset(&result_291, 0, sizeof(char*));
        if(_if_conditional349=self==((void*)0)||self->key_list->it==((void*)0),        _if_conditional349) {
            memset(&result_290,0,sizeof(char*));
            __result108__ = __result_obj__ = result_290;
            return __result108__;
        }
        self->key_list->it=self->key_list->it->next;
        if(self->key_list->it) {
            __result109__ = __result_obj__ = self->key_list->it->item;
            return __result109__;
        }
        memset(&result_291,0,sizeof(char*));
        __result110__ = __result_obj__ = result_291;
        return __result110__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_297;
_Bool _if_conditional355;
_Bool _if_conditional356;
int i_298;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_297, 0, sizeof(int));
memset(&i_298, 0, sizeof(int));
        for(        i_297=0;        i_297<self->size;        i_297++        ){
            if(_if_conditional355=self->item_existance[i_297],            _if_conditional355) {
                if(_if_conditional356=1,                _if_conditional356) {
                    come_call_finalizer2(sVar_finalize,self->items[i_297], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_298=0;        i_298<self->size;        i_298++        ){
            if(_if_conditional357=self->item_existance[i_298],            _if_conditional357) {
                if(_if_conditional358=1,                _if_conditional358) {
                    self->keys[i_298] = come_decrement_ref_count2(self->keys[i_298], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_299;
_Bool _while_condtional22;
struct list_item$1charp* prev_it_300;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_299, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_300, 0, sizeof(struct list_item$1charp*));
            it_299=self->head;
            while(_while_condtional22=it_299!=((void*)0),            _while_condtional22) {
                prev_it_300=it_299;
                it_299=it_299->next;
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_300, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool _if_conditional359;
struct sVarTable* it_301;
_Bool _if_conditional360;
_Bool _while_condtional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_301, 0, sizeof(struct sVarTable*));
    if(gComeGC) {
        return;
    }
    it_301=info->lv_table;
    if(_if_conditional360=it_301==info->come_fun->mBlock->mVarTable,    _if_conditional360) {
        free_objects(it_301,ret_value,info);
    }
    else {
        while(_while_condtional23=it_301!=info->come_fun->mBlock->mVarTable,        _while_condtional23) {
            free_objects(it_301,ret_value,info);
            it_301=it_301->mParent;
        }
        free_objects(it_301,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional361;
struct sVar* ret_value_302;
struct sVarTable* current_loop_vtable_303;
_Bool _if_conditional362;
struct sVarTable* it_304;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ret_value_302, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_303, 0, sizeof(struct sVarTable*));
memset(&it_304, 0, sizeof(struct sVarTable*));
    if(gComeGC) {
        return;
    }
    ret_value_302=((void*)0);
    current_loop_vtable_303=info->current_loop_vtable;
    if(_if_conditional362=current_loop_vtable_303!=((void*)0),    _if_conditional362) {
        it_304=info->lv_table;
        while(_while_condtional24=it_304!=current_loop_vtable_303,        _while_condtional24) {
            free_objects(it_304,ret_value_302,info);
            it_304=it_304->mParent;
        }
        free_objects(it_304,ret_value_302,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional363;
_Bool _if_conditional364;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
char* __result111__;
_Bool _if_conditional365;
static int n_305=0;
void* right_value201;
char* var_name_306;
void* right_value202;
void* right_value203;
void* right_value204;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
char* __result112__;
void* right_value210;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&var_name_306, 0, sizeof(char*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
    if(_if_conditional363=string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0,    _if_conditional363) {
        if(gComeDebug) {
            __result111__ = __result_obj__ = ((char*)(right_value200=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(right_value196=string_to_string(info->sname))),((char*)(right_value197=int_to_string(info->sline))),((char*)(right_value198=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value199=charp_to_string(c_value))))));
            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result111__;
        }
    }
    else {
        if(gComeDebug) {
            ++n_305;
            var_name_306=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("__exception_result_var_b%d",n_305))));
            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value202=make_define_var(type,var_name_306,(_Bool)0,info))));
            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result112__ = __result_obj__ = ((char*)(right_value209=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value203=string_to_string(info->sname))),((char*)(right_value204=int_to_string(info->sline))),((char*)(right_value205=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value206=string_to_string(var_name_306))),((char*)(right_value207=charp_to_string(c_value))),((char*)(right_value208=string_to_string(var_name_306))))));
            var_name_306 = come_decrement_ref_count2(var_name_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result112__;
            var_name_306 = come_decrement_ref_count2(var_name_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result113__ = __result_obj__ = ((char*)(right_value210=__builtin_string(c_value)));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

